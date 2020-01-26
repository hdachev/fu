#include "../lib/map.h"
#include "../lib/never.h"
#include "../lib/str.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include "../lib/vec/join.h"
#include "../lib/vec/replace.h"
#include "../lib/vec/sort.h"

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
fu_STR last(const fu_STR&);
bool hasIdentifierChars(const fu_STR&);
const s_Struct& lookupType(const s_Type&, const s_Module&, const s_Context&);
bool type_isArray(const s_Type&);
s_Type tryClear_array(const s_Type&, const s_Module&, const s_Context&);
bool type_isMap(const s_Type&);
bool operator==(const s_Type&, const s_Type&);
s_Type clear_refs(const s_Type&);
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

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
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
    fu_STR canon;
    int quals;
    int modid;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || canon
            || quals
            || modid
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

                                #ifndef DEF_s_StructField
                                #define DEF_s_StructField
struct s_StructField
{
    fu_STR id;
    s_Type type;
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

s_SolvedNode only(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("LEN != 1: "_fu + s.size())));
}

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

                                #ifndef DEF_M_CLOSURE
                                #define DEF_M_CLOSURE
inline const int M_CLOSURE = (1 << 5);
                                #endif

                                #ifndef DEF_M_FWDECL
                                #define DEF_M_FWDECL
inline const int M_FWDECL = (1 << 6);
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_F_DESTRUCTOR
                                #define DEF_F_DESTRUCTOR
inline const int F_DESTRUCTOR = (1 << 31);
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_F_CLOSURE
                                #define DEF_F_CLOSURE
