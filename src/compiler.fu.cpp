#include "../lib/env.h"
#include "../lib/io.h"
#include "../lib/map.h"
#include "../lib/now.h"
#include "../lib/shell.h"
#include "../lib/str.h"
#include "../lib/tea.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include "../lib/vec/replace.h"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

struct fu_NEVER
{
    fu_NEVER(const fu_NEVER&) = delete;
    void operator=(const fu_NEVER&) = delete;

    template<typename T>
    [[noreturn]] operator T() const
    {
        throw std::runtime_error("fu_NEVER cast");
    }
};

struct s_BINOP;
struct s_LexerOutput;
struct s_MapFields;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Scope;
struct s_ScopeIdx;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_TEMP_Context;
struct s_Template;
struct s_Token;
struct s_Type;
template <typename T>
fu_VEC<T> fu_CONCAT(
    const fu_VEC<T>& a,
    const fu_VEC<T>& b)
{
    fu_VEC<T> result;
    result.reserve(a.size() + b.size());

    for (const auto& i : a) result.push(i);
    for (const auto& i : b) result.push(i);

    return result;
}

inline fu_STR fu_JOIN(
    const fu_VEC<fu_STR>& vec,
    const fu_STR& sep)
{
    int len = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (i)
            len += sep.size();

        len += vec[i].size();
    }

    fu_STR result;
    result.reserve(len);
    for (int i = 0; i < vec.size(); i++)
    {
        if (i)
            result += sep;

        result += vec[i];
    }

    return result;
}

template <typename K, typename V>
fu_VEC<K> fu_KEYS(
    const fu_COW_MAP<K, V>& map)
{
    return map.m_keys;
}

inline fu_VEC<fu_STR> fu_SPLIT(
    fu_STR s,
    const fu_STR& sep)
{
    fu_VEC<fu_STR> result;

    int next;
    while ((next = fu::lfind(s, sep)) >= 0)
    {
        result.push(slice(s, 0, next));
        s = slice(s, next + sep.size());
    }

    result.push(static_cast<fu_STR&&>(s));
    return result;
}

[[noreturn]] fu_NEVER fu_THROW(const char* what)
{
    throw std::runtime_error(what);
}

template <typename T>
[[noreturn]] fu_NEVER fu_THROW(const T& what)
{
    throw std::runtime_error(
        std::string(
            what.data(), size_t(what.size())));
}

bool operator==(const s_Type& a, const s_Type& b);
bool someFieldNonCopy(const fu_VEC<s_StructField>& fields);
fu_STR ZERO(const fu_STR& src);
int ZERO();
int copyOrMove(const int& flags, const fu_VEC<s_StructField>& fields);
s_SolverOutput solve(const s_Node& parse, s_TEMP_Context& ctx);
s_Type createArray(const s_Type& item, s_TEMP_Context& ctx);
void runTestSuite();
struct s_Token
{
    fu_STR kind;
    fu_STR value;
    fu_STR fname;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || value.size()
            || fname.size()
            || idx0
            || idx1
            || line
            || col
        ;
    }
};

struct s_Type
{
    fu_STR canon;
    int quals;
    explicit operator bool() const noexcept
    {
        return false
            || canon.size()
            || quals
        ;
    }
};

struct s_ScopeIdx
{
    int raw;
    explicit operator bool() const noexcept
    {
        return false
            || raw
        ;
    }
};

struct s_SolvedNode
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_Token token;
    s_Type type;
    s_ScopeIdx target;
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

struct s_BINOP
{
    fu_COW_MAP<fu_STR, int> PRECEDENCE;
    fu_COW_MAP<int, bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE
            || RIGHT_TO_LEFT
        ;
    }
};

struct s_Node
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_Node> items;
    s_Token token;
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

struct s_ModuleInputs
{
    fu_STR fname;
    fu_STR src;
    s_LexerOutput lex;
    s_ParserOutput parse;
    explicit operator bool() const noexcept
    {
        return false
            || fname.size()
            || src.size()
            || lex
            || parse
        ;
    }
};

struct s_ScopeItem
{
    fu_STR id;
    s_ScopeIdx index;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || index
        ;
    }
};

struct s_Partial
{
    s_ScopeIdx via;
    s_ScopeIdx target;
    explicit operator bool() const noexcept
    {
        return false
            || via
            || target
        ;
    }
};

struct s_Template
{
    s_Node node;
    fu_COW_MAP<fu_STR, s_SolvedNode> specializations;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || specializations
        ;
    }
};

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
        ;
    }
};

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

struct s_ModuleOutputs
{
    fu_VEC<fu_STR> absimports;
    s_SolverOutput solve;
    fu_STR cpp;
    explicit operator bool() const noexcept
    {
        return false
            || absimports
            || solve
            || cpp.size()
        ;
    }
};

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

struct s_Module
{
    int id;
    s_ModuleInputs in;
    s_ModuleOutputs out;
    s_ModuleStats stats;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || in
            || out
            || stats
        ;
    }
};

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

struct s_TEMP_Context
{
    fu_COW_MAP<fu_STR, s_Struct> types;
    fu_COW_MAP<fu_STR, s_Module> modules;
    explicit operator bool() const noexcept
    {
        return false
            || types
            || modules
        ;
    }
};

struct s_MapFields
{
    s_Type key;
    s_Type value;
    explicit operator bool() const noexcept
    {
        return false
            || key
            || value
        ;
    }
};
inline const bool WARN_ON_IMPLICIT_COPY = false;
inline const bool WRITE_COMPILER = true;

fu_STR last(const fu_STR& s)
{
    return (s.size() ? fu_TO_STR(s[(s.size() - 1)]) : ""_fu);
}

s_SolvedNode only(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu_THROW(("LEN != 1: "_fu + s.size())));
}

bool hasIdentifierChars(const fu_STR& id)
{
    for (int i = 0; (i < id.size()); i++)
    {
        fu_STR c = fu_TO_STR(id[i]);
        if (((c == "_"_fu) || ((c >= "a"_fu) && (c <= "z"_fu)) || ((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "0"_fu) && (c <= "9"_fu))))
            return true;

    };
    return false;
}
inline const fu_STR OPTOKENS = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;
inline const fu_VEC<fu_STR> OPERATORS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<61> { "+"_fu, "++"_fu, "-"_fu, "--"_fu, "*"_fu, "**"_fu, "/"_fu, "%"_fu, "<"_fu, "<<"_fu, "<<<"_fu, ">"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "<=>"_fu, "!"_fu, "?"_fu, "??"_fu, "."_fu, ".."_fu, "..."_fu, ":"_fu, "::"_fu, ","_fu, ";"_fu, "&"_fu, "&&"_fu, "|"_fu, "||"_fu, "^"_fu, "~"_fu, "{"_fu, "}"_fu, "["_fu, "]"_fu, "("_fu, ")"_fu, "[]"_fu, "="_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "&&="_fu, "||="_fu, "@"_fu, "#"_fu, "$"_fu } };

struct sf_lex
{
    const fu_STR& src;
    const fu_STR& fname;
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    fu_VEC<s_Token> tokens {};
    void token(const fu_STR& kind, const fu_STR& value, const int& idx0, const int& idx1)
    {
        const int col = (idx0 - lidx);
        tokens.push(s_Token { fu_STR(kind), fu_STR(value), fu_STR(fname), int(idx0), int(idx1), int(line), int(col) });
    };
    void err_str(const fu_STR& kind, const int& idx0, const fu_STR& reason)
    {
        while (((idx < end) && (fu_TO_STR(src[idx]) > " "_fu)))
            idx++;

        const int col = (idx0 - lidx);
        fu_STR value = slice(src, idx0, idx);
        fu_THROW((((((((((((("LEX ERROR: "_fu + fname) + "@"_fu) + line) + ":"_fu) + col) + ":\n\t"_fu) + reason) + "\n\t"_fu) + kind) + ": `"_fu) + value) + "`"_fu));
    };
    void err(const fu_STR& kind, const int& idx0, const int& reason)
    {
        err_str(kind, idx0, fu_TO_STR(src[reason]));
    };
    fu_STR checkNum(const fu_STR& kind, const fu_STR& src)
    {
        if (src.size())
        {
        };
        return kind;
    };
    fu_STR unescapeStr(const fu_STR& src, const int& idx0, const int& idx1)
    {
        fu_STR out = ""_fu;
        const int n = (idx1 - 1);
        for (int i = (idx0 + 1); (i < n); i++)
        {
            fu_STR c = fu_TO_STR(src[i]);
            if ((c == "\\"_fu))
            {
                fu_STR c1 = fu_TO_STR(src[++i]);
                if ((c1 == "n"_fu))
                    out += "\n"_fu;
                else if ((c1 == "r"_fu))
                    out += "\r"_fu;
                else if ((c1 == "t"_fu))
                    out += "\t"_fu;
                else if ((c1 == "v"_fu))
                    out += "\v"_fu;
                else
                    out += c1;

            }
            else
                out += c;

        };
        return out;
    };
    s_LexerOutput lex_EVAL()
    {
        while ((idx < end))
        {
            const int idx0 = idx;
            fu_STR c = fu_TO_STR(src[idx++]);
            if ((c <= " "_fu))
            {
                if ((c == "\n"_fu))
                {
                    line++;
                    lidx = (idx - 1);
                };
            }
            else if ((((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "a"_fu) && (c <= "z"_fu)) || (c == "_"_fu)))
            {
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if ((((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "a"_fu) && (c <= "z"_fu)) || (c == "_"_fu) || ((c >= "0"_fu) && (c <= "9"_fu))))
                    {
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                const int idx1 = idx;
                token("id"_fu, slice(src, idx0, idx1), idx0, idx1);
            }
            else if (((c >= "0"_fu) && (c <= "9"_fu)))
            {
                bool hex = false;
                bool dot = false;
                bool exp = false;
                if (((c == "0"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "x"_fu)))
                {
                    hex = true;
                    idx++;
                };
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if (((c >= "0"_fu) && (c <= "9"_fu)))
                    {
                    }
                    else if ((c == "."_fu))
                    {
                        if ((hex || dot || exp))
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                        dot = true;
                    }
                    else if ((((c == "e"_fu) || (c == "E"_fu)) && !hex))
                    {
                        if ((hex || exp))
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                        if (((idx < end) && ((fu_TO_STR(src[idx]) == "-"_fu) || (fu_TO_STR(src[idx]) == "+"_fu))))
                            idx++;

                        exp = true;
                    }
                    else if ((((c >= "a"_fu) && (c <= "f"_fu)) || ((c >= "A"_fu) && (c <= "F"_fu))))
                    {
                        if (!hex)
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                fu_STR trail = fu_TO_STR(src[(idx - 1)]);
                if ((!((trail >= "0"_fu) && (trail <= "9"_fu)) && !(hex && (((trail >= "a"_fu) && (trail <= "f"_fu)) || ((trail >= "A"_fu) && (trail <= "F"_fu))))))
                    err("num"_fu, idx0, (idx - 1));
                else
                {
                    const int idx1 = idx;
                    fu_STR str = slice(src, idx0, idx1);
                    token(checkNum(((dot || exp) ? "num"_fu : "int"_fu), str), str, idx0, idx1);
                };
            }
            else if (((c == "'"_fu) || (c == "\""_fu) || (c == "`"_fu)))
            {
                bool esc = false;
                bool ok = false;
                while ((idx < end))
                {
                    fu_STR c1 = fu_TO_STR(src[idx++]);
                    if ((c1 == c))
                    {
                        ok = true;
                        break;
                    }
                    else if ((c1 == "\\"_fu))
                    {
                        esc = true;
                        idx++;
                    }
                    else if ((c1 == "\n"_fu))
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
                if (!ok)
                    err_str("str"_fu, idx0, "Unterminated string literal."_fu);
                else
                {
                    const int idx1 = idx;
                    fu_STR str = (esc ? unescapeStr(src, idx0, idx1) : slice(src, (idx0 + 1), (idx1 - 1)));
                    token("str"_fu, str, idx0, idx1);
                };
            }
            else if (((c == "/"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "/"_fu)))
            {
                idx++;
                while ((idx < end))
                {
                    fu_STR c1 = fu_TO_STR(src[idx++]);
                    if ((c1 == "\n"_fu))
                    {
                        line++;
                        lidx = (idx - 1);
                        break;
                    };
                };
            }
            else if (((c == "/"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "*"_fu)))
            {
                idx++;
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if ((c == "\n"_fu))
                    {
                        line++;
                        lidx = (idx - 1);
                    }
                    else if (((c == "*"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "/"_fu)))
                    {
                        idx++;
                        break;
                    };
                };
            }
            else if (fu::has(OPTOKENS, c))
            {
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if (!fu::has(OPTOKENS, c))
                    {
                        idx--;
                        break;
                    };
                };
                
                {
                    int begin = idx0;
                    int end = idx;
                    while ((begin < end))
                    {
                        fu_STR candidate = slice(src, begin, end);
                        const bool ok = fu::has(OPERATORS, candidate);
                        if (((end > (begin + 1)) && !ok))
                        {
                            end--;
                            continue;
                        };
                        if (!ok)
                            err("op"_fu, begin, end);
                        else
                            token("op"_fu, candidate, begin, end);

                        begin = end;
                        end = idx;
                    };
                };
            }
            else
                err("?"_fu, idx0, idx0);

        };
        line++;
        lidx = (idx + 0);
        token("eof"_fu, "eof"_fu, idx, idx);
        return s_LexerOutput { fu_STR(fname), fu_VEC<s_Token>(tokens) };
    };
};

#define lex(...) ((sf_lex { __VA_ARGS__ }).lex_EVAL())
inline const int F_METHOD = (1 << 0);
inline const int F_INFIX = (1 << 1);
inline const int F_PREFIX = (1 << 2);
inline const int F_POSTFIX = (1 << 3);
inline const int F_ACCESS = (1 << 4);
inline const int F_ID = (1 << 5);
inline const int F_INDEX = (1 << 6);
inline const int F_LOCAL = (1 << 8);
inline const int F_ARG = (1 << 9);
inline const int F_FIELD = (1 << 10);
inline const int F_MUT = (1 << 16);
inline const int F_IMPLICIT = (1 << 17);
inline const int F_USING = (1 << 18);
inline const int F_UNTYPED_ARGS = (1 << 24);
inline const int F_NAMED_ARGS = (1 << 25);
inline const int F_FULLY_TYPED = (1 << 26);
inline const int F_CLOSURE = (1 << 27);
inline const int F_HAS_CLOSURE = (1 << 28);
inline const int F_PATTERN = (1 << 29);
inline const int F_TEMPLATE = (1 << 30);
inline const int F_DESTRUCTOR = (1 << 31);
inline const int P_RESET = 1000;
inline const int P_PREFIX_UNARY = 3;
inline const fu_VEC<fu_STR> PREFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<10> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };
inline const fu_VEC<fu_STR> POSTFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "++"_fu, "--"_fu, "[]"_fu } };

struct sf_setupOperators
{
    s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    void binop(const fu_VEC<fu_STR>& ops)
    {
        precedence++;
        (out.RIGHT_TO_LEFT.upsert(precedence) = rightToLeft);
        for (int i = 0; (i < ops.size()); i++)
            (out.PRECEDENCE.upsert(ops[i]) = precedence);

    };
    s_BINOP& setupOperators_EVAL()
    {
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "as"_fu, "is"_fu } });
        rightToLeft = true;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "**"_fu } });
        rightToLeft = false;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "*"_fu, "/"_fu, "%"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "+"_fu, "-"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "<<"_fu, ">>"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "&"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "^"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "|"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "<"_fu, "<="_fu, ">"_fu, ">="_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "=="_fu, "!="_fu, "<=>"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "->"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "&&"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "||"_fu } });
        rightToLeft = true;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "?"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<14> { "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu } });
        rightToLeft = false;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { ","_fu } });
        return out;
    };
};

#define setupOperators(...) ((sf_setupOperators { __VA_ARGS__ }).setupOperators_EVAL())
inline const s_BINOP BINOP { setupOperators() };
inline const int& P_COMMA = ([]() -> const int& { { const int& _ = BINOP.PRECEDENCE[","_fu]; if (_) return _; } fu_THROW("Assertion failed."); }());
inline const int LET_TYPE = 0;
inline const int LET_INIT = 1;
inline const int FN_RET_BACK = -2;
inline const int FN_BODY_BACK = -1;
inline const int& FN_ARGS_BACK = FN_RET_BACK;
inline const int LOOP_INIT = 0;
inline const int LOOP_COND = 1;
inline const int LOOP_POST = 2;
inline const int LOOP_BODY = 3;
inline const int LOOP_POST_COND = 4;

