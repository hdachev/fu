#include "../lib/env.h"
#include "../lib/io.h"
#include "../lib/map.h"
#include "../lib/never.h"
#include "../lib/now.h"
#include "../lib/shell.h"
#include "../lib/str.h"
#include "../lib/tea.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include "../lib/vec/join.h"
#include "../lib/vec/replace.h"
#include <algorithm>
#include <iostream>

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
fu_STR compile_testcase(const fu_STR&);
int ZERO();
s_TEMP_Context ZERO(const fu_STR&, fu_STR&&);
void runTestSuite();
int FAIL(const fu_STR&);
void sayHello();
s_TEMP_Context solvePrelude();
fu_STR& getFile(const fu_STR&, s_TEMP_Context&);
s_Module& getModule(const fu_STR&, s_TEMP_Context&);
void setModule(const s_Module&, s_TEMP_Context&);
const s_Struct& lookupType(const s_Type&, const s_Module&, const s_TEMP_Context&);
bool type_isString(const s_Type&);
s_Type tryClear_array(const s_Type&, const s_Module&, const s_TEMP_Context&);
bool type_isMap(const s_Type&);
s_SolverOutput solve(const s_Node&, const s_TEMP_Context&, s_Module&);
s_Type clear_refs(const s_Type&);
bool operator==(const s_Type&, const s_Type&);
s_ParserOutput parse(const int&, const fu_STR&, const fu_VEC<s_Token>&);
s_LexerOutput lex(const fu_STR&, const fu_STR&);
fu_STR last(const fu_STR&);
bool hasIdentifierChars(const fu_STR&);
template <typename K, typename V>
fu_VEC<K> fu_KEYS(
    const fu_COW_MAP<K, V>& map)
{
    return map.m_keys;
}

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
    s_Template tempatle;
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
            || tempatle
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

s_SolvedNode only(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("LEN != 1: "_fu + s.size())));
}

                                #ifndef DEF_WRITE_COMPILER
                                #define DEF_WRITE_COMPILER
inline const bool WRITE_COMPILER = true;
                                #endif

                                #ifndef DEF_M_STMT
                                #define DEF_M_STMT
inline const int M_STMT = (1 << 0);
                                #endif

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline const int M_RETBOOL = (1 << 1);
                                #endif

                                #ifndef DEF_M_CONST
                                #define DEF_M_CONST
inline const int M_CONST = (1 << 2);
                                #endif

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline const int M_RETVAL = (1 << 3);
                                #endif

                                #ifndef DEF_M_ARGUMENT
                                #define DEF_M_ARGUMENT
inline const int M_ARGUMENT = (1 << 4);
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_F_DESTRUCTOR
                                #define DEF_F_DESTRUCTOR
inline const int F_DESTRUCTOR = (1 << 31);
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_F_CLOSURE
                                #define DEF_F_CLOSURE