inline const int F_CLOSURE = (1 << 27);
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { "void"_fu, 0, 0, s_Lifetime{}, s_Effects{} };
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
inline const s_Type t_never = s_Type { "never"_fu, 0, 0, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_q_copy
                                #define DEF_q_copy
inline const int q_copy = (1 << 2);
                                #endif

                                #ifndef DEF_t_string
                                #define DEF_t_string
inline const s_Type t_string = s_Type { "string"_fu, int(q_copy), 0, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_copy | q_trivial);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { "bool"_fu, int(Primitive), 0, s_Lifetime{}, s_Effects{} };
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

namespace {

struct sf_cpp_codegen
{
    const s_SolvedNode& root;
    const s_Scope& scope;
    const s_Module& module;
    const s_Context& ctx;
    fu_COW_MAP<fu_STR, fu_STR> _libs {};
    fu_COW_MAP<fu_STR, fu_STR> _tfwd {};
    fu_COW_MAP<fu_STR, fu_STR> _ffwd {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _fnN {};
    int _clsrN {};
    int _faasN {};
    int _hasMain {};
    s_Overload GET(const s_Target& target, const s_Module& module, const s_Context& ctx)
    {
        ((target.index > 0) || fu::fail("Assertion failed."));
        const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
        return m.out.solve.scope.overloads[(target.index - 1)];
    };
    [[noreturn]] fu::never fail(const fu_STR& reason)
    {
        fu::fail(reason);
    };
    void include(const fu_STR& lib)
    {
        if (!fu::has(_libs, lib))
            (_libs.upsert(lib) = (("#include "_fu + lib) + "\n"_fu));

    };
    fu_STR typeAnnot(const s_Type& type, const int mode)
    {
        fu_STR fwd = typeAnnotBase(type);
        if (((mode & M_RETVAL) && (type.canon == "never"_fu) && !(mode & M_CLOSURE)))
            return ("[[noreturn]] "_fu + fwd);

        if ((type.quals & q_mutref))
            return (fwd + "&"_fu);

        if ((type.quals & q_ref))
        {
            if ((type.quals & q_primitive))
                return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

            return (("const "_fu + fwd) + "&"_fu);
        };
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
            (def += indent, def += typeAnnot(field.type, 0), def += " "_fu, def += ID(field.id), def += ";"_fu);
        };
        if ((s.flags & F_DESTRUCTOR))
        {
            def += "\n    };"_fu;
            def += "\n"_fu;
            def += "\n    Data data;"_fu;
            def += "\n    bool dtor = false;"_fu;
            def += "\n"_fu;
            (def += "\n    ~"_fu, def += t.canon, def += "() noexcept;"_fu);
            (def += "\n    inline "_fu, def += t.canon, def += "(Data data) noexcept : data(data) {};"_fu);
            (def += "\n    "_fu, def += t.canon, def += "(const "_fu, def += t.canon, def += "&) = delete;"_fu);
            (def += "\n    "_fu, def += t.canon, def += "& operator=(const "_fu, def += t.canon, def += "&) = delete;"_fu);
            (def += "\n    "_fu, def += t.canon, def += "("_fu, def += t.canon, def += "&&) noexcept;"_fu);
            (def += "\n    "_fu, def += t.canon, def += "& operator=("_fu, def += t.canon, def += "&&) noexcept;"_fu);
        };
        def += "\n    explicit operator bool() const noexcept"_fu;
        def += "\n    {"_fu;
        def += "\n        return false"_fu;
        for (int i = 0; (i < fields.size()); i++)
            (def += "\n            || "_fu, def += boolWrap(fields[i].type, (((s.flags & F_DESTRUCTOR) ? "data."_fu : fu_STR{}) + ID(fields[i].id))));

        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        return (def + "\n};\n                                #endif\n"_fu);
    };
    fu_STR collectDedupes(const fu_COW_MAP<fu_STR, fu_STR>& dedupes)
    {
        fu_STR out {};
        fu_VEC<fu_STR> keys = dedupes.m_keys;
        fu::sort(keys);
        for (int i = 0; (i < keys.size()); i++)
            out += dedupes[keys.mutref(i)];

        return out;
    };
    fu_STR cgSpecs()
    {
        fu_STR src {};
        const fu_COW_MAP<fu_STR, s_SolvedNode>& specs = module.out.specs;
        fu_VEC<fu_STR> keys = specs.m_keys;
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
        fu_STR main = cgMain();
        fu_STR header = (((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + specs) + _tdef) + _fdef);
        return ((header + src) + main);
    };
    fu_STR cgMain()
    {
        if (!_hasMain)
            return fu_STR{};

        if ((_hasMain != 2))
            return "\n\nint main() { return fu_MAIN(); }\n"_fu;

        annotateString();
        return ((((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));"_fu) + "\n}\n"_fu);
    };
    fu_STR ID(const fu_STR& id)
    {
        if ((id == "this"_fu))
            return "Q_this"_fu;

        if ((id == "template"_fu))
            return "Q_template"_fu;

        if ((id == "catch"_fu))
            return "Q_catch"_fu;

        if ((id == "not"_fu))
            return "Q_not"_fu;

        if ((id == "and"_fu))
            return "Q_and"_fu;

        if ((id == "or"_fu))
            return "Q_or"_fu;

        if ((id == "int"_fu))
            return "Q_int"_fu;

        if ((id == "short"_fu))
            return "Q_short"_fu;

        if ((id == "long"_fu))
            return "Q_long"_fu;

        return id;
    };
    fu_STR cgStatements(const fu_VEC<s_SolvedNode>& nodes)
    {
        fu_STR src {};
        fu_VEC<fu_STR> lines = cgNodes(nodes, M_STMT);
        for (int i = 0; (i < lines.size()); i++)
        {
            const fu_STR& line = lines[i];
            if (line)
                (src += _indent, src += line, src += ((last(line) == ";"_fu) ? "\n"_fu : ";"_fu));

        };
        return src;
    };
    fu_STR blockWrap(const fu_VEC<s_SolvedNode>& nodes, const bool skipCurlies)
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
    fu_STR cgFnSignature(const s_SolvedNode& fn)
    {
        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } fail(fu_STR{}); }());
        const int closure = ([&]() -> int { if (!!_clsrN) return (fn.flags & F_CLOSURE); else return int{}; }());
        fu_STR annot = typeAnnot((ret.type ? ret.type : fail(fu_STR{})), (M_RETVAL | (closure ? int(M_CLOSURE) : 0)));
        fu_STR id { fn.value };
        if (((id == "main"_fu) && !closure))
        {
            _hasMain = ((fn.items.size() + FN_ARGS_BACK) ? 2 : 1);
            id = "fu_MAIN"_fu;
        };
        fu_STR src = (closure ? (("const auto& "_fu + id) + " = [&]("_fu) : (((annot + " "_fu) + id) + "("_fu));
        if (!hasIdentifierChars(id))
            src = (((annot + " operator"_fu) + id) + "("_fu);

        for (int i = 0; (i < (items.size() + FN_ARGS_BACK)); i++)
        {
            if (i)
                src += ", "_fu;

            src += binding(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }()), false, false);
        };
        src += (closure ? (") -> "_fu + annot) : ")"_fu);
        return src;
    };
    void ensureFwdDecl(const s_Target& target)
    {
        s_Overload overload = GET(target, module, ctx);
        if (((overload.kind != "fn"_fu) || (overload.name == "main"_fu)))
            return;

        fu_STR ffwdKey = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, ffwdKey))
            return;

        const fu_STR& id = (overload.name ? overload.name : fail(fu_STR{}));
        const s_Type& ret = (overload.type ? overload.type : fail(fu_STR{}));
        fu_STR annot = typeAnnot(ret, M_RETVAL);
        const bool isOp = !hasIdentifierChars(id);
        fu_STR src = (isOp ? (((("\n"_fu + annot) + " operator"_fu) + id) + "("_fu) : (((("\n"_fu + annot) + " "_fu) + id) + "("_fu));
        const fu_VEC<s_Type>& arg_t = overload.args;
        for (int i = 0; (i < arg_t.size()); i++)
        {
            if (i)
                src += ", "_fu;

            src += typeAnnot(arg_t[i], (M_ARGUMENT | M_FWDECL));
        };
        src += ");"_fu;
        (_ffwd.upsert(ffwdKey) = src);
        return;
    };
    fu_STR try_cgFnAsStruct(const s_SolvedNode& fn)
    {
        const s_SolvedNode& body = fn.items[(fn.items.size() + FN_BODY_BACK)];
        if ((!body || (body.kind != "block"_fu)))
            return fu_STR{};

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
            return fu_STR{};

        fu_STR evalName = (fn.value + "_EVAL"_fu);
        s_SolvedNode restFn = s_SolvedNode { "fn"_fu, (fn.flags | F_CLOSURE), fu_STR(evalName), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { fn.items[(fn.items.size() - 2)], s_SolvedNode { "block"_fu, int{}, fu_STR{}, slice(items, end, items.size()), s_TokenIdx(fn.token), s_Type(t_void), s_Target{} } } }, s_TokenIdx(fn.token), s_Type(t_void), s_Target{} };
        fu_VEC<s_SolvedNode> head = ((slice(fn.items, 0, (fn.items.size() + FN_ARGS_BACK)) + slice(items, 0, end)) + fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { restFn } });
        ((_clsrN == 0) || fail(fu_STR{}));
        _clsrN--;
        fu_STR structName = ("sf_"_fu + fn.value);
        fu_STR src = ((("\nnamespace {\n\nstruct "_fu + structName) + blockWrap(head, false)) + ";\n"_fu);
        
        {
            fu_VEC<fu_STR> args {};
            for (int i = 0; (i < (fn.items.size() + FN_ARGS_BACK)); i++)
            {
                const s_SolvedNode& argNode = fn.items[i];
                const s_Type& argType = argNode.type;
                const fu_STR& arg = argNode.value;
                args.push(((argType.quals & q_ref) ? fu_STR(arg) : cgSteal(arg)));
            };
            src += "\n} // namespace\n\n"_fu;
            src += cgFnSignature(fn);
            (src += "\n{\n    return ("_fu, src += structName, src += " { "_fu, src += fu::join(args, ", "_fu), src += " })."_fu, src += evalName, src += "();\n}\n\n"_fu);
        };
        if (fu::has(_fdef, (fn.value ? fn.value : fail(fu_STR{}))))
            ensureFwdDecl(fn.target);

        _clsrN++;
        return src;
    };
    fu_STR cgFn(const s_SolvedNode& fn)
    {
        if (!fn.items.size())
            return fu_STR{};

        if (((_faasN == 0) && (fn.flags & F_HAS_CLOSURE)))
        {
            _faasN++;
            fu_STR src = try_cgFnAsStruct(fn);
            _faasN--;
            if (src)
            {
                _fdef += src;
                return fu_STR{};
            };
        };
        const int f0 = _fnN;
        const int c0 = _clsrN;
        fu_STR indent0 { _indent };
        _fnN++;
        if ((fn.flags & F_CLOSURE))
            _clsrN++;

        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& body = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(fu_STR{}); }());
        if (!(fn.flags & F_CLOSURE))
            _indent = "\n"_fu;

        fu_STR src = cgFnSignature(fn);
        if ((!(fn.flags & F_CLOSURE) && fu::has(_fdef, (fn.value ? fn.value : fail(fu_STR{})))))
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
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[0]; if (_) return _; } fail(fu_STR{}); }());
            const fu_STR& name = head.type.canon;
            (src += "\n\n"_fu, src += name, src += "::~"_fu, src += name, src += "() noexcept"_fu);
            src += "\n{"_fu;
            src += "\n    if (!dtor)"_fu;
            src += "\n    {"_fu;
            src += "\n        dtor = true;"_fu;
            src += "\n        free(*this);"_fu;
            src += "\n    }"_fu;
            src += "\n}"_fu;
            include("<cassert>"_fu);
            include("<utility>"_fu);
            (src += "\n\n"_fu, src += name, src += "::"_fu, src += name, src += "("_fu, src += name, src += "&& src) noexcept"_fu);
            src += "\n    : data(std::move(src.data))"_fu;
            src += "\n{"_fu;
            src += "\n    assert(!src.dtor);"_fu;
            src += "\n    dtor = src.dtor;"_fu;
            src += "\n    src.dtor = true;"_fu;
            src += "\n}"_fu;
            include("<cstring>"_fu);
            (src += "\n\n"_fu, src += name, src += "& "_fu, src += name, src += "::operator=("_fu, src += name, src += "&& src) noexcept"_fu);
            src += "\n{"_fu;
            (src += "\n    char temp[sizeof("_fu, src += name, src += ")];"_fu);
            src += "\n    char* a = (char*) this;"_fu;
            src += "\n    char* b = (char*) &src;"_fu;
            src += "\n"_fu;
            (src += "\n    std::memcpy (temp, a, sizeof("_fu, src += name, src += "));"_fu);
            (src += "\n    std::memmove(a,    b, sizeof("_fu, src += name, src += "));"_fu);
            (src += "\n    std::memcpy (b, temp, sizeof("_fu, src += name, src += "));"_fu);
            src += "\n"_fu;
            src += "\n    return *this;"_fu;
            src += "\n}"_fu;
        };
        if ((fn.flags & F_CLOSURE))
            return src;

        (_fdef += "\n"_fu, _fdef += src, _fdef += "\n"_fu);
        return fu_STR{};
    };
    fu_STR binding(const s_SolvedNode& node, const bool doInit, const bool forceMut)
    {
        const fu_STR& id = (node.value ? node.value : fail(fu_STR{}));
        fu_STR annot = typeAnnot(node.type, (((((node.flags & F_MUT) == 0) && !forceMut) ? int(M_CONST) : 0) | (((node.flags & F_ARG) == 0) ? 0 : int(M_ARGUMENT))));
        fu_STR head = (((annot ? annot : fail(fu_STR{})) + " "_fu) + ID(id));
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
            if (((init.kind == "definit"_fu) && !(init.type.quals & q_ref) && (init.type == node.type)))
                return (head + " {}"_fu);

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

        (_fdef += "\n                                #ifndef DEF_"_fu, _fdef += node.value, _fdef += "\n                                #define DEF_"_fu, _fdef += node.value, _fdef += "\ninline const "_fu, _fdef += src, _fdef += ";"_fu, _fdef += "\n                                #endif\n"_fu);
        return fu_STR{};
    };
    void cgForeignGlobal(const s_Target& target)
    {
        fu_STR key = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, key))
            return;

        (_ffwd.upsert(key) = fu_STR{});
        s_Overload o = GET(target, module, ctx);
        cgGlobal(o.constant);
    };
    fu_STR cgReturn(const s_SolvedNode& node)
    {
        if (node.items)
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }());
            fu_STR src = cgNode(head, 0);
            if ((head.type == t_never))
                return src;

            return ("return "_fu + src);
        };
        return "return"_fu;
    };
    fu_STR cgJump(const s_SolvedNode& node)
    {
        if (node.value)
            return ((("goto L_"_fu + node.value) + "_"_fu) + fu_TO_STR(node.kind[0]));

        return node.kind;
    };
    fu_STR cgStringLiteral(const s_SolvedNode& node)
    {
        annotateString();
        fu_STR esc {};
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

        s_Type itemType = ([&]() -> s_Type { { s_Type _ = tryClear_array(node.type, module, ctx); if (_) return _; } fail(fu_STR{}); }());
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
    fu_STR cgCall(const s_SolvedNode& node, const int mode)
    {
        s_Overload target = ([&]() -> s_Overload { { s_Overload _ = GET(node.target, module, ctx); if (_) return _; } fail(fu_STR{}); }());
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if ((target.kind == "defctor"_fu))
        {
            const s_Type& head = (target.type ? target.type : fail(fu_STR{}));
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(head, module, ctx); if (_) return _; } fail(fu_STR{}); }());
            fu_STR open = " { "_fu;
            fu_STR close = " }"_fu;
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((" { "_fu + head.canon) + "::Data { "_fu);
                close = " }}"_fu;
            };
            return (((head.canon + open) + fu::join(items, ", "_fu)) + close);
        };
        const fu_STR& id = (target.name ? target.name : fail(fu_STR{}));
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

            return ((items[0] + sep) + ID(id));
        };
        if ((node.target.modid && (node.target.modid != module.modid)))
            ensureFwdDecl(node.target);

        if (hasNonIdentifierChars(id))
        {
            const fu_VEC<s_SolvedNode>& nodes = (node.items ? node.items : fail(fu_STR{}));
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nodes[0]; if (_) return _; } fail(fu_STR{}); }());
            if ((items.size() == 1))
                return ((node.flags & F_POSTFIX) ? (items[0] + id) : (id + items[0]));

            if ((items.size() == 2))
            {
                if ((id == "[]"_fu))
                {
                    if ((head.type.canon == "string"_fu))
                        return (((("fu_TO_STR("_fu + items[0]) + "["_fu) + items[1]) + "])"_fu);

                    if ((node.type.quals & q_mutref))
                        return (((items[0] + ".mutref("_fu) + items[1]) + ")"_fu);

                    return (((items[0] + "["_fu) + items[1]) + "]"_fu);
                };
                if ((id == "="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()).type))
                            return (((((("("_fu + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()), 0)) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(fu_STR{}); }()), 0)) + ") = "_fu) + items[1]) + ")"_fu);

                    };
                };
                if ((id == "||="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()).type))
                            items.mutref(0) = (((cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()), 0) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(fu_STR{}); }()), 0)) + ")"_fu);

                    };
                    fu_STR annot = typeAnnot(head.type, 0);
                    return (((((((((("([&]("_fu + annot) + " _) -> "_fu) + annot) + " { if (!"_fu) + boolWrap(head.type, "_"_fu)) + ") _ = "_fu) + items[1]) + "; return _; } ("_fu) + items[0]) + "))"_fu);
                };
                if ((id == "+="_fu))
                {
                    if (((head.type.canon == t_string.canon) || type_isArray(head.type)))
                    {
                        if (isFieldChain(node.items[0]))
                        {
                            if (((node.items[1].value == "+"_fu) && (node.items[1].type.canon == head.type.canon)))
                                return cgAppend(node, items[0]);

                        };
                    };
                };
                if ((mode & M_STMT))
                    return ((((items[0] + " "_fu) + id) + " "_fu) + items[1]);
                else
                    return (((((("("_fu + items[0]) + " "_fu) + id) + " "_fu) + items[1]) + ")"_fu);

            };
        };
        if (((id == "len"_fu) && (items.size() == 1)))
            return (items[0] + ".size()"_fu);

        if (((id == "push"_fu) && (items.size() == 2)))
            return (((items[0] + ".push("_fu) + items[1]) + ")"_fu);

        if (((id == "pop"_fu) && (items.size() == 1)))
            return (items[0] + ".pop()"_fu);

        if (((id == "unshift"_fu) && (items.size() == 2)))
            return (((items[0] + ".unshift("_fu) + items[1]) + ")"_fu);

        if (((id == "insert"_fu) && (items.size() == 3)))
            return (((((items[0] + ".insert("_fu) + items[1]) + ", "_fu) + items[2]) + ")"_fu);

        if (((id == "splice"_fu) && (items.size() == 3)))
            return (((((items[0] + ".splice("_fu) + items[1]) + ", "_fu) + items[2]) + ")"_fu);

        if (((id == "grow"_fu) && (items.size() == 2)))
            return (((items[0] + ".grow("_fu) + items[1]) + ")"_fu);

        if (((id == "shrink"_fu) && (items.size() == 2)))
            return (((items[0] + ".shrink("_fu) + items[1]) + ")"_fu);

        if (((id == "resize"_fu) && (items.size() == 2)))
            return (((items[0] + ".resize("_fu) + items[1]) + ")"_fu);

        if (((id == "clear"_fu) && (items.size() == 1)))
            return (items[0] + ".clear()"_fu);

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
        if (((id == "ends"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::rmatch("_fu + fu::join(items, ", "_fu)) + ")"_fu);
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
            return (((("slice("_fu + items[0]) + ", "_fu) + items[1]) + ")"_fu);

        if (((id == "slice"_fu) && (items.size() == 3)))
            return (((((("slice("_fu + items[0]) + ", "_fu) + items[1]) + ", "_fu) + items[2]) + ")"_fu);

        if (((id == "substr"_fu) && (items.size() == 3)))
            return (((((("substr("_fu + items[0]) + ", "_fu) + items[1]) + ", "_fu) + items[2]) + ")"_fu);

        if (((id == "sort"_fu) && (items.size() == 1)))
        {
            include("\"../lib/vec/sort.h\""_fu);
            return (("fu::sort("_fu + items[0]) + ")"_fu);
        };
        if (((id == "char"_fu) && (items.size() == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }());
            if ((head.type.canon == "string"_fu))
                return (((("int("_fu + items[0]) + "["_fu) + items[1]) + "])"_fu);

        };
        if ((((id == "true"_fu) || (id == "false"_fu)) && !items.size()))
            return id;

        if (((id == "throw"_fu) && (items.size() == 1)))
            return cgThrow(id, items[0]);

        if (((id == "assert"_fu) && (items.size() == 0)))
            return cgThrow(id, "\"Assertion failed.\""_fu);

        if (((id == "join"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/join.h\""_fu);
            return (("fu::join("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "split"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/split.h\""_fu);
            return (("fu::split("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "keys"_fu) && (items.size() == 1)))
            return (items[0] + ".m_keys"_fu);

        if (((id == "CLONE"_fu) && (items.size() == 1)))
            return cgClone(node.type, items[0]);

        if (((id == "STEAL"_fu) && (items.size() == 1)))
            return cgSteal(items[0]);

        if (((id == "SWAP"_fu) && (items.size() == 2)))
            return cgSwap(items);

        if ((id == "print"_fu))
            return cgPrint(items);

        if (((id == "now_hr"_fu) || (id == "now_utc"_fu)))
        {
            include("\"../lib/now.h\""_fu);
            return (("fu::"_fu + id) + "()"_fu);
        };
        if (((id == "file_write"_fu) || (id == "file_read"_fu) || (id == "file_size"_fu) || (id == "fs_cwd"_fu) || (id == "fs_mkdir_p"_fu)))
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
        ((id != "__native"_fu) || fu::fail("Assertion failed."));
        return (((ID(id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgAppend(const s_SolvedNode& node, const fu_STR& into)
    {
        fu_STR src = "("_fu;
        cgAppend_visit(node.type.canon, into, node.items[1], src);
        src += ")"_fu;
        return src;
    };
    void cgAppend_visit(const fu_STR& canon, const fu_STR& into, const s_SolvedNode& stuff, fu_STR& src)
    {
        if (((stuff.kind != "call"_fu) || (stuff.value != "+"_fu) || (stuff.type.canon != canon) || (stuff.items.size() != 2)))
        {
            fu_STR val = cgNode(stuff, 0);
            if ((src.size() > 1))
                src += ", "_fu;

            (src += into, src += " += "_fu, src += val);
        }
        else
        {
            cgAppend_visit(canon, into, stuff.items[0], src);
            cgAppend_visit(canon, into, stuff.items[1], src);
        };
    };
    fu_STR cgPrint(const fu_VEC<fu_STR>& items)
    {
        include("<iostream>"_fu);
        fu_STR src = "(std::cout"_fu;
        for (int i = 0; (i < items.size()); i++)
            (src += " << "_fu, src += items[i]);

        src += " << \"\\n\")"_fu;
        return src;
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
    fu_STR cgLiteral(const s_SolvedNode& node)
    {
        return (node.value ? node.value : fail(fu_STR{}));
    };
    fu_STR cgEmpty()
    {
        return fu_STR{};
    };
    fu_STR cgIf(const s_SolvedNode& node, const int mode)
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
            return (((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent + "else"_fu) + alt) : fu_STR{}));

        if ((cons && alt))
            return (((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu);

        if (cons)
            return (((("("_fu + cond) + " && "_fu) + cons) + ")"_fu);

        if (alt)
            return (((("("_fu + cond) + " || "_fu) + alt) + ")"_fu);

        fail("TODO"_fu);
    };
    fu_STR boolWrap(const s_Type& type, const fu_STR& src)
    {
        if (type)
        {
        };
        return src;
    };
    fu_STR cgDefault(const s_Type& type)
    {
        ((type.quals & q_mutref) && fail("Cannot definit mutrefs."_fu));
        if ((type.quals & q_ref))
        {
            include("\"../lib/default.h\""_fu);
            return (("fu::Default<"_fu + typeAnnot(clear_refs(type), 0)) + ">::value"_fu);
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
            fu_STR src {};
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
                (src += "{ "_fu, src += typeAnnot(type, 0), src += " _ = "_fu, src += tail, src += "; "_fu);
                (src += "if (!"_fu, src += boolWrap(type, "_"_fu), src += ") return _; } "_fu);
                (src += cgNode(items[(items.size() - 1)], 0), src += ";"_fu);
            }
            else
            {
                (src += "return "_fu, src += tail, src += ";"_fu);
                (src += " else return "_fu, src += cgDefault(type), src += ";"_fu);
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
            bool ternary = true;
            for (int i = 0; (i < (node.items.size() - 1)); i++)
            {
                if (!isFieldChain(node.items[i]))
                {
                    ternary = false;
                    break;
                };
                if (ternary)
                {
                    fu_STR src = "("_fu;
                    for (int i = 0; (i < (node.items.size() - 1)); i++)
                    {
                        const s_SolvedNode& n = node.items[i];
                        fu_STR item = cgNode(n, 0);
                        (src += boolWrap(n.type, item), src += " ? "_fu, src += item, src += " : "_fu);
                    };
                    (src += cgNode(node.items[(node.items.size() - 1)], 0), src += ")"_fu);
                    return src;
                };
            };
            fu_STR annot = typeAnnot(type, 0);
            fu_STR src = (("([&]() -> "_fu + annot) + " {"_fu);
            const fu_VEC<s_SolvedNode>& items = node.items;
            for (int i = 0; (i < (items.size() - 1)); i++)
            {
                const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }());
                s_SolvedNode tail { item };
                if ((item.kind == "and"_fu))
                {
                    const fu_VEC<s_SolvedNode>& items = item.items;
                    tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(fu_STR{}); }());
                    src += " if ("_fu;
                    for (int i = 0; (i < (items.size() - 1)); i++)
                    {
                        if (i)
                            src += " && "_fu;

                        const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }());
                        src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                    };
                    src += ")"_fu;
                };
                (src += " { "_fu, src += annot, src += " _ = "_fu, src += cgNode(tail, 0), src += "; if ("_fu, src += boolWrap(tail.type, "_"_fu), src += ") return _; }"_fu);
            };
            const s_SolvedNode& tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(fu_STR{}); }());
            if (!(tail.type == t_never))
                src += " return"_fu;

            (src += " "_fu, src += cgNode(tail, 0), src += "; }())"_fu);
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
    bool isFieldChain(const s_SolvedNode& node)
    {
        if ((node.kind != "call"_fu))
            return false;

        s_Overload t = GET(node.target, module, ctx);
        if ((t.kind == "field"_fu))
            return isFieldChain(only(node.items));

        if (((t.kind == "var"_fu) || (t.kind == "const"_fu)))
            return true;

        return false;
    };
    fu_STR postfixBlock(const fu_STR& src, const fu_STR& postfix)
    {
        ((fu_TO_STR(src[(src.size() - 1)]) == "}"_fu) || fail(fu_STR{}));
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
        fu_STR breakLabel {};
        if ((body && node.value))
        {
            fu_STR brk = (("L_"_fu + node.value) + "_b"_fu);
            fu_STR cnt = (("L_"_fu + node.value) + "_c"_fu);
            if (fu::has(body, cnt))
                body = ("{"_fu + postfixBlock(body, (((_indent + "    }"_fu) + cnt) + ":;"_fu)));

            if (fu::has(body, brk))
                breakLabel = (((_indent + "    "_fu) + brk) + ":;"_fu);

        };
        if (pcnd)
        {
            if ((init || post || cond))
                fail("TODO extended loop."_fu);

            return (((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel);
        };
        if ((init || post || !cond))
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
        (src += _indent, src += "try"_fu);
        (src += _indent, src += "{"_fu);
        (src += _indent, src += "    "_fu, src += let_main.value, src += " = "_fu, src += let_init, src += ";"_fu);
        (src += _indent, src += "}"_fu);
        (src += _indent, src += "catch (const std::exception& o_0)"_fu);
        (src += _indent, src += "{"_fu);
        (src += _indent, src += "    const fu_STR& "_fu, src += err_id, src += " = fu_TO_STR(o_0.what());"_fu);
        (src += _indent, src += catch_body);
        (src += _indent, src += "}\n"_fu);
        return src;
    };
    fu_STR cgNode(const s_SolvedNode& node, const int mode)
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
        fu_STR a = cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }()), 0);
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
    fu_VEC<fu_STR> cgNodes(const fu_VEC<s_SolvedNode>& nodes, const int mode)
    {
        fu_VEC<fu_STR> result {};
        for (int i = 0; (i < nodes.size()); i++)
        {
            const s_SolvedNode& node = nodes[i];
            fu_STR src = (node ? cgNode(node, mode) : fu_STR{});
            result.push(src);
        };
        return result;
    };
    fu_STR cpp_codegen_EVAL()
    {
        ((root.kind == "root"_fu) || fail(fu_STR{}));
        fu_STR src = cgNode(root, 0);
        return src;
    };
};

} // namespace

fu_STR cpp_codegen(const s_SolvedNode& root, const s_Scope& scope, const s_Module& module, const s_Context& ctx)
{
    return (sf_cpp_codegen { root, scope, module, ctx }).cpp_codegen_EVAL();
}