struct sf_parse
{
    const fu_STR& fname;
    const fu_VEC<s_Token>& _tokens;
    int _idx = 0;
    s_Token _loc { _tokens[0] };
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _numReturns = 0;
    int _implicits = 0;
    fu_STR _structName = ""_fu;
    fu_VEC<fu_STR> _dollars {};
    fu_VEC<fu_STR> _imports {};
    [[noreturn]] fu_NEVER fail(fu_STR&& reason)
    {
        const s_Token& here = _tokens[_idx];
        if (!reason.size())
            reason = (("Unexpected `"_fu + here.value) + "`."_fu);

        const int l0 = _loc.line;
        const int c0 = _loc.col;
        const int& l1 = here.line;
        const int& c1 = here.col;
        fu_STR addr = ((l1 == l0) ? ((("@"_fu + l1) + ":"_fu) + c1) : ((((((("@"_fu + l0) + ":"_fu) + c0) + ".."_fu) + l1) + ":"_fu) + c1));
        fu_THROW(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
    };
    [[noreturn]] fu_NEVER fail_Lint(const fu_STR& reason)
    {
        fail(("Lint: "_fu + reason));
    };
    s_Node make(const fu_STR& kind, const fu_VEC<s_Node>& items, const int& flags, const fu_STR& value)
    {
        return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_Token(([&]() -> s_Token& { { s_Token& _ = _loc; if (_) return _; } fu_THROW("no loc"_fu); }())) };
    };
    s_Node miss()
    {
        return s_Node { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_Node>{}, s_Token{} };
    };
    s_Token consume(const fu_STR& kind, const fu_STR& value)
    {
        const s_Token& token = _tokens[_idx];
        if (((token.kind == kind) && (!value.size() || (token.value == value))))
        {
            _idx++;
            return token;
        };
        fail((((("Expected `"_fu + ([&]() -> const fu_STR& { { const fu_STR& _ = value; if (_.size()) return _; } return kind; }())) + "`, got `"_fu) + token.value) + "`."_fu));
    };
    s_Token tryConsume(const fu_STR& kind, const fu_STR& value)
    {
        const s_Token& token = _tokens[_idx];
        if (((token.kind == kind) && (!value.size() || (token.value == value))))
        {
            _idx++;
            return token;
        };
        return s_Token { fu_STR{}, fu_STR{}, fu_STR{}, int{}, int{}, int{}, int{} };
    };
    s_Node parseRoot()
    {
        _loc = _tokens[_idx];
        s_Node out = make("root"_fu, parseBlockLike("eof"_fu, "eof"_fu, ""_fu), 0, ""_fu);
        if (_implicits)
            out.flags |= F_IMPLICIT;

        return out;
    };
    s_Node parseBlock()
    {
        return createBlock(parseBlockLike("op"_fu, "}"_fu, ""_fu));
    };
    s_Node createBlock(const fu_VEC<s_Node>& items)
    {
        return make("block"_fu, items, 0, ""_fu);
    };
    s_Node parseStructDecl()
    {
        s_Token name = tryConsume("id"_fu, ""_fu);
        const fu_STR& id = ([&]() -> const fu_STR& { if (name) { const fu_STR& _ = name.value; if (_.size()) return _; } fail("Anon structs."_fu); }());
        fu_STR structName0 { _structName };
        _structName = id;
        consume("op"_fu, "{"_fu);
        fu_VEC<s_Node> items = parseBlockLike("op"_fu, "}"_fu, "struct"_fu);
        _structName = structName0;
        return make("struct"_fu, items, 0, (name ? fu_STR(name.value) : ""_fu));
    };
    s_Node parseStructItem()
    {
        const s_Token& token = _tokens[_idx++];
        if (((token.kind == "op"_fu) || (token.kind == "id"_fu)))
        {
            if ((token.value == "fn"_fu))
                return parseStructMethod();

        };
        _idx--;
        s_Node member = parseLet();
        member.flags |= F_FIELD;
        consume("op"_fu, ";"_fu);
        return member;
    };
    s_Node parseStructMethod()
    {
        s_Node fnNode = parseFnDecl();
        s_Node typeAnnot = createPrefix("&"_fu, createRead(([&]() -> fu_STR& { { fu_STR& _ = _structName; if (_.size()) return _; } fail(""_fu); }())));
        fnNode.items.unshift(createLet("this"_fu, F_USING, typeAnnot, miss()));
        fnNode.flags |= F_METHOD;
        return fnNode;
    };
    fu_VEC<s_Node> parseBlockLike(const fu_STR& endKind, const fu_STR& endVal, const fu_STR& mode)
    {
        const int& line0 = _tokens[_idx].line;
        const int col00 = _col0;
        fu_VEC<s_Node> items = fu_VEC<s_Node>{};
        while (true)
        {
            const s_Token& token = _tokens[_idx];
            if (((token.kind == endKind) && (token.value == endVal)))
            {
                _col0 = col00;
                _idx++;
                const int& line1 = token.line;
                const int& col1 = token.col;
                ((line1 == line0) || (col1 == _col0) || fail_Lint((((((((("Bad closing `"_fu + token.value) + "` indent, expecting "_fu) + (_col0 - 1)) + ", got "_fu) + (col1 - 1)) + ". Block starts on line "_fu) + line0) + "."_fu)));
                break;
            };
            _col0 = token.col;
            ((_col0 > col00) || fail_Lint((((("Bad indent, expecting more than "_fu + col00) + ". Block starts on line "_fu) + line0) + "."_fu)));
            s_Node expr = (mode.size() ? parseStructItem() : parseStatement());
            ((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.items.size() > 1) || fail_Lint("Orphan pure-looking expression."_fu));
            const int exprIdx = items.size();
            if ((expr.kind != "empty"_fu))
                items.push(expr);

            if ((expr.kind == "struct"_fu))
                unwrapStructMethods(items, exprIdx);

        };
        return items;
    };
    void unwrapStructMethods(fu_VEC<s_Node>& out, const int& structNodeIdx)
    {
        s_Node structNode { out.mutref(structNodeIdx) };
        fu_VEC<s_Node>& members = structNode.items;
        for (int i = 0; (i < members.size()); i++)
        {
            s_Node& item = members.mutref(i);
            if ((item.kind == "fn"_fu))
            {
                if ((item.value == "free"_fu))
                {
                    structNode.flags |= F_DESTRUCTOR;
                    item.flags |= F_DESTRUCTOR;
                };
                ((item.items.size() >= 2) || fail(""_fu));
                out.push(item);
                members.splice(i--, 1);
            };
        };
        out.mutref(structNodeIdx) = structNode;
    };
    s_Node parseStatement()
    {
        s_Token loc0 { _loc };
        s_Token token { (_loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens[_idx++]; if (_) return _; } fail(""_fu); }())) };
        if ((token.kind == "op"_fu))
        {
            const fu_STR& v = token.value;
            if ((v == "{"_fu))
                return parseBlock();

            if ((v == ";"_fu))
                return parseEmpty();

            if ((v == ":"_fu))
                return parseLabelledStatement();

            if ((v == "#"_fu))
                return parsePragma();

        }
        else if ((token.kind == "id"_fu))
        {
            const fu_STR& v = token.value;
            if ((v == "let"_fu))
                return parseLetStmt();

            if ((v == "mut"_fu))
                return ((void)_idx--, parseLetStmt());

            if ((v == "if"_fu))
                return parseIf();

            if ((v == "return"_fu))
                return parseReturn();

            if ((v == "for"_fu))
                return parseFor();

            if ((v == "while"_fu))
                return parseWhile();

            if ((v == "do"_fu))
                return parseDoWhile();

            if ((v == "break"_fu))
                return parseJump("break"_fu);

            if ((v == "continue"_fu))
                return parseJump("continue"_fu);

            if ((v == "fn"_fu))
                return parseFnDecl();

            if ((v == "struct"_fu))
                return parseStructDecl();

            if ((v == "pub"_fu))
                return parseStatement();

        };
        _idx--;
        _loc = loc0;
        return parseExpressionStatement();
    };
    s_Node parsePragma()
    {
        fu_STR v = consume("id"_fu, ""_fu).value;
        if ((v == "import"_fu))
            return parseImport();

        fail((("Unknown #pragma: `"_fu + v) + "`."_fu));
    };
    s_Node parseImport()
    {
        fu_STR value = consume("str"_fu, ""_fu).value;
        if (!fu::has(_imports, value))
            _imports.push(value);

        consume("op"_fu, ";"_fu);
        return make("import"_fu, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node parseLabelledStatement()
    {
        s_Token label = consume("id"_fu, ""_fu);
        s_Node stmt = parseStatement();
        if ((stmt.kind == "loop"_fu))
        {
            (stmt.value.size() && fail(""_fu));
            stmt.value = ([&]() -> const fu_STR& { { const fu_STR& _ = label.value; if (_.size()) return _; } fail(""_fu); }());
            return stmt;
        };
        fail(""_fu);
    };
    s_Node parseEmpty()
    {
        return make("empty"_fu, fu_VEC<s_Node>{}, 0, ""_fu);
    };
    s_Node parseExpressionStatement()
    {
        s_Node expr = parseExpression(int(P_RESET));
        consume("op"_fu, ";"_fu);
        return expr;
    };
    s_Node parseFnDecl()
    {
        fu_VEC<fu_STR> dollars0 { _dollars };
        const int numReturns0 = _numReturns;
        s_Token name = ([&]() -> s_Token { { s_Token _ = tryConsume("id"_fu, ""_fu); if (_) return _; } return tryConsume("op"_fu, ""_fu); }());
        consume("op"_fu, "("_fu);
        fu_VEC<s_Node> items {};
        int flags = parseArgsDecl(items, "op"_fu, ")"_fu);
        _fnDepth++;
        s_Node type = tryPopTypeAnnot();
        const int retIdx = items.size();
        items.push(type);
        flags |= parseFnBodyOrPattern(items);
        if ((!type && (_numReturns == numReturns0)))
            items.mutref(retIdx) = (type = createRead("void"_fu));

        if (type)
            flags |= F_FULLY_TYPED;

        
        {
            _fnDepth--;
            _numReturns = numReturns0;
            if ((_dollars.size() > dollars0.size()))
                flags |= F_TEMPLATE;

            _dollars = dollars0;
        };
        return make("fn"_fu, items, flags, name.value);
    };
    int parseFnBodyOrPattern(fu_VEC<s_Node>& out_push_body)
    {
        int flags = 0;
        s_Node body {};
        if (tryConsume("id"_fu, "case"_fu))
        {
            fu_VEC<s_Node> branches = fu_VEC<s_Node>{};
            flags |= F_PATTERN;
            do
            {
                s_Node cond = parseUnaryExpression();
                s_Node type = tryPopTypeAnnot();
                s_Node body = parseFnBodyBranch();
                branches.push(make("fnbranch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { cond, type, body } }, 0, ""_fu));
            }
            while (tryConsume("id"_fu, "case"_fu));
            body = make("pattern"_fu, branches, 0, ""_fu);
        }
        else
            body = parseFnBodyBranch();

        out_push_body.push(body);
        return flags;
    };
    s_Node parseFnBodyBranch()
    {
        s_Node body = parseStatement();
        return (((body.kind == "block"_fu) || (body.kind == "return"_fu)) ? s_Node(body) : ((void)_numReturns++, createReturn(body)));
    };
    s_Node tryPopTypeAnnot()
    {
        return (tryConsume("op"_fu, ":"_fu) ? parseTypeAnnot() : miss());
    };
    s_Node parseTypeAnnot()
    {
        return parseUnaryExpression();
    };
    int parseArgsDecl(fu_VEC<s_Node>& outArgs, const fu_STR& endk, const fu_STR& endv)
    {
        bool first = true;
        int outFlags = 0;
        fu_VEC<s_Node> implicit {};
        bool defaults = false;
        while (true)
        {
            if (tryConsume(endk, endv))
            {
                break;
            };
            if (!first)
                consume("op"_fu, ","_fu);

            first = false;
            s_Node arg = parseLet();
            if (!arg.items.mutref(LET_TYPE))
                outFlags |= F_UNTYPED_ARGS;

            if (arg.items.mutref(LET_INIT))
            {
                if ((arg.flags & F_IMPLICIT))
                    fail("TODO default implicit arguments"_fu);

                defaults = true;
            }
            else if (defaults)
                fail("TODO non-trailing default arguments"_fu);

            arg.flags &= ~F_LOCAL;
            arg.flags |= F_ARG;
            if ((arg.flags & F_IMPLICIT))
                implicit.push(arg);
            else
                outArgs.push(arg);

        };
        if (implicit)
        {
            for (int i = 0; (i < implicit.size()); i++)
                outArgs.push(implicit.mutref(i));

        };
        return outFlags;
    };
    s_Node parseLetStmt()
    {
        s_Node ret = parseLet();
        if (tryConsume("id"_fu, "catch"_fu))
        {
            s_Node err = createLet(consume("id"_fu, ""_fu).value, 0, createRead("string"_fu), s_Node { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_Node>{}, s_Token{} });
            s_Node cahtch = parseStatement();
            return make("catch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { ret, err, cahtch } }, 0, ""_fu);
        };
        consume("op"_fu, ";"_fu);
        return ret;
    };
    s_Node parseLet()
    {
        int flags = F_LOCAL;
        const int numDollars0 = _dollars.size();
        if (tryConsume("id"_fu, "using"_fu))
            flags |= F_USING;

        if (tryConsume("id"_fu, "implicit"_fu))
            flags |= F_IMPLICIT;

        if (tryConsume("id"_fu, "mut"_fu))
            flags |= F_MUT;

        fu_STR id = consume("id"_fu, ""_fu).value;
        s_Node type = tryPopTypeAnnot();
        s_Node init = (tryConsume("op"_fu, "="_fu) ? parseExpression(int(P_COMMA)) : s_Node { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_Node>{}, s_Token{} });
        if ((numDollars0 != _dollars.size()))
            flags |= F_TEMPLATE;

        if ((flags & F_IMPLICIT))
            _implicits++;

        return createLet(id, flags, type, init);
    };
    s_Node createLet(const fu_STR& id, const int& flags, const s_Node& type, const s_Node& init)
    {
        return make("let"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { type, init } }, flags, id);
    };
    s_Node parseExpression(const int p1)
    {
        const int p0 = _precedence;
        s_Token loc0 { _loc };
        _precedence = p1;
        _loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens[_idx]; if (_) return _; } fail(""_fu); }());
        s_Node head = parseExpressionHead();
        
        {
            s_Node out {};
            while ((out = tryParseExpressionTail(head)))
            {
                _loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens[_idx]; if (_) return _; } fail(""_fu); }());
                head = out;
            };
        };
        _precedence = p0;
        _loc = loc0;
        return head;
    };
    s_Node tryParseBinary(const s_Node& left, const fu_STR& op, const int& p1)
    {
        if (((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1])))
            return miss();

        _idx++;
        s_Node mid {};
        if ((op == "?"_fu))
        {
            mid = parseExpression(int(_precedence));
            consume("op"_fu, ":"_fu);
        };
        s_Node right = parseExpression(int(p1));
        if (mid)
            return createIf(left, mid, right);

        if ((op == "||"_fu))
            return createOr(left, right);

        if ((op == "&&"_fu))
            return createAnd(left, right);

        return createCall(op, F_INFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { left, right } });
    };
    s_Node tryParseExpressionTail(const s_Node& head)
    {
        const s_Token& token = _tokens[_idx++];
        if ((token.kind == "op"_fu))
        {
            const fu_STR& v = token.value;
            if ((v == ";"_fu))
                return ((void)_idx--, miss());

            if ((v == "."_fu))
                return parseAccessExpression(head);

            if ((v == "("_fu))
                return parseCallExpression(head);

            if ((v == "["_fu))
                return parseIndexExpression(head);

            const int& p1 = BINOP.PRECEDENCE[v];
            if (p1)
                return ((void)_idx--, tryParseBinary(head, v, p1));

            if (fu::has(POSTFIX, v))
                return createCall(v, F_POSTFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { head } });

        };
        return ((void)_idx--, miss());
    };
    s_Node parseExpressionHead()
    {
        const s_Token& token = _tokens[_idx++];
        
        {
            const fu_STR& k = token.kind;
            if (((k == "int"_fu) || (k == "num"_fu) || (k == "str"_fu)))
                return createLeaf(token.kind, token.value);

            if ((k == "id"_fu))
                return createRead(token.value);

            if ((k == "op"_fu))
            {
                const fu_STR& v = token.value;
                if ((v == "("_fu))
                    return parseParens();

                if ((v == "["_fu))
                    return parseArrayLiteral();

                if ((v == "$"_fu))
                    return parseTypeParam();

                if ((v == "@"_fu))
                    return parseTypeTag();

                if ((v == "[]"_fu))
                    return make("definit"_fu, fu_VEC<s_Node>{}, 0, ""_fu);

                return parsePrefix(fu_STR(token.value));
            };
        };
        _idx--;
        fail(""_fu);
    };
    s_Node parseParens()
    {
        fu_VEC<s_Node> items = fu_VEC<s_Node>{};
        do
            items.push(parseExpression(int(P_COMMA)));
        while (tryConsume("op"_fu, ","_fu));
        consume("op"_fu, ")"_fu);
        return ((items.size() > 1) ? createComma(items) : s_Node(items.mutref(0)));
    };
    s_Node createComma(const fu_VEC<s_Node>& nodes)
    {
        return make("comma"_fu, nodes, 0, ""_fu);
    };
    s_Node parseTypeParam()
    {
        fu_STR value = consume("id"_fu, ""_fu).value;
        if (!fu::has(_dollars, value))
            _dollars.push(value);

        return createTypeParam(value);
    };
    s_Node createTypeParam(const fu_STR& value)
    {
        return make("typeparam"_fu, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node parseTypeTag()
    {
        return createTypeTag(consume("id"_fu, ""_fu).value);
    };
    s_Node createTypeTag(const fu_STR& value)
    {
        return make("typetag"_fu, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node parsePrefix(fu_STR&& op)
    {
        (fu::has(PREFIX, op) || ((void)_idx--, fail(""_fu)));
        if (((op == "&"_fu) && tryConsume("id"_fu, "mut"_fu)))
            op = "&mut"_fu;

        return createPrefix(op, parseUnaryExpression());
    };
    s_Node parseUnaryExpression()
    {
        return parseExpression(int(P_PREFIX_UNARY));
    };
    s_Node createPrefix(const fu_STR& op, const s_Node& expr)
    {
        if ((op == "!"_fu))
            return createNot(expr);

        return createCall(op, F_PREFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } });
    };
    s_Node createNot(const s_Node& expr)
    {
        return make("!"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } }, 0, ""_fu);
    };
    s_Node parseAccessExpression(const s_Node& expr)
    {
        return createCall(consume("id"_fu, ""_fu).value, F_ACCESS, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } });
    };
    int parseCallArgs(const fu_STR& endop, fu_VEC<s_Node>& out_args)
    {
        int flags = 0;
        bool first = true;
        while (true)
        {
            if (tryConsume("op"_fu, endop))
            {
                break;
            };
            if (!first)
            {
                consume("op"_fu, ","_fu);
                if (tryConsume("op"_fu, endop))
                {
                    break;
                };
            };
            first = false;
            fu_STR name = ""_fu;
            bool autoName = false;
            if (((_tokens[_idx].kind == "id"_fu) && (_tokens[(_idx + 1)].kind == "op"_fu) && (_tokens[(_idx + 1)].value == ":"_fu)))
            {
                name = _tokens[_idx].value;
                _idx += 2;
                flags |= F_NAMED_ARGS;
            }
            else if (((_tokens[_idx].kind == "op"_fu) && (_tokens[_idx].value == ":"_fu)))
            {
                autoName = true;
                _idx++;
                flags |= F_NAMED_ARGS;
            };
            s_Node expr = parseExpression(int(P_COMMA));
            if (autoName)
            {
                (((expr.kind == "call"_fu) && (expr.flags & F_ID)) || fail("Can't :auto_name this expression."_fu));
                name = expr.value;
            };
            out_args.push((name.size() ? createLabel(name, expr) : s_Node(expr)));
        };
        return flags;
    };
    s_Node createLabel(const fu_STR& id, const s_Node& value)
    {
        return make("label"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { value } }, 0, id);
    };
    s_Node parseCallExpression(const s_Node& expr)
    {
        fu_VEC<s_Node> args = fu_VEC<s_Node>{};
        const int argFlags = parseCallArgs(")"_fu, args);
        if (((expr.kind == "call"_fu) && (expr.flags & F_ACCESS)))
        {
            const s_Node& head = ([&]() -> const s_Node& { if (expr.items && (expr.items.size() == 1)) { const s_Node& _ = expr.items[0]; if (_) return _; } fail(""_fu); }());
            args.unshift(head);
            return createCall(([&]() -> const fu_STR& { { const fu_STR& _ = expr.value; if (_.size()) return _; } fail(""_fu); }()), (F_METHOD | argFlags), args);
        };
        if (((expr.kind == "call"_fu) && (expr.flags & F_ID)))
            return createCall(([&]() -> const fu_STR& { { const fu_STR& _ = expr.value; if (_.size()) return _; } fail(""_fu); }()), argFlags, args);

        fail("TODO dynamic call"_fu);
    };
    s_Node parseArrayLiteral()
    {
        fu_VEC<s_Node> args = fu_VEC<s_Node>{};
        const int argFlags = parseCallArgs("]"_fu, args);
        return createArrayLiteral(argFlags, args);
    };
    s_Node createArrayLiteral(const int& argFlags, const fu_VEC<s_Node>& items)
    {
        return make("arrlit"_fu, items, argFlags, ""_fu);
    };
    s_Node parseIndexExpression(const s_Node& expr)
    {
        fu_VEC<s_Node> args = fu_VEC<s_Node>{};
        const int argFlags = parseCallArgs("]"_fu, args);
        args.unshift(expr);
        return createCall("[]"_fu, (F_INDEX & argFlags), args);
    };
    s_Node createLeaf(const fu_STR& kind, const fu_STR& value)
    {
        return make(kind, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node createCall(const fu_STR& id, const int& flags, const fu_VEC<s_Node>& args)
    {
        return make("call"_fu, args, flags, id);
    };
    s_Node createRead(const fu_STR& id)
    {
        return createCall(([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fail(""_fu); }()), F_ID, fu_VEC<s_Node>{});
    };
    s_Node parseReturn()
    {
        ((_fnDepth > 0) || ((void)_idx--, fail(""_fu)));
        _numReturns++;
        if (tryConsume("op"_fu, ";"_fu))
            return createReturn(s_Node { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_Node>{}, s_Token{} });

        return createReturn(parseExpressionStatement());
    };
    s_Node createReturn(const s_Node& node)
    {
        if (!node)
            return make("return"_fu, fu_VEC<s_Node>{}, 0, ""_fu);

        return make("return"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { node } }, 0, ""_fu);
    };
    s_Node parseJump(const fu_STR& kind)
    {
        s_Token label = ([&]() -> s_Token { if (tryConsume("op"_fu, ":"_fu)) return consume("id"_fu, ""_fu); else return s_Token{}; }());
        s_Node jump = createJump(kind, label.value);
        consume("op"_fu, ";"_fu);
        return jump;
    };
    s_Node createJump(const fu_STR& kind, const fu_STR& label)
    {
        return make(kind, fu_VEC<s_Node>{}, 0, label);
    };
    s_Node parseIf()
    {
        s_Token nott = tryConsume("op"_fu, "!"_fu);
        consume("op"_fu, "("_fu);
        s_Node cond = parseExpression(int(_precedence));
        if (nott)
            cond = createNot(cond);

        consume("op"_fu, ")"_fu);
        s_Node cons = parseStatement();
        s_Node alt = ([&]() -> s_Node { if (tryConsume("id"_fu, "else"_fu)) return parseStatement(); else return s_Node{}; }());
        return createIf(cond, cons, alt);
    };
    s_Node createIf(const s_Node& cond, const s_Node& cons, const s_Node& alt)
    {
        return make("if"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { cond, cons, alt } }, 0, ""_fu);
    };
    s_Node createOr(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame("or"_fu, left, right);
    };
    s_Node createAnd(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame("and"_fu, left, right);
    };
    s_Node flattenIfSame(const fu_STR& kind, const s_Node& left, const s_Node& right)
    {
        const fu_STR& k_left = left.kind;
        const fu_STR& k_right = right.kind;
        fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? fu_CONCAT(left.items, right.items) : ((k_left == kind) ? fu_CONCAT(left.items, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { right } }) : ((k_right == kind) ? fu_CONCAT(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { left } }, right.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { left, right } })));
        return make(kind, items, 0, ""_fu);
    };
    s_Node parseFor()
    {
        consume("op"_fu, "("_fu);
        tryConsume("id"_fu, "let"_fu);
        s_Node init = parseLetStmt();
        s_Node cond = parseExpressionStatement();
        const s_Token& token = _tokens[_idx];
        s_Node post = (((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseEmpty() : parseExpression(int(_precedence)));
        consume("op"_fu, ")"_fu);
        s_Node body = parseStatement();
        return createLoop(init, cond, post, body, miss());
    };
    s_Node parseWhile()
    {
        consume("op"_fu, "("_fu);
        s_Node cond = parseExpression(int(_precedence));
        consume("op"_fu, ")"_fu);
        s_Node body = parseStatement();
        return createLoop(miss(), cond, miss(), body, miss());
    };
    s_Node parseDoWhile()
    {
        s_Node body = parseStatement();
        consume("id"_fu, "while"_fu);
        consume("op"_fu, "("_fu);
        s_Node cond = parseExpression(int(_precedence));
        consume("op"_fu, ")"_fu);
        consume("op"_fu, ";"_fu);
        return createLoop(miss(), miss(), miss(), body, cond);
    };
    s_Node createLoop(const s_Node& init, const s_Node& cond, const s_Node& post, const s_Node& body, const s_Node& postcond)
    {
        return make("loop"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<5> { init, cond, post, body, postcond } }, 0, ""_fu);
    };
    s_ParserOutput parse_EVAL()
    {
        ((_tokens[(_tokens.size() - 1)].kind == "eof"_fu) || fail("Missing `eof` token."_fu));
        s_Node root = parseRoot();
        return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(_imports) };
    };
};