inline const int F_CLOSURE = (1 << 27);
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { "void"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int& FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_F_HAS_CLOSURE
                                #define DEF_F_HAS_CLOSURE
inline const int F_HAS_CLOSURE = (1 << 28);
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { "never"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_q_copy
                                #define DEF_q_copy
inline const int q_copy = (1 << 2);
                                #endif

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_copy | q_trivial);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { "bool"_fu, int(Primitive), 0 };
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline const int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline const int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline const int LOOP_POST = 2;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline const int LOOP_BODY = 3;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline const int LOOP_POST_COND = 4;
                                #endif

struct sf_cpp_codegen
{
    const s_SolvedNode& root;
    const s_Scope& scope;
    const s_Module& module;
    const s_TEMP_Context& ctx;
    fu_COW_MAP<fu_STR, fu_STR> _libs {};
    fu_COW_MAP<fu_STR, fu_STR> _tfwd {};
    fu_COW_MAP<fu_STR, fu_STR> _ffwd {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _fnN {};
    int _clsrN {};
    int _faasN {};
    s_Overload GET(const s_Target& target, const s_Module& module, const s_TEMP_Context& ctx)
    {
        ((target.index > 0) || fu::fail("Assertion failed."));
        const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
        return m.out.solve.scope.overloads[(target.index - 1)];
    };
    [[noreturn]] fu::never fail(fu_STR&& reason)
    {
        fu::fail(reason);
    };
    void include(const fu_STR& lib)
    {
        if (!fu::has(_libs, lib))
            (_libs.upsert(lib) = (("#include "_fu + lib) + "\n"_fu));

    };
    fu_STR typeAnnot(const s_Type& type, const int& mode)
    {
        fu_STR fwd = typeAnnotBase(type);
        if (((mode & M_RETVAL) && (type.canon == "never"_fu)))
            return ("[[noreturn]] "_fu + fwd);

        if ((type.quals & q_mutref))
            return (fwd + "&"_fu);

        if ((type.quals & q_ref))
            return (("const "_fu + fwd) + "&"_fu);

        if (((mode & M_CONST) && (type.quals & q_trivial)))
            return ("const "_fu + fwd);

        if (((mode & M_ARGUMENT) && !(type.quals & q_trivial)))
            return (fwd + "&&"_fu);

        return fwd;
    };
    fu_STR typeAnnotBase(const s_Type& type)
    {
        const fu_STR& c = type.canon;
        if ((c == "i8"_fu))
            return "i8"_fu;

        if ((c == "i16"_fu))
            return "i16"_fu;

        if ((c == "i32"_fu))
            return "int"_fu;

        if ((c == "i64"_fu))
            return "i64"_fu;

        if ((c == "u8"_fu))
            return "u8"_fu;

        if ((c == "u16"_fu))
            return "u16"_fu;

        if ((c == "u32"_fu))
            return "u32"_fu;

        if ((c == "u64"_fu))
            return "u64"_fu;

        if ((c == "f32"_fu))
            return "f32"_fu;

        if ((c == "f64"_fu))
            return "f64"_fu;

        if ((c == "bool"_fu))
            return "bool"_fu;

        if ((c == "void"_fu))
            return "void"_fu;

        if ((c == "string"_fu))
            return annotateString();

        if ((c == "never"_fu))
            return annotateNever();

        const s_Struct& tdef = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(type, module, ctx); if (_) return _; } fail(("TODO: "_fu + type.canon)); }());
        const fu_STR& k = tdef.kind;
        if ((k == "struct"_fu))
        {
            if (!fu::has(_tfwd, type.canon))
            {
                (_tfwd.upsert(type.canon) = (("\nstruct "_fu + type.canon) + ";"_fu));
                _tdef += declareStruct(type, tdef);
            };
            return type.canon;
        };
        if ((k == "array"_fu))
        {
            annotateVector();
            fu_STR item = typeAnnot(tdef.fields[0].type, 0);
            return (("fu_VEC<"_fu + item) + ">"_fu);
        };
        if ((k == "map"_fu))
        {
            fu_STR k = typeAnnot(tdef.fields[0].type, 0);
            fu_STR v = typeAnnot(tdef.fields[1].type, 0);
            annotateMap();
            return (((("fu_COW_MAP<"_fu + k) + ", "_fu) + v) + ">"_fu);
        };
        fail(("TODO: "_fu + tdef.kind));
    };
    fu_STR declareStruct(const s_Type& t, const s_Struct& s)
    {
        fu_STR def = (((((("\n                                #ifndef DEF_"_fu + t.canon) + "\n                                #define DEF_"_fu) + t.canon) + "\nstruct "_fu) + t.canon) + "\n{"_fu);
        fu_STR indent = "\n    "_fu;
        if ((s.flags & F_DESTRUCTOR))
        {
            def += "\n    struct Data\n    {"_fu;
            indent += "    "_fu;
        };
        const fu_VEC<s_StructField>& fields = s.fields;
        for (int i = 0; (i < fields.size()); i++)
        {
            const s_StructField& field = fields[i];
            def += ((((indent + typeAnnot(field.type, 0)) + " "_fu) + ID(field.id)) + ";"_fu);
        };
        if ((s.flags & F_DESTRUCTOR))
        {
            def += "\n    };"_fu;
            def += "\n"_fu;
            def += "\n    Data data;"_fu;
            def += "\n    bool dtor = false;"_fu;
            def += "\n"_fu;
            def += (("\n    ~"_fu + t.canon) + "() noexcept;"_fu);
            def += (("\n    inline "_fu + t.canon) + "(Data data) noexcept : data(data) {};"_fu);
            def += (((("\n    "_fu + t.canon) + "(const "_fu) + t.canon) + "&) = delete;"_fu);
            def += (((("\n    "_fu + t.canon) + "& operator=(const "_fu) + t.canon) + "&) = delete;"_fu);
            def += (((("\n    "_fu + t.canon) + "("_fu) + t.canon) + "&&) noexcept;"_fu);
            def += (((("\n    "_fu + t.canon) + "& operator=("_fu) + t.canon) + "&&) noexcept;"_fu);
        };
        def += "\n    explicit operator bool() const noexcept"_fu;
        def += "\n    {"_fu;
        def += "\n        return false"_fu;
        for (int i = 0; (i < fields.size()); i++)
            def += ("\n            || "_fu + boolWrap(fields[i].type, (((s.flags & F_DESTRUCTOR) ? "data."_fu : ""_fu) + ID(fields[i].id))));

        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        return (def + "\n};\n                                #endif\n"_fu);
    };
    fu_STR collectDedupes(const fu_COW_MAP<fu_STR, fu_STR>& dedupes)
    {
        fu_STR out = ""_fu;
        fu_VEC<fu_STR> keys = fu_KEYS(dedupes);
        ([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } (keys));
        for (int i = 0; (i < keys.size()); i++)
            out += dedupes[keys.mutref(i)];

        return out;
    };
    fu_STR cgSpecs()
    {
        fu_STR src = ""_fu;
        const fu_COW_MAP<fu_STR, s_SolvedNode>& specs = module.out.specs;
        fu_VEC<fu_STR> keys = fu_KEYS(specs);
        for (int i = 0; (i < keys.size()); i++)
        {
            const fu_STR& k = keys[i];
            if ((fu_TO_STR(k[0]) == "0"_fu))
            {
                continue;
            };
            const s_SolvedNode& s = specs[k];
            if (s.target)
                src += cgNode(s, 0);

        };
        return src;
    };
    fu_STR cgRoot(const s_SolvedNode& root)
    {
        fu_STR specs = cgSpecs();
        fu_STR src = cgStatements(root.items);
        fu_STR header = (((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + specs) + _tdef) + _fdef);
        return (header + src);
    };
    fu_STR ID(const fu_STR& id)
    {
        if ((id == "this"_fu))
            return "_"_fu;

        if ((id == "template"_fu))
            return "tempatle"_fu;

        if ((id == "catch"_fu))
            return "cahtch"_fu;

        if ((id == "not"_fu))
            return "nott"_fu;

        if ((id == "and"_fu))
            return "andd"_fu;

        if ((id == "or"_fu))
            return "orr"_fu;

        return id;
    };
    fu_STR cgStatements(const fu_VEC<s_SolvedNode>& nodes)
    {
        fu_STR src = ""_fu;
        fu_VEC<fu_STR> lines = cgNodes(nodes, M_STMT);
        for (int i = 0; (i < lines.size()); i++)
        {
            const fu_STR& line = lines[i];
            if (line.size())
                src += ((_indent + line) + ((last(line) == ";"_fu) ? "\n"_fu : ";"_fu));

        };
        return src;
    };
    fu_STR blockWrap(const fu_VEC<s_SolvedNode>& nodes, const bool& skipCurlies)
    {
        fu_STR indent0 { _indent };
        _indent += "    "_fu;
        fu_STR src = cgStatements(nodes);
        if ((!skipCurlies || (nodes.size() != 1) || ((nodes[0].kind != "return"_fu) && (nodes[0].kind != "call"_fu))))
            src = ((((indent0 + "{"_fu) + src) + indent0) + "}"_fu);

        _indent = indent0;
        return src;
    };
    fu_STR blockWrapSubstatement(const s_SolvedNode& node)
    {
        return ((node.kind != "block"_fu) ? blockWrap(fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, true) : ((node.items.size() == 1) ? blockWrapSubstatement(node.items[0]) : cgBlock(node)));
    };
    fu_STR cgBlock(const s_SolvedNode& block)
    {
        return blockWrap(block.items, false);
    };
    fu_STR cgParens(const s_SolvedNode& node)
    {
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if (!items.size())
            return "(false /*empty parens*/)"_fu;

        if ((items.size() == 1))
            return items[0];

        fu_STR src = "("_fu;
        for (int i = 0; (i < items.size()); i++)
        {
            if (i)
                src += ", "_fu;

            if ((i < (items.size() - 1)))
                src += "(void)"_fu;

            src += items[i];
        };
        return (src + ")"_fu);
    };
    fu_STR try_cgFnAsStruct(const s_SolvedNode& fn)
    {
        const s_SolvedNode& body = fn.items[(fn.items.size() + FN_BODY_BACK)];
        if ((!body || (body.kind != "block"_fu)))
            return ""_fu;

        const fu_VEC<s_SolvedNode>& items = body.items;
        bool hasClosuresInHeader = false;
        int end = 0;
        for (int i = 0; (i < items.size()); i++)
        {
            end = i;
            const s_SolvedNode& item = items[i];
            if ((item.kind == "fn"_fu))
            {
                if ((item.flags & F_CLOSURE))
                    hasClosuresInHeader = true;

            }
            else if (((item.kind != "let"_fu) && (item.kind != "struct"_fu)))
            {
                break;
            };
        };
        if (!hasClosuresInHeader)
            return ""_fu;

        fu_STR evalName = (fn.value + "_EVAL"_fu);
        s_SolvedNode restFn = s_SolvedNode { "fn"_fu, (fn.flags | F_CLOSURE), fu_STR(evalName), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { fn.items[(fn.items.size() - 2)], s_SolvedNode { "block"_fu, int{}, fu_STR{}, slice(items, end, items.size()), s_TokenIdx(fn.token), s_Type(t_void), s_Target{} } } }, s_TokenIdx(fn.token), s_Type(t_void), s_Target{} };
        fu_VEC<s_SolvedNode> head = ((slice(fn.items, 0, (fn.items.size() + FN_ARGS_BACK)) + slice(items, 0, end)) + fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { restFn } });
        ((_clsrN == 0) || fail(""_fu));
        _clsrN--;
        fu_STR structName = ("sf_"_fu + fn.value);
        fu_STR src = ((("\nstruct "_fu + structName) + blockWrap(head, false)) + ";"_fu);
        
        {
            fu_VEC<fu_STR> args {};
            for (int i = 0; (i < (fn.items.size() + FN_ARGS_BACK)); i++)
            {
                const s_SolvedNode& argNode = fn.items[i];
                const s_Type& argType = argNode.type;
                const fu_STR& arg = argNode.value;
                args.push(((argType.quals & q_ref) ? fu_STR(arg) : cgSteal(arg)));
            };
            src += "\n"_fu;
            src += cgFnSignature(fn);
            src += (((((("\n{\n    return ("_fu + structName) + " { "_fu) + fu::join(args, ", "_fu)) + " })."_fu) + evalName) + "();\n}\n\n"_fu);
        };
        _clsrN++;
        return src;
    };
    fu_STR cgFnSignature(const s_SolvedNode& fn)
    {
        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(([&]() -> const s_Type& { { const s_Type& _ = ret.type; if (_) return _; } fail(""_fu); }()), M_RETVAL);
        const int closure = ([&]() -> int { if (!!_clsrN) return (fn.flags & F_CLOSURE); else return int{}; }());
        fu_STR src = (closure ? (("const auto& "_fu + fn.value) + " = [&]("_fu) : (((annot + " "_fu) + fn.value) + "("_fu));
        if (!hasIdentifierChars(fn.value))
            src = (((annot + " operator"_fu) + fn.value) + "("_fu);

        for (int i = 0; (i < (items.size() + FN_ARGS_BACK)); i++)
        {
            if (i)
                src += ", "_fu;

            src += binding(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }()), false, false);
        };
        src += (closure ? (") -> "_fu + annot) : ")"_fu);
        return src;
    };
    void ensureFwdDecl(const s_Target& target)
    {
        s_Overload overload = GET(target, module, ctx);
        if ((overload.kind != "fn"_fu))
            return;

        fu_STR ffwdKey = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, ffwdKey))
            return;

        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = overload.name; if (_.size()) return _; } fail(""_fu); }());
        const s_Type& ret = ([&]() -> const s_Type& { { const s_Type& _ = overload.type; if (_) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(ret, M_RETVAL);
        const bool isOp = !hasIdentifierChars(id);
        if ((isOp && (id != "=="_fu)))
            return;

        fu_STR src = (isOp ? (((("\n"_fu + annot) + " operator"_fu) + id) + "("_fu) : (((("\n"_fu + annot) + " "_fu) + id) + "("_fu));
        const fu_VEC<s_Type>& arg_t = overload.args;
        for (int i = 0; (i < arg_t.size()); i++)
        {
            if (i)
                src += ", "_fu;

            src += typeAnnot(arg_t[i], M_ARGUMENT);
        };
        src += ");"_fu;
        (_ffwd.upsert(ffwdKey) = src);
        return;
    };
    fu_STR cgFn(const s_SolvedNode& fn)
    {
        if (!fn.items.size())
            return ""_fu;

        if (((_faasN == 0) && (fn.flags & F_HAS_CLOSURE)))
        {
            _faasN++;
            fu_STR src = try_cgFnAsStruct(fn);
            _faasN--;
            if (src.size())
            {
                _fdef += src;
                return ""_fu;
            };
        };
        const int f0 = _fnN;
        const int c0 = _clsrN;
        fu_STR indent0 { _indent };
        _fnN++;
        if ((fn.flags & F_CLOSURE))
            _clsrN++;

        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& body = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(""_fu); }());
        if (!(fn.flags & F_CLOSURE))
            _indent = "\n"_fu;

        fu_STR src = cgFnSignature(fn);
        if (((src != "int main()"_fu) && !(fn.flags & F_CLOSURE) && fu::has(_fdef, ([&]() -> const fu_STR& { { const fu_STR& _ = fn.value; if (_.size()) return _; } fail(""_fu); }()))))
            ensureFwdDecl(fn.target);

        if ((body.kind == "block"_fu))
            src += cgBlock(body);
        else
            src += blockWrap(fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { body } }, false);

        _fnN = f0;
        _clsrN = c0;
        _indent = indent0;
        if ((fn.flags & F_DESTRUCTOR))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[0]; if (_) return _; } fail(""_fu); }());
            const fu_STR& name = head.type.canon;
            src += (((("\n\n"_fu + name) + "::~"_fu) + name) + "() noexcept"_fu);
            src += "\n{"_fu;
            src += "\n    if (!dtor)"_fu;
            src += "\n    {"_fu;
            src += "\n        dtor = true;"_fu;
            src += "\n        free(*this);"_fu;
            src += "\n    }"_fu;
            src += "\n}"_fu;
            include("<cassert>"_fu);
            include("<utility>"_fu);
            src += (((((("\n\n"_fu + name) + "::"_fu) + name) + "("_fu) + name) + "&& src) noexcept"_fu);
            src += "\n    : data(std::move(src.data))"_fu;
            src += "\n{"_fu;
            src += "\n    assert(!src.dtor);"_fu;
            src += "\n    dtor = src.dtor;"_fu;
            src += "\n    src.dtor = true;"_fu;
            src += "\n}"_fu;
            include("<cstring>"_fu);
            src += (((((("\n\n"_fu + name) + "& "_fu) + name) + "::operator=("_fu) + name) + "&& src) noexcept"_fu);
            src += "\n{"_fu;
            src += "\n    if (&src != this)"_fu;
            src += "\n    {"_fu;
            src += (("\n        char temp[sizeof("_fu + name) + ")];"_fu);
            src += (("\n        std::memcpy(temp, this, sizeof("_fu + name) + "));"_fu);
            src += (("\n        std::memcpy(this, &src, sizeof("_fu + name) + "));"_fu);
            src += (("\n        std::memcpy(&src, temp, sizeof("_fu + name) + "));"_fu);
            src += "\n    }"_fu;
            src += "\n"_fu;
            src += "\n    return *this;"_fu;
            src += "\n}"_fu;
        };
        if ((fn.flags & F_CLOSURE))
            return src;

        _fdef += (("\n"_fu + src) + "\n"_fu);
        return ""_fu;
    };
    fu_STR binding(const s_SolvedNode& node, const bool doInit, const bool forceMut)
    {
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(node.type, (((((node.flags & F_MUT) == 0) && !forceMut) ? int(M_CONST) : 0) | (((node.flags & F_ARG) == 0) ? 0 : int(M_ARGUMENT))));
        fu_STR head = ((([&]() -> const fu_STR& { { const fu_STR& _ = annot; if (_.size()) return _; } fail(""_fu); }()) + " "_fu) + ID(id));
        s_SolvedNode init = (node.items ? s_SolvedNode(node.items[LET_INIT]) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
        if ((!doInit || (node.flags & F_ARG)))
            return head;

        if (init)
        {
            if (((init.kind == "copy"_fu) && !(node.type.quals & q_ref)))
            {
                fu_STR expr = cgNode(only(init.items), 0);
                if ((node.type.quals & q_trivial))
                    return ((head + " = "_fu) + expr);

                return (((head + " { "_fu) + expr) + " }"_fu);
            };
            return ((head + " = "_fu) + cgNode(init, 0));
        };
        return (head + " {}"_fu);
    };
    fu_STR cgLet(const s_SolvedNode& node)
    {
        return binding(node, true, false);
    };
    fu_STR cgGlobal(const s_SolvedNode& node)
    {
        fu_STR src = cgLet(node);
        src = fu::replace(src, "([&]("_fu, "([]("_fu);
        if (fu::lmatch(src, "const "_fu))
            src = slice(src, 6);

        _fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
        return ""_fu;
    };
    void cgForeignGlobal(const s_Target& target)
    {
        fu_STR key = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, key))
            return;

        (_ffwd.upsert(key) = ""_fu);
        s_Overload o = GET(target, module, ctx);
        cgGlobal(o.constant);
    };
    fu_STR cgReturn(const s_SolvedNode& node)
    {
        if (node.items)
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }());
            fu_STR src = cgNode(head, 0);
            if ((head.type == t_never))
                return src;

            return ("return "_fu + src);
        };
        return "return"_fu;
    };
    fu_STR cgJump(const s_SolvedNode& node)
    {
        if (node.value.size())
            return ((("goto L_"_fu + node.value) + "_"_fu) + fu_TO_STR(node.kind[0]));

        return node.kind;
    };
    fu_STR cgStringLiteral(const s_SolvedNode& node)
    {
        annotateString();
        fu_STR esc = ""_fu;
        for (int i = 0; (i < node.value.size()); i++)
        {
            fu_STR c = fu_TO_STR(node.value[i]);
            if ((c == "\n"_fu))
                esc += "\\n"_fu;
            else if ((c == "\r"_fu))
                esc += "\\r"_fu;
            else if ((c == "\t"_fu))
                esc += "\\t"_fu;
            else if ((c == "\v"_fu))
                esc += "\\v"_fu;
            else if ((c == "\\"_fu))
                esc += "\\\\"_fu;
            else if ((c == "\""_fu))
                esc += "\\\""_fu;
            else
                esc += c;

        };
        return (("\""_fu + esc) + "\"_fu"_fu);
    };
    fu_STR cgArrayLiteral(const s_SolvedNode& node)
    {
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if (!items.size())
            return cgDefault(node.type);

        s_Type itemType = ([&]() -> s_Type { { s_Type _ = tryClear_array(node.type, module, ctx); if (_) return _; } fail(""_fu); }());
        fu_STR itemAnnot = typeAnnot(itemType, 0);
        fu_STR arrayAnnot = typeAnnot(node.type, 0);
        return (((((((arrayAnnot + " { "_fu) + arrayAnnot) + "::INIT<"_fu) + items.size()) + "> { "_fu) + fu::join(items, ", "_fu)) + " } }"_fu);
    };
    fu_STR cgDefaultInit(const s_SolvedNode& node)
    {
        return cgArrayLiteral(node);
    };
    bool hasNonIdentifierChars(const fu_STR& id)
    {
        for (int i = 0; (i < id.size()); i++)
        {
            fu_STR c = fu_TO_STR(id[i]);
            if (((c == "_"_fu) || ((c >= "a"_fu) && (c <= "z"_fu)) || ((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "0"_fu) && (c <= "9"_fu))))
            {
            }
            else
                return true;

        };
        return false;
    };
    fu_STR cgCall(const s_SolvedNode& node, const int& mode)
    {
        s_Overload target = ([&]() -> s_Overload { { s_Overload _ = GET(node.target, module, ctx); if (_) return _; } fail(""_fu); }());
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if ((target.kind == "defctor"_fu))
        {
            const s_Type& head = ([&]() -> const s_Type& { { const s_Type& _ = target.type; if (_) return _; } fail(""_fu); }());
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(head, module, ctx); if (_) return _; } fail(""_fu); }());
            fu_STR open = " { "_fu;
            fu_STR close = " }"_fu;
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((" { "_fu + head.canon) + "::Data { "_fu);
                close = " }}"_fu;
            };
            return (((head.canon + open) + fu::join(items, ", "_fu)) + close);
        };
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = target.name; if (_.size()) return _; } fail(""_fu); }());
        if ((target.kind == "global"_fu))
        {
            if ((node.target.modid != module.modid))
                cgForeignGlobal(node.target);

            return ID(id);
        };
        if ((target.kind == "var"_fu))
            return ID(id);

        if ((target.kind == "field"_fu))
        {
            fu_STR sep = "."_fu;
            const s_Struct& parent = lookupType(node.items[0].type, module, ctx);
            if ((parent.flags & F_DESTRUCTOR))
                sep = ".data."_fu;

            return ((items.mutref(0) + sep) + ID(id));
        };
        if ((node.target.modid && (node.target.modid != module.modid)))
            ensureFwdDecl(node.target);

        if (hasNonIdentifierChars(id))
        {
            const fu_VEC<s_SolvedNode>& nodes = ([&]() -> const fu_VEC<s_SolvedNode>& { { const fu_VEC<s_SolvedNode>& _ = node.items; if (_) return _; } fail(""_fu); }());
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nodes[0]; if (_) return _; } fail(""_fu); }());
            if ((items.size() == 1))
                return ((node.flags & F_POSTFIX) ? (items.mutref(0) + id) : (id + items.mutref(0)));

            if ((items.size() == 2))
            {
                if ((id == "[]"_fu))
                {
                    if ((head.type.canon == "string"_fu))
                        return (((("fu_TO_STR("_fu + items.mutref(0)) + "["_fu) + items.mutref(1)) + "])"_fu);

                    if ((head.type.quals & q_mutref))
                        return (((items.mutref(0) + ".mutref("_fu) + items.mutref(1)) + ")"_fu);

                    return (((items.mutref(0) + "["_fu) + items.mutref(1)) + "]"_fu);
                };
                if ((id == "="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()).type))
                            return (((((("("_fu + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()), 0)) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(""_fu); }()), 0)) + ") = "_fu) + items.mutref(1)) + ")"_fu);

                    };
                };
                if ((id == "||="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()).type))
                            items.mutref(0) = (((cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()), 0) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(""_fu); }()), 0)) + ")"_fu);

                    };
                    fu_STR annot = typeAnnot(head.type, 0);
                    return (((((((((("([&]("_fu + annot) + " _) -> "_fu) + annot) + " { if (!"_fu) + boolWrap(head.type, "_"_fu)) + ") _ = "_fu) + items.mutref(1)) + "; return _; } ("_fu) + items.mutref(0)) + "))"_fu);
                };
                if ((mode & M_STMT))
                    return ((((items.mutref(0) + " "_fu) + id) + " "_fu) + items.mutref(1));
                else
                    return (((((("("_fu + items.mutref(0)) + " "_fu) + id) + " "_fu) + items.mutref(1)) + ")"_fu);

            };
        };
        if (((id == "len"_fu) && (items.size() == 1)))
            return (items.mutref(0) + ".size()"_fu);

        if (((id == "push"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".push("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "pop"_fu) && (items.size() == 1)))
            return (items.mutref(0) + ".pop()"_fu);

        if (((id == "unshift"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".unshift("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "insert"_fu) && (items.size() == 3)))
            return (((((items.mutref(0) + ".insert("_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "splice"_fu) && (items.size() == 3)))
            return (((((items.mutref(0) + ".splice("_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "grow"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".grow("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "shrink"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".shrink("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "resize"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".resize("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "clear"_fu) && (items.size() == 1)))
            return (items.mutref(0) + ".clear()"_fu);

        if (((id == "find"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::lfind("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "starts"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::lmatch("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "has"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::has("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "replace"_fu) && (items.size() == 3)))
        {
            include("\"../lib/vec/replace.h\""_fu);
            return (("fu::replace("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "slice"_fu) && (items.size() == 2)))
            return (((("slice("_fu + items.mutref(0)) + ", "_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "slice"_fu) && (items.size() == 3)))
            return (((((("slice("_fu + items.mutref(0)) + ", "_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "substr"_fu) && (items.size() == 3)))
            return (((((("substr("_fu + items.mutref(0)) + ", "_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "sort"_fu) && (items.size() == 1)))
        {
            include("<algorithm>"_fu);
            return (("([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } ("_fu + items.mutref(0)) + "))"_fu);
        };
        if (((id == "char"_fu) && (items.size() == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }());
            if ((head.type.canon == "string"_fu))
                return (((("int("_fu + items.mutref(0)) + "["_fu) + items.mutref(1)) + "])"_fu);

        };
        if ((((id == "true"_fu) || (id == "false"_fu)) && !items.size()))
            return id;

        if (((id == "throw"_fu) && (items.size() == 1)))
            return cgThrow(id, items.mutref(0));

        if (((id == "assert"_fu) && (items.size() == 0)))
            return cgThrow(id, "\"Assertion failed.\""_fu);

        if (((id == "move"_fu) && (items.size() == 3)))
            return (((("([&]() { auto* _ = "_fu + items.mutref(0)) + ".mut_data(); "_fu) + cgSlide(("_ + "_fu + items.mutref(2)), ("_ + "_fu + items.mutref(1)), "sizeof(*_)"_fu)) + "; } ())"_fu);

        if (((id == "split"_fu) && (items.size() == 2)))
            return cgSplit(items);

        if (((id == "join"_fu) && (items.size() == 2)))
            return cgJoin(items);

        if (((id == "join"_fu) && (items.size() == 2)))
            return cgJoin(items);

        if (((id == "keys"_fu) && (items.size() == 1)))
            return cgKeys(items);

        if (((id == "CLONE"_fu) && (items.size() == 1)))
            return cgClone(node.type, items.mutref(0));

        if (((id == "STEAL"_fu) && (items.size() == 1)))
            return cgSteal(items.mutref(0));

        if (((id == "SWAP"_fu) && (items.size() == 2)))
            return cgSwap(items);

        if ((id == "print"_fu))
            return cgPrint(items);

        if (((id == "now_hr"_fu) || (id == "now_utc"_fu)))
        {
            include("\"../lib/now.h\""_fu);
            return (("fu::"_fu + id) + "()"_fu);
        };
        if (((id == "file_write"_fu) || (id == "file_read"_fu) || (id == "file_size"_fu)))
        {
            include("\"../lib/io.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "env_get"_fu))
        {
            include("\"../lib/env.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "hash_tea"_fu))
        {
            include("\"../lib/tea.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "shell_exec"_fu))
        {
            include("\"../lib/shell.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        ((id != "__native_pure"_fu) || fu::fail("Assertion failed."));
        return (((ID(id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgPrint(const fu_VEC<fu_STR>& items)
    {
        include("<iostream>"_fu);
        fu_STR src = "(std::cout"_fu;
        for (int i = 0; (i < items.size()); i++)
            src += (" << "_fu + items[i]);

        src += " << \"\\n\")"_fu;
        return src;
    };
    fu_STR cgSlide(const fu_STR& destExpr, const fu_STR& srcExpr, const fu_STR& numBytesExpr)
    {
        fu_STR SLIDE = "::slide"_fu;
        if (!fu::has(_tfwd, SLIDE))
        {
            include("<cstring>"_fu);
            (_tfwd.upsert(SLIDE) = "\ntemplate <size_t N>\ninline void fu_MEMSLIDE(void* dest, void* source)\n{\n    char swap_buffer[N];\n\n    std::memcpy(\n        swap_buffer, source, N);\n\n    if (source < dest)\n        std::memmove(\n            source, (char*)source + N,\n            (char*)dest - (char*)source);\n    else\n        std::memmove(\n            (char*)dest + N, dest,\n            (char*)source - (char*)dest);\n\n    std::memcpy(\n        dest, swap_buffer, N);\n}\n"_fu);
        };
        return (((((("fu_MEMSLIDE<"_fu + numBytesExpr) + ">("_fu) + destExpr) + ", "_fu) + srcExpr) + ")"_fu);
    };
    void annotateMap()
    {
        include("\"../lib/map.h\""_fu);
    };
    void annotateVector()
    {
        include("\"../lib/vec.h\""_fu);
    };
    fu_STR annotateString()
    {
        include("\"../lib/str.h\""_fu);
        return "fu_STR"_fu;
    };
    fu_STR annotateNever()
    {
        include("\"../lib/never.h\""_fu);
        return "fu::never"_fu;
    };
    fu_STR cgThrow(const fu_STR& kind, const fu_STR& item)
    {
        annotateNever();
        if ((kind == "assert"_fu))
        {
        };
        return (("fu::fail("_fu + item) + ")"_fu);
    };
    fu_STR cgJoin(const fu_VEC<fu_STR>& items)
    {
        include("\"../lib/vec/join.h\""_fu);
        return (("fu::join("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgSplit(const fu_VEC<fu_STR>& items)
    {
        fu_STR SPLIT = "::SPLIT"_fu;
        if (!fu::has(_ffwd, SPLIT))
        {
            annotateString();
            annotateVector();
            include("\"../lib/vec/find.h\""_fu);
            (_ffwd.upsert(SPLIT) = "\ninline fu_VEC<fu_STR> fu_SPLIT(\n    fu_STR s,\n    const fu_STR& sep)\n{\n    fu_VEC<fu_STR> result;\n\n    int next;\n    while ((next = fu::lfind(s, sep)) >= 0)\n    {\n        result.push(slice(s, 0, next));\n        s = slice(s, next + sep.size());\n    }\n\n    result.push(static_cast<fu_STR&&>(s));\n    return result;\n}\n"_fu);
        };
        return (("fu_SPLIT("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgKeys(const fu_VEC<fu_STR>& items)
    {
        fu_STR KEYS = "::KEYS"_fu;
        if (!fu::has(_ffwd, KEYS))
        {
            annotateMap();
            annotateVector();
            (_ffwd.upsert(KEYS) = "\ntemplate <typename K, typename V>\nfu_VEC<K> fu_KEYS(\n    const fu_COW_MAP<K, V>& map)\n{\n    return map.m_keys;\n}\n"_fu);
        };
        return (("fu_KEYS("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgLiteral(const s_SolvedNode& node)
    {
        return ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
    };
    fu_STR cgEmpty()
    {
        return ""_fu;
    };
    fu_STR cgIf(const s_SolvedNode& node, const int& mode)
    {
        const s_SolvedNode& n0 = node.items[0];
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & M_STMT);
        const auto& blockWrap_unlessIf = [&](const s_SolvedNode& node) -> fu_STR
        {
            return ((node.kind == "if"_fu) ? (" "_fu + cgNode(node, M_STMT)) : blockWrapSubstatement(node));
        };
        fu_STR cond = ([&]() -> fu_STR { if (n0) return boolWrap(n0.type, cgNode(n0, M_RETBOOL)); else return fu_STR{}; }());
        fu_STR cons = ([&]() -> fu_STR { if (n1) return (stmt ? blockWrapSubstatement(n1) : cgNode(n1, 0)); else return fu_STR{}; }());
        fu_STR alt = ([&]() -> fu_STR { if (n2) return (stmt ? blockWrap_unlessIf(n2) : cgNode(n2, 0)); else return fu_STR{}; }());
        if (stmt)
            return (((("if ("_fu + cond) + ")"_fu) + cons) + (alt.size() ? ((_indent + "else"_fu) + alt) : ""_fu));

        if ((cons.size() && alt.size()))
            return (((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu);

        if (cons.size())
            return (((("("_fu + cond) + " && "_fu) + cons) + ")"_fu);

        if (alt.size())
            return (((("("_fu + cond) + " || "_fu) + alt) + ")"_fu);

        fail("TODO"_fu);
    };
    fu_STR boolWrap(const s_Type& type, const fu_STR& src)
    {
        if (type_isString(type))
            return (src + ".size()"_fu);

        return src;
    };
    fu_STR cgDefault(const s_Type& type)
    {
        if (((type.quals & q_ref) && !(type.quals & q_mutref)))
        {
            fu_STR DEFAULT = "::DEFAULT"_fu;
            if (!fu::has(_ffwd, DEFAULT))
                (_ffwd.upsert(DEFAULT) = "\ntemplate <typename T>\nstruct fu_DEFAULT { static inline const T value {}; };\n"_fu);

            return (("fu_DEFAULT<"_fu + typeAnnot(clear_refs(type), 0)) + ">::value"_fu);
        };
        return (typeAnnot(type, 0) + "{}"_fu);
    };
    fu_STR cgAnd(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            const fu_VEC<s_SolvedNode>& items = node.items;
            const bool retSecondLast = (items[(items.size() - 1)].type == t_never);
            const int condEnd = (retSecondLast ? (items.size() - 2) : (items.size() - 1));
            fu_STR src = ""_fu;
            if (condEnd)
            {
                src += "if ("_fu;
                for (int i = 0; (i < condEnd); i++)
                {
                    const s_SolvedNode& item = items[i];
                    if (i)
                        src += " && "_fu;

                    src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                };
                src += ") "_fu;
            };
            fu_STR tail = cgNode(items[condEnd], 0);
            if (retSecondLast)
            {
                src += (((("{ "_fu + typeAnnot(type, 0)) + " _ = "_fu) + tail) + "; "_fu);
                src += (("if (!"_fu + boolWrap(type, "_"_fu)) + ") return _; } "_fu);
                src += (cgNode(items[(items.size() - 1)], 0) + ";"_fu);
            }
            else
            {
                src += (("return "_fu + tail) + ";"_fu);
                src += ((" else return "_fu + cgDefault(type)) + ";"_fu);
            };
            src = (((("([&]() -> "_fu + typeAnnot(type, 0)) + " { "_fu) + src) + " }())"_fu);
            return src;
        };
        fu_STR src = "("_fu;
        const fu_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                src += " && "_fu;

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + ")"_fu);
    };
    fu_STR cgNot(const s_SolvedNode& node)
    {
        const s_SolvedNode& item = node.items[0];
        return ("!"_fu + boolWrap(item.type, cgNode(item, M_RETBOOL)));
    };
    fu_STR cgOr(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            fu_STR annot = typeAnnot(type, 0);
            fu_STR src = (("([&]() -> "_fu + annot) + " {"_fu);
            const fu_VEC<s_SolvedNode>& items = node.items;
            for (int i = 0; (i < (items.size() - 1)); i++)
            {
                const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }());
                s_SolvedNode tail { item };
                if ((item.kind == "and"_fu))
                {
                    const fu_VEC<s_SolvedNode>& items = item.items;
                    tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(""_fu); }());
                    src += " if ("_fu;
                    for (int i = 0; (i < (items.size() - 1)); i++)
                    {
                        if (i)
                            src += " && "_fu;

                        const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }());
                        src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                    };
                    src += ")"_fu;
                };
                src += ((((((" { "_fu + annot) + " _ = "_fu) + cgNode(tail, 0)) + "; if ("_fu) + boolWrap(tail.type, "_"_fu)) + ") return _; }"_fu);
            };
            const s_SolvedNode& tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(""_fu); }());
            if (!(tail.type == t_never))
                src += " return"_fu;

            src += ((" "_fu + cgNode(tail, 0)) + "; }())"_fu);
            return src;
        };
        fu_STR src = "("_fu;
        const fu_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                src += " || "_fu;

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + ")"_fu);
    };
    fu_STR postfixBlock(const fu_STR& src, const fu_STR& postfix)
    {
        ((fu_TO_STR(src[(src.size() - 1)]) == "}"_fu) || fail(""_fu));
        return ((slice(src, 0, (src.size() - 1)) + postfix) + "}"_fu);
    };
    fu_STR cgLoop(const s_SolvedNode& node)
    {
        const fu_VEC<s_SolvedNode>& items = node.items;
        const s_SolvedNode& n_init = items[LOOP_INIT];
        const s_SolvedNode& n_cond = items[LOOP_COND];
        const s_SolvedNode& n_post = items[LOOP_POST];
        const s_SolvedNode& n_body = items[LOOP_BODY];
        const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
        fu_STR init = ([&]() -> fu_STR { if (n_init) return cgNode(n_init, 0); else return fu_STR{}; }());
        fu_STR cond = ([&]() -> fu_STR { if (n_cond) return boolWrap(n_cond.type, cgNode(n_cond, M_RETBOOL)); else return fu_STR{}; }());
        fu_STR post = ([&]() -> fu_STR { if (n_post) return cgNode(n_post, 0); else return fu_STR{}; }());
        fu_STR body = ([&]() -> fu_STR { if (n_body) return blockWrapSubstatement(n_body); else return fu_STR{}; }());
        fu_STR pcnd = ([&]() -> fu_STR { if (n_pcnd) return boolWrap(n_pcnd.type, cgNode(n_pcnd, M_RETBOOL)); else return fu_STR{}; }());
        fu_STR breakLabel = ""_fu;
        if ((body.size() && node.value.size()))
        {
            fu_STR brk = (("L_"_fu + node.value) + "_b"_fu);
            fu_STR cnt = (("L_"_fu + node.value) + "_c"_fu);
            if (fu::has(body, cnt))
                body = ("{"_fu + postfixBlock(body, (((_indent + "    }"_fu) + cnt) + ":;"_fu)));

            if (fu::has(body, brk))
                breakLabel = (((_indent + "    "_fu) + brk) + ":;"_fu);

        };
        if (pcnd.size())
        {
            if ((init.size() || post.size() || cond.size()))
                fail("TODO extended loop."_fu);

            return (((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel);
        };
        if ((init.size() || post.size() || !cond.size()))
            return (((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel);

        return (((("while ("_fu + cond) + ")"_fu) + body) + breakLabel);
    };
    fu_STR cgCatch(const s_SolvedNode& node)
    {
        const fu_VEC<s_SolvedNode>& items = node.items;
        const s_SolvedNode& let_main = items[0];
        fu_STR let_init = cgNode(items[0].items[LET_INIT], 0);
        const fu_STR& err_id = items[1].value;
        fu_STR catch_body = blockWrapSubstatement(items[2]);
        fu_STR src = (binding(let_main, false, true) + ";"_fu);
        src += (_indent + "try"_fu);
        src += (_indent + "{"_fu);
        src += (((((_indent + "    "_fu) + let_main.value) + " = "_fu) + let_init) + ";"_fu);
        src += (_indent + "}"_fu);
        src += (_indent + "catch (const std::exception& o_0)"_fu);
        src += (_indent + "{"_fu);
        src += (((_indent + "    const fu_STR& "_fu) + err_id) + " = fu_TO_STR(o_0.what());"_fu);
        src += (_indent + catch_body);
        src += (_indent + "}\n"_fu);
        return src;
    };
    fu_STR cgNode(const s_SolvedNode& node, const int& mode)
    {
        const fu_STR& k = node.kind;
        if ((k == "root"_fu))
            return cgRoot(node);

        if ((k == "block"_fu))
            return cgBlock(node);

        if ((k == "fn"_fu))
            return cgFn(node);

        if ((k == "return"_fu))
            return cgReturn(node);

        if ((k == "break"_fu))
            return cgJump(node);

        if ((k == "continue"_fu))
            return cgJump(node);

        if ((k == "call"_fu))
            return cgCall(node, mode);

        if ((k == "let"_fu))
            return cgLet(node);

        if ((k == "global"_fu))
            return cgGlobal(node);

        if ((k == "if"_fu))
            return cgIf(node, mode);

        if ((k == "!"_fu))
            return cgNot(node);

        if ((k == "or"_fu))
            return cgOr(node);

        if ((k == "and"_fu))
            return cgAnd(node);

        if ((k == "loop"_fu))
            return cgLoop(node);

        if ((k == "int"_fu))
            return cgLiteral(node);

        if ((k == "str"_fu))
            return cgStringLiteral(node);

        if ((k == "arrlit"_fu))
            return cgArrayLiteral(node);

        if ((k == "definit"_fu))
            return cgDefaultInit(node);

        if ((k == "empty"_fu))
            return cgEmpty();

        if ((k == "comma"_fu))
            return cgParens(node);

        if ((k == "parens"_fu))
            return cgParens(node);

        if ((k == "label"_fu))
            return cgParens(node);

        if ((k == "struct"_fu))
            return cgEmpty();

        if ((k == "copy"_fu))
            return cgCopyMove(node);

        if ((k == "move"_fu))
            return cgCopyMove(node);

        if ((k == "catch"_fu))
            return cgCatch(node);

        fail(("TODO: "_fu + k));
    };
    fu_STR cgCopyMove(const s_SolvedNode& node)
    {
        fu_STR a = cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }()), 0);
        if ((node.kind == "move"_fu))
            return cgSteal(a);

        return cgClone(node.type, a);
    };
    fu_STR cgSteal(const fu_STR& src)
    {
        include("<utility>"_fu);
        return (("std::move("_fu + src) + ")"_fu);
    };
    fu_STR cgSwap(const fu_VEC<fu_STR>& items)
    {
        include("<utility>"_fu);
        return (("std::swap("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgClone(const s_Type& type, const fu_STR& src)
    {
        return (((typeAnnotBase(type) + "("_fu) + src) + ")"_fu);
    };
    fu_VEC<fu_STR> cgNodes(const fu_VEC<s_SolvedNode>& nodes, const int& mode)
    {
        fu_VEC<fu_STR> result = fu_VEC<fu_STR>{};
        for (int i = 0; (i < nodes.size()); i++)
        {
            const s_SolvedNode& node = nodes[i];
            fu_STR src = (node ? cgNode(node, mode) : ""_fu);
            result.push(src);
        };
        return result;
    };
    fu_STR cpp_codegen_EVAL()
    {
        ((root.kind == "root"_fu) || fail(""_fu));
        fu_STR src = cgNode(root, 0);
        return src;
    };
};
fu_STR cpp_codegen(const s_SolvedNode& root, const s_Scope& scope, const s_Module& module, const s_TEMP_Context& ctx)
{
    return (sf_cpp_codegen { root, scope, module, ctx }).cpp_codegen_EVAL();
}


fu_STR compile(const fu_STR& fname, const fu_STR& via, s_TEMP_Context& ctx)
{
    s_Module module { getModule(fname, ctx) };
    if (!module.in)
    {
        module.out = s_ModuleOutputs { fu_VEC<int>{}, fu_COW_MAP<fu_STR, s_Struct>{}, fu_COW_MAP<fu_STR, s_SolvedNode>{}, s_SolverOutput{}, fu_STR{} };
        fu_STR src { ([&]() -> fu_STR& { { fu_STR& _ = getFile(fname, ctx); if (_.size()) return _; } fu::fail(((("#import badfile: `"_fu + via) + fname) + "`."_fu)); }()) };
        const f64 t0 = fu::now_hr();
        s_LexerOutput lexer_result = lex(src, fname);
        const f64 t1 = fu::now_hr();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), parse(module.modid, fname, lexer_result.tokens) };
        const f64 t2 = fu::now_hr();
        module.stats.s_lex = (t1 - t0);
        module.stats.s_parse = (t2 - t1);
        setModule(module, ctx);
    }
    else
    {
        (module.out || fu::fail(((("#import circle: `"_fu + via) + fname) + "`."_fu)));
    };
    fu_VEC<fu_STR> imports { module.in.parse.imports };
    for (int i = imports.size(); (i-- > 0); )
        compile(imports[i], ((fname + " <- "_fu) + via), ctx);

    if (!module.out)
    {
        const f64 t0 = fu::now_hr();
        module.out.solve = solve(module.in.parse.root, ctx, module);
        const f64 t1 = fu::now_hr();
        module.out.cpp = cpp_codegen(module.out.solve.root, module.out.solve.scope, module, ctx);
        const f64 t2 = fu::now_hr();
        module.stats.s_solve = (t1 - t0);
        module.stats.s_cpp = (t2 - t1);
        setModule(module, ctx);
    };
    return module.out.cpp;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_TEMP_Context CTX_PRELUDE = solvePrelude();
                                #endif

s_TEMP_Context compile_testcase(fu_STR&& src, const fu_STR& fname)
{
    if (!fu::has(src, "fn ZERO()"_fu))
        src = (("\n\nfn ZERO(): i32 {\n"_fu + src) + "\n}\n"_fu);

    src += "\nfn main(): i32 ZERO();\n\n"_fu;
    s_TEMP_Context ctx { CTX_PRELUDE };
    (ctx.files.upsert(fname) = src);
    compile(fname, ""_fu, ctx);
    return ctx;
}

fu_STR compile_testcase(const fu_STR& src)
{
    fu_STR fname = "testcase"_fu;
    s_TEMP_Context ctx = compile_testcase(fu_STR(src), fname);
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        if ((ctx.modules[i].fname == fname))
            return ctx.modules[i].out.cpp;

    };
    fu::fail("Assertion failed.");
}

                                #ifndef DEF_TEST_SRC
                                #define DEF_TEST_SRC
inline const fu_STR TEST_SRC = "\n\n    fn test(one: i32)\n    {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn ZERO(): i32\n    {\n        return test(1) - 17;\n    }\n\n"_fu;
                                #endif

int ZERO()
{
    fu_STR cpp = compile_testcase(TEST_SRC);
    return (fu::lfind(cpp, "main()"_fu) ? 0 : 101);
}

fu_STR absdir(const fu_STR& a)
{
    return ((last(a) == "/"_fu) ? fu_STR(a) : (a + "/"_fu));
}

                                #ifndef DEF_HOME
                                #define DEF_HOME
inline const fu_STR HOME = absdir(([]() -> fu_STR { { fu_STR _ = fu::env_get("HOME"_fu); if (_.size()) return _; } return "/Users/hdachev"_fu; }()));
                                #endif

fu_STR locate_PRJDIR()
{
    fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    ((fs > 10000) || fu::fail(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs)));
    (std::cout << ("PRJDIR: "_fu + dir) << "\n");
    return dir;
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

                                #ifndef DEF_GCC_CMD
                                #define DEF_GCC_CMD
inline const fu_STR GCC_CMD = (("g++ -std=c++1z -O3 "_fu + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wno-parentheses-equality "_fu);
                                #endif

fu_STR buildAndRun(const s_TEMP_Context& ctx)
{
    int code {};
    fu_STR stdout {};
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        const s_Module& module = ctx.modules[i];
        const fu_STR& cpp = module.out.cpp;
        fu_STR F = ((((PRJDIR + "build.cpp/o-"_fu) + fu::hash_tea(cpp)) + "-"_fu) + cpp.size());
        Fs.push(F);
        len_all += cpp.size();
    };
    fu_STR F_exe = ((((((PRJDIR + "build.cpp/b-"_fu) + fu::hash_tea(fu::join(Fs, "/"_fu))) + "-"_fu) + len_all) + "-"_fu) + Fs.size());
    const auto& ERR = [&](fu_STR&& cpp) -> fu_STR&
    {
        if (!cpp.size())
        {
            for (int i = Fs.size(); (i-- > 0); )
                cpp += (("#include \""_fu + Fs.mutref(i)) + ".cpp\"\n"_fu);

        };
        fu_STR fname = (PRJDIR + "build.cpp/failing-testcase.cpp"_fu);
        (std::cout << ("  WRITE "_fu + fname) << "\n");
        fu::file_write(fname, cpp);
        if (!stdout.size())
            stdout = (("[ EXIT CODE "_fu + code) + " ]"_fu);

        return stdout;
    };
    if ((fu::file_size(F_exe) < 1))
    {
        for (int i = 0; (i < Fs.size()); i++)
        {
            fu_STR F { Fs.mutref(i) };
            fu_STR F_cpp = (F + ".cpp"_fu);
            fu_STR F_tmp = (F + ".o.tmp"_fu);
            fu_STR F_obj = (F + ".o"_fu);
            if ((fu::file_size(F_obj) < 1))
            {
                const fu_STR& cpp = ctx.modules[(i + 1)].out.cpp;
                fu::file_write(F_cpp, cpp);
                (std::cout << "  BUILD "_fu << F_cpp << "\n");
                const f64 t0 = fu::now_hr();
                code = ([&]() -> int { { int _ = fu::shell_exec((((((GCC_CMD + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout); }());
                if (code)
                    return ERR(fu_STR(cpp));

                const f64 t1 = fu::now_hr();
                (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
            };
        };
        fu_STR F_tmp = (F_exe + ".tmp"_fu);
        fu_STR cmd = (((GCC_CMD + "-o "_fu) + F_tmp) + " "_fu);
        for (int i = Fs.size(); (i-- > 0); )
            cmd += (Fs.mutref(i) + ".o "_fu);

        
        {
            (std::cout << "   LINK "_fu << F_exe << "\n");
            const f64 t0 = fu::now_hr();
            code = ([&]() -> int { { int _ = fu::shell_exec((cmd + " 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((("chmod 755 "_fu + F_tmp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_exe) + " 2>&1"_fu), stdout); }());
            if (code)
            {
                (std::cout << ("   FAIL "_fu + fu::join(Fs, ("\n        "_fu + "\n"_fu))) << "\n");
                return ERR(""_fu);
            };
            const f64 t1 = fu::now_hr();
            (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
        };
        if ((Fs.size() == 1))
            code = fu::shell_exec((("rm "_fu + Fs.mutref(0)) + ".o 2>&1"_fu), stdout);

        if (code)
            return ERR(""_fu);

    };
    code = fu::shell_exec(F_exe, stdout);
    if (code)
        return ERR(""_fu);

    return ""_fu;
}

                                #ifndef DEF_NICE_THINGS
                                #define DEF_NICE_THINGS
inline const fu_VEC<fu_STR> NICE_THINGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "LOOKING GOOD TODAY !"_fu, "PASSING TESTS LIKE A BOSS !"_fu, "THIS IS SOME TOP NOTCH SHIT !"_fu, "VALUE ADDED !"_fu, "GOING STRONG !"_fu, "KILLIN IT !"_fu, "POWER LEVEL INCREASED !"_fu, "NOW MAKE ME BETTER AGAIN !"_fu, "NOW MAKE ME EVEN MORE BETTER !"_fu, "ALL CLEAR !"_fu, "UPGRADE ACCEPTED !"_fu, "YOU'RE THE BEST MAN !"_fu, "I LOVE YOU YOU !"_fu, "MORE IS MORE !"_fu, "THIS IS AWESOME !"_fu, "THIS IS AWESOME !"_fu } };
                                #endif

void saySomethingNice()
{
    const int sec = i32(fu::now_utc());
    const bool NEW_STUFF = false;
    if (((sec % 5) && !NEW_STUFF))
    {
        fu_STR str = ""_fu;
        for (int i = 0; (i < 3); i++)
        {
            if ((sec & (1 << i)))
                str += "🍒"_fu;
            else
                str += "🍊"_fu;

        };
        (std::cout << str << "\n");
    }
    else
        (std::cout << NICE_THINGS[((sec >> 6) & 0xf)] << "\n");

}

s_TEMP_Context ZERO(const fu_STR& src, fu_STR&& fname)
{
    if (!fname.size())
        fname = "testcase.ZERO"_fu;

    s_TEMP_Context ctx = compile_testcase(fu_STR(src), fname);
    fu_STR result = buildAndRun(ctx);
    if (result.size())
        fu::fail(result);

    return ctx;
}

int FAIL(const fu_STR& src)
{
    fu_STR cpp;
    try
    {
        cpp = compile_testcase(src);
    }
    catch (const std::exception& o_0)
    {
        const fu_STR& e = fu_TO_STR(o_0.what());
    
        return e.size();
    }
;
    fu::fail(("DID NOT THROW: "_fu + cpp));
}

void updateCPPFile(const s_Module& module)
{
    fu_STR fname = (module.fname + ".cpp"_fu);
    const fu_STR& cpp = module.out.cpp;
    if ((fu::file_read(fname) != cpp))
    {
        fu::file_write(fname, module.out.cpp);
        (std::cout << ("WROTE "_fu + fname) << "\n");
    };
}

void FU_FILE(fu_STR&& fname)
{
    fname = ((PRJDIR + "src/"_fu) + fname);
    (std::cout << "COMPILE "_fu << fname << "\n");
    fu_STR src = fu::file_read(fname);
    if (!src.size())
        fu::fail(("BAD FILE: "_fu + fname));

    const f64 t0 = fu::now_hr();
    s_TEMP_Context ctx = ZERO(src, fu_STR(fname));
    const f64 t1 = fu::now_hr();
    const f64 tt = (t1 - t0);
    (std::cout << "        "_fu << tt << "s\n"_fu << "\n");
    if (WRITE_COMPILER)
    {
        for (int i = 1; (i < ctx.modules.size()); i++)
            updateCPPFile(ctx.modules[i]);

    };
    
    {
        sayHello();
    };
}

void runTestSuiteAndBuildCompiler()
{
    runTestSuite();
    saySomethingNice();
    FU_FILE("compiler.fu"_fu);
}

void runTestSuite()
{
    ZERO("\n        return 1 - 1;\n    "_fu, ""_fu);
    ZERO("\n        fn sum(a: i32, b: i32): i32\n            a + b;\n\n        return sum(1, -1);\n    "_fu, ""_fu);
    ZERO("\n        fn sum(a: i32, b: i32)\n            a + b;\n\n        return sum(1, -1);\n    "_fu, ""_fu);
    ZERO("\n        fn sign(a: i32)\n            a > 0 ? 1 : a < 0 ? -1 : 0;\n\n        return sign(7) + sign(-3) + sign(0);\n    "_fu, ""_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n\n            return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, ""_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n            else\n                return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 0; i < 10; i++)\n            sum++;\n\n        return sum * 2 - 20;\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 10; i --> 0; )\n            sum--;\n\n        return sum * 2 + 20;\n    "_fu, ""_fu);
    ZERO("\n        fn decr(num: &mut i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut res = 0;\n        fn decr()\n            res--;\n\n        decr();\n        return res + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut res = 0;\n        fn decr(num: &mut i32) { num--; } // ret void\n\n        decr(res);\n        return res + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu, ""_fu);
    FAIL("\n        let sum = 0;\n        while (sum < 15)\n            sum++; //ERR ++ overload\n\n        return sum - 15;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum += 2;\n\n        return sum - 16;\n    "_fu, ""_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        return named(b: 3, 6);\n    "_fu, ""_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        fn other(a: i32, b: i32)\n            named(:b, :a);\n\n        return other(b: 3, 6);\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(r: Range)\n            r.max - r.min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        mut r = Range(1, 2);\n        r.min++;\n        return r.max - r.min;\n    "_fu, ""_fu);
    FAIL("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        let r = Range(1, 2);\n        r.min++; //ERR ++ overload\n        return r.max - r.min;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using r: Range)\n            max - min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n\n            fn size()\n                max - min;\n        }\n\n        let r = Range(14, 21);\n\n        return size(r) - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        return X(1).test(-1);\n    "_fu, ""_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        fn hey(using x: X) test(-1);\n\n        return X(1).hey;\n    "_fu, ""_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n        }\n\n        fn dist(using p: Player, other: Player)\n            x - other.x;\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu, ""_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n\n            fn dist(other: Player)\n                x - other.x;\n        }\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu, ""_fu);
    ZERO("\n        fn inner(i: i32): i32\n            i > 0 ? outer(i - 1) : 0;\n\n        fn outer(i: i32): i32\n            2 * inner(i);\n\n        return outer(1);\n    "_fu, ""_fu);
    ZERO("\n        fn test(one: i32)\n        {\n            let zero = one - 1;\n            let two  = one * 2;\n\n            fn inner(i: i32): i32\n                i > zero ? outer(i - one) : zero;\n\n            fn outer(i: i32): i32\n                two * inner(i);\n\n            return outer(one) + (two - one) * 17;\n        }\n\n        fn ZERO() test(1) - 17;\n    "_fu, ""_fu);
    ZERO("\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu, ""_fu);
    ZERO("\n        fn outer(i: i32): i32\n            i > 0   ? inner(i)\n                    : 2 * i;\n\n        fn inner(implicit x: i32, i: i32): i32\n            outer(i - 2 * x);\n\n        let implicit x = 3;\n        return outer(6);\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn test()\n            size();\n\n        let implicit r = Range(14, 21);\n\n        return test  - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn inner()\n            size();\n\n        fn outer()\n            inner();\n\n        let implicit r = Range(14, 21);\n\n        return outer() - 7;\n    "_fu, ""_fu);
    ZERO("\n        let x = 1;\n\n        fn test(): &i32\n            x;\n\n        return test - 1;\n    "_fu, ""_fu);
    ZERO("\n        let a = 1;\n        let x: &i32 = a;\n\n        return a - x;\n    "_fu, ""_fu);
    ZERO("\n        struct Test {\n            x: &i32;\n        }\n\n        let a = 1;\n        let test = Test(a);\n\n        return test.x - 1;\n    "_fu, ""_fu);
    ZERO("\n        mut a = 0;\n        mut b = a;\n        b++;\n        let c = a = b;\n\n        return a - c;\n    "_fu, ""_fu);
    ZERO("\n        let x = 3;\n        return x / 2 - 1;\n    "_fu, ""_fu);
    ZERO("\n        fn div3by(a: $T) 3 / a;\n        return div3by(2) - 1;\n    "_fu, ""_fu);
    fu_STR RAII = "\n        let mut i = 0;\n        struct S {\n            j: &mut i32;\n            fn free()\n                j += j + 1;\n        }\n    "_fu;
    ZERO((RAII + "\n        let s = S(i);\n        return i;\n        // <-destructor here\n    "_fu), ""_fu);
    ZERO((RAII + "\n        { let s = S(i); } // <-destructor here\n        return i - 1;\n    "_fu), ""_fu);
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        test(S(i)); // <-destructor here\n        return i - 1;\n    "_fu), ""_fu);
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        let s = S(i);\n        test(s);\n        return i;\n        // <-destructor here\n    "_fu), ""_fu);
    ZERO((RAII + "\n        fn test(s: S) { return s.j; } // <-destructor here\n        test(S(i));\n        return i - 1;\n    "_fu), ""_fu);
    FAIL((RAII + "\n        fn test(mut s: S) { return s.j; } // <-destructor here\n\n        mut s = S(i);\n        test( s ); //ERR explicit\n\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(mut s: S) {\n            let x = STEAL (s);\n            return x.j; // <-destructor here\n        }\n\n        mut s = S(i);\n        test( STEAL(s) );\n\n        return i - 1;\n    "_fu), ""_fu);
    ZERO("\n        mut arr = [0, 1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, ""_fu);
    ZERO("\n        mut arr: i32[] = [1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, ""_fu);
    ZERO("\n        let x = 5;\n        mut arr = [ -5 ];\n        arr.push(x);\n        return arr[0] + arr[1];\n    "_fu, ""_fu);
    const auto& ARROPS = [&](const fu_STR& literal, const fu_STR& operation, fu_STR&& assertion) -> void
    {
        assertion = (("("_fu + assertion) + ")"_fu);
        const auto& EXPR = [&](const fu_STR& varname) -> fu_STR
        {
            return fu::replace(assertion, "@"_fu, varname);
        };
        fu_STR src {};
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += (("\n        mut arr0 = ["_fu + literal) + "];"_fu);
        src += (("\n        arr0."_fu + operation) + "; // expect_lambda"_fu);
        src += (("\n        if ("_fu + EXPR("arr0"_fu)) + " != 0) return 13;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += (("\n    mut orig = ["_fu + literal) + "];"_fu);
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += "\n        mut arr1 = CLONE(orig);"_fu;
        src += (("\n        arr1."_fu + operation) + "; // expect_lambda"_fu);
        src += (("\n        if ("_fu + EXPR("arr1"_fu)) + " != 0) return 17;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += "\n        mut arr2 = STEAL(orig);"_fu;
        src += "\n        if (orig.len) return 19;"_fu;
        src += (("\n        arr2."_fu + operation) + "; // expect_lambda"_fu);
        src += (("\n        if ("_fu + EXPR("arr2"_fu)) + " != 0) return 23;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += "\n    return 0;"_fu;
        src += "\n"_fu;
        ZERO(src, ""_fu);
    };
    ARROPS("0,1,2,3,4"_fu, "push(5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(5, 5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "pop()"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "splice(4, 1)"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "unshift(5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(0, 5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(1, 5)"_fu, "@[2] + @[5] - @[1]"_fu);
    ARROPS("0,1,2,3,100"_fu, "splice(1, 3)"_fu, "@.len + @[0] + @[1] - 102"_fu);
    ZERO("\n        let OPERATORS = [ '+', '-', '*', '/' ];\n\n        fn ZERO()\n            OPERATORS[2] == '*' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        struct Y { b: bool; }\n        struct X { y: Y[]; }\n\n        mut x: X[];\n        x.push( X([ Y(true) ]) );\n\n        return x.len + x[0].y.len * 2 - 3;\n    "_fu, ""_fu);
    ZERO("\n        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]\n        a.sort();\n        return a[0] + a[1] + a[3] + a[4];\n    "_fu, ""_fu);
    ZERO("\n        mut a = [0, 1, 2, 3, 4]; // [2, 0, 1, 3, 4]\n        a.move(2, 0);\n        return a[0] + a[3] - a[2] - a[4];\n    "_fu, ""_fu);
    ZERO("\n        mut a = [2, 0, 1, 3, 4]; // [0, 1, 2, 3, 4]\n        a.move(0, 2);\n        return a[1] + a[4] - a[2] - a[3];\n    "_fu, ""_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1, 3);\n        return b.len - b[1];\n    "_fu, ""_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1);\n        return b.len - b[2];\n    "_fu, ""_fu);
    ZERO("\n        mut str = 'hello ';\n        str += 'world';\n\n        return str.len - 11;\n    "_fu, ""_fu);
    ZERO("\n        let str = 'hello ' + 'world';\n\n        return str.starts(with: 'hel')\n             ? str.len - 11\n             : 171;\n    "_fu, ""_fu);
    ZERO("\n        let str = 'a' + 1710010;\n\n        return str == 'a1710010'\n             ? 0 : 101;\n    "_fu, ""_fu);
    ZERO("\n        let str = 'hello world';\n        mut cpy = '';\n        for (mut i = 0; i < str.len; i++)\n            cpy += str[i];\n\n        return (cpy.len - 11) + (cpy == str ? 0 : 1);\n    "_fu, ""_fu);
    ZERO("\n        return 'hello world'.find('world')\n             - 2 * [1, 7, 13, 14, 19].find(14); // expect_lambda\n    "_fu, ""_fu);
    ZERO("\n        return ('hello world'.has('world') ? 1 : 0) // expect_lambda\n             + ([1, 14, 96, 2].has(14)     ? 2 : 0)\n             - 3;\n    "_fu, ""_fu);
    ZERO("\n        let hw = 'hello world!';\n        let a = hw.slice(6, 6 + 5); // expect_lambda\n        let b = hw.substr(6, 5);\n        return a == b && a == 'world' ? a.len - 5 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let tests =\n        [\n            '',\n            ' ',\n            '  ',\n            'hey you duders',\n            ' hey you duders',\n            'hey you duders ',\n            '  hey you duders ',\n            '  hey you  duders ',\n            '  hey you  duders  '\n        ];\n\n        fn test(item: string)\n            item == item.split(' ').join(' ')\n                ? 0\n                : item.len;\n\n        mut sum = 0;\n        for (mut i = 0; i < tests.len; i++)\n            sum += test(tests[i]);\n\n        return sum;\n    "_fu, ""_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        return x['hello'] - x['world'] + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        let b = 'hello world';\n        mut offset = 0;\n\n        fn pop(): string { // expect_lambda\n            mut a = '';\n\n            while (offset < b.len) {\n                let c = b[offset++];\n                if (c == ' ')\n                    break;\n\n                a += c;\n            }\n\n            return a;\n        }\n\n        return x[pop()] - x[pop()] + 1;\n    "_fu, ""_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test() - 3;\n    "_fu, ""_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(b: -1);\n    "_fu, ""_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(-2);\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.a - 1 + t.b * 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.b;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(a: 1);\n        return t.a - 1 + t.b * 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(b: 1);\n        return t.b - 1 + t.a * 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey() Test(); // expect_lambda private type, technically ok, technically ok though not needed\n        return hey.x;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey(y: i32 = 0) // expect_lambda private type, technically ok though not needed\n            y   ? Test(1)\n                : Test();\n\n        return hey.x;\n    "_fu, ""_fu);
    ZERO("\n        let s = 7;\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let s = 0;\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        let s = 'hello';\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let s = '';\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        let s = [ 4 ];\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        mut s = [ 4 ];\n        s.pop();\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S = S(1);\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S;\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n\n        :outer for (mut y = 1; y < 10; y++)\n        {\n            sum += y * 10; // 10, 20\n            for (mut x = 1; x < 10; x++)\n            {\n                sum += x; // 1, 1, 2\n                if (y == 1) continue :outer;\n                if (x == 2) break    :outer;\n            }\n        }\n\n        return sum - 34;\n    "_fu, ""_fu);
    ZERO("\n        mut a = 0;\n        return (a++, a - 1);\n    "_fu, ""_fu);
    ZERO("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test();\n        return t.x - 1;\n    "_fu, ""_fu);
    FAIL("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test; //ERR orphan\n        return t.x - 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x || y;\n\n        return w == 'hello' ? 0 : 1; // expect_lambda\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x && y; // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = 3 && x || y; // expect_lambda\n\n        return w == 'hello' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y; // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y || throw(\"Nope.\"); // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        mut i = 7;\n        i ||= 11; // expect_lambda\n        return i - 7;\n    "_fu, ""_fu);
    ZERO("\n        mut i = 0;\n        i ||= 11; // expect_lambda\n        return i - 11;\n    "_fu, ""_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['hello'] = 'world';\n        fn f() (\n            g++, 'cruel world'); // expect_lambda\n\n        m['hello'] ||= f();\n        return g;\n    "_fu, ""_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['_not_hello_'] = 'world';\n        fn f() (\n            g++, 'cruel world'); // expect_lambda\n\n        m['hello'] ||= f();\n        return g - 1;\n    "_fu, ""_fu);
    ZERO("\n        {\n            {\n                return 0;\n            }\n        }\n    "_fu, ""_fu);
    FAIL("\n        {\n        {\n            return 0; //ERR block\n        }\n        }\n    "_fu);
    ZERO("\n        {\n            return 0;\n        }\n    "_fu, ""_fu);
    FAIL("\n        {\n            return 0; //ERR block\n       }\n    "_fu);
    FAIL("\n        {\n            return 0; //ERR block\n         }\n    "_fu);
    ZERO("\n\n    struct BINOP {\n        P: Map(string, i32);\n    };\n\n    fn setupOperators(): BINOP\n    {\n        mut out: BINOP;\n\n        fn binop(op: string)\n            out.P[op] = 7;\n\n        binop(',');\n\n        return out;\n    }\n\n    let BINOP   = setupOperators();\n    let P_COMMA = BINOP.P[','] || assert();\n\n    fn ZERO() P_COMMA - 7;\n\n    "_fu, ""_fu);
    ZERO("\n\n        // -no-lambda\n        // This converted to a ref-returning\n        // logical chain for some reason.\n        let hex = true;\n        let trail = 'x';\n        if (!(trail >= '0' && trail <= '9') &&\n            !(hex && (trail >= 'a' && trail <= 'f'\n                   || trail >= 'A' && trail <= 'F')))\n        {\n            return 0;\n        }\n\n        return 1;\n\n    "_fu, ""_fu);
    ZERO("\n        struct Type     { i: i32; };\n        struct Token    { i: i32; };\n        struct ScopeIdx { i: i32; };\n\n        struct SolvedNode\n        {\n            kind:       string;\n            flags:      i32;\n            value:      string;\n            items:      SolvedNode[];\n            token:      Token;\n\n            type:       Type;\n            target:     ScopeIdx;\n        };\n\n        let _here: Token;\n\n        fn createDefaultInit(type: Type): SolvedNode\n        {\n            // Broken arg re-arrange.\n            return SolvedNode(\n                kind: 'definit',\n                token: _here,\n                :type);\n        }\n\n        return createDefaultInit(Type()).target.i;\n    "_fu, ""_fu);
    ZERO("\n        struct Type         { i: i32; };\n        struct Scope        { i: i32; };\n        struct Partial      { i: i32; };\n        struct Template     { i: i32; };\n        struct SolvedNode   { i: i32; };\n\n        pub fn Scope_add(\n            scope: &mut Scope,\n            kind: string, id: string, type: Type,\n\n            min: i32 = 0,\n            max: i32 = 0,\n            arg_n: string[]     = [],\n            arg_t: Type[]       = [],\n            arg_d: SolvedNode[] = [],\n            template: Template  = [],\n            partial: Partial    = []): i32\n        {\n            return scope.i\n                 + kind.len + id.len + type.i\n                 + min + max + arg_n.len + arg_t.len + arg_d.len\n                 + template.i + partial.i;\n        }\n\n        mut _scope: Scope;\n        let id: string;\n        let t_template: Type;\n        let min: i32;\n        let max: i32;\n        let arg_n: string[];\n        let template: Template;\n\n        return Scope_add(\n            _scope,\n            '', id, t_template,\n            min, max, arg_n,\n            :template);\n    "_fu, ""_fu);
    ZERO("\n        let i = 0;\n        let items = [ '' ];\n        i == items.len - 1 || throw('what?');\n        return i;\n    "_fu, ""_fu);
    ZERO("\n\n        return false /* test */\n             ? 0xffffff // what is this\n             : 0 // madness\n             ;\n    "_fu, ""_fu);
    ZERO("\n\n        fn path_normalize(p: string): string {\n            mut path = p.split('/');\n\n            for (mut i = path.len; i --> 0; ) {\n                let part = path[i];\n                if (part == '.' || !part && i > 0 && i < path.len - 1)\n                    path.splice(i, 1);\n            }\n\n            for (mut i = 1; i < path.len; i++) {\n                if (path[i] == '..')\n                    path.splice(--i, 2);\n            }\n\n            return path.join('/');\n        }\n\n        fn path_join(a: string, b: string)\n            path_normalize(a + '/' + b);\n\n        fn ZERO()\n            path_join('hello/hey', './../you//') == 'hello/you/'\n                ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let a = 7;\n        let b = a && 3;\n        return b - 3;\n    "_fu, ""_fu);
    ZERO("\n        struct S { i: i32; }\n\n        let a = S(0);\n        let b = S(3);\n\n        return a.i\n            || (b || S(4)).i * 2 - (a || S(6)).i\n            && throw('woot');\n    "_fu, ""_fu);
    ZERO("\n\n        struct TrueStory { kind: string; value: string; };\n\n        mut specialized = TrueStory(kind: 'fn', value: 'val');\n\n        specialized.kind == 'fn' && specialized.value || throw('nope');\n\n        let v: &mut string = specialized.kind == 'fn'\n                          && specialized.value\n                          || throw('nope');\n        v += 'ue';\n\n        return specialized.value == 'value' ? 0 : 1;\n\n    "_fu, ""_fu);
    ZERO("\n        struct Token {\n            value: string;\n        };\n\n        fn consume(): Token {\n            return Token('hey');\n        };\n\n        fn ZERO(): i32 {\n            let a = 3;\n            let v = a && consume().value;\n            return v.len - a;\n        };\n    "_fu, ""_fu);
    FAIL("\n        struct ScopeIdx { raw: i32; };\n        fn thing(x: i32) x;\n        mut _return_scope: ScopeIdx;\n\n        fn hey(x: i32) {\n            let scope0 = thing(x);\n            _return_scope = scope0; //overload\n            return _return_scope.raw;\n        }\n\n        return hey(0);\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        fn ZERO()\n        {\n            let a = [1];\n            mut b = [2];\n\n            b.ARR_LAST += a.ARR_LAST;\n            return b.ARR_LAST - 3;\n        };\n    "_fu, ""_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - 3;\n    "_fu, ""_fu);
    ZERO("\n        struct S { i: i32; }\n        fn test(mut x: S) x.i += 1;\n        return S(-1).test;\n    "_fu, ""_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - [3].ARR_LAST;\n    "_fu, ""_fu);
    ZERO("\n\n        struct SolvedNode {\n            value: i32;\n            items: SolvedNode[];\n        };\n\n        fn visitNodes(_v: &mut $V, _n: SolvedNode) {\n\n            fn traverse(v: &mut $V, n: SolvedNode) {\n                v.visit(n);\n                for (mut i = 0; i < n.items.len; i++)\n                    traverse(v, n.items[i]);\n            }\n\n            traverse(_v, _n);\n        };\n\n        struct Visitor {\n            sum: i32;\n        };\n\n        fn visit(using v: &mut Visitor, node: SolvedNode) {\n            sum += node.value;\n        };\n\n        fn ZERO(): i32 {\n            let tree = SolvedNode(3,\n                [ SolvedNode(5), SolvedNode(7) ]);\n\n            mut myVisitor: Visitor;\n            myVisitor.visitNodes(tree);\n            return myVisitor.sum - 15;\n        };\n\n    "_fu, ""_fu);
    ZERO("\n        return 0 > 1 ? throw('should type check') : 0;\n    "_fu, ""_fu);
    ZERO("\n        fn throw_hey(): i32 {\n            throw('hey');\n            return 1;\n        }\n\n        fn ZERO(): i32 {\n            let x = throw_hey()\n                catch err\n                    return err.len - 3;\n\n            return 7;\n        }\n    "_fu, ""_fu);
}

int main()
{
    return ZERO();
}