#define parse(...) ((sf_parse { __VA_ARGS__ }).parse_EVAL())
inline const int q_mutref = (1 << 0);
inline const int q_ref = (1 << 1);
inline const int q_copy = (1 << 2);
inline const int q_trivial = (1 << 3);
inline const int q_primitive = (1 << 4);
inline const int q_arithmetic = (1 << 5);
inline const int q_integral = (1 << 6);
inline const int q_signed = (1 << 7);
inline const int q_floating_pt = (1 << 8);
inline const fu_VEC<fu_STR> TAGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<9> { "mutref"_fu, "ref"_fu, "copy"_fu, "trivial"_fu, "primitive"_fu, "arithmetic"_fu, "integral"_fu, "signed"_fu, "floating_point"_fu } };

bool operator==(const s_Type& a, const s_Type& b)
{
    return ((a.canon == b.canon) && (a.quals == b.quals));
}
inline const int Trivial = (q_copy | q_trivial);
inline const int Primitive = (Trivial | q_primitive);
inline const int Arithmetic = (Primitive | q_arithmetic);
inline const int Integral = (Arithmetic | q_integral);
inline const int SignedInt = (Integral | q_signed);
inline const int& UnsignedInt = Integral;
inline const int FloatingPt = ((Arithmetic | q_floating_pt) | q_signed);
inline const s_Type t_i8 = s_Type { "i8"_fu, int(SignedInt) };
inline const s_Type t_i16 = s_Type { "i16"_fu, int(SignedInt) };
inline const s_Type t_i32 = s_Type { "i32"_fu, int(SignedInt) };
inline const s_Type t_i64 = s_Type { "i64"_fu, int(SignedInt) };
inline const s_Type t_u8 = s_Type { "u8"_fu, int(UnsignedInt) };
inline const s_Type t_u16 = s_Type { "u16"_fu, int(UnsignedInt) };
inline const s_Type t_u32 = s_Type { "u32"_fu, int(UnsignedInt) };
inline const s_Type t_u64 = s_Type { "u64"_fu, int(UnsignedInt) };
inline const s_Type t_f32 = s_Type { "f32"_fu, int(FloatingPt) };
inline const s_Type t_f64 = s_Type { "f64"_fu, int(FloatingPt) };
inline const s_Type t_void = s_Type { "void"_fu, 0 };
inline const s_Type t_bool = s_Type { "bool"_fu, int(Primitive) };
inline const s_Type t_never = s_Type { "never"_fu, 0 };
inline const s_Type t_template = s_Type { "template"_fu, 0 };
inline const s_Type t_string = s_Type { "string"_fu, int(q_copy) };

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return (((host.canon == guest.canon) && ((host.quals == guest.quals) || (!(host.quals & q_mutref) && ((host.quals & guest.quals) == host.quals)))) || ((guest == t_never) && (guest.quals == 0)));
}

bool isAssignableAsArgument(const s_Type& host, s_Type&& guest)
{
    guest.quals |= q_ref;
    return isAssignable(host, guest);
}

s_Type qadd(const s_Type& type, const int& q)
{
    return s_Type { fu_STR(type.canon), (type.canon.size() ? (type.quals | q) : 0) };
}

s_Type qsub(const s_Type& type, const int& q)
{
    return s_Type { fu_STR(type.canon), (type.quals & ~q) };
}

bool qhas(const s_Type& type, const int& q)
{
    return ((type.quals & q) == q);
}

s_Type tryClear(const s_Type& type, const int& q)
{
    if ((!type || !qhas(type, q)))
        return s_Type { fu_STR{}, int{} };

    return qsub(type, q);
}

s_Type add_ref(const s_Type& type)
{
    return qadd(type, q_ref);
}

s_Type add_mutref(const s_Type& type)
{
    return qadd(type, (q_ref | q_mutref));
}

s_Type tryClear_mutref(const s_Type& type)
{
    return tryClear(type, (q_ref | q_mutref));
}

s_Type tryClear_ref(const s_Type& type)
{
    s_Type t = tryClear(type, q_ref);
    return (t ? qsub(t, q_mutref) : s_Type(t));
}

s_Type clear_refs(const s_Type& type)
{
    return qsub(type, (q_ref | q_mutref));
}

s_Type clear_mutref(const s_Type& type)
{
    return qsub(type, q_mutref);
}

s_Type add_refs_from(const s_Type& src, const s_Type& dest)
{
    return qadd(dest, (src.quals & (q_ref | q_mutref)));
}

fu_STR serializeType(const s_Type& type)
{
    if (type.quals)
        return (((("("_fu + type.canon) + "{"_fu) + type.quals) + "})"_fu);

    return (("("_fu + type.canon) + ")"_fu);
}

bool type_has(const s_Type& type, const fu_STR& tag)
{
    const int idx = fu::lfind(TAGS, tag);
    ((idx >= 0) || fu_THROW((("Unknown type tag: `"_fu + tag) + "`."_fu)));
    const int mask = (1 << idx);
    return ((type.quals & mask) == mask);
}

s_Type type_tryInter(const s_Type& a, const s_Type& b)
{
    if ((a.canon != b.canon))
        return ((a == t_never) ? s_Type(b) : ((b == t_never) ? s_Type(a) : s_Type { fu_STR{}, int{} }));

    return s_Type { fu_STR(a.canon), (a.quals & b.quals) };
}

s_Module upsertModule(const fu_STR& fname, s_TEMP_Context& ctx)
{
    return ([&](s_Module& _) -> s_Module& { if (!_) _ = s_Module { fu_KEYS(ctx.modules).size(), s_ModuleInputs{}, s_ModuleOutputs{}, s_ModuleStats{} }; return _; } (ctx.modules.upsert(fname)));
}

void registerType(const fu_STR& canon, const s_Struct& def, s_TEMP_Context& ctx)
{
    (ctx.types.upsert(canon) = def);
}

const s_Struct& lookupType(const fu_STR& canon, const s_TEMP_Context& ctx)
{
    return ([&]() -> const s_Struct& { { const s_Struct& _ = ctx.types[canon]; if (_) return _; } fu_THROW("Assertion failed."); }());
}

s_Struct& lookupType_mut(const fu_STR& canon, s_TEMP_Context& ctx)
{
    return ([&]() -> s_Struct& { { s_Struct& _ = ctx.types.mutref(canon); if (_) return _; } fu_THROW("Assertion failed."); }());
}

s_Type initStruct(const fu_STR& id, const int& flags, s_TEMP_Context& ctx)
{
    fu_STR canon = ("s_"_fu + id);
    s_Struct def = s_Struct { "struct"_fu, fu_STR(([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fu_THROW("TODO anonymous structs?"_fu); }())), fu_VEC<s_StructField>{}, (flags | 0) };
    registerType(canon, def, ctx);
    return s_Type { fu_STR(canon), copyOrMove(flags, def.fields) };
}

void finalizeStruct(const fu_STR& id, const fu_VEC<s_StructField>& fields, s_TEMP_Context& ctx)
{
    fu_STR canon = ("s_"_fu + id);
    s_Struct& def = lookupType_mut(canon, ctx);
    def.fields = ([&]() -> const fu_VEC<s_StructField>& { { const fu_VEC<s_StructField>& _ = fields; if (_) return _; } fu_THROW("TODO empty structs?"_fu); }());
}

int copyOrMove(const int& flags, const fu_VEC<s_StructField>& fields)
{
    if (((flags & F_DESTRUCTOR) || someFieldNonCopy(fields)))
        return 0;

    return q_copy;
}

bool someFieldNonCopy(const fu_VEC<s_StructField>& fields)
{
    for (int i = 0; (i < fields.size()); i++)
    {
        if (!(fields[i].type.quals & q_copy))
            return true;

    };
    return false;
}

bool someFieldNotTrivial(const fu_VEC<s_StructField>& fields)
{
    for (int i = 0; (i < fields.size()); i++)
    {
        if (!(fields[i].type.quals & q_trivial))
            return true;

    };
    return false;
}

s_Type createArray(const s_Type& item, s_TEMP_Context& ctx)
{
    const int flags = 0;
    fu_VEC<s_StructField> fields = fu_VEC<s_StructField> { fu_VEC<s_StructField>::INIT<1> { s_StructField { "Item"_fu, s_Type(item) } } };
    fu_STR canon = (("Array("_fu + serializeType(item)) + ")"_fu);
    registerType(canon, s_Struct { "array"_fu, fu_STR(canon), fu_VEC<s_StructField>(fields), int(flags) }, ctx);
    return s_Type { fu_STR(canon), copyOrMove(flags, fields) };
}

bool type_isString(const s_Type& type)
{
    return (type.canon == "string"_fu);
}

bool type_isArray(const s_Type& type)
{
    return fu::lmatch(type.canon, "Array("_fu);
}

s_Type tryClear_array(const s_Type& type, const s_TEMP_Context& ctx)
{
    if (!type_isArray(type))
        return s_Type { fu_STR{}, int{} };

    const s_Struct& def = lookupType(type.canon, ctx);
    return ([&]() -> const s_Type& { if ((def.kind == "array"_fu)) { const s_Type& _ = def.fields[0].type; if (_) return _; } fu_THROW("Assertion failed."); }());
}

bool type_isMap(const s_Type& type)
{
    return fu::lmatch(type.canon, "Map("_fu);
}

s_Type createMap(const s_Type& key, const s_Type& value, s_TEMP_Context& ctx)
{
    const int flags = 0;
    fu_VEC<s_StructField> fields = fu_VEC<s_StructField> { fu_VEC<s_StructField>::INIT<2> { s_StructField { "Key"_fu, s_Type(key) }, s_StructField { "Value"_fu, s_Type(value) } } };
    fu_STR canon = (((("Map("_fu + serializeType(key)) + ","_fu) + serializeType(value)) + ")"_fu);
    registerType(canon, s_Struct { "map"_fu, fu_STR(canon), fu_VEC<s_StructField>(fields), int(flags) }, ctx);
    return s_Type { fu_STR(canon), copyOrMove(flags, fields) };
}

s_MapFields tryClear_map(const s_Type& type, const s_TEMP_Context& ctx)
{
    if (!type_isMap(type))
        return s_MapFields { s_Type{}, s_Type{} };

    const s_Struct& def = lookupType(type.canon, ctx);
    ((def.kind == "map"_fu) || fu_THROW("Assertion failed."));
    return s_MapFields { s_Type(([&]() -> const s_Type& { { const s_Type& _ = def.fields[0].type; if (_) return _; } fu_THROW("Assertion failed."); }())), s_Type(([&]() -> const s_Type& { { const s_Type& _ = def.fields[1].type; if (_) return _; } fu_THROW("Assertion failed."); }())) };
}

fu_VEC<s_ScopeIdx> Scope_lookup(const s_Scope& scope, const fu_STR& id)
{
    fu_VEC<s_ScopeIdx> results = fu_VEC<s_ScopeIdx>{};
    const fu_VEC<s_ScopeItem>& items = scope.items;
    for (int i = 0; (i < items.size()); i++)
    {
        const s_ScopeItem& item = items[i];
        if ((item.id == id))
            results.unshift(item.index);

    };
    return results;
}

int Scope_push(s_Scope& scope)
{
    return scope.items.size();
}

void Scope_pop(s_Scope& scope, const int& memo)
{
    scope.items.shrink(memo);
}

s_ScopeIdx Scope_add(s_Scope& scope, const fu_STR& kind, const fu_STR& id, const s_Type& type, const int& min, const int& max, const fu_VEC<fu_STR>& arg_n, const fu_VEC<s_Type>& arg_t, const fu_VEC<s_SolvedNode>& arg_d, const s_Template& tempatle, const s_Partial& partial)
{
    s_ScopeIdx index = s_ScopeIdx { (scope.overloads.size() + 1) };
    s_Overload item = s_Overload { fu_STR(kind), fu_STR(id), s_Type(type), int(min), int(max), fu_VEC<s_Type>(arg_t), fu_VEC<fu_STR>(arg_n), fu_VEC<s_SolvedNode>(arg_d), s_Partial(partial), s_Template(tempatle) };
    scope.items.push(s_ScopeItem { fu_STR(id), s_ScopeIdx(index) });
    scope.overloads.push(item);
    return index;
}

s_ScopeIdx Scope_Typedef(s_Scope& scope, const fu_STR& id, const s_Type& type)
{
    return Scope_add(scope, "type"_fu, id, type, 0, 0, fu_VEC<fu_STR>{}, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{});
}

struct sf_runSolver
{
    const s_Node& parse;
    const s_Scope& globals;
    s_TEMP_Context& ctx;
    s_Scope _scope { globals };
    s_Token _here {};
    s_SolvedNode _current_fn {};
    fu_COW_MAP<fu_STR, s_Type> _typeParams {};
    bool TEST_expectImplicits = false;
    s_Overload& GET(const s_ScopeIdx& idx)
    {
        ((idx.raw > 0) || fu_THROW("Assertion failed."));
        return _scope.overloads.mutref((idx.raw - 1));
    };
    [[noreturn]] fu_NEVER fail(fu_STR&& reason)
    {
        if (!reason.size())
            reason = (("Unexpected `"_fu + _here.value) + "`."_fu);

        fu_STR fname { _here.fname };
        const int l0 = _here.line;
        const int c0 = _here.col;
        fu_STR addr = ((("@"_fu + l0) + ":"_fu) + c0);
        fu_THROW(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
    };
    s_ScopeIdx Binding(const fu_STR& id, const s_Type& type)
    {
        return Scope_add(_scope, "var"_fu, ([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fail(""_fu); }()), ([&]() -> const s_Type& { { const s_Type& _ = type; if (_) return _; } fail(""_fu); }()), 0, 0, fu_VEC<fu_STR>{}, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{});
    };
    s_ScopeIdx Field(const fu_STR& id, const s_Type& structType, const s_Type& fieldType)
    {
        return Scope_add(_scope, "field"_fu, ([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fail(""_fu); }()), ([&]() -> const s_Type& { { const s_Type& _ = fieldType; if (_) return _; } fail(""_fu); }()), 1, 1, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "this"_fu } }, fu_VEC<s_Type> { fu_VEC<s_Type>::INIT<1> { ([&]() -> const s_Type& { { const s_Type& _ = structType; if (_) return _; } fail(""_fu); }()) } }, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{});
    };
    s_ScopeIdx TemplateDecl(const s_Node& node)
    {
        const fu_STR& id = node.value;
        ((node.kind == "fn"_fu) || fail("TODO"_fu));
        const int min = (node.items.size() + FN_ARGS_BACK);
        const int max = ((node.kind == "fn"_fu) ? 0xffffff : int(min));
        s_Template tempatle = s_Template { s_Node(node), fu_COW_MAP<fu_STR, s_SolvedNode>{} };
        fu_VEC<fu_STR> arg_n {};
        if ((node.kind == "fn"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            const int numArgs = (items.size() + FN_ARGS_BACK);
            for (int i = 0; (i < numArgs); i++)
            {
                const s_Node& arg = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(""_fu); }());
                ((arg.kind == "let"_fu) || fail(""_fu));
                const fu_STR& name = ([&]() -> const fu_STR& { { const fu_STR& _ = arg.value; if (_.size()) return _; } fail(""_fu); }());
                arg_n.push(name);
            };
        };
        return Scope_add(_scope, "template"_fu, id, t_template, min, max, arg_n, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, tempatle, s_Partial{});
    };
    s_ScopeIdx FnDecl(const fu_STR& id, s_SolvedNode& node)
    {
        fu_VEC<s_SolvedNode> items { node.items };
        const s_SolvedNode& rnode = items[(items.size() + FN_RET_BACK)];
        const s_Type& ret = ([&]() -> const s_Type& { if (rnode) { const s_Type& _ = rnode.type; if (_) return _; } fail(""_fu); }());
        const int max = (items.size() + FN_RET_BACK);
        fu_VEC<s_SolvedNode> args = slice(items, 0, max);
        fu_VEC<s_Type> arg_t = fu_VEC<s_Type>{};
        fu_VEC<fu_STR> arg_n = fu_VEC<fu_STR>{};
        fu_VEC<s_SolvedNode> arg_d = fu_VEC<s_SolvedNode>{};
        int min = 0;
        for (int i = 0; (i < max); i++)
        {
            const s_SolvedNode& arg = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(""_fu); }());
            ((arg.kind == "let"_fu) || fail(""_fu));
            arg_t.push(([&]() -> const s_Type& { { const s_Type& _ = arg.type; if (_) return _; } fail(""_fu); }()));
            arg_n.push(([&]() -> const fu_STR& { { const fu_STR& _ = arg.value; if (_.size()) return _; } fail(""_fu); }()));
            const bool isImplicit = !!(arg.flags & F_IMPLICIT);
            if (!isImplicit)
            {
                ((arg_d.size() >= i) || fail(""_fu));
                const s_SolvedNode& def = arg.items[LET_INIT];
                arg_d.push(def);
                if (!def)
                    min++;

            };
        };
        s_ScopeIdx overload = Scope_add(_scope, "fn"_fu, id, ret, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{});
        node.target = overload;
        return overload;
    };
    s_ScopeIdx DefaultCtor(const fu_STR& id, const s_Type& type, const fu_VEC<s_SolvedNode>& members)
    {
        fu_VEC<s_Type> arg_t = fu_VEC<s_Type>{};
        fu_VEC<fu_STR> arg_n = fu_VEC<fu_STR>{};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_SolvedNode& member = members[i];
            arg_t.push(([&]() -> const s_Type& { { const s_Type& _ = member.type; if (_) return _; } fail(""_fu); }()));
            arg_n.push(([&]() -> const fu_STR& { { const fu_STR& _ = member.value; if (_.size()) return _; } fail(""_fu); }()));
        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_SolvedNode> arg_d {};
        
        {
            for (int i = 0; (i < members.size()); i++)
            {
                const s_SolvedNode& member = members[i];
                s_SolvedNode init = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(member.items[LET_INIT]); if (_) return _; } return tryDefaultInit(member.type); }());
                if (!init)
                {
                    min = max;
                    arg_d.clear();
                    break;
                };
                arg_d.push(init);
            };
        };
        return Scope_add(_scope, "defctor"_fu, id, type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{});
    };
    s_SolvedNode tryDefaultInit(const s_Type& type)
    {
        if ((type.quals & q_ref))
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        return createDefaultInit(type);
    };
    s_SolvedNode createDefaultInit(const s_Type& type)
    {
        return s_SolvedNode { "definit"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(""_fu); }())), s_Type(type), s_ScopeIdx{} };
    };
    s_SolvedNode solveDefinit(const s_Type& type)
    {
        if (!type)
            fail("Cannot solve definit, no inferred type."_fu);

        return ([&]() -> s_SolvedNode { { s_SolvedNode _ = tryDefaultInit(type); if (_) return _; } fail(("Cannot definit: "_fu + serializeType(type))); }());
    };
    s_ScopeIdx Partial(const fu_STR& id, const s_ScopeIdx& viaIdx, const s_ScopeIdx& overloadIdx)
    {
        s_Overload via { GET(viaIdx) };
        s_Overload overload { GET(overloadIdx) };
        fu_STR kind = "p-unshift"_fu;
        int min = (overload.min - 1);
        int max = (overload.max - 1);
        (((min >= 0) && (max >= min)) || fail(""_fu));
        fu_VEC<s_Type> arg_t = (overload.args ? slice(overload.args, 1) : fu_VEC<s_Type>(overload.args));
        fu_VEC<fu_STR> arg_n = (overload.names ? slice(overload.names, 1) : fu_VEC<fu_STR>(overload.names));
        fu_VEC<s_SolvedNode> arg_d = (overload.defaults ? slice(overload.defaults, 1) : fu_VEC<s_SolvedNode>(overload.defaults));
        if ((via.kind != "var"_fu))
        {
            kind = "p-wrap"_fu;
            min++;
            max++;
            const s_Type& via_t = ([&]() -> const s_Type& { if (via.args) { const s_Type& _ = via.args[0]; if (_) return _; } fail(""_fu); }());
            arg_t.unshift(via_t);
            if (arg_n)
                arg_n.unshift("using"_fu);

            if (arg_d)
                arg_d.unshift(s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });

        };
        return Scope_add(_scope, kind, id, overload.type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial { s_ScopeIdx(viaIdx), s_ScopeIdx(overloadIdx) });
    };
    void scope_using(const s_ScopeIdx& viaIdx)
    {
        s_Overload via { GET(viaIdx) };
        const s_Type& actual = ([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(""_fu); }());
        for (int i = 0; (i < _scope.items.size()); i++)
        {
            s_ScopeItem item { _scope.items.mutref(i) };
            if (!hasIdentifierChars(item.id))
            {
                continue;
            };
            const s_ScopeIdx& overloadIdx = item.index;
            s_Overload overload { GET(overloadIdx) };
            if ((overload.min < 1))
            {
                continue;
            };
            if (overload.tempatle)
            {
                continue;
            };
            const s_Type& expect = ([&]() -> const s_Type& { { const s_Type& _ = overload.args[0]; if (_) return _; } fail(""_fu); }());
            if (!isAssignableAsArgument(expect, s_Type(actual)))
            {
                continue;
            };
            if ((overload.min < 2))
            {
                for (int i = 0; (i < _scope.items.size()); i++)
                {
                    s_ScopeItem o { _scope.items.mutref(i) };
                    if ((o.id == item.id))
                    {
                        s_Overload other { GET(o.index) };
                        if ((other.min < 1))
                            fail((("`using` ambiguity: `"_fu + item.id) + "`."_fu));

                    };
                };
            };
            Partial(item.id, viaIdx, overloadIdx);
        };
    };
    fu_VEC<int> getNamedArgReorder(const fu_VEC<fu_STR>& callsite, const fu_VEC<fu_STR>& declaration)
    {
        fu_VEC<int> result = fu_VEC<int>{};
        int offset = 0;
        for (int i = 0; (i < declaration.size()); i++)
        {
            int idx = fu::lfind(callsite, declaration[i]);
            if ((idx < 0))
            {
                for (int i = offset; (i < callsite.size()); i++)
                {
                    offset++;
                    if (!callsite[i].size())
                    {
                        idx = i;
                        break;
                    };
                };
            };
            result.push(idx);
        };
        return result;
    };
    s_ScopeIdx scope_tryMatch__mutargs(const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int& flags, const s_Type& retType)
    {
        s_ScopeIdx matchIdx {};
        fu_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
        if (!overloads)
            return matchIdx;

        if (!args)
        {
            for (int i = 0; (i < overloads.size()); i++)
            {
                const s_ScopeIdx& headIdx = overloads[i];
                if ((GET(headIdx).min == 0))
                {
                    matchIdx = headIdx;
                    break;
                };
            };
        }
        else
        {
            const int arity = args.size();
            fu_VEC<fu_STR> names {};
            if ((flags & F_NAMED_ARGS))
            {
                bool some = false;
                for (int i = 0; (i < arity); i++)
                {
                    s_SolvedNode arg { args.mutref(i) };
                    names.push(((arg.kind == "label"_fu) ? fu_STR(([&]() -> const fu_STR& { { const fu_STR& _ = ((void)(some = true), arg.value); if (_.size()) return _; } fail(""_fu); }())) : ""_fu));
                };
                (some || fail(""_fu));
            };
            fu_VEC<int> reorder {};
            for (int i = 0; (i < overloads.size()); i++){
            {
                s_ScopeIdx overloadIdx { overloads[i] };
                s_Overload overload { GET(overloadIdx) };
                while (true){
                {
                    if (((overload.min > arity) || (overload.max < arity)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((retType && !isAssignable(retType, ([&]() -> s_Type& { { s_Type& _ = overload.type; if (_) return _; } fail(""_fu); }()))))
                    {
                        goto L_NEXT_c;
                    };
                    if ((names && overload.names))
                        reorder = getNamedArgReorder(names, overload.names);
                    else
                        reorder.clear();

                    if (overload.tempatle)
                    {
                        if (reorder)
                            fail("TODO handle argument reorder in template specialization."_fu);

                        s_Overload& o_mut = GET(overloadIdx);
                        s_ScopeIdx specIdx = trySpecialize(o_mut.tempatle, args);
                        if (!specIdx)
                        {
                            goto L_NEXT_c;
                        };
                        overloadIdx = specIdx;
                        overload = GET(specIdx);
                        goto L_TEST_AGAIN_c;
                    };
                    goto L_TEST_AGAIN_b;
                
                    }L_TEST_AGAIN_c:;}
                    L_TEST_AGAIN_b:;

                fu_VEC<s_Type> arg_t { ([&]() -> fu_VEC<s_Type>& { { fu_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(""_fu); }()) };
                fu_VEC<s_SolvedNode> arg_d { overload.defaults };
                const int N = (reorder ? reorder.size() : args.size());
                for (int i = 0; (i < N); i++)
                {
                    const int callsiteIndex = (reorder ? reorder.mutref(i) : i);
                    if ((callsiteIndex < 0))
                    {
                        if (!(arg_d && arg_d[i]))
                        {
                            goto L_NEXT_c;
                        };
                        continue;
                    };
                    if (!isAssignableAsArgument(arg_t[i], s_Type(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(callsiteIndex); if (_) return _; } fail(""_fu); }()).type)))
                    {
                        goto L_NEXT_c;
                    };
                };
                if (matchIdx)
                    fail((("Ambiguous callsite, matches multiple functions in scope: `"_fu + id) + "`."_fu));

                matchIdx = overloadIdx;
                if (reorder)
                {
                    fu_VEC<s_SolvedNode> new_args {};
                    new_args.resize(reorder.size());
                    for (int i = 0; (i < reorder.size()); i++)
                    {
                        const int idx = reorder.mutref(i);
                        if ((idx >= 0))
                            new_args.mutref(i) = args.mutref(idx);

                    };
                    args = new_args;
                };
            
                }L_NEXT_c:;};
        };
        if (matchIdx)
        {
            s_Overload matched { GET(matchIdx) };
            const fu_VEC<s_SolvedNode>& arg_d = matched.defaults;
            if (arg_d)
            {
                if ((args.size() < arg_d.size()))
                    args.resize(arg_d.size());

                for (int i = 0; (i < arg_d.size()); i++)
                    args.mutref(i) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args.mutref(i); if (_) return _; } if (arg_d) { const s_SolvedNode& _ = arg_d[i]; if (_) return _; } fail(""_fu); }());

            };
            const fu_VEC<s_Type>& arg_t = matched.args;
            if ((arg_t && (args.size() < arg_t.size())))
            {
                const fu_VEC<fu_STR>& arg_n = ([&]() -> const fu_VEC<fu_STR>& { { const fu_VEC<fu_STR>& _ = matched.names; if (_) return _; } fail(""_fu); }());
                for (int i = args.size(); (i < arg_t.size()); i++)
                {
                    const fu_STR& id = arg_n[i];
                    const s_Type& type = arg_t[i];
                    bindImplicitArg(args, i, id, type);
                };
            };
        };
        return matchIdx;
    };
    s_ScopeIdx scope_match__mutargs(const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int& flags)
    {
        s_ScopeIdx ret = scope_tryMatch__mutargs(id, args, flags, s_Type{});
        if (ret)
            return ret;

        s_ScopeIdx debug = scope_tryMatch__mutargs(id, args, flags, s_Type{});
        if (debug)
            return debug;

        (Scope_lookup(_scope, id) ? fail(((("No overload of `"_fu + id) + "` matches call signature: "_fu) + TODO_memoize_mangler(args))) : fail((("`"_fu + id) + "` is not defined."_fu)));
    };
    s_SolvedNode solveNode(const s_Node& node, const s_Type& type)
    {
        const fu_STR& k = node.kind;
        if ((k == "root"_fu))
            return solveRoot(node);

        if ((k == "block"_fu))
            return solveBlock(node);

        if ((k == "label"_fu))
            return solveComma(node);

        if ((k == "comma"_fu))
            return solveComma(node);

        if ((k == "let"_fu))
            return solveLet(node);

        if ((k == "call"_fu))
            return solveCall(node);

        if ((k == "arrlit"_fu))
            return solveArrayLiteral(node, type);

        if ((k == "if"_fu))
            return solveIf(node, s_Type(type));

        if ((k == "or"_fu))
            return solveOr(node, s_Type(type));

        if ((k == "!"_fu))
            return solveNot(node);

        if ((k == "and"_fu))
            return solveAnd(node, s_Type(type));

        if ((k == "return"_fu))
            return solveReturn(node);

        if ((k == "loop"_fu))
            return solveBlock(node);

        if ((k == "break"_fu))
            return solveJump(node);

        if ((k == "continue"_fu))
            return solveJump(node);

        if ((k == "int"_fu))
            return solveInt(node);

        if ((k == "str"_fu))
            return solveStr(node);

        if ((k == "empty"_fu))
            return solveEmpty(node);

        if ((k == "definit"_fu))
            return solveDefinit(type);

        if ((k == "catch"_fu))
            return solveCatch(node);

        fail(("TODO: "_fu + k));
    };
    bool isUnordered(const fu_STR& kind)
    {
        return ((kind == "fn"_fu) || (kind == "struct"_fu));
    };
    s_SolvedNode unorderedPrep(const s_Node& node)
    {
        const fu_STR& k = node.kind;
        if ((k == "fn"_fu))
            return uPrepFn(node);

        if ((k == "struct"_fu))
            return uPrepStruct(node);

        fail(("TODO: "_fu + k));
    };
    s_SolvedNode unorderedSolve(const s_Node& node, const s_SolvedNode& prep)
    {
        const fu_STR& k = node.kind;
        if ((k == "fn"_fu))
            return uSolveFn(node, prep);

        if ((k == "struct"_fu))
            return uSolveStruct(node, prep);

        fail(("TODO: "_fu + k));
    };
    s_SolvedNode solveRoot(const s_Node& node)
    {
        TEST_expectImplicits = !!(node.flags & F_IMPLICIT);
        return solved(node, t_void, solveNodes(node.items, t_void));
    };
    s_SolvedNode solveBlock(const s_Node& node)
    {
        const int scope0 = Scope_push(_scope);
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, t_void));
        Scope_pop(_scope, scope0);
        return out;
    };
    s_SolvedNode solveComma(const s_Node& node)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(""_fu); }());
        return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = last.type; if (_) return _; } fail(""_fu); }()), items);
    };
    s_SolvedNode solveInt(const s_Node& node)
    {
        return solved(node, t_i32, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveStr(const s_Node& node)
    {
        return solved(node, t_string, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveEmpty(const s_Node& node)
    {
        return solved(node, t_void, fu_VEC<s_SolvedNode>{});
    };
    s_Node createTypeParam(const fu_STR& value)
    {
        return s_Node { "typeparam"_fu, int{}, fu_STR(value), fu_VEC<s_Node>{}, s_Token(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(""_fu); }())) };
    };
    s_SolvedNode uPrepFn(const s_Node& node)
    {
        return __solveFn(false, false, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }, -1);
    };
    s_SolvedNode uSolveFn(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveFn(true, false, node, prep, -1);
    };
    s_SolvedNode __solveFn(const bool& solve, const bool& spec, const s_Node& n_fn, const s_SolvedNode& prep, const int& caseIdx)
    {
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = n_fn.value; if (_.size()) return _; } fail("TODO anonymous fns"_fu); }());
        if (spec)
        {
            (solve || fail(""_fu));
        }
        else if ((n_fn.flags & F_TEMPLATE))
        {
            if (solve)
                return ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = prep; if (_) return _; } fail(""_fu); }());

            s_ScopeIdx tDecl = TemplateDecl(n_fn);
            s_SolvedNode out = solved(n_fn, t_void, fu_VEC<s_SolvedNode>{});
            out.target = tDecl;
            return out;
        };
        if ((!solve && !(n_fn.flags & F_FULLY_TYPED)))
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        const fu_VEC<s_Node>& inItems = n_fn.items;
        ((inItems.size() >= FN_RET_BACK) || fail(""_fu));
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(n_fn, t_void, fu_VEC<s_SolvedNode>{}); }());
        out.items.resize(inItems.size());
        if ((_current_fn && (id != "free"_fu)))
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
        };
        
        {
            const int scope0 = Scope_push(_scope);
            std::swap(_current_fn, out);
            fu_VEC<s_SolvedNode>& outItems = _current_fn.items;
            for (int i = 0; (i < (inItems.size() + FN_ARGS_BACK)); i++)
            {
                const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems[i]; if (_) return _; } fail(""_fu); }());
                ((n_arg.kind == "let"_fu) || fail(""_fu));
                if (spec)
                {
                    s_Node mut_arg { n_arg };
                    mut_arg.items.mutref(LET_TYPE) = createTypeParam(mut_arg.value);
                    s_Type type { _typeParams.mutref(mut_arg.value) };
                    if (!(type.quals & q_ref))
                        mut_arg.flags |= F_MUT;

                    outItems.mutref(i) = solveLet(mut_arg);
                }
                else
                    outItems.mutref(i) = solveLet(n_arg);

            };
            s_Node n_ret { inItems[(inItems.size() + FN_RET_BACK)] };
            s_Node n_body { ([&]() -> const s_Node& { { const s_Node& _ = inItems[(inItems.size() + FN_BODY_BACK)]; if (_) return _; } fail(""_fu); }()) };
            if ((caseIdx >= 0))
            {
                ((n_body.kind == "pattern"_fu) || fail(""_fu));
                s_Node branch { ([&]() -> s_Node& { { s_Node& _ = n_body.items.mutref(caseIdx); if (_) return _; } fail(""_fu); }()) };
                const fu_VEC<s_Node>& items = branch.items;
                n_ret = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } return n_ret; }());
                n_body = items[(items.size() + FN_BODY_BACK)];
            };
            
            {
                s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(n_ret) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
                outItems.mutref((outItems.size() + FN_RET_BACK)) = s_ret;
            };
            if (solve)
            {
                s_SolvedNode s_body = solveNode(n_body, s_Type{});
                (s_body || fail(""_fu));
                outItems.mutref((outItems.size() + FN_BODY_BACK)) = s_body;
            };
            std::swap(_current_fn, out);
            Scope_pop(_scope, scope0);
        };
        if (!prep)
            FnDecl(id, out);

        (!solve || out.items.mutref((out.items.size() + FN_BODY_BACK)) || fail(""_fu));
        return out;
    };
    fu_STR TODO_memoize_mangler(const fu_VEC<s_SolvedNode>& args)
    {
        fu_STR mangle = ""_fu;
        for (int i = 0; (i < args.size()); i++)
            mangle += ("\v"_fu + serializeType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(""_fu); }()).type));

        return mangle;
    };
    s_ScopeIdx trySpecialize(s_Template& tempatle, const fu_VEC<s_SolvedNode>& args)
    {
        fu_STR mangle = TODO_memoize_mangler(args);
        s_SolvedNode spec { ([&](s_SolvedNode& _) -> s_SolvedNode& { if (!_) _ = doTrySpecialize(tempatle, args); return _; } (tempatle.specializations.upsert(mangle))) };
        return spec.target;
    };
    s_SolvedNode doTrySpecialize(s_Template& tempatle, const fu_VEC<s_SolvedNode>& args)
    {
        s_Node node { tempatle.node };
        ((node.kind == "fn"_fu) || fail("TODO"_fu));
        s_SolvedNode result = trySpecializeFn(node, args);
        if (!result)
            result.kind = "spec-fail"_fu;

        return result;
    };
    s_SolvedNode trySpecializeFn(const s_Node& node, const fu_VEC<s_SolvedNode>& args)
    {
        const fu_VEC<s_Node>& items = node.items;
        fu_COW_MAP<fu_STR, s_Type> typeParams {};
        const int numArgs = (items.size() + FN_ARGS_BACK);
        for (int i = 0; (i < numArgs); i++)
        {
            const s_Node& argNode = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(""_fu); }());
            ((argNode.kind == "let"_fu) || fail(""_fu));
            s_Type inType = ((args.size() > i) ? s_Type(args[i].type) : s_Type { fu_STR{}, int{} });
            if (inType)
            {
                const fu_STR& argName = ([&]() -> const fu_STR& { { const fu_STR& _ = argNode.value; if (_.size()) return _; } fail(""_fu); }());
                s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { fu_STR{}, int{} }; return _; } (typeParams.upsert(argName)));
                ([&]() -> s_Type& { { s_Type& _ = argName_typeParam; if (!_) return _; } fail((("Type param name collision with argument: `"_fu + argName) + "`."_fu)); }()) = inType;
            };
            inType.quals |= q_ref;
            const s_Node& annot = argNode.items[LET_TYPE];
            if (annot)
            {
                const bool ok = (inType && trySolveTypeParams(annot, s_Type(inType), typeParams));
                if (!ok)
                    return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

            };
        };
        int caseIdx = -1;
        const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(""_fu); }());
        if ((pattern.kind == "pattern"_fu))
        {
            const fu_VEC<s_Node>& branches = pattern.items;
            for (int i = 0; (i < branches.size()); i++)
            {
                const s_Node& branch = branches[i];
                const fu_VEC<s_Node>& items = ([&]() -> const s_Node& { { const s_Node& _ = branch; if (_) return _; } fail(""_fu); }()).items;
                const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }());
                if (evalTypePattern(cond, typeParams))
                {
                    caseIdx = i;
                    break;
                };
            };
            if ((caseIdx < 0))
                return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        };
        s_SolvedNode current_fn0 {};
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        const int scope0 = Scope_push(_scope);
        s_SolvedNode specialized = __solveFn(true, true, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }, caseIdx);
        (specialized || fail(""_fu));
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        Scope_pop(_scope, scope0);
        return specialized;
    };
    s_SolvedNode uPrepStruct(const s_Node& node)
    {
        return __solveStruct(false, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
    };
    s_SolvedNode uSolveStruct(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveStruct(true, node, prep);
    };
    s_SolvedNode __solveStruct(const bool& solve, const s_Node& node, const s_SolvedNode& prep)
    {
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(node, t_void, fu_VEC<s_SolvedNode>{}); }());
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail("TODO anonymous structs"_fu); }());
        s_Type structType = initStruct(id, node.flags, ctx);
        if (!prep)
            out.target = Scope_Typedef(_scope, id, structType);

        if (!solve)
            return out;

        out.items = solveStructMembers(node.items, structType);
        
        {
            fu_VEC<s_SolvedNode> members {};
            fu_VEC<s_SolvedNode> items { out.items };
            fu_VEC<s_StructField> fields {};
            for (int i = 0; (i < items.size()); i++)
            {
                const s_SolvedNode& item = items[i];
                if ((item && (item.kind == "let"_fu) && (item.flags & F_FIELD)))
                {
                    members.push(item);
                    fields.push(s_StructField { fu_STR(([&]() -> const fu_STR& { { const fu_STR& _ = item.value; if (_.size()) return _; } fail(""_fu); }())), s_Type(([&]() -> const s_Type& { { const s_Type& _ = item.type; if (_) return _; } fail(""_fu); }())) });
                };
            };
            finalizeStruct(id, fields, ctx);
            DefaultCtor(id, structType, members);
        };
        return out;
    };
    fu_VEC<s_SolvedNode> solveStructMembers(const fu_VEC<s_Node>& members, const s_Type& structType)
    {
        fu_VEC<s_SolvedNode> out {};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_Node& node = members[i];
            if ((node.kind == "let"_fu))
                out.push(solveField(structType, node));
            else
                fail(("TODO: "_fu + node.kind));

        };
        return out;
    };
    s_SolvedNode solveReturn(const s_Node& node)
    {
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, s_Type{}));
        const s_SolvedNode& nextExpr = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = out.items[0]; if (_) return _; } return out; }());
        const s_Type& nextType = ([&]() -> const s_Type& { { const s_Type& _ = nextExpr.type; if (_) return _; } fail(""_fu); }());
        const int retIdx = (_current_fn.items.size() + FN_RET_BACK);
        s_SolvedNode prevExpr { _current_fn.items.mutref(retIdx) };
        const s_Type& prevType = prevExpr.type;
        if (prevType)
        {
            (isAssignable(prevType, nextType) || fail(((("Non-assignable return types: "_fu + serializeType(prevType)) + " <- "_fu) + serializeType(nextType))));
        }
        else
            _current_fn.items.mutref(retIdx) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nextExpr; if (_) return _; } fail(""_fu); }());

        return out;
    };
    s_SolvedNode solveJump(const s_Node& node)
    {
        return solved(node, t_void, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveBinding(const s_Node& node)
    {
        const s_Node& annot = node.items[LET_TYPE];
        const s_Node& init = node.items[LET_INIT];
        s_SolvedNode s_annot = ([&]() -> s_SolvedNode { if (annot) return evalTypeAnnot(annot); else return s_SolvedNode{}; }());
        const s_Type& t_annot = s_annot.type;
        s_SolvedNode s_init = ([&]() -> s_SolvedNode { if (init) return solveNode(init, t_annot); else return s_SolvedNode{}; }());
        s_Type t_init { s_init.type };
        s_Type t_let = (t_annot ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(t_annot) : s_Type(t_annot)) : (((t_init.quals & q_mutref) || (node.flags & F_MUT)) ? clear_refs(t_init) : s_Type(([&]() -> const s_Type& { { const s_Type& _ = t_init; if (_) return _; } fail("Variable declarations without explicit type annotations must be initialized."_fu); }()))));
        if ((t_annot && t_init))
        {
            (isAssignable(t_annot, t_init) || fail("Type annotation does not match init expression."_fu));
        };
        if (s_init)
            s_init = maybeCopyOrMove(s_init, t_let);

        s_SolvedNode out = solved(node, t_let, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = s_annot; if (_) return _; } return s_init; }()), s_init } });
        if ((node.flags & F_MUT))
        {
            ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = _current_fn; if (_) return _; } fail("Mutable statics are not currently allowed."_fu); }());
        };
        return out;
    };
    s_SolvedNode solveLet(const s_Node& node)
    {
        s_SolvedNode out = solveBinding(node);
        s_ScopeIdx overload = Binding(out.value, ((node.flags & F_MUT) ? add_mutref(out.type) : add_ref(out.type)));
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveField(const s_Type& structType, const s_Node& node)
    {
        s_SolvedNode out = solveBinding(node);
        s_ScopeIdx overload = Field(out.value, structType, out.type);
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveCatch(const s_Node& node)
    {
        ((node.items.size() == 3) || fail(""_fu));
        fu_VEC<s_SolvedNode> nodes = solveNodes(node.items, s_Type{});
        (((nodes[1].kind == "let"_fu) && isAssignableAsArgument(nodes[1].type, s_Type(t_string))) || fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu)));
        return solved(node, nodes[0].type, nodes);
    };
    s_SolvedNode evalTypeAnnot(const s_Node& node)
    {
        if ((node.kind == "call"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            if (items.size())
            {
                if ((items.size() == 1))
                {
                    s_Type t = evalTypeAnnot(items[0]).type;
                    (t || fail(""_fu));
                    if ((node.value == "&"_fu))
                        return solved(node, add_ref(t), fu_VEC<s_SolvedNode>{});

                    if ((node.value == "&mut"_fu))
                        return solved(node, add_mutref(t), fu_VEC<s_SolvedNode>{});

                    if ((node.value == "[]"_fu))
                        return solved(node, createArray(t, ctx), fu_VEC<s_SolvedNode>{});

                }
                else if ((items.size() == 2))
                {
                    s_Type a = evalTypeAnnot(items[0]).type;
                    s_Type b = evalTypeAnnot(items[1]).type;
                    ((a && b) || fail(""_fu));
                    if ((node.value == "Map"_fu))
                        return solved(node, createMap(a, b, ctx), fu_VEC<s_SolvedNode>{});

                };
            }
            else
            {
                const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
                fu_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
                if (overloads)
                {
                    for (int i = 0; (i < overloads.size()); i++)
                    {
                        s_Overload maybe { GET(overloads[i]) };
                        if ((maybe.kind == "type"_fu))
                            return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(""_fu); }()), fu_VEC<s_SolvedNode>{});

                    };
                };
                fail((("No type `"_fu + id) + "` in scope."_fu));
            };
        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
            (_typeParams || fail((("Unexpected type param: `$"_fu + id) + "`."_fu)));
            s_Type type { ([&]() -> s_Type& { if (_typeParams) { s_Type& _ = _typeParams.mutref(id); if (_) return _; } fail((("No type param `$"_fu + id) + "` in scope."_fu)); }()) };
            return solved(node, type, fu_VEC<s_SolvedNode>{});
        };
        fail("TODO"_fu);
    };
    bool trySolveTypeParams(const s_Node& node, s_Type&& type, fu_COW_MAP<fu_STR, s_Type>& typeParams)
    {
        if ((node.kind == "call"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            if (items.size())
            {
                if ((items.size() == 1))
                {
                    s_Type t = ((node.value == "&"_fu) ? tryClear_ref(type) : ((node.value == "&mut"_fu) ? tryClear_mutref(type) : ((node.value == "[]"_fu) ? tryClear_array(type, ctx) : ((void)fail("TODO"_fu), s_Type { fu_STR{}, int{} }))));
                    if (!t)
                        return false;

                    return trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }()), s_Type(t), typeParams);
                }
                else if ((items.size() == 2))
                {
                    if ((node.value == "Map"_fu))
                    {
                        s_MapFields kv = tryClear_map(type, ctx);
                        if (!kv)
                            return false;

                        return (trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }()), s_Type(kv.key), typeParams) && trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(""_fu); }()), s_Type(kv.value), typeParams));
                    };
                };
            }
            else
            {
                const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
                fu_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
                if (overloads)
                {
                    for (int i = 0; (i < overloads.size()); i++)
                    {
                        s_Overload maybe { GET(overloads[i]) };
                        if ((maybe.kind == "type"_fu))
                            return isAssignable(([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(""_fu); }()), type);

                    };
                };
                fail((("No type `"_fu + id) + "` in scope."_fu));
            };
        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
            s_Type& _param = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { fu_STR{}, int{} }; return _; } (typeParams.upsert(id)));
            if (_param)
            {
                s_Type inter = type_tryInter(_param, type);
                if (!inter)
                    return false;

                type = inter;
            };
            _param = clear_refs(type);
            return true;
        };
        fail("TODO"_fu);
    };
    bool evalTypePattern(const s_Node& node, const fu_COW_MAP<fu_STR, s_Type>& typeParams)
    {
        const fu_VEC<s_Node>& items = node.items;
        if (((node.kind == "call"_fu) && (items.size() == 2)))
        {
            const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }());
            const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(""_fu); }());
            if ((node.value == "->"_fu))
            {
                if (((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu)))
                {
                    const fu_STR& tag = ([&]() -> const fu_STR& { { const fu_STR& _ = right.value; if (_.size()) return _; } fail(""_fu); }());
                    const s_Type& type = ([&]() -> const s_Type& { if (left.value.size()) { const s_Type& _ = typeParams[left.value]; if (_) return _; } fail((("No type param `$"_fu + left.value) + "` in scope."_fu)); }());
                    return type_has(type, tag);
                }
                else
                {
                    fu_COW_MAP<fu_STR, s_Type> typeParams0 { _typeParams };
                    _typeParams = typeParams;
                    s_Type expect = evalTypeAnnot(right).type;
                    s_Type actual = evalTypeAnnot(left).type;
                    _typeParams = typeParams0;
                    return isAssignable(expect, actual);
                };
            }
            else if ((node.value == "&&"_fu))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));
            else if ((node.value == "||"_fu))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));

        };
        fail("TODO"_fu);
    };
    s_Node createRead(const fu_STR& id)
    {
        return s_Node { "call"_fu, int(F_ID), fu_STR(id), fu_VEC<s_Node>{}, s_Token(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(""_fu); }())) };
    };
    s_SolvedNode solveCall(const s_Node& node)
    {
        const fu_STR& id = node.value;
        (id.size() || fail(""_fu));
        fu_VEC<s_SolvedNode> args = solveNodes(node.items, s_Type{});
        s_ScopeIdx callTargIdx = scope_match__mutargs(id, args, node.flags);
        s_Overload callTarg { GET(callTargIdx) };
        while (callTarg.partial)
        {
            const bool unshift = (callTarg.kind == "p-unshift"_fu);
            s_Partial partial { ([&]() -> s_Partial& { { s_Partial& _ = callTarg.partial; if (_) return _; } fail(""_fu); }()) };
            const s_ScopeIdx& viaIdx = ([&]() -> const s_ScopeIdx& { { const s_ScopeIdx& _ = partial.via; if (_) return _; } fail(""_fu); }());
            callTargIdx = ([&]() -> const s_ScopeIdx& { { const s_ScopeIdx& _ = partial.target; if (_) return _; } fail(""_fu); }());
            s_Overload via { GET(viaIdx) };
            callTarg = GET(callTargIdx);
            fu_VEC<s_SolvedNode> innerArgs {};
            if (!unshift)
                innerArgs = fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(""_fu); }()) } };

            s_SolvedNode argNode = CallerNode(createRead("__partial"_fu), s_Type(([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(""_fu); }())), viaIdx, fu_VEC<s_SolvedNode>(innerArgs));
            if (unshift)
                args.unshift(argNode);
            else
                args.mutref(0) = argNode;

        };
        return CallerNode(node, s_Type(([&]() -> s_Type& { { s_Type& _ = callTarg.type; if (_) return _; } fail(""_fu); }())), callTargIdx, fu_VEC<s_SolvedNode>(args));
    };
    s_SolvedNode solveArrayLiteral(const s_Node& node, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        s_Type itemType = (type ? tryClear_array(type, ctx) : s_Type { fu_STR{}, int{} });
        int startAt = 0;
        if ((!itemType && items.size()))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[startAt++]; if (_) return _; } fail(""_fu); }());
            itemType = clear_refs(head.type);
        };
        if (!itemType)
            fail("Cannot infer empty arraylit."_fu);

        for (int i = startAt; (i < items.size()); i++)
        {
            itemType = type_tryInter(itemType, ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }()).type);
            (itemType || fail("[array literal] No common supertype."_fu));
        };
        return solved(node, createArray(itemType, ctx), items);
    };
    s_SolvedNode createLet(const fu_STR& id, const s_Type& type, const int& flags)
    {
        return s_SolvedNode { "let"_fu, int(flags), fu_STR(id), fu_VEC<s_SolvedNode>{}, s_Token(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(""_fu); }())), s_Type(type), s_ScopeIdx{} };
    };
    s_ScopeIdx injectImplicitArg__mutfn(s_SolvedNode& fnNode, const fu_STR& id, const s_Type& type)
    {
        const int newArgIdx = (fnNode.items.size() + FN_RET_BACK);
        s_SolvedNode newArgNode = createLet(id, type, F_IMPLICIT);
        fnNode.items.insert(newArgIdx, newArgNode);
        if (fnNode.target)
        {
            s_Overload& o = GET(fnNode.target);
            ((o.kind == "fn"_fu) || fail(""_fu));
            ((o.names.size() == o.args.size()) || fail(""_fu));
            ((fu::lfind(o.names, id) < 0) || fail("Implicit argument name collision."_fu));
            o.args.push(type);
            o.names.push(id);
        };
        const int scope0 = Scope_push(_scope);
        s_ScopeIdx overload = Binding(id, type);
        Scope_pop(_scope, scope0);
        return overload;
    };
    void bindImplicitArg(fu_VEC<s_SolvedNode>& args, const int& argIdx, const fu_STR& id, const s_Type& type)
    {
        (TEST_expectImplicits || fail("Attempting to propagate implicit arguments."_fu));
        ((args.size() >= argIdx) || fail(""_fu));
        args.insert(argIdx, CallerNode(createRead(id), s_Type(type), getImplicit(id, type), fu_VEC<s_SolvedNode>{}));
    };
    s_ScopeIdx getImplicit(const fu_STR& id, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> args {};
        s_ScopeIdx matched = scope_tryMatch__mutargs(id, args, 0, type);
        if (!matched)
        {
            if (!_current_fn)
                fail((("No implicit `"_fu + id) + "` in scope."_fu));

            matched = injectImplicitArg__mutfn(_current_fn, id, type);
            (matched || fail(""_fu));
        };
        return matched;
    };
    s_SolvedNode solveIf(const s_Node& node, s_Type&& type)
    {
        const s_Node& n0 = node.items[0];
        const s_Node& n1 = node.items[1];
        const s_Node& n2 = node.items[2];
        s_SolvedNode cond = solveNode(n0, t_bool);
        s_SolvedNode cons = (n1 ? solveNode(n1, s_Type{}) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        s_SolvedNode alt = (n2 ? solveNode(n2, cons.type) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        s_SolvedNode priExpr { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = cons; if (_) return _; } { s_SolvedNode& _ = alt; if (_) return _; } fail(""_fu); }()) };
        s_SolvedNode secExpr { ([&]() -> s_SolvedNode& { if (cons) { s_SolvedNode& _ = alt; if (_) return _; } return cons; }()) };
        const s_Type& priType = priExpr.type;
        const s_Type& secType = secExpr.type;
        if (!((type == t_void) || (type == t_bool)))
        {
            type = (!secType ? s_Type(priType) : type_tryInter(priType, secType));
            (type || fail("[if] No common supertype."_fu));
            if (cons)
                cons = maybeCopyOrMove(cons, type);

            if (alt)
                alt = maybeCopyOrMove(alt, type);

        };
        return solved(node, ([&]() -> s_Type& { { s_Type& _ = type; if (_) return _; } fail(""_fu); }()), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { cond, cons, alt } });
    };
    s_SolvedNode solveNot(const s_Node& node)
    {
        return solved(node, t_bool, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { solveNode(node.items[0], t_bool) } });
    };
    s_SolvedNode solveOr(const s_Node& node, s_Type&& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, type);
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = 0; (i < items.size()); i++)
            {
                s_SolvedNode item { items.mutref(i) };
                if ((item.type == t_never))
                {
                    continue;
                };
                if (sumType)
                {
                    sumType = type_tryInter(sumType, item.type);
                    if (!sumType)
                    {
                        break;
                    };
                }
                else
                    sumType = item.type;

            };
            if (sumType)
            {
                for (int i = 0; (i < items.size()); i++)
                    items.mutref(i) = maybeCopyOrMove(items.mutref(i), sumType);

                type = sumType;
            }
            else
                type = t_bool;

        };
        return solved(node, type, items);
    };
    s_SolvedNode solveAnd(const s_Node& node, s_Type&& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = items.size(); (i-- > 0); )
            {
                const s_SolvedNode& item = items[i];
                if ((item.type == t_never))
                {
                    continue;
                };
                if (sumType)
                {
                    sumType = type_tryInter(sumType, item.type);
                    if (!sumType)
                    {
                        break;
                    };
                }
                else
                {
                    type = item.type;
                    sumType = item.type;
                };
                break;
            };
            if (sumType)
                type = sumType;
            else
                type = clear_mutref(type);

        };
        return solved(node, type, items);
    };
    s_SolvedNode solved(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items)
    {
        return s_SolvedNode { fu_STR(node.kind), int(node.flags), fu_STR(node.value), fu_VEC<s_SolvedNode>(items), s_Token(node.token), s_Type(type), s_ScopeIdx{} };
    };
    s_SolvedNode CallerNode(const s_Node& node, s_Type&& type, const s_ScopeIdx& target, fu_VEC<s_SolvedNode>&& args)
    {
        s_Overload overload { GET(target) };
        if ((overload.kind == "field"_fu))
        {
            s_SolvedNode head { ([&]() -> s_SolvedNode& { if ((args.size() == 1)) { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(""_fu); }()) };
            const s_Type& headType = ([&]() -> const s_Type& { { const s_Type& _ = head.type; if (_) return _; } fail(""_fu); }());
            type = add_refs_from(headType, type);
        }
        else if (args.size())
        {
            const fu_VEC<s_Type>& arg_t = ([&]() -> const fu_VEC<s_Type>& { { const fu_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(""_fu); }());
            for (int i = 0; (i < args.size()); i++)
                args.mutref(i) = maybeCopyOrMove(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(i); if (_) return _; } fail(""_fu); }()), arg_t[i]);

        };
        s_SolvedNode out = solved(node, type, args);
        out.target = target;
        return out;
    };
    s_SolvedNode maybeCopyOrMove(const s_SolvedNode& node, const s_Type& slot)
    {
        const int& q = slot.quals;
        if ((q & q_ref))
            return node;

        if (!(node.type.quals & q_ref))
            return node;

        if (!(q & q_copy))
            fail("Needs an explicit STEAL or CLONE."_fu);

        if (WARN_ON_IMPLICIT_COPY)
        {
        };
        return s_SolvedNode { "copy"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_Token(node.token), clear_refs(node.type), s_ScopeIdx{} };
    };
    fu_VEC<s_SolvedNode> solveNodes(const fu_VEC<s_Node>& nodes, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> result {};
        s_Token here0 { _here };
        result.resize(nodes.size());
        for (int i = 0; (i < nodes.size()); i++)
        {
            const s_Node& node = nodes[i];
            if (!node)
            {
                continue;
            };
            if (!isUnordered(node.kind))
            {
                _here = ([&]() -> const s_Token& { { const s_Token& _ = node.token; if (_) return _; } return _here; }());
                result.mutref(i) = solveNode(node, type);
                continue;
            };
            const int i0 = i;
            int i1 = nodes.size();
            for (int i = i0; (i < nodes.size()); i++)
            {
                const s_Node& node = nodes[i];
                if (!node)
                {
                    continue;
                };
                if (!isUnordered(node.kind))
                {
                    i1 = i;
                    break;
                };
                _here = ([&]() -> const s_Token& { { const s_Token& _ = node.token; if (_) return _; } return _here; }());
                result.mutref(i) = unorderedPrep(node);
            };
            for (int i = i0; (i < i1); i++)
            {
                const s_Node& node = nodes[i];
                if (node)
                {
                    _here = ([&]() -> const s_Token& { { const s_Token& _ = node.token; if (_) return _; } return _here; }());
                    result.mutref(i) = unorderedSolve(node, result.mutref(i));
                };
            };
            ((i1 > i0) || fail(""_fu));
            i = (i1 - 1);
        };
        ((result.size() == nodes.size()) || fail(""_fu));
        _here = here0;
        return result;
    };
    s_SolverOutput runSolver_EVAL()
    {
        return s_SolverOutput { solveNode(parse, s_Type{}), s_Scope(_scope) };
    };
};

#define runSolver(...) ((sf_runSolver { __VA_ARGS__ }).runSolver_EVAL())

s_Scope listGlobals()
{
    s_Scope scope {};
    Scope_Typedef(scope, "i8"_fu, t_i8);
    Scope_Typedef(scope, "i16"_fu, t_i16);
    Scope_Typedef(scope, "i32"_fu, t_i32);
    Scope_Typedef(scope, "i64"_fu, t_i64);
    Scope_Typedef(scope, "u8"_fu, t_u8);
    Scope_Typedef(scope, "u16"_fu, t_u16);
    Scope_Typedef(scope, "u32"_fu, t_u32);
    Scope_Typedef(scope, "u64"_fu, t_u64);
    Scope_Typedef(scope, "f32"_fu, t_f32);
    Scope_Typedef(scope, "f64"_fu, t_f64);
    Scope_Typedef(scope, "bool"_fu, t_bool);
    Scope_Typedef(scope, "void"_fu, t_void);
    Scope_Typedef(scope, "string"_fu, t_string);
    Scope_Typedef(scope, "never"_fu, t_never);
    return scope;
}
inline const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn __native_pure(): never never;\n\nfn STEAL (a: &mut $T): $T __native_pure;\nfn CLONE (a: &    $T): $T __native_pure;\n\nfn print(a: $A): void __native_pure;\nfn print(a: $A, b: $B): void __native_pure;\nfn print(a: $A, b: $B, c: $C): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native_pure;\n\n\n// Arithmetics.\n\nfn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn /(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @arithmetic): $T __native_pure;\n\nfn %(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @arithmetic): $T __native_pure;\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\n\nfn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native_pure;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\n\n\n// Logic.\n\nfn true (): bool __native_pure;\nfn false(): bool __native_pure;\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T): &mut $T __native_pure;\nfn ||=(a: &mut $T, b: $T): &mut $T __native_pure;\n\nfn SWAP(a: &mut $T, b: &mut $T): void __native_pure;\n\n\n// Arrays.\n\nfn len (a: $T[]): i32 __native_pure;\nfn find(a: $T[], b: $T): i32 __native_pure;\nfn has (a: $T[], b: $T): bool __native_pure;\n\nfn [](a: $T[], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native_pure;\n    case ($a -> &    $T[]): &    $T __native_pure;\n\nfn push(a: &mut $T[], b: $T): void __native_pure;\nfn unshift(a: &mut $T[], b: $T): void __native_pure;\nfn insert(a: &mut $T[], i: i32, b: $T): void __native_pure;\n\nfn concat(a: $T[], b: $T[]): $T[] __native_pure;\nfn slice(a: $T[], i0: i32, i1: i32): $T[] __native_pure;\nfn slice(a: $T[], i0: i32): $T[] __native_pure;\n\nfn splice(a: &mut $T[], i: i32, N: i32): void __native_pure;\nfn pop(a: &mut $T[]): void __native_pure;\n\nfn clear(a: &mut $T[]): void __native_pure;\nfn resize(a: &mut $T[], len: i32): void __native_pure;\nfn shrink(a: &mut $T[], len: i32): void __native_pure;\n\nfn move(a: &mut $T[], from: i32, to: i32): void __native_pure;\nfn sort(a: &mut $T[]): void __native_pure;\n\n\n// Strings.\n\nfn len(a: string): i32 __native_pure;\nfn [](a: string, i: i32): string __native_pure;\nfn +=(a: &mut string, b: string): &mut string __native_pure;\nfn + (a: string, b: string): string __native_pure;\n\nfn ==(a: string, b: string): bool __native_pure;\nfn !=(a: string, b: string): bool __native_pure;\nfn  >(a: string, b: string): bool __native_pure;\nfn  <(a: string, b: string): bool __native_pure;\nfn >=(a: string, b: string): bool __native_pure;\nfn <=(a: string, b: string): bool __native_pure;\n\nfn find(a: string, b: string): i32 __native_pure;\nfn has(a: string, b: string): bool __native_pure;\nfn starts(a: string, with: string): bool __native_pure;\n\nfn slice (a: string, i0: i32, i1: i32): string __native_pure;\nfn slice (a: string, i0: i32): string __native_pure;\n\nfn substr(a: string, i0: i32, i1: i32): string __native_pure;\nfn char  (a: string, i0: i32): i32 __native_pure;\n\nfn split(str: string, sep: string): string[] __native_pure;\n\nfn replace(in: string, all: string, with: string): string __native_pure;\n\n\n// Maps.\n\nfn [](a: Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native_pure;\n    case ($a -> &    Map($K, $V)): &    $V __native_pure;\n\nfn keys  (a: Map($K, $V)): $K[] __native_pure;\nfn values(a: Map($K, $V)): $V[] __native_pure;\nfn has   (a: Map($K, $V), b: $K): bool __native_pure;\nfn count (a: Map($K, $V)): i32 __native_pure;\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native_pure;\nfn assert(): never __native_pure;\n\n\n// Butt plugs.\n\n// TODO we should go for an any $B -> call stringify(b) macro.\nfn +(a: string, b: i32): string __native_pure;\nfn +(a: string, b: f64): string __native_pure;\nfn join(a: string[], sep: string): string __native_pure;\n\n// TODO fix impure io.\nfn now_hr(): f64 __native_pure;\nfn now_utc(): f64 __native_pure;\n\nfn env_get(key: string): string __native_pure;\n\nfn file_size(path: string): i32 __native_pure;\nfn file_read(path: string): string __native_pure;\nfn file_write(path: string, body: string): bool __native_pure;\n\nfn shell_exec(cmd: string): i32 __native_pure;\nfn shell_exec(cmd: string, stdout: &mut string): i32 __native_pure;\n\nfn hash_tea(str: string): string __native_pure;\n\nfn i32(v: f64): i32 __native_pure;\n\nfn exit(code: i32): never __native_pure;\n\n"_fu;

s_Scope solvePrelude()
{
    s_LexerOutput lexed = lex(prelude_src, "__prelude"_fu);
    s_Node root = parse("__prelude"_fu, lexed.tokens).root;
    s_TEMP_Context ctx {};
    s_Scope scope = listGlobals();
    s_SolverOutput solved = runSolver(root, scope, ctx);
    return solved.scope;
}
inline const s_Scope PRELUDE = solvePrelude();

s_SolverOutput solve(const s_Node& parse, s_TEMP_Context& ctx)
{
    return runSolver(parse, PRELUDE, ctx);
}
inline const int M_STMT = (1 << 0);
inline const int M_RETBOOL = (1 << 1);
inline const int M_CONST = (1 << 2);
inline const int M_RETVAL = (1 << 3);
inline const int M_ARGUMENT = (1 << 4);

struct sf_cpp_codegen
{
    const s_SolvedNode& root;
    const s_Scope& scope;
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
    const s_Overload& GET(const s_ScopeIdx& idx)
    {
        ((idx.raw > 0) || fu_THROW("Assertion failed."));
        return scope.overloads[(idx.raw - 1)];
    };
    [[noreturn]] fu_NEVER fail(fu_STR&& reason)
    {
        fu_THROW(reason);
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

        const s_Struct& tdef = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(type.canon, ctx); if (_) return _; } fail(("TODO: "_fu + type.canon)); }());
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
        fu_STR def = (("\nstruct "_fu + t.canon) + "\n{"_fu);
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
        return (def + "\n};\n"_fu);
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
    fu_STR cgRoot(const s_SolvedNode& root)
    {
        fu_STR src = cgStatements(root.items);
        fu_STR header = ((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + _tdef) + _fdef);
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
        s_SolvedNode restFn = s_SolvedNode { "fn"_fu, (fn.flags | F_CLOSURE), fu_STR(evalName), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { fn.items[(fn.items.size() - 2)], s_SolvedNode { "block"_fu, int{}, fu_STR{}, slice(items, end, items.size()), s_Token(fn.token), s_Type(t_void), s_ScopeIdx{} } } }, s_Token(fn.token), s_Type(t_void), s_ScopeIdx{} };
        fu_VEC<s_SolvedNode> head = fu_CONCAT(fu_CONCAT(slice(fn.items, 0, (fn.items.size() + FN_ARGS_BACK)), slice(items, 0, end)), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { restFn } });
        ((_clsrN == 0) || fail(""_fu));
        _clsrN--;
        fu_STR structName = ("sf_"_fu + fn.value);
        fu_STR src = (((((((((("\nstruct "_fu + structName) + blockWrap(head, false)) + ";"_fu) + "\n\n#define "_fu) + fn.value) + "(...) (("_fu) + structName) + " { __VA_ARGS__ })."_fu) + evalName) + "())\n"_fu);
        _clsrN++;
        return src;
    };
    fu_STR cgFn(const s_SolvedNode& fn)
    {
        if (!fn.items.size())
        {
            fu_STR src = ""_fu;
            const s_Template& tempatle = ([&]() -> const s_Template& { { const s_Template& _ = GET(fn.target).tempatle; if (_) return _; } fail(""_fu); }());
            const fu_COW_MAP<fu_STR, s_SolvedNode>& specs = tempatle.specializations;
            fu_VEC<fu_STR> keys = fu_KEYS(specs);
            ([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } (keys));
            for (int i = 0; (i < keys.size()); i++)
            {
                fu_STR key { keys.mutref(i) };
                const s_SolvedNode& s = specs[key];
                if (s.target)
                    src += cgNode(s, 0);

            };
            return src;
        };
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
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(([&]() -> const s_Type& { { const s_Type& _ = ret.type; if (_) return _; } fail(""_fu); }()), M_RETVAL);
        const bool closure = (!!_clsrN && (fn.flags & F_CLOSURE) && (fn.value != "=="_fu));
        if (!(fn.flags & F_CLOSURE))
            _indent = "\n"_fu;

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
        if ((!closure && (src != "int main()"_fu) && !(fn.flags & F_CLOSURE) && fu::has(_fdef, ([&]() -> const fu_STR& { { const fu_STR& _ = fn.value; if (_.size()) return _; } fail(""_fu); }()))))
            (_ffwd.upsert(src) = (("\n"_fu + src) + ";"_fu));

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
        s_SolvedNode init = (node.items ? s_SolvedNode(node.items[LET_INIT]) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
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
        fu_STR src = binding(node, true, false);
        if ((_fnN || _faasN))
            return src;

        src = fu_JOIN(fu_SPLIT(src, "([&]("_fu), "([]("_fu);
        if (fu::lmatch(src, "const "_fu))
            src = slice(src, 6);

        _fdef += (src = (("inline const "_fu + src) + ";\n"_fu));
        return ""_fu;
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

        s_Type itemType = ([&]() -> s_Type { { s_Type _ = tryClear_array(node.type, ctx); if (_) return _; } fail(""_fu); }());
        fu_STR itemAnnot = typeAnnot(itemType, 0);
        fu_STR arrayAnnot = typeAnnot(node.type, 0);
        return (((((((arrayAnnot + " { "_fu) + arrayAnnot) + "::INIT<"_fu) + items.size()) + "> { "_fu) + fu_JOIN(items, ", "_fu)) + " } }"_fu);
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
        const s_Overload& target = ([&]() -> const s_Overload& { { const s_Overload& _ = GET(node.target); if (_) return _; } fail(""_fu); }());
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if ((target.kind == "defctor"_fu))
        {
            const fu_STR& head = ([&]() -> const s_Type& { { const s_Type& _ = target.type; if (_) return _; } fail(""_fu); }()).canon;
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(head, ctx); if (_) return _; } fail(""_fu); }());
            fu_STR open = " { "_fu;
            fu_STR close = " }"_fu;
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((" { "_fu + head) + "::Data { "_fu);
                close = " }}"_fu;
            };
            return (((head + open) + fu_JOIN(items, ", "_fu)) + close);
        };
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = target.name; if (_.size()) return _; } fail(""_fu); }());
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
        if ((target.kind == "var"_fu))
            return ID(id);

        if ((target.kind == "field"_fu))
        {
            fu_STR sep = "."_fu;
            const s_Struct& parent = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }()).type.canon, ctx); if (_) return _; } fail(""_fu); }());
            if ((parent.flags & F_DESTRUCTOR))
                sep = ".data."_fu;

            return ((items.mutref(0) + sep) + ID(id));
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
            return (("fu::lfind("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "starts"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::lmatch("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "has"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::has("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "replace"_fu) && (items.size() == 3)))
        {
            include("\"../lib/vec/replace.h\""_fu);
            return (("fu::replace("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
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

        if (((id == "concat"_fu) && (items.size() == 2)))
            return cgConcat(items);

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
            return (((("fu::"_fu + id) + "("_fu) + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "env_get"_fu))
        {
            include("\"../lib/env.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "hash_tea"_fu))
        {
            include("\"../lib/tea.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "shell_exec"_fu))
        {
            include("\"../lib/shell.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu_JOIN(items, ", "_fu)) + ")"_fu);
        };
        return (((ID(id) + "("_fu) + fu_JOIN(items, ", "_fu)) + ")"_fu);
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
        fu_STR NEVER = "::NEVER"_fu;
        if (!fu::has(_tfwd, NEVER))
        {
            include("<stdexcept>"_fu);
            (_tfwd.upsert(NEVER) = "\nstruct fu_NEVER\n{\n    fu_NEVER(const fu_NEVER&) = delete;\n    void operator=(const fu_NEVER&) = delete;\n\n    template<typename T>\n    [[noreturn]] operator T() const\n    {\n        throw std::runtime_error(\"fu_NEVER cast\");\n    }\n};\n"_fu);
        };
        return "fu_NEVER"_fu;
    };
    fu_STR cgThrow(const fu_STR& kind, const fu_STR& item)
    {
        fu_STR THROW = "::THROW"_fu;
        if (!fu::has(_ffwd, THROW))
        {
            annotateNever();
            include("<stdexcept>"_fu);
            include("<string>"_fu);
            (_ffwd.upsert(THROW) = "\n[[noreturn]] fu_NEVER fu_THROW(const char* what)\n{\n    throw std::runtime_error(what);\n}\n\ntemplate <typename T>\n[[noreturn]] fu_NEVER fu_THROW(const T& what)\n{\n    throw std::runtime_error(\n        std::string(\n            what.data(), size_t(what.size())));\n}\n"_fu);
        };
        if ((kind == "assert"_fu))
        {
        };
        return (("fu_THROW("_fu + item) + ")"_fu);
    };
    fu_STR cgConcat(const fu_VEC<fu_STR>& items)
    {
        fu_STR CONCAT = "::CONCAT"_fu;
        if (!fu::has(_ffwd, CONCAT))
        {
            annotateVector();
            (_ffwd.upsert(CONCAT) = "\ntemplate <typename T>\nfu_VEC<T> fu_CONCAT(\n    const fu_VEC<T>& a,\n    const fu_VEC<T>& b)\n{\n    fu_VEC<T> result;\n    result.reserve(a.size() + b.size());\n\n    for (const auto& i : a) result.push(i);\n    for (const auto& i : b) result.push(i);\n\n    return result;\n}\n"_fu);
        };
        return (("fu_CONCAT("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgJoin(const fu_VEC<fu_STR>& items)
    {
        fu_STR JOIN = "::JOIN"_fu;
        if (!fu::has(_ffwd, JOIN))
        {
            annotateString();
            annotateVector();
            (_ffwd.upsert(JOIN) = "\ninline fu_STR fu_JOIN(\n    const fu_VEC<fu_STR>& vec,\n    const fu_STR& sep)\n{\n    int len = 0;\n    for (int i = 0; i < vec.size(); i++)\n    {\n        if (i)\n            len += sep.size();\n\n        len += vec[i].size();\n    }\n\n    fu_STR result;\n    result.reserve(len);\n    for (int i = 0; i < vec.size(); i++)\n    {\n        if (i)\n            result += sep;\n\n        result += vec[i];\n    }\n\n    return result;\n}\n"_fu);
        };
        return (("fu_JOIN("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
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
        return (("fu_SPLIT("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
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
        return (("fu_KEYS("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
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
        return (("std::swap("_fu + fu_JOIN(items, ", "_fu)) + ")"_fu);
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

#define cpp_codegen(...) ((sf_cpp_codegen { __VA_ARGS__ }).cpp_codegen_EVAL())

fu_STR compile(const fu_STR& fname, const fu_STR& src, s_TEMP_Context& ctx)
{
    s_Module module = upsertModule(fname, ctx);
    if (!module.in)
    {
        module.out = s_ModuleOutputs { fu_VEC<fu_STR>{}, s_SolverOutput{}, fu_STR{} };
        const f64 t0 = fu::now_hr();
        s_LexerOutput lexer_result = lex(src, fname);
        const f64 t1 = fu::now_hr();
        module.in = s_ModuleInputs { fu_STR(fname), fu_STR(src), s_LexerOutput(lexer_result), parse(fname, lexer_result.tokens) };
        const f64 t2 = fu::now_hr();
        module.stats.s_lex = (t1 - t0);
        module.stats.s_parse = (t2 - t1);
    }
    else if (!module.out)
        fu_THROW((("#import circle around `"_fu + fname) + "`."_fu));

    if (!module.out)
    {
        const f64 t0 = fu::now_hr();
        module.out = s_ModuleOutputs { fu_VEC<fu_STR>{}, solve(module.in.parse.root, ctx), fu_STR{} };
        const f64 t1 = fu::now_hr();
        module.out.cpp = cpp_codegen(module.out.solve.root, module.out.solve.scope, ctx);
        const f64 t2 = fu::now_hr();
        module.stats.s_solve = (t1 - t0);
        module.stats.s_cpp = (t2 - t1);
    };
    return module.out.cpp;
}

fu_STR compile_testcase(fu_STR&& src)
{
    fu_STR fname = "testcase"_fu;
    if (!fu::has(src, "fn ZERO()"_fu))
        src = (("\n\nfn ZERO(): i32 {\n"_fu + src) + "\n}\n"_fu);

    src += "\nfn main(): i32 ZERO();\n\n"_fu;
    s_TEMP_Context ctx {};
    return compile(fname, src, ctx);
}
inline const fu_STR TEST_SRC = "\n\n    fn test(one: i32)\n    {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn ZERO(): i32\n    {\n        return test(1) - 17;\n    }\n\n"_fu;

int ZERO()
{
    fu_STR cpp = compile_testcase(fu_STR(TEST_SRC));
    return (fu::lfind(cpp, "main()"_fu) ? 0 : 101);
}

fu_STR absdir(const fu_STR& a)
{
    return ((last(a) == "/"_fu) ? fu_STR(a) : (a + "/"_fu));
}
inline const fu_STR HOME = absdir(([]() -> fu_STR { { fu_STR _ = fu::env_get("HOME"_fu); if (_.size()) return _; } return "/Users/hdachev"_fu; }()));

fu_STR locate_PRJDIR()
{
    fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    ((fs > 10000) || fu_THROW(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs)));
    (std::cout << ("PRJDIR: "_fu + dir) << "\n");
    return dir;
}
inline const fu_STR PRJDIR = locate_PRJDIR();
inline const fu_STR GCC_CMD = (("g++ -std=c++1z -O3 "_fu + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wno-parentheses-equality "_fu);

struct sf_buildAndRun
{
    const fu_STR& cpp;
    int code {};
    fu_STR stdout {};
    fu_STR hash = fu::hash_tea(cpp);
    fu_STR F = ((((PRJDIR + "build.cpp/tea-"_fu) + hash) + "-"_fu) + cpp.size());
    fu_STR& ERR()
    {
        fu::file_write((PRJDIR + "build.cpp/failing-testcase.cpp"_fu), cpp);
        if (!stdout.size())
            stdout = (("[ EXIT CODE "_fu + code) + " ]"_fu);

        return stdout;
    };
    fu_STR buildAndRun_EVAL()
    {
        if ((fu::file_size((F + ".exe"_fu)) <= 0))
        {
            fu::file_write((F + ".cpp"_fu), cpp);
            code = ([&]() -> int { { int _ = fu::shell_exec((((((GCC_CMD + "-c -o "_fu) + F) + ".o "_fu) + F) + ".cpp 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((((((GCC_CMD + "-o "_fu) + F) + ".tmp "_fu) + F) + ".o 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((("chmod 755 "_fu + F) + ".tmp"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((((("mv "_fu + F) + ".tmp "_fu) + F) + ".exe"_fu), stdout); if (_) return _; } return fu::shell_exec((("rm "_fu + F) + ".o"_fu), stdout); }());
            if (code)
                return ERR();

        };
        code = fu::shell_exec((F + ".exe"_fu), stdout);
        if (code)
            return ERR();

        return ""_fu;
    };
};

#define buildAndRun(...) ((sf_buildAndRun { __VA_ARGS__ }).buildAndRun_EVAL())
inline const fu_VEC<fu_STR> NICE_THINGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "LOOKING GOOD TODAY !"_fu, "PASSING TESTS LIKE A BOSS !"_fu, "THIS IS SOME TOP NOTCH SHIT !"_fu, "VALUE ADDED !"_fu, "GOING STRONG !"_fu, "KILLIN IT !"_fu, "POWER LEVEL INCREASED !"_fu, "NOW MAKE ME BETTER AGAIN !"_fu, "NOW MAKE ME EVEN MORE BETTER !"_fu, "ALL CLEAR !"_fu, "UPGRADE ACCEPTED !"_fu, "YOU'RE THE BEST MAN !"_fu, "I LOVE YOU YOU !"_fu, "MORE IS MORE !"_fu, "THIS IS AWESOME !"_fu, "THIS IS AWESOME !"_fu } };

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

fu_STR ZERO(const fu_STR& src)
{
    fu_STR cpp = compile_testcase(fu_STR(src));
    fu_STR result = buildAndRun(cpp);
    if (result.size())
        fu_THROW(result);

    return cpp;
}

int FAIL(const fu_STR& src)
{
    fu_STR cpp;
    try
    {
        cpp = compile_testcase(fu_STR(src));
    }
    catch (const std::exception& o_0)
    {
        const fu_STR& e = fu_TO_STR(o_0.what());
    
        return e.size();
    }
;
    fu_THROW(("DID NOT THROW: "_fu + cpp));
}

void updateCPPFile(const fu_STR& path, const fu_STR& cpp)
{
    fu_STR fname = (path + ".cpp"_fu);
    if ((fu::file_read(fname) != cpp))
    {
        fu::file_write(fname, cpp);
        (std::cout << ("WROTE "_fu + fname) << "\n");
    };
}

void FU_FILE(const fu_STR& fname)
{
    fu_STR fpath = ((PRJDIR + "src/"_fu) + fname);
    (std::cout << "COMPILE "_fu << fname << "\n");
    fu_STR fu = fu::file_read(fpath);
    if (!fu.size())
        fu_THROW(("BAD FILE: "_fu + fpath));

    const f64 t0 = fu::now_hr();
    fu_STR cpp = ZERO(fu);
    const f64 t1 = fu::now_hr();
    const f64 tt = (t1 - t0);
    (std::cout << "        "_fu << tt << "s\n"_fu << "\n");
    if (WRITE_COMPILER)
        updateCPPFile(fpath, cpp);

}

void runTestSuiteAndBuildCompiler()
{
    runTestSuite();
    saySomethingNice();
    FU_FILE("compiler.fu"_fu);
}

void runTestSuite()
{
    ZERO("\n        return 1 - 1;\n    "_fu);
    ZERO("\n        fn sum(a: i32, b: i32): i32\n            a + b;\n\n        return sum(1, -1);\n    "_fu);
    ZERO("\n        fn sum(a: i32, b: i32)\n            a + b;\n\n        return sum(1, -1);\n    "_fu);
    ZERO("\n        fn sign(a: i32)\n            a > 0 ? 1 : a < 0 ? -1 : 0;\n\n        return sign(7) + sign(-3) + sign(0);\n    "_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n\n            return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n            else\n                return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 0; i < 10; i++)\n            sum++;\n\n        return sum * 2 - 20;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 10; i --> 0; )\n            sum--;\n\n        return sum * 2 + 20;\n    "_fu);
    ZERO("\n        fn decr(num: &mut i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu);
    ZERO("\n        mut res = 0;\n        fn decr()\n            res--;\n\n        decr();\n        return res + 1;\n    "_fu);
    ZERO("\n        mut res = 0;\n        fn decr(num: &mut i32) { num--; } // ret void\n\n        decr(res);\n        return res + 1;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu);
    FAIL("\n        let sum = 0;\n        while (sum < 15)\n            sum++; //ERR ++ overload\n\n        return sum - 15;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum += 2;\n\n        return sum - 16;\n    "_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        return named(b: 3, 6);\n    "_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        fn other(a: i32, b: i32)\n            named(:b, :a);\n\n        return other(b: 3, 6);\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(r: Range)\n            r.max - r.min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        mut r = Range(1, 2);\n        r.min++;\n        return r.max - r.min;\n    "_fu);
    FAIL("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        let r = Range(1, 2);\n        r.min++; //ERR ++ overload\n        return r.max - r.min;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using r: Range)\n            max - min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n\n            fn size()\n                max - min;\n        }\n\n        let r = Range(14, 21);\n\n        return size(r) - 7;\n    "_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        return X(1).test(-1);\n    "_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        fn hey(using x: X) test(-1);\n\n        return X(1).hey;\n    "_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n        }\n\n        fn dist(using p: Player, other: Player)\n            x - other.x;\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n\n            fn dist(other: Player)\n                x - other.x;\n        }\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu);
    ZERO("\n        fn inner(i: i32): i32\n            i > 0 ? outer(i - 1) : 0;\n\n        fn outer(i: i32): i32\n            2 * inner(i);\n\n        return outer(1);\n    "_fu);
    ZERO("\n        fn test(one: i32)\n        {\n            let zero = one - 1;\n            let two  = one * 2;\n\n            fn inner(i: i32): i32\n                i > zero ? outer(i - one) : zero;\n\n            fn outer(i: i32): i32\n                two * inner(i);\n\n            return outer(one) + (two - one) * 17;\n        }\n\n        fn ZERO() test(1) - 17;\n    "_fu);
    ZERO("\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu);
    ZERO("\n        fn outer(i: i32): i32\n            i > 0   ? inner(i)\n                    : 2 * i;\n\n        fn inner(implicit x: i32, i: i32): i32\n            outer(i - 2 * x);\n\n        let implicit x = 3;\n        return outer(6);\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn test()\n            size();\n\n        let implicit r = Range(14, 21);\n\n        return test  - 7;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn inner()\n            size();\n\n        fn outer()\n            inner();\n\n        let implicit r = Range(14, 21);\n\n        return outer() - 7;\n    "_fu);
    ZERO("\n        let x = 1;\n\n        fn test(): &i32\n            x;\n\n        return test - 1;\n    "_fu);
    ZERO("\n        let a = 1;\n        let x: &i32 = a;\n\n        return a - x;\n    "_fu);
    ZERO("\n        struct Test {\n            x: &i32;\n        }\n\n        let a = 1;\n        let test = Test(a);\n\n        return test.x - 1;\n    "_fu);
    ZERO("\n        mut a = 0;\n        mut b = a;\n        b++;\n        let c = a = b;\n\n        return a - c;\n    "_fu);
    ZERO("\n        let x = 3;\n        return x / 2 - 1;\n    "_fu);
    ZERO("\n        fn div3by(a: $T) 3 / a;\n        return div3by(2) - 1;\n    "_fu);
    fu_STR RAII = "\n        let mut i = 0;\n        struct S {\n            j: &mut i32;\n            fn free()\n                j += j + 1;\n        }\n    "_fu;
    ZERO((RAII + "\n        let s = S(i);\n        return i;\n        // <-destructor here\n    "_fu));
    ZERO((RAII + "\n        { let s = S(i); } // <-destructor here\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        test(S(i)); // <-destructor here\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        let s = S(i);\n        test(s);\n        return i;\n        // <-destructor here\n    "_fu));
    ZERO((RAII + "\n        fn test(s: S) { return s.j; } // <-destructor here\n        test(S(i));\n        return i - 1;\n    "_fu));
    FAIL((RAII + "\n        fn test(mut s: S) { return s.j; } // <-destructor here\n\n        mut s = S(i);\n        test( s ); //ERR explicit\n\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(mut s: S) {\n            let x = STEAL (s);\n            return x.j; // <-destructor here\n        }\n\n        mut s = S(i);\n        test( STEAL(s) );\n\n        return i - 1;\n    "_fu));
    ZERO("\n        mut arr = [0, 1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu);
    ZERO("\n        mut arr: i32[] = [1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu);
    ZERO("\n        let x = 5;\n        mut arr = [ -5 ];\n        arr.push(x);\n        return arr[0] + arr[1];\n    "_fu);
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
        ZERO(src);
    };
    ARROPS("0,1,2,3,4"_fu, "push(5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(5, 5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "pop()"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "splice(4, 1)"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "unshift(5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(0, 5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(1, 5)"_fu, "@[2] + @[5] - @[1]"_fu);
    ARROPS("0,1,2,3,100"_fu, "splice(1, 3)"_fu, "@.len + @[0] + @[1] - 102"_fu);
    ZERO("\n        let OPERATORS = [ '+', '-', '*', '/' ];\n\n        fn ZERO()\n            OPERATORS[2] == '*' ? 0 : 1;\n    "_fu);
    ZERO("\n        struct Y { b: bool; }\n        struct X { y: Y[]; }\n\n        mut x: X[];\n        x.push( X([ Y(true) ]) );\n\n        return x.len + x[0].y.len * 2 - 3;\n    "_fu);
    ZERO("\n        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]\n        a.sort();\n        return a[0] + a[1] + a[3] + a[4];\n    "_fu);
    ZERO("\n        mut a = [0, 1, 2, 3, 4]; // [2, 0, 1, 3, 4]\n        a.move(2, 0);\n        return a[0] + a[3] - a[2] - a[4];\n    "_fu);
    ZERO("\n        mut a = [2, 0, 1, 3, 4]; // [0, 1, 2, 3, 4]\n        a.move(0, 2);\n        return a[1] + a[4] - a[2] - a[3];\n    "_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1, 3);\n        return b.len - b[1];\n    "_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1);\n        return b.len - b[2];\n    "_fu);
    ZERO("\n        mut str = 'hello ';\n        str += 'world';\n\n        return str.len - 11;\n    "_fu);
    ZERO("\n        let str = 'hello ' + 'world';\n\n        return str.starts(with: 'hel')\n             ? str.len - 11\n             : 171;\n    "_fu);
    ZERO("\n        let str = 'a' + 1710010;\n\n        return str == 'a1710010'\n             ? 0 : 101;\n    "_fu);
    ZERO("\n        let str = 'hello world';\n        mut cpy = '';\n        for (mut i = 0; i < str.len; i++)\n            cpy += str[i];\n\n        return (cpy.len - 11) + (cpy == str ? 0 : 1);\n    "_fu);
    ZERO("\n        return 'hello world'.find('world')\n             - 2 * [1, 7, 13, 14, 19].find(14); // expect_lambda\n    "_fu);
    ZERO("\n        return ('hello world'.has('world') ? 1 : 0) // expect_lambda\n             + ([1, 14, 96, 2].has(14)     ? 2 : 0)\n             - 3;\n    "_fu);
    ZERO("\n        let hw = 'hello world!';\n        let a = hw.slice(6, 6 + 5); // expect_lambda\n        let b = hw.substr(6, 5);\n        return a == b && a == 'world' ? a.len - 5 : 1;\n    "_fu);
    ZERO("\n        let tests =\n        [\n            '',\n            ' ',\n            '  ',\n            'hey you duders',\n            ' hey you duders',\n            'hey you duders ',\n            '  hey you duders ',\n            '  hey you  duders ',\n            '  hey you  duders  '\n        ];\n\n        fn test(item: string)\n            item == item.split(' ').join(' ')\n                ? 0\n                : item.len;\n\n        mut sum = 0;\n        for (mut i = 0; i < tests.len; i++)\n            sum += test(tests[i]);\n\n        return sum;\n    "_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        return x['hello'] - x['world'] + 1;\n    "_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        let b = 'hello world';\n        mut offset = 0;\n\n        fn pop(): string { // expect_lambda\n            mut a = '';\n\n            while (offset < b.len) {\n                let c = b[offset++];\n                if (c == ' ')\n                    break;\n\n                a += c;\n            }\n\n            return a;\n        }\n\n        return x[pop()] - x[pop()] + 1;\n    "_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test() - 3;\n    "_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(b: -1);\n    "_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(-2);\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.a - 1 + t.b * 7;\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.b;\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(a: 1);\n        return t.a - 1 + t.b * 7;\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(b: 1);\n        return t.b - 1 + t.a * 7;\n    "_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey() Test(); // expect_lambda private type, technically ok, technically ok though not needed\n        return hey.x;\n    "_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey(y: i32 = 0) // expect_lambda private type, technically ok though not needed\n            y   ? Test(1)\n                : Test();\n\n        return hey.x;\n    "_fu);
    ZERO("\n        let s = 7;\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        let s = 0;\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        let s = 'hello';\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        let s = '';\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        let s = [ 4 ];\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        mut s = [ 4 ];\n        s.pop();\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S = S(1);\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S;\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        mut sum = 0;\n\n        :outer for (mut y = 1; y < 10; y++)\n        {\n            sum += y * 10; // 10, 20\n            for (mut x = 1; x < 10; x++)\n            {\n                sum += x; // 1, 1, 2\n                if (y == 1) continue :outer;\n                if (x == 2) break    :outer;\n            }\n        }\n\n        return sum - 34;\n    "_fu);
    ZERO("\n        mut a = 0;\n        return (a++, a - 1);\n    "_fu);
    ZERO("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test();\n        return t.x - 1;\n    "_fu);
    FAIL("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test; //ERR orphan\n        return t.x - 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x || y;\n\n        return w == 'hello' ? 0 : 1; // expect_lambda\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x && y; // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = 3 && x || y; // expect_lambda\n\n        return w == 'hello' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y; // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y || throw(\"Nope.\"); // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu);
    ZERO("\n        mut i = 7;\n        i ||= 11; // expect_lambda\n        return i - 7;\n    "_fu);
    ZERO("\n        mut i = 0;\n        i ||= 11; // expect_lambda\n        return i - 11;\n    "_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['hello'] = 'world';\n        fn f() (\n            g++, 'cruel world'); // expect_lambda\n\n        m['hello'] ||= f();\n        return g;\n    "_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['_not_hello_'] = 'world';\n        fn f() (\n            g++, 'cruel world'); // expect_lambda\n\n        m['hello'] ||= f();\n        return g - 1;\n    "_fu);
    ZERO("\n        {\n            {\n                return 0;\n            }\n        }\n    "_fu);
    FAIL("\n        {\n        {\n            return 0; //ERR block\n        }\n        }\n    "_fu);
    ZERO("\n        {\n            return 0;\n        }\n    "_fu);
    FAIL("\n        {\n            return 0; //ERR block\n       }\n    "_fu);
    FAIL("\n        {\n            return 0; //ERR block\n         }\n    "_fu);
    ZERO("\n\n    struct BINOP {\n        P: Map(string, i32);\n    };\n\n    fn setupOperators()\n    {\n        mut out: BINOP;\n\n        fn binop(op: string)\n            out.P[op] = 7;\n\n        binop(',');\n\n        return out;\n    }\n\n    let BINOP   = setupOperators();\n    let P_COMMA = BINOP.P[','] || assert();\n\n    fn ZERO() P_COMMA - 7;\n\n    "_fu);
    ZERO("\n\n        // -no-lambda\n        // This converted to a ref-returning\n        // logical chain for some reason.\n        let hex = true;\n        let trail = 'x';\n        if (!(trail >= '0' && trail <= '9') &&\n            !(hex && (trail >= 'a' && trail <= 'f'\n                   || trail >= 'A' && trail <= 'F')))\n        {\n            return 0;\n        }\n\n        return 1;\n\n    "_fu);
    ZERO("\n        struct Type     { i: i32; };\n        struct Token    { i: i32; };\n        struct ScopeIdx { i: i32; };\n\n        struct SolvedNode\n        {\n            kind:       string;\n            flags:      i32;\n            value:      string;\n            items:      SolvedNode[];\n            token:      Token;\n\n            type:       Type;\n            target:     ScopeIdx;\n        };\n\n        let _here: Token;\n\n        fn createDefaultInit(type: Type): SolvedNode\n        {\n            // Broken arg re-arrange.\n            return SolvedNode(\n                kind: 'definit',\n                token: _here,\n                :type);\n        }\n\n        return createDefaultInit(Type()).target.i;\n    "_fu);
    ZERO("\n        struct Type         { i: i32; };\n        struct Scope        { i: i32; };\n        struct Partial      { i: i32; };\n        struct Template     { i: i32; };\n        struct SolvedNode   { i: i32; };\n\n        pub fn Scope_add(\n            scope: &mut Scope,\n            kind: string, id: string, type: Type,\n\n            min: i32 = 0,\n            max: i32 = 0,\n            arg_n: string[]     = [],\n            arg_t: Type[]       = [],\n            arg_d: SolvedNode[] = [],\n            template: Template  = [],\n            partial: Partial    = []): i32\n        {\n            return scope.i\n                 + kind.len + id.len + type.i\n                 + min + max + arg_n.len + arg_t.len + arg_d.len\n                 + template.i + partial.i;\n        }\n\n        mut _scope: Scope;\n        let id: string;\n        let t_template: Type;\n        let min: i32;\n        let max: i32;\n        let arg_n: string[];\n        let template: Template;\n\n        return Scope_add(\n            _scope,\n            '', id, t_template,\n            min, max, arg_n,\n            :template);\n    "_fu);
    ZERO("\n        let i = 0;\n        let items = [ '' ];\n        i == items.len - 1 || throw('what?');\n        return i;\n    "_fu);
    ZERO("\n\n        return false /* test */\n             ? 0xffffff // what is this\n             : 0 // madness\n             ;\n    "_fu);
    ZERO("\n        let a = 7;\n        let b = a && 3;\n        return b - 3;\n    "_fu);
    ZERO("\n        struct S { i: i32; }\n\n        let a = S(0);\n        let b = S(3);\n\n        return a.i\n            || (b || S(4)).i * 2 - (a || S(6)).i\n            && throw('woot');\n    "_fu);
    ZERO("\n\n        struct TrueStory { kind: string; value: string; };\n\n        mut specialized = TrueStory(kind: 'fn', value: 'val');\n\n        specialized.kind == 'fn' && specialized.value || throw('nope');\n\n        let v: &mut string = specialized.kind == 'fn'\n                          && specialized.value\n                          || throw('nope');\n        v += 'ue';\n\n        return specialized.value == 'value' ? 0 : 1;\n\n    "_fu);
    ZERO("\n        struct Token {\n            value: string;\n        };\n\n        fn consume(): Token {\n            return Token('hey');\n        };\n\n        fn ZERO(): i32 {\n            let a = 3;\n            let v = a && consume().value;\n            return v.len - a;\n        };\n    "_fu);
    FAIL("\n        struct ScopeIdx { raw: i32; };\n        fn thing(x: i32) x;\n        mut _return_scope: ScopeIdx;\n\n        fn hey(x: i32) {\n            let scope0 = thing(x);\n            _return_scope = scope0; //overload\n            return _return_scope.raw;\n        }\n\n        return hey(0);\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        fn ZERO()\n        {\n            let a = [1];\n            mut b = [2];\n\n            b.ARR_LAST += a.ARR_LAST;\n            return b.ARR_LAST - 3;\n        };\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - 3;\n    "_fu);
    ZERO("\n        struct S { i: i32; }\n        fn test(mut x: S) x.i += 1;\n        return S(-1).test;\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - [3].ARR_LAST;\n    "_fu);
    ZERO("\n\n        struct SolvedNode {\n            value: i32;\n            items: SolvedNode[];\n        };\n\n        fn visitNodes(_v: &mut $V, _n: SolvedNode) {\n\n            fn traverse(v: &mut $V, n: SolvedNode) {\n                v.visit(n);\n                for (mut i = 0; i < n.items.len; i++)\n                    traverse(v, n.items[i]);\n            }\n\n            traverse(_v, _n);\n        };\n\n        struct Visitor {\n            sum: i32;\n        };\n\n        fn visit(using v: &mut Visitor, node: SolvedNode) {\n            sum += node.value;\n        };\n\n        fn ZERO(): i32 {\n            let tree = SolvedNode(3,\n                [ SolvedNode(5), SolvedNode(7) ]);\n\n            mut myVisitor: Visitor;\n            myVisitor.visitNodes(tree);\n            return myVisitor.sum - 15;\n        };\n\n    "_fu);
    ZERO("\n        return 0 > 1 ? throw('should type check') : 0;\n    "_fu);
    ZERO("\n        fn throw_hey(): i32 {\n            throw('hey');\n            return 1;\n        }\n\n        fn ZERO(): i32 {\n            let x = throw_hey()\n                catch err\n                    return err.len - 3;\n\n            return 7;\n        }\n    "_fu);
}

int main()
{
    return ZERO();
}
