#include "../lib/cow_vec.h"
#include <algorithm>
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
struct s_LexResult;
struct s_MapFields;
struct s_Node;
struct s_Overload;
struct s_Partial;
struct s_ScopeIdx;
struct s_ScopeItem;
struct s_Scope;
struct s_SolveResult;
struct s_SolvedNode;
struct s_StructField;
struct s_Struct;
struct s_TEMP_Context;
struct s_Template;
struct s_Token;
struct s_Type;
template <typename T>
inline T fu_CLONE(const T& source)
{
    return source;
}

template <typename T>
fu_COW_VEC<T> fu_CONCAT(
    const fu_COW_VEC<T>& a,
    const fu_COW_VEC<T>& b)
{
    fu_COW_VEC<T> result;
    result.reserve(a.size() + b.size());

    for (const auto& i : a) result.push(i);
    for (const auto& i : b) result.push(i);

    return result;
}

inline fu_COW_STR fu_JOIN(
    const fu_COW_VEC<fu_COW_STR>& vec,
    const fu_COW_STR& sep)
{
    size_t len = 0;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (i)
            len += sep.size();

        len += vec[i].size();
    }

    fu_COW_STR result;
    result.reserve(len);
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (i)
            result += sep;

        result += vec[i];
    }

    return result;
}

template <typename K, typename V>
fu_COW_VEC<K> fu_KEYS(
    const fu_COW_MAP<K, V>& map)
{
    return map.m_keys;
}

inline fu_COW_VEC<fu_COW_STR> fu_SPLIT(
    fu_COW_STR s,
    const fu_COW_STR& sep)
{
    fu_COW_VEC<fu_COW_STR> result;

    size_t next;
    while (int(next = s.find(sep)) >= 0)
    {
        result.push(s.slice(0, next));
        s = s.slice(next + sep.size());
    }

    result.push(static_cast<fu_COW_STR&&>(s));
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
            what.m_data, size_t(what.m_size)));
}

bool operator==(const s_Type& a, const s_Type& b);
bool someFieldNonCopy(const fu_COW_VEC<s_StructField>& fields);
int ZERO();
int copyOrMove(const int& flags, const fu_COW_VEC<s_StructField>& fields);
int auto_main();
s_SolveResult solve(const s_Node& parse, s_TEMP_Context& ctx);
s_Type createArray(const s_Type& item, s_TEMP_Context& ctx);
struct s_Token
{
    fu_COW_STR kind;
    fu_COW_STR value;
    fu_COW_STR fname;
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

struct s_LexResult
{
    fu_COW_STR fname;
    fu_COW_VEC<s_Token> tokens;
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
    fu_COW_MAP<fu_COW_STR, int> PRECEDENCE;
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
    fu_COW_STR kind;
    int flags;
    fu_COW_STR value;
    fu_COW_VEC<s_Node> items;
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

struct s_Type
{
    fu_COW_STR canon;
    int quals;
    explicit operator bool() const noexcept
    {
        return false
            || canon.size()
            || quals
        ;
    }
};

struct s_StructField
{
    fu_COW_STR id;
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
    fu_COW_STR kind;
    fu_COW_STR id;
    fu_COW_VEC<s_StructField> fields;
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
    fu_COW_MAP<fu_COW_STR, s_Struct> types;
    explicit operator bool() const noexcept
    {
        return false
            || types
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

struct s_ScopeItem
{
    fu_COW_STR id;
    s_ScopeIdx index;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || index
        ;
    }
};

struct s_SolvedNode
{
    fu_COW_STR kind;
    int flags;
    fu_COW_STR value;
    fu_COW_VEC<s_SolvedNode> items;
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
    fu_COW_MAP<fu_COW_STR, s_SolvedNode> specializations;
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
    fu_COW_STR kind;
    fu_COW_STR name;
    s_Type type;
    int min;
    int max;
    fu_COW_VEC<s_Type> args;
    fu_COW_VEC<fu_COW_STR> names;
    fu_COW_VEC<s_SolvedNode> defaults;
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
    fu_COW_VEC<s_ScopeItem> items;
    fu_COW_VEC<s_Overload> overloads;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
        ;
    }
};

struct s_SolveResult
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
inline const bool WARN_ON_IMPLICIT_COPY = false;

fu_COW_STR last(const fu_COW_STR& s)
{
    return (int(s.size()) ? fu_STRING(s[(int(s.size()) - 1)]) : fu_STRING(""));
}
inline const fu_COW_STR OPTOKENS = fu_STRING("{}[]()!?~@#$%^&*/-+<=>,.;:|");
inline const fu_COW_VEC<fu_COW_STR> OPERATORS = fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<61> { fu_STRING("+"), fu_STRING("++"), fu_STRING("-"), fu_STRING("--"), fu_STRING("*"), fu_STRING("**"), fu_STRING("/"), fu_STRING("%"), fu_STRING("<"), fu_STRING("<<"), fu_STRING("<<<"), fu_STRING(">"), fu_STRING(">>"), fu_STRING(">>>"), fu_STRING("==="), fu_STRING("=="), fu_STRING("!="), fu_STRING("!=="), fu_STRING("<="), fu_STRING(">="), fu_STRING("=>"), fu_STRING("->"), fu_STRING("<=>"), fu_STRING("!"), fu_STRING("?"), fu_STRING("??"), fu_STRING("."), fu_STRING(".."), fu_STRING("..."), fu_STRING(":"), fu_STRING("::"), fu_STRING(","), fu_STRING(";"), fu_STRING("&"), fu_STRING("&&"), fu_STRING("|"), fu_STRING("||"), fu_STRING("^"), fu_STRING("~"), fu_STRING("{"), fu_STRING("}"), fu_STRING("["), fu_STRING("]"), fu_STRING("("), fu_STRING(")"), fu_STRING("[]"), fu_STRING("="), fu_STRING("+="), fu_STRING("-="), fu_STRING("*="), fu_STRING("**="), fu_STRING("/="), fu_STRING("%="), fu_STRING("&="), fu_STRING("|="), fu_STRING("^="), fu_STRING("&&="), fu_STRING("||="), fu_STRING("@"), fu_STRING("#"), fu_STRING("$") } };

struct sf_lex
{
    const fu_COW_STR& src;
    const fu_COW_STR& fname;
    const int end = int(src.size());
    int line = 1;
    int lidx = -1;
    int idx = 0;
    fu_COW_VEC<s_Token> tokens {};
    void token(const fu_COW_STR& kind, const fu_COW_STR& value, const int& idx0, const int& idx1)
    {
        const int col = (idx0 - lidx);
        tokens.push(s_Token { fu_CLONE(kind), fu_CLONE(value), fu_CLONE(fname), fu_CLONE(idx0), fu_CLONE(idx1), fu_CLONE(line), fu_CLONE(col) });
    };
    void err_str(const fu_COW_STR& kind, const int& idx0, const fu_COW_STR& reason)
    {
        while (((idx < end) && (fu_STRING(src[idx]) > fu_STRING(" "))))
            idx++;

        const int col = (idx0 - lidx);
        fu_COW_STR value = src.slice(idx0, idx);
        fu_THROW(((((((((((((fu_STRING("LEX ERROR: ") + fname) + fu_STRING("@")) + line) + fu_STRING(":")) + col) + fu_STRING(":\n\t")) + reason) + fu_STRING("\n\t")) + kind) + fu_STRING(": `")) + value) + fu_STRING("`")));
    };
    void err(const fu_COW_STR& kind, const int& idx0, const int& reason)
    {
        err_str(kind, idx0, fu_STRING(src[reason]));
    };
    fu_COW_STR checkNum(const fu_COW_STR& kind, const fu_COW_STR& src)
    {
        if (src.size())
        {
        };
        return kind;
    };
    fu_COW_STR unescapeStr(const fu_COW_STR& src, const int& idx0, const int& idx1)
    {
        fu_COW_STR out = fu_STRING("");
        const int n = (idx1 - 1);
        for (int i = (idx0 + 1); (i < n); i++)
        {
            fu_COW_STR c = fu_STRING(src[i]);
            if ((c == fu_STRING("\\")))
            {
                fu_COW_STR c1 = fu_STRING(src[++i]);
                if ((c1 == fu_STRING("n")))
                    out += fu_STRING("\n");
                else if ((c1 == fu_STRING("r")))
                    out += fu_STRING("\r");
                else if ((c1 == fu_STRING("t")))
                    out += fu_STRING("\t");
                else if ((c1 == fu_STRING("v")))
                    out += fu_STRING("\v");
                else
                    out += c1;

            }
            else
                out += c;

        };
        return out;
    };
    s_LexResult lex_EVAL()
    {
        while ((idx < end))
        {
            const int idx0 = fu_CLONE(idx);
            fu_COW_STR c = fu_STRING(src[idx++]);
            if ((c <= fu_STRING(" ")))
            {
                if ((c == fu_STRING("\n")))
                {
                    line++;
                    lidx = (idx - 1);
                };
            }
            else if ((((c >= fu_STRING("A")) && (c <= fu_STRING("Z"))) || ((c >= fu_STRING("a")) && (c <= fu_STRING("z"))) || (c == fu_STRING("_"))))
            {
                while ((idx < end))
                {
                    fu_COW_STR c = fu_STRING(src[idx++]);
                    if ((((c >= fu_STRING("A")) && (c <= fu_STRING("Z"))) || ((c >= fu_STRING("a")) && (c <= fu_STRING("z"))) || (c == fu_STRING("_")) || ((c >= fu_STRING("0")) && (c <= fu_STRING("9")))))
                    {
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                const int idx1 = fu_CLONE(idx);
                token(fu_STRING("id"), src.slice(idx0, idx1), idx0, idx1);
            }
            else if (((c >= fu_STRING("0")) && (c <= fu_STRING("9"))))
            {
                bool hex = false;
                bool dot = false;
                bool exp = false;
                if (((c == fu_STRING("0")) && (idx < end) && (fu_STRING(src[idx]) == fu_STRING("x"))))
                {
                    hex = true;
                    idx++;
                };
                while ((idx < end))
                {
                    fu_COW_STR c = fu_STRING(src[idx++]);
                    if (((c >= fu_STRING("0")) && (c <= fu_STRING("9"))))
                    {
                    }
                    else if ((c == fu_STRING(".")))
                    {
                        if ((hex || dot || exp))
                        {
                            err(fu_STRING("num"), idx0, (idx - 1));
                            break;
                        };
                        dot = true;
                    }
                    else if ((((c == fu_STRING("e")) || (c == fu_STRING("E"))) && !hex))
                    {
                        if ((hex || exp))
                        {
                            err(fu_STRING("num"), idx0, (idx - 1));
                            break;
                        };
                        if (((idx < end) && ((fu_STRING(src[idx]) == fu_STRING("-")) || (fu_STRING(src[idx]) == fu_STRING("+")))))
                            idx++;

                        exp = true;
                    }
                    else if ((((c >= fu_STRING("a")) && (c <= fu_STRING("f"))) || ((c >= fu_STRING("A")) && (c <= fu_STRING("F")))))
                    {
                        if (!hex)
                        {
                            err(fu_STRING("num"), idx0, (idx - 1));
                            break;
                        };
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                fu_COW_STR trail = fu_STRING(src[(idx - 1)]);
                if ((!((trail >= fu_STRING("0")) && (trail <= fu_STRING("9"))) && !(hex && (((trail >= fu_STRING("a")) && (trail <= fu_STRING("f"))) || ((trail >= fu_STRING("A")) && (trail <= fu_STRING("F")))))))
                    err(fu_STRING("num"), idx0, (idx - 1));
                else
                {
                    const int idx1 = fu_CLONE(idx);
                    fu_COW_STR str = src.slice(idx0, idx1);
                    token(checkNum(((dot || exp) ? fu_STRING("num") : fu_STRING("int")), str), str, idx0, idx1);
                };
            }
            else if (((c == fu_STRING("'")) || (c == fu_STRING("\"")) || (c == fu_STRING("`"))))
            {
                bool esc = false;
                bool ok = false;
                while ((idx < end))
                {
                    fu_COW_STR c1 = fu_STRING(src[idx++]);
                    if ((c1 == c))
                    {
                        ok = true;
                        break;
                    }
                    else if ((c1 == fu_STRING("\\")))
                    {
                        esc = true;
                        idx++;
                    }
                    else if ((c == fu_STRING("\n")))
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
                if (!ok)
                    err_str(fu_STRING("str"), idx0, fu_STRING("Unterminated string literal."));
                else
                {
                    const int idx1 = fu_CLONE(idx);
                    fu_COW_STR str = (esc ? unescapeStr(src, idx0, idx1) : src.slice((idx0 + 1), (idx1 - 1)));
                    token(fu_STRING("str"), str, idx0, idx1);
                };
            }
            else if (((c == fu_STRING("/")) && (idx < end) && (fu_STRING(src[idx]) == fu_STRING("/"))))
            {
                idx++;
                while ((idx < end))
                {
                    fu_COW_STR c1 = fu_STRING(src[idx++]);
                    if ((c1 == fu_STRING("\n")))
                    {
                        line++;
                        lidx = (idx - 1);
                        break;
                    };
                };
            }
            else if (((c == fu_STRING("/")) && (idx < end) && (fu_STRING(src[idx]) == fu_STRING("*"))))
            {
                idx++;
                while ((idx < end))
                {
                    fu_COW_STR c = fu_STRING(src[idx++]);
                    if ((c == fu_STRING("\n")))
                    {
                        line++;
                        lidx = (idx - 1);
                    }
                    else if (((c == fu_STRING("*")) && (idx < end) && (fu_STRING(src[idx]) == fu_STRING("/"))))
                    {
                        idx++;
                        break;
                    };
                };
            }
            else if ((int(OPTOKENS.find(c)) >= 0))
            {
                while ((idx < end))
                {
                    fu_COW_STR c = fu_STRING(src[idx++]);
                    if (!(int(OPTOKENS.find(c)) >= 0))
                    {
                        idx--;
                        break;
                    };
                };
                
                {
                    int begin = fu_CLONE(idx0);
                    int end = fu_CLONE(idx);
                    while ((begin < end))
                    {
                        fu_COW_STR candidate = src.slice(begin, end);
                        const bool ok = (OPERATORS.find(candidate) != -1);
                        if (((end > (begin + 1)) && !ok))
                        {
                            end--;
                            continue;
                        };
                        if (!ok)
                            err(fu_STRING("op"), begin, end);
                        else
                            token(fu_STRING("op"), candidate, begin, end);

                        begin = end;
                        end = idx;
                    };
                };
            }
            else
                err(fu_STRING("?"), idx0, idx0);

        };
        line++;
        lidx = (idx + 0);
        token(fu_STRING("eof"), fu_STRING("eof"), idx, idx);
        return s_LexResult { fu_CLONE(fname), fu_CLONE(tokens) };
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
inline const fu_COW_VEC<fu_COW_STR> PREFIX = fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<10> { fu_STRING("++"), fu_STRING("+"), fu_STRING("--"), fu_STRING("-"), fu_STRING("!"), fu_STRING("~"), fu_STRING("?"), fu_STRING("*"), fu_STRING("&"), fu_STRING("&mut") } };
inline const fu_COW_VEC<fu_COW_STR> POSTFIX = fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<3> { fu_STRING("++"), fu_STRING("--"), fu_STRING("[]") } };

struct sf_setupOperators
{
    s_BINOP out {};
    int precedence = fu_CLONE(P_PREFIX_UNARY);
    bool rightToLeft = false;
    void binop(const fu_COW_VEC<fu_COW_STR>& ops)
    {
        precedence++;
        (out.RIGHT_TO_LEFT.upsert(precedence) = rightToLeft);
        for (int i = 0; (i < int(ops.m_size)); i++)
            (out.PRECEDENCE.upsert(ops[i]) = precedence);

    };
    s_BINOP& setupOperators_EVAL()
    {
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<2> { fu_STRING("as"), fu_STRING("is") } });
        rightToLeft = true;
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("**") } });
        rightToLeft = false;
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<3> { fu_STRING("*"), fu_STRING("/"), fu_STRING("%") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<2> { fu_STRING("+"), fu_STRING("-") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<2> { fu_STRING("<<"), fu_STRING(">>") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("&") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("^") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("|") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<4> { fu_STRING("<"), fu_STRING("<="), fu_STRING(">"), fu_STRING(">=") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<3> { fu_STRING("=="), fu_STRING("!="), fu_STRING("<=>") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("->") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("&&") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("||") } });
        rightToLeft = true;
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("?") } });
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<14> { fu_STRING("="), fu_STRING("+="), fu_STRING("-="), fu_STRING("**="), fu_STRING("*="), fu_STRING("/="), fu_STRING("%="), fu_STRING("<<="), fu_STRING(">>="), fu_STRING("&="), fu_STRING("^="), fu_STRING("|="), fu_STRING("||="), fu_STRING("&&=") } });
        rightToLeft = false;
        binop(fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING(",") } });
        return out;
    };
};

#define setupOperators(...) ((sf_setupOperators { __VA_ARGS__ }).setupOperators_EVAL())
inline const s_BINOP BINOP = fu_CLONE(setupOperators());
inline const int& P_COMMA = ([]() -> const int& { { const int& _ = BINOP.PRECEDENCE[fu_STRING(",")]; if (_) return _; } fu_THROW("Assertion failed."); }());
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
    const fu_COW_STR& _fname;
    const fu_COW_VEC<s_Token>& _tokens;
    int _idx = 0;
    s_Token _loc = fu_CLONE(_tokens[0]);
    int _col0 = 0;
    int _precedence = fu_CLONE(P_RESET);
    int _fnDepth = 0;
    int _numReturns = 0;
    int _implicits = 0;
    fu_COW_STR _structName = fu_STRING("");
    fu_COW_VEC<fu_COW_STR> _dollars {};
    [[noreturn]] fu_NEVER fail(fu_COW_STR&& reason)
    {
        const s_Token& here = _tokens[_idx];
        if (!reason.size())
            reason = ((fu_STRING("Unexpected `") + here.value) + fu_STRING("`."));

        const int l0 = fu_CLONE(_loc.line);
        const int c0 = fu_CLONE(_loc.col);
        const int& l1 = here.line;
        const int& c1 = here.col;
        fu_COW_STR addr = ((l1 == l0) ? (((fu_STRING("@") + l1) + fu_STRING(":")) + c1) : (((((((fu_STRING("@") + l0) + fu_STRING(":")) + c0) + fu_STRING("..")) + l1) + fu_STRING(":")) + c1));
        fu_THROW(((((_fname + fu_STRING(" ")) + addr) + fu_STRING(":\n\t")) + reason));
    };
    [[noreturn]] fu_NEVER fail_Lint(const fu_COW_STR& reason)
    {
        fail((fu_STRING("Lint: ") + reason));
    };
    s_Node make(const fu_COW_STR& kind, const fu_COW_VEC<s_Node>& items, const int& flags, const fu_COW_STR& value)
    {
        return s_Node { fu_CLONE(kind), fu_CLONE(flags), fu_CLONE(value), fu_CLONE(items), fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _loc; if (_) return _; } fu_THROW(fu_STRING("no loc")); }())) };
    };
    s_Node miss()
    {
        return s_Node { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_Node>{}, s_Token{} };
    };
    s_Token consume(const fu_COW_STR& kind, const fu_COW_STR& value)
    {
        const s_Token& token = _tokens[_idx];
        if (((token.kind == kind) && (!value.size() || (token.value == value))))
        {
            _idx++;
            return token;
        };
        fail(((((fu_STRING("Expected `") + ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = value; if (_.size()) return _; } return kind; }())) + fu_STRING("`, got `")) + token.value) + fu_STRING("`.")));
    };
    s_Token tryConsume(const fu_COW_STR& kind, const fu_COW_STR& value)
    {
        const s_Token& token = _tokens[_idx];
        if (((token.kind == kind) && (!value.size() || (token.value == value))))
        {
            _idx++;
            return token;
        };
        return s_Token { fu_COW_STR{}, fu_COW_STR{}, fu_COW_STR{}, int{}, int{}, int{}, int{} };
    };
    s_Node parseRoot()
    {
        _loc = _tokens[_idx];
        s_Node out = make(fu_STRING("root"), parseBlockLike(fu_STRING("eof"), fu_STRING("eof"), fu_STRING("")), 0, fu_STRING(""));
        if (_implicits)
            out.flags |= F_IMPLICIT;

        return out;
    };
    s_Node parseBlock()
    {
        return createBlock(parseBlockLike(fu_STRING("op"), fu_STRING("}"), fu_STRING("")));
    };
    s_Node createBlock(const fu_COW_VEC<s_Node>& items)
    {
        return make(fu_STRING("block"), items, 0, fu_STRING(""));
    };
    s_Node parseStructDecl()
    {
        s_Token name = tryConsume(fu_STRING("id"), fu_STRING(""));
        const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { if (name) { const fu_COW_STR& _ = name.value; if (_.size()) return _; } fail(fu_STRING("Anon structs.")); }());
        fu_COW_STR structName0 = fu_CLONE(_structName);
        _structName = id;
        consume(fu_STRING("op"), fu_STRING("{"));
        fu_COW_VEC<s_Node> items = parseBlockLike(fu_STRING("op"), fu_STRING("}"), fu_STRING("struct"));
        _structName = structName0;
        return make(fu_STRING("struct"), items, 0, (name ? fu_CLONE(name.value) : fu_STRING("")));
    };
    s_Node parseStructItem()
    {
        const s_Token& token = _tokens[_idx++];
        if (((token.kind == fu_STRING("op")) || (token.kind == fu_STRING("id"))))
        {
            if ((token.value == fu_STRING("fn")))
                return parseStructMethod();

        };
        _idx--;
        s_Node member = parseLet();
        member.flags |= F_FIELD;
        consume(fu_STRING("op"), fu_STRING(";"));
        return member;
    };
    s_Node parseStructMethod()
    {
        s_Node fnNode = parseFnDecl();
        s_Node typeAnnot = createPrefix(fu_STRING("&"), createRead(([&]() -> fu_COW_STR& { { fu_COW_STR& _ = _structName; if (_.size()) return _; } fail(fu_STRING("")); }())));
        fnNode.items.unshift(createLet(fu_STRING("this"), F_USING, typeAnnot, miss()));
        fnNode.flags |= F_METHOD;
        return fnNode;
    };
    fu_COW_VEC<s_Node> parseBlockLike(const fu_COW_STR& endKind, const fu_COW_STR& endVal, const fu_COW_STR& mode)
    {
        const int& line0 = _tokens[_idx].line;
        const int col00 = fu_CLONE(_col0);
        fu_COW_VEC<s_Node> items = fu_COW_VEC<s_Node>{};
        while (true)
        {
            const s_Token& token = _tokens[_idx];
            if (((token.kind == endKind) && (token.value == endVal)))
            {
                _col0 = col00;
                _idx++;
                const int& line1 = token.line;
                const int& col1 = token.col;
                ((line1 == line0) || (col1 == _col0) || fail_Lint(((((((((fu_STRING("Bad closing `") + token.value) + fu_STRING("` indent, expecting ")) + (_col0 - 1)) + fu_STRING(", got ")) + (col1 - 1)) + fu_STRING(". Block starts on line ")) + line0) + fu_STRING("."))));
                break;
            };
            _col0 = token.col;
            ((_col0 > col00) || fail_Lint(((((fu_STRING("Bad indent, expecting more than ") + col00) + fu_STRING(". Block starts on line ")) + line0) + fu_STRING("."))));
            s_Node expr = (mode.size() ? parseStructItem() : parseStatement());
            ((expr.kind != fu_STRING("call")) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (int(expr.items.m_size) > 1) || fail_Lint(fu_STRING("Orphan pure-looking expression.")));
            const int exprIdx = int(items.m_size);
            if ((expr.kind != fu_STRING("empty")))
                items.push(expr);

            if ((expr.kind == fu_STRING("struct")))
                unwrapStructMethods(items, exprIdx);

        };
        return items;
    };
    void unwrapStructMethods(fu_COW_VEC<s_Node>& out, const int& structNodeIdx)
    {
        s_Node structNode = fu_CLONE(out.mutref(structNodeIdx));
        fu_COW_VEC<s_Node>& members = structNode.items;
        for (int i = 0; (i < int(members.m_size)); i++)
        {
            s_Node& item = members.mutref(i);
            if ((item.kind == fu_STRING("fn")))
            {
                if ((item.value == fu_STRING("free")))
                {
                    structNode.flags |= F_DESTRUCTOR;
                    item.flags |= F_DESTRUCTOR;
                };
                ((int(item.items.m_size) >= 2) || fail(fu_STRING("")));
                out.push(item);
                members.splice(i--, 1);
            };
        };
        out.mutref(structNodeIdx) = structNode;
    };
    s_Node parseStatement()
    {
        s_Token loc0 = fu_CLONE(_loc);
        s_Token token = fu_CLONE((_loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens[_idx++]; if (_) return _; } fail(fu_STRING("")); }())));
        if (((token.kind == fu_STRING("op")) || (token.kind == fu_STRING("id"))))
        {
            const fu_COW_STR& v = token.value;
            if ((v == fu_STRING("{")))
                return parseBlock();

            if ((v == fu_STRING("let")))
                return parseLetStmt();

            if ((v == fu_STRING("mut")))
                return ((void)_idx--, parseLetStmt());

            if ((v == fu_STRING("if")))
                return parseIf();

            if ((v == fu_STRING("return")))
                return parseReturn();

            if ((v == fu_STRING("for")))
                return parseFor();

            if ((v == fu_STRING("while")))
                return parseWhile();

            if ((v == fu_STRING("do")))
                return parseDoWhile();

            if ((v == fu_STRING("break")))
                return parseJump(fu_STRING("break"));

            if ((v == fu_STRING("continue")))
                return parseJump(fu_STRING("continue"));

            if ((v == fu_STRING(";")))
                return parseEmpty();

            if ((v == fu_STRING("fn")))
                return parseFnDecl();

            if ((v == fu_STRING("struct")))
                return parseStructDecl();

            if ((v == fu_STRING(":")))
                return parseLabelledStatement();

            if ((v == fu_STRING("pub")))
                return parseStatement();

        };
        _idx--;
        _loc = loc0;
        return parseExpressionStatement();
    };
    s_Node parseLabelledStatement()
    {
        s_Token label = consume(fu_STRING("id"), fu_STRING(""));
        s_Node stmt = parseStatement();
        if ((stmt.kind == fu_STRING("loop")))
        {
            (stmt.value.size() && fail(fu_STRING("")));
            stmt.value = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = label.value; if (_.size()) return _; } fail(fu_STRING("")); }());
            return stmt;
        };
        fail(fu_STRING(""));
    };
    s_Node parseEmpty()
    {
        return make(fu_STRING("empty"), fu_COW_VEC<s_Node>{}, 0, fu_STRING(""));
    };
    s_Node parseExpressionStatement()
    {
        s_Node expr = parseExpression(fu_CLONE(P_RESET));
        consume(fu_STRING("op"), fu_STRING(";"));
        return expr;
    };
    s_Node parseFnDecl()
    {
        fu_COW_VEC<fu_COW_STR> dollars0 = fu_CLONE(_dollars);
        const int numReturns0 = fu_CLONE(_numReturns);
        s_Token name = ([&]() -> s_Token { { s_Token _ = tryConsume(fu_STRING("id"), fu_STRING("")); if (_) return _; } return tryConsume(fu_STRING("op"), fu_STRING("")); }());
        consume(fu_STRING("op"), fu_STRING("("));
        fu_COW_VEC<s_Node> items {};
        int flags = parseArgsDecl(items, fu_STRING("op"), fu_STRING(")"));
        _fnDepth++;
        s_Node type = tryPopTypeAnnot();
        const int retIdx = int(items.m_size);
        items.push(type);
        flags |= parseFnBodyOrPattern(items);
        if ((!type && (_numReturns == numReturns0)))
            items.mutref(retIdx) = (type = createRead(fu_STRING("void")));

        if (type)
            flags |= F_FULLY_TYPED;

        
        {
            _fnDepth--;
            _numReturns = numReturns0;
            if ((int(_dollars.m_size) > int(dollars0.m_size)))
                flags |= F_TEMPLATE;

            _dollars = dollars0;
        };
        return make(fu_STRING("fn"), items, flags, name.value);
    };
    int parseFnBodyOrPattern(fu_COW_VEC<s_Node>& out_push_body)
    {
        int flags = 0;
        s_Node body {};
        if (tryConsume(fu_STRING("id"), fu_STRING("case")))
        {
            fu_COW_VEC<s_Node> branches = fu_COW_VEC<s_Node>{};
            flags |= F_PATTERN;
            do
            {
                s_Node cond = parseUnaryExpression();
                s_Node type = tryPopTypeAnnot();
                s_Node body = parseFnBodyBranch();
                branches.push(make(fu_STRING("fnbranch"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<3> { cond, type, body } }, 0, fu_STRING("")));
            }
            while (tryConsume(fu_STRING("id"), fu_STRING("case")));
            body = make(fu_STRING("pattern"), branches, 0, fu_STRING(""));
        }
        else
            body = parseFnBodyBranch();

        out_push_body.push(body);
        return flags;
    };
    s_Node parseFnBodyBranch()
    {
        s_Node body = parseStatement();
        return (((body.kind == fu_STRING("block")) || (body.kind == fu_STRING("return"))) ? fu_CLONE(body) : ((void)_numReturns++, createReturn(body)));
    };
    s_Node tryPopTypeAnnot()
    {
        return (tryConsume(fu_STRING("op"), fu_STRING(":")) ? parseTypeAnnot() : miss());
    };
    s_Node parseTypeAnnot()
    {
        return parseUnaryExpression();
    };
    int parseArgsDecl(fu_COW_VEC<s_Node>& outArgs, const fu_COW_STR& endk, const fu_COW_STR& endv)
    {
        bool first = true;
        int outFlags = 0;
        fu_COW_VEC<s_Node> implicit {};
        bool defaults = false;
        while (true)
        {
            if (tryConsume(endk, endv))
            {
                break;
            };
            if (!first)
                consume(fu_STRING("op"), fu_STRING(","));

            first = false;
            s_Node arg = parseLet();
            if (!arg.items.mutref(LET_TYPE))
                outFlags |= F_UNTYPED_ARGS;

            if (arg.items.mutref(LET_INIT))
            {
                if ((arg.flags & F_IMPLICIT))
                    fail(fu_STRING("TODO default implicit arguments"));

                defaults = true;
            }
            else if (defaults)
                fail(fu_STRING("TODO non-trailing default arguments"));

            arg.flags &= ~F_LOCAL;
            arg.flags |= F_ARG;
            if ((arg.flags & F_IMPLICIT))
                implicit.push(arg);
            else
                outArgs.push(arg);

        };
        if (implicit)
        {
            for (int i = 0; (i < int(implicit.m_size)); i++)
                outArgs.push(implicit.mutref(i));

        };
        return outFlags;
    };
    s_Node parseLetStmt()
    {
        s_Node ret = parseLet();
        consume(fu_STRING("op"), fu_STRING(";"));
        return ret;
    };
    s_Node parseLet()
    {
        int flags = fu_CLONE(F_LOCAL);
        const int numDollars0 = int(_dollars.m_size);
        if (tryConsume(fu_STRING("id"), fu_STRING("using")))
            flags |= F_USING;

        if (tryConsume(fu_STRING("id"), fu_STRING("implicit")))
            flags |= F_IMPLICIT;

        if (tryConsume(fu_STRING("id"), fu_STRING("mut")))
            flags |= F_MUT;

        fu_COW_STR id = consume(fu_STRING("id"), fu_STRING("")).value;
        s_Node type = tryPopTypeAnnot();
        s_Node init = (tryConsume(fu_STRING("op"), fu_STRING("=")) ? parseExpression(fu_CLONE(P_COMMA)) : s_Node { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_Node>{}, s_Token{} });
        if ((numDollars0 != int(_dollars.m_size)))
            flags |= F_TEMPLATE;

        if ((flags & F_IMPLICIT))
            _implicits++;

        return createLet(id, flags, type, init);
    };
    s_Node createLet(const fu_COW_STR& id, const int& flags, const s_Node& type, const s_Node& init)
    {
        return make(fu_STRING("let"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<2> { type, init } }, flags, id);
    };
    s_Node parseExpression(const int p1)
    {
        const int p0 = fu_CLONE(_precedence);
        s_Token loc0 = fu_CLONE(_loc);
        _precedence = p1;
        _loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens[_idx]; if (_) return _; } fail(fu_STRING("")); }());
        s_Node head = parseExpressionHead();
        
        {
            s_Node out {};
            while ((out = tryParseExpressionTail(head)))
            {
                _loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens[_idx]; if (_) return _; } fail(fu_STRING("")); }());
                head = out;
            };
        };
        _precedence = p0;
        _loc = loc0;
        return head;
    };
    s_Node tryParseBinary(const s_Node& left, const fu_COW_STR& op, const int& p1)
    {
        if (((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1])))
            return miss();

        _idx++;
        s_Node mid {};
        if ((op == fu_STRING("?")))
        {
            mid = parseExpression(fu_CLONE(_precedence));
            consume(fu_STRING("op"), fu_STRING(":"));
        };
        s_Node right = parseExpression(fu_CLONE(p1));
        if (mid)
            return createIf(left, mid, right);

        if ((op == fu_STRING("||")))
            return createOr(left, right);

        if ((op == fu_STRING("&&")))
            return createAnd(left, right);

        return createCall(op, F_INFIX, fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<2> { left, right } });
    };
    s_Node tryParseExpressionTail(const s_Node& head)
    {
        const s_Token& token = _tokens[_idx++];
        if ((token.kind == fu_STRING("op")))
        {
            const fu_COW_STR& v = token.value;
            if ((v == fu_STRING(";")))
                return ((void)_idx--, miss());

            if ((v == fu_STRING(".")))
                return parseAccessExpression(head);

            if ((v == fu_STRING("(")))
                return parseCallExpression(head);

            if ((v == fu_STRING("[")))
                return parseIndexExpression(head);

            const int& p1 = BINOP.PRECEDENCE[v];
            if (p1)
                return ((void)_idx--, tryParseBinary(head, v, p1));

            if ((POSTFIX.find(v) != -1))
                return createCall(v, F_POSTFIX, fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { head } });

        };
        return ((void)_idx--, miss());
    };
    s_Node parseExpressionHead()
    {
        const s_Token& token = _tokens[_idx++];
        
        {
            const fu_COW_STR& k = token.kind;
            if (((k == fu_STRING("int")) || (k == fu_STRING("num")) || (k == fu_STRING("str"))))
                return createLeaf(token.kind, token.value);

            if ((k == fu_STRING("id")))
                return createRead(token.value);

            if ((k == fu_STRING("op")))
            {
                const fu_COW_STR& v = token.value;
                if ((v == fu_STRING("(")))
                    return parseParens();

                if ((v == fu_STRING("[")))
                    return parseArrayLiteral();

                if ((v == fu_STRING("$")))
                    return parseTypeParam();

                if ((v == fu_STRING("@")))
                    return parseTypeTag();

                if ((v == fu_STRING("[]")))
                    return make(fu_STRING("definit"), fu_COW_VEC<s_Node>{}, 0, fu_STRING(""));

                return parsePrefix(fu_CLONE(token.value));
            };
        };
        _idx--;
        fail(fu_STRING(""));
    };
    s_Node parseParens()
    {
        fu_COW_VEC<s_Node> items = fu_COW_VEC<s_Node>{};
        do
            items.push(parseExpression(fu_CLONE(P_COMMA)));
        while (tryConsume(fu_STRING("op"), fu_STRING(",")));
        consume(fu_STRING("op"), fu_STRING(")"));
        return ((int(items.m_size) > 1) ? createComma(items) : fu_CLONE(items.mutref(0)));
    };
    s_Node createComma(const fu_COW_VEC<s_Node>& nodes)
    {
        return make(fu_STRING("comma"), nodes, 0, fu_STRING(""));
    };
    s_Node parseTypeParam()
    {
        fu_COW_STR value = consume(fu_STRING("id"), fu_STRING("")).value;
        if (!(_dollars.find(value) != -1))
            _dollars.push(value);

        return createTypeParam(value);
    };
    s_Node createTypeParam(const fu_COW_STR& value)
    {
        return make(fu_STRING("typeparam"), fu_COW_VEC<s_Node>{}, 0, value);
    };
    s_Node parseTypeTag()
    {
        return createTypeTag(consume(fu_STRING("id"), fu_STRING("")).value);
    };
    s_Node createTypeTag(const fu_COW_STR& value)
    {
        return make(fu_STRING("typetag"), fu_COW_VEC<s_Node>{}, 0, value);
    };
    s_Node parsePrefix(fu_COW_STR&& op)
    {
        ((PREFIX.find(op) != -1) || ((void)_idx--, fail(fu_STRING(""))));
        if (((op == fu_STRING("&")) && tryConsume(fu_STRING("id"), fu_STRING("mut"))))
            op = fu_STRING("&mut");

        return createPrefix(op, parseUnaryExpression());
    };
    s_Node parseUnaryExpression()
    {
        return parseExpression(fu_CLONE(P_PREFIX_UNARY));
    };
    s_Node createPrefix(const fu_COW_STR& op, const s_Node& expr)
    {
        if ((op == fu_STRING("!")))
            return createNot(expr);

        return createCall(op, F_PREFIX, fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { expr } });
    };
    s_Node createNot(const s_Node& expr)
    {
        return make(fu_STRING("!"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { expr } }, 0, fu_STRING(""));
    };
    s_Node parseAccessExpression(const s_Node& expr)
    {
        return createCall(consume(fu_STRING("id"), fu_STRING("")).value, F_ACCESS, fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { expr } });
    };
    int parseCallArgs(const fu_COW_STR& endop, fu_COW_VEC<s_Node>& out_args)
    {
        int flags = 0;
        bool first = true;
        while (true)
        {
            if (tryConsume(fu_STRING("op"), endop))
            {
                break;
            };
            if (!first)
            {
                consume(fu_STRING("op"), fu_STRING(","));
                if (tryConsume(fu_STRING("op"), endop))
                {
                    break;
                };
            };
            first = false;
            fu_COW_STR name = fu_STRING("");
            bool autoName = false;
            if (((_tokens[_idx].kind == fu_STRING("id")) && (_tokens[(_idx + 1)].kind == fu_STRING("op")) && (_tokens[(_idx + 1)].value == fu_STRING(":"))))
            {
                name = _tokens[_idx].value;
                _idx += 2;
                flags |= F_NAMED_ARGS;
            }
            else if (((_tokens[_idx].kind == fu_STRING("op")) && (_tokens[_idx].value == fu_STRING(":"))))
            {
                autoName = true;
                _idx++;
                flags |= F_NAMED_ARGS;
            };
            s_Node expr = parseExpression(fu_CLONE(P_COMMA));
            if (autoName)
            {
                (((expr.kind == fu_STRING("call")) && (expr.flags & F_ID)) || fail(fu_STRING("Can't :auto_name this expression.")));
                name = expr.value;
            };
            out_args.push((name.size() ? createLabel(name, expr) : fu_CLONE(expr)));
        };
        return flags;
    };
    s_Node createLabel(const fu_COW_STR& id, const s_Node& value)
    {
        return make(fu_STRING("label"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { value } }, 0, id);
    };
    s_Node parseCallExpression(const s_Node& expr)
    {
        fu_COW_VEC<s_Node> args = fu_COW_VEC<s_Node>{};
        const int argFlags = parseCallArgs(fu_STRING(")"), args);
        if (((expr.kind == fu_STRING("call")) && (expr.flags & F_ACCESS)))
        {
            const s_Node& head = ([&]() -> const s_Node& { if (expr.items && (int(expr.items.m_size) == 1)) { const s_Node& _ = expr.items[0]; if (_) return _; } fail(fu_STRING("")); }());
            args.unshift(head);
            return createCall(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = expr.value; if (_.size()) return _; } fail(fu_STRING("")); }()), (F_METHOD | argFlags), args);
        };
        if (((expr.kind == fu_STRING("call")) && (expr.flags & F_ID)))
            return createCall(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = expr.value; if (_.size()) return _; } fail(fu_STRING("")); }()), argFlags, args);

        fail(fu_STRING("TODO dynamic call"));
    };
    s_Node parseArrayLiteral()
    {
        fu_COW_VEC<s_Node> args = fu_COW_VEC<s_Node>{};
        const int argFlags = parseCallArgs(fu_STRING("]"), args);
        return createArrayLiteral(argFlags, args);
    };
    s_Node createArrayLiteral(const int& argFlags, const fu_COW_VEC<s_Node>& items)
    {
        return make(fu_STRING("arrlit"), items, argFlags, fu_STRING(""));
    };
    s_Node parseIndexExpression(const s_Node& expr)
    {
        fu_COW_VEC<s_Node> args = fu_COW_VEC<s_Node>{};
        const int argFlags = parseCallArgs(fu_STRING("]"), args);
        args.unshift(expr);
        return createCall(fu_STRING("[]"), (F_INDEX & argFlags), args);
    };
    s_Node createLeaf(const fu_COW_STR& kind, const fu_COW_STR& value)
    {
        return make(kind, fu_COW_VEC<s_Node>{}, 0, value);
    };
    s_Node createCall(const fu_COW_STR& id, const int& flags, const fu_COW_VEC<s_Node>& args)
    {
        return make(fu_STRING("call"), args, flags, id);
    };
    s_Node createRead(const fu_COW_STR& id)
    {
        return createCall(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = id; if (_.size()) return _; } fail(fu_STRING("")); }()), F_ID, fu_COW_VEC<s_Node>{});
    };
    s_Node parseReturn()
    {
        ((_fnDepth > 0) || ((void)_idx--, fail(fu_STRING(""))));
        _numReturns++;
        if (tryConsume(fu_STRING("op"), fu_STRING(";")))
            return createReturn(s_Node { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_Node>{}, s_Token{} });

        return createReturn(parseExpressionStatement());
    };
    s_Node createReturn(const s_Node& node)
    {
        if (!node)
            return make(fu_STRING("return"), fu_COW_VEC<s_Node>{}, 0, fu_STRING(""));

        return make(fu_STRING("return"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { node } }, 0, fu_STRING(""));
    };
    s_Node parseJump(const fu_COW_STR& kind)
    {
        s_Token label = ([&]() -> s_Token { if (tryConsume(fu_STRING("op"), fu_STRING(":"))) return consume(fu_STRING("id"), fu_STRING("")); else return s_Token{}; }());
        s_Node jump = createJump(kind, label.value);
        consume(fu_STRING("op"), fu_STRING(";"));
        return jump;
    };
    s_Node createJump(const fu_COW_STR& kind, const fu_COW_STR& label)
    {
        return make(kind, fu_COW_VEC<s_Node>{}, 0, label);
    };
    s_Node parseIf()
    {
        s_Token nott = tryConsume(fu_STRING("op"), fu_STRING("!"));
        consume(fu_STRING("op"), fu_STRING("("));
        s_Node cond = parseExpression(fu_CLONE(_precedence));
        if (nott)
            cond = createNot(cond);

        consume(fu_STRING("op"), fu_STRING(")"));
        s_Node cons = parseStatement();
        s_Node alt = ([&]() -> s_Node { if (tryConsume(fu_STRING("id"), fu_STRING("else"))) return parseStatement(); else return s_Node{}; }());
        return createIf(cond, cons, alt);
    };
    s_Node createIf(const s_Node& cond, const s_Node& cons, const s_Node& alt)
    {
        return make(fu_STRING("if"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<3> { cond, cons, alt } }, 0, fu_STRING(""));
    };
    s_Node createOr(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame(fu_STRING("or"), left, right);
    };
    s_Node createAnd(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame(fu_STRING("and"), left, right);
    };
    s_Node flattenIfSame(const fu_COW_STR& kind, const s_Node& left, const s_Node& right)
    {
        const fu_COW_STR& k_left = left.kind;
        const fu_COW_STR& k_right = right.kind;
        fu_COW_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? fu_CONCAT(left.items, right.items) : ((k_left == kind) ? fu_CONCAT(left.items, fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { right } }) : ((k_right == kind) ? fu_CONCAT(fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<1> { left } }, right.items) : fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<2> { left, right } })));
        return make(kind, items, 0, fu_STRING(""));
    };
    s_Node parseFor()
    {
        consume(fu_STRING("op"), fu_STRING("("));
        tryConsume(fu_STRING("id"), fu_STRING("let"));
        s_Node init = parseLetStmt();
        s_Node cond = parseExpressionStatement();
        const s_Token& token = _tokens[_idx];
        s_Node post = (((token.kind == fu_STRING("op")) && (token.value == fu_STRING(")"))) ? parseEmpty() : parseExpression(fu_CLONE(_precedence)));
        consume(fu_STRING("op"), fu_STRING(")"));
        s_Node body = parseStatement();
        return createLoop(init, cond, post, body, miss());
    };
    s_Node parseWhile()
    {
        consume(fu_STRING("op"), fu_STRING("("));
        s_Node cond = parseExpression(fu_CLONE(_precedence));
        consume(fu_STRING("op"), fu_STRING(")"));
        s_Node body = parseStatement();
        return createLoop(miss(), cond, miss(), body, miss());
    };
    s_Node parseDoWhile()
    {
        s_Node body = parseStatement();
        consume(fu_STRING("id"), fu_STRING("while"));
        consume(fu_STRING("op"), fu_STRING("("));
        s_Node cond = parseExpression(fu_CLONE(_precedence));
        consume(fu_STRING("op"), fu_STRING(")"));
        consume(fu_STRING("op"), fu_STRING(";"));
        return createLoop(miss(), miss(), miss(), body, cond);
    };
    s_Node createLoop(const s_Node& init, const s_Node& cond, const s_Node& post, const s_Node& body, const s_Node& postcond)
    {
        return make(fu_STRING("loop"), fu_COW_VEC<s_Node> { fu_COW_VEC<s_Node>::INIT<5> { init, cond, post, body, postcond } }, 0, fu_STRING(""));
    };
    s_Node parse_EVAL()
    {
        ((_tokens[(int(_tokens.m_size) - 1)].kind == fu_STRING("eof")) || fail(fu_STRING("Missing `eof` token.")));
        return parseRoot();
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
inline const fu_COW_VEC<fu_COW_STR> TAGS = fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<8> { fu_STRING("mutref"), fu_STRING("ref"), fu_STRING("copy"), fu_STRING("trivial"), fu_STRING("primitive"), fu_STRING("arithmetic"), fu_STRING("integral"), fu_STRING("signed") } };

bool operator==(const s_Type& a, const s_Type& b)
{
    return ((a.canon == b.canon) && (a.quals == b.quals));
}
inline const int Trivial = (q_copy | q_trivial);
inline const int Primitive = (Trivial | q_primitive);
inline const int Arithmetic = (Primitive | q_arithmetic);
inline const int Integral = (Arithmetic | q_integral);
inline const int SignedInt = (Integral | q_signed);
inline const s_Type t_i32 = s_Type { fu_STRING("i32"), fu_CLONE(SignedInt) };
inline const s_Type t_void = s_Type { fu_STRING("void"), 0 };
inline const s_Type t_bool = s_Type { fu_STRING("bool"), fu_CLONE(Primitive) };
inline const s_Type t_never = s_Type { fu_STRING("never"), 0 };
inline const s_Type t_template = s_Type { fu_STRING("template"), 0 };
inline const s_Type t_string = s_Type { fu_STRING("string"), fu_CLONE(q_copy) };

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
    return s_Type { fu_CLONE(type.canon), (type.canon.size() ? (type.quals | q) : 0) };
}

s_Type qsub(const s_Type& type, const int& q)
{
    return s_Type { fu_CLONE(type.canon), (type.quals & ~q) };
}

bool qhas(const s_Type& type, const int& q)
{
    return ((type.quals & q) == q);
}

s_Type tryClear(const s_Type& type, const int& q)
{
    if ((!type || !qhas(type, q)))
        return s_Type { fu_COW_STR{}, int{} };

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
    return (t ? qsub(t, q_mutref) : fu_CLONE(t));
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

fu_COW_STR serializeType(const s_Type& type)
{
    if (type.quals)
        return ((((fu_STRING("(") + type.canon) + fu_STRING("{")) + type.quals) + fu_STRING("})"));

    return ((fu_STRING("(") + type.canon) + fu_STRING(")"));
}

bool type_has(const s_Type& type, const fu_COW_STR& tag)
{
    const int idx = TAGS.find(tag);
    ((idx >= 0) || fu_THROW(((fu_STRING("Unknown type tag: `") + tag) + fu_STRING("`."))));
    const int mask = (1 << idx);
    return ((type.quals & mask) == mask);
}

s_Type type_tryInter(const s_Type& a, const s_Type& b)
{
    if ((a.canon != b.canon))
        return s_Type { fu_COW_STR{}, int{} };

    return s_Type { fu_CLONE(a.canon), (a.quals & b.quals) };
}

void registerType(const fu_COW_STR& canon, const s_Struct& def, s_TEMP_Context& ctx)
{
    (ctx.types.upsert(canon) = def);
}

const s_Struct& lookupType(const fu_COW_STR& canon, const s_TEMP_Context& ctx)
{
    return ([&]() -> const s_Struct& { { const s_Struct& _ = ctx.types[canon]; if (_) return _; } fu_THROW("Assertion failed."); }());
}

s_Struct& lookupType_mut(const fu_COW_STR& canon, s_TEMP_Context& ctx)
{
    return ([&]() -> s_Struct& { { s_Struct& _ = ctx.types.mutref(canon); if (_) return _; } fu_THROW("Assertion failed."); }());
}

s_Type initStruct(const fu_COW_STR& id, const int& flags, s_TEMP_Context& ctx)
{
    fu_COW_STR canon = (fu_STRING("s_") + id);
    s_Struct def = s_Struct { fu_STRING("struct"), fu_CLONE(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = id; if (_.size()) return _; } fu_THROW(fu_STRING("TODO anonymous structs?")); }())), fu_COW_VEC<s_StructField>{}, (flags | 0) };
    registerType(canon, def, ctx);
    return s_Type { fu_CLONE(canon), copyOrMove(flags, def.fields) };
}

void finalizeStruct(const fu_COW_STR& id, const fu_COW_VEC<s_StructField>& fields, s_TEMP_Context& ctx)
{
    fu_COW_STR canon = (fu_STRING("s_") + id);
    s_Struct& def = lookupType_mut(canon, ctx);
    def.fields = ([&]() -> const fu_COW_VEC<s_StructField>& { { const fu_COW_VEC<s_StructField>& _ = fields; if (_) return _; } fu_THROW(fu_STRING("TODO empty structs?")); }());
}

int copyOrMove(const int& flags, const fu_COW_VEC<s_StructField>& fields)
{
    if (((flags & F_DESTRUCTOR) || someFieldNonCopy(fields)))
        return 0;

    return q_copy;
}

bool someFieldNonCopy(const fu_COW_VEC<s_StructField>& fields)
{
    for (int i = 0; (i < int(fields.m_size)); i++)
    {
        if (!(fields[i].type.quals & q_copy))
            return true;

    };
    return false;
}

bool someFieldNotTrivial(const fu_COW_VEC<s_StructField>& fields)
{
    for (int i = 0; (i < int(fields.m_size)); i++)
    {
        if (!(fields[i].type.quals & q_trivial))
            return true;

    };
    return false;
}

s_Type createArray(const s_Type& item, s_TEMP_Context& ctx)
{
    const int flags = 0;
    fu_COW_VEC<s_StructField> fields = fu_COW_VEC<s_StructField> { fu_COW_VEC<s_StructField>::INIT<1> { s_StructField { fu_STRING("Item"), fu_CLONE(item) } } };
    fu_COW_STR canon = ((fu_STRING("Array(") + serializeType(item)) + fu_STRING(")"));
    registerType(canon, s_Struct { fu_STRING("array"), fu_CLONE(canon), fu_CLONE(fields), fu_CLONE(flags) }, ctx);
    return s_Type { fu_CLONE(canon), copyOrMove(flags, fields) };
}

bool type_isString(const s_Type& type)
{
    return (type.canon == fu_STRING("string"));
}

bool type_isArray(const s_Type& type)
{
    return type.canon.starts_with(fu_STRING("Array("));
}

s_Type tryClear_array(const s_Type& type, const s_TEMP_Context& ctx)
{
    if (!type_isArray(type))
        return s_Type { fu_COW_STR{}, int{} };

    const s_Struct& def = lookupType(type.canon, ctx);
    return ([&]() -> const s_Type& { if ((def.kind == fu_STRING("array"))) { const s_Type& _ = def.fields[0].type; if (_) return _; } fu_THROW("Assertion failed."); }());
}

bool type_isMap(const s_Type& type)
{
    return type.canon.starts_with(fu_STRING("Map("));
}

s_Type createMap(const s_Type& key, const s_Type& value, s_TEMP_Context& ctx)
{
    const int flags = 0;
    fu_COW_VEC<s_StructField> fields = fu_COW_VEC<s_StructField> { fu_COW_VEC<s_StructField>::INIT<2> { s_StructField { fu_STRING("Key"), fu_CLONE(key) }, s_StructField { fu_STRING("Value"), fu_CLONE(value) } } };
    fu_COW_STR canon = ((((fu_STRING("Map(") + serializeType(key)) + fu_STRING(",")) + serializeType(value)) + fu_STRING(")"));
    registerType(canon, s_Struct { fu_STRING("map"), fu_CLONE(canon), fu_CLONE(fields), fu_CLONE(flags) }, ctx);
    return s_Type { fu_CLONE(canon), copyOrMove(flags, fields) };
}

s_MapFields tryClear_map(const s_Type& type, const s_TEMP_Context& ctx)
{
    if (!type_isMap(type))
        return s_MapFields { s_Type{}, s_Type{} };

    const s_Struct& def = lookupType(type.canon, ctx);
    ((def.kind == fu_STRING("map")) || fu_THROW("Assertion failed."));
    return s_MapFields { fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = def.fields[0].type; if (_) return _; } fu_THROW("Assertion failed."); }())), fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = def.fields[1].type; if (_) return _; } fu_THROW("Assertion failed."); }())) };
}

fu_COW_VEC<s_ScopeIdx> Scope_lookup(const s_Scope& scope, const fu_COW_STR& id)
{
    fu_COW_VEC<s_ScopeIdx> results = fu_COW_VEC<s_ScopeIdx>{};
    const fu_COW_VEC<s_ScopeItem>& items = scope.items;
    for (int i = int(items.m_size); (i-- > 0); )
    {
        const s_ScopeItem& item = items[i];
        if ((item.id == id))
            results.push(item.index);

    };
    return results;
}

fu_COW_VEC<fu_COW_STR> Scope_keys(const s_Scope& scope)
{
    fu_COW_VEC<fu_COW_STR> keys = fu_COW_VEC<fu_COW_STR>{};
    const fu_COW_VEC<s_ScopeItem>& items = scope.items;
    for (int i = int(items.m_size); (i-- > 0); )
    {
        const fu_COW_STR& id = items[i].id;
        if (!(keys.find(id) != -1))
            keys.push(id);

    };
    return keys;
}

int Scope_push(s_Scope& scope)
{
    return int(scope.items.m_size);
}

void Scope_pop(s_Scope& scope, const int& memo)
{
    scope.items.shrink(memo);
}

s_ScopeIdx Scope_add(s_Scope& scope, const fu_COW_STR& kind, const fu_COW_STR& id, const s_Type& type, const int& min, const int& max, const fu_COW_VEC<fu_COW_STR>& arg_n, const fu_COW_VEC<s_Type>& arg_t, const fu_COW_VEC<s_SolvedNode>& arg_d, const s_Template& tempatle, const s_Partial& partial)
{
    s_ScopeIdx index = s_ScopeIdx { (int(scope.overloads.m_size) + 1) };
    s_Overload item = s_Overload { fu_CLONE(kind), fu_CLONE(id), fu_CLONE(type), fu_CLONE(min), fu_CLONE(max), fu_CLONE(arg_t), fu_CLONE(arg_n), fu_CLONE(arg_d), fu_CLONE(partial), fu_CLONE(tempatle) };
    scope.items.push(s_ScopeItem { fu_CLONE(id), fu_CLONE(index) });
    scope.overloads.push(item);
    return index;
}

s_ScopeIdx Scope_Typedef(s_Scope& scope, const fu_COW_STR& id, const s_Type& type)
{
    return Scope_add(scope, fu_STRING("type"), id, type, 0, 0, fu_COW_VEC<fu_COW_STR>{}, fu_COW_VEC<s_Type>{}, fu_COW_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{});
}

struct sf_runSolver
{
    const s_Node& parse;
    const s_Scope& globals;
    s_TEMP_Context& ctx;
    s_Scope _scope = fu_CLONE(globals);
    s_Token _here {};
    s_SolvedNode _current_fn {};
    fu_COW_MAP<fu_COW_STR, s_Type> _typeParams {};
    bool TEST_expectImplicits = false;
    s_Overload& GET(const s_ScopeIdx& idx)
    {
        ((idx.raw > 0) || fu_THROW("Assertion failed."));
        return _scope.overloads.mutref((idx.raw - 1));
    };
    [[noreturn]] fu_NEVER fail(fu_COW_STR&& reason)
    {
        if (!reason.size())
            reason = ((fu_STRING("Unexpected `") + _here.value) + fu_STRING("`."));

        fu_COW_STR fname = fu_CLONE(_here.fname);
        const int l0 = fu_CLONE(_here.line);
        const int c0 = fu_CLONE(_here.col);
        fu_COW_STR addr = (((fu_STRING("@") + l0) + fu_STRING(":")) + c0);
        fu_THROW(((((fname + fu_STRING(" ")) + addr) + fu_STRING(":\n\t")) + reason));
    };
    s_ScopeIdx Binding(const fu_COW_STR& id, const s_Type& type)
    {
        return Scope_add(_scope, fu_STRING("var"), ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = id; if (_.size()) return _; } fail(fu_STRING("")); }()), ([&]() -> const s_Type& { { const s_Type& _ = type; if (_) return _; } fail(fu_STRING("")); }()), 0, 0, fu_COW_VEC<fu_COW_STR>{}, fu_COW_VEC<s_Type>{}, fu_COW_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{});
    };
    s_ScopeIdx Field(const fu_COW_STR& id, const s_Type& structType, const s_Type& fieldType)
    {
        return Scope_add(_scope, fu_STRING("field"), ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = id; if (_.size()) return _; } fail(fu_STRING("")); }()), ([&]() -> const s_Type& { { const s_Type& _ = fieldType; if (_) return _; } fail(fu_STRING("")); }()), 1, 1, fu_COW_VEC<fu_COW_STR> { fu_COW_VEC<fu_COW_STR>::INIT<1> { fu_STRING("this") } }, fu_COW_VEC<s_Type> { fu_COW_VEC<s_Type>::INIT<1> { ([&]() -> const s_Type& { { const s_Type& _ = structType; if (_) return _; } fail(fu_STRING("")); }()) } }, fu_COW_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{});
    };
    s_ScopeIdx TemplateDecl(const s_Node& node)
    {
        const fu_COW_STR& id = node.value;
        ((node.kind == fu_STRING("fn")) || fail(fu_STRING("TODO")));
        const int min = (int(node.items.m_size) + FN_ARGS_BACK);
        const int max = ((node.kind == fu_STRING("fn")) ? 0xffffff : fu_CLONE(min));
        s_Template tempatle = s_Template { fu_CLONE(node), fu_COW_MAP<fu_COW_STR, s_SolvedNode>{} };
        fu_COW_VEC<fu_COW_STR> arg_n {};
        if ((node.kind == fu_STRING("fn")))
        {
            const fu_COW_VEC<s_Node>& items = node.items;
            const int numArgs = (int(items.m_size) + FN_ARGS_BACK);
            for (int i = 0; (i < numArgs); i++)
            {
                const s_Node& arg = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(fu_STRING("")); }());
                ((arg.kind == fu_STRING("let")) || fail(fu_STRING("")));
                const fu_COW_STR& name = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = arg.value; if (_.size()) return _; } fail(fu_STRING("")); }());
                arg_n.push(name);
            };
        };
        return Scope_add(_scope, fu_STRING("template"), id, t_template, min, max, arg_n, fu_COW_VEC<s_Type>{}, fu_COW_VEC<s_SolvedNode>{}, tempatle, s_Partial{});
    };
    s_ScopeIdx FnDecl(const fu_COW_STR& id, s_SolvedNode& node)
    {
        fu_COW_VEC<s_SolvedNode> items = fu_CLONE(node.items);
        const s_SolvedNode& rnode = items[(int(items.m_size) + FN_RET_BACK)];
        const s_Type& ret = ([&]() -> const s_Type& { if (rnode) { const s_Type& _ = rnode.type; if (_) return _; } fail(fu_STRING("")); }());
        const int max = (int(items.m_size) + FN_RET_BACK);
        fu_COW_VEC<s_SolvedNode> args = items.slice(0, max);
        fu_COW_VEC<s_Type> arg_t = fu_COW_VEC<s_Type>{};
        fu_COW_VEC<fu_COW_STR> arg_n = fu_COW_VEC<fu_COW_STR>{};
        fu_COW_VEC<s_SolvedNode> arg_d = fu_COW_VEC<s_SolvedNode>{};
        int min = 0;
        for (int i = 0; (i < max); i++)
        {
            const s_SolvedNode& arg = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(fu_STRING("")); }());
            ((arg.kind == fu_STRING("let")) || fail(fu_STRING("")));
            arg_t.push(([&]() -> const s_Type& { { const s_Type& _ = arg.type; if (_) return _; } fail(fu_STRING("")); }()));
            arg_n.push(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = arg.value; if (_.size()) return _; } fail(fu_STRING("")); }()));
            const bool isImplicit = !!(arg.flags & F_IMPLICIT);
            if (!isImplicit)
            {
                ((int(arg_d.m_size) >= i) || fail(fu_STRING("")));
                const s_SolvedNode& def = arg.items[LET_INIT];
                arg_d.push(def);
                if (!def)
                    min++;

            };
        };
        s_ScopeIdx overload = Scope_add(_scope, fu_STRING("fn"), id, ret, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{});
        node.target = overload;
        return overload;
    };
    s_ScopeIdx DefaultCtor(const fu_COW_STR& id, const s_Type& type, const fu_COW_VEC<s_SolvedNode>& members)
    {
        fu_COW_VEC<s_Type> arg_t = fu_COW_VEC<s_Type>{};
        fu_COW_VEC<fu_COW_STR> arg_n = fu_COW_VEC<fu_COW_STR>{};
        for (int i = 0; (i < int(members.m_size)); i++)
        {
            const s_SolvedNode& member = members[i];
            arg_t.push(([&]() -> const s_Type& { { const s_Type& _ = member.type; if (_) return _; } fail(fu_STRING("")); }()));
            arg_n.push(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = member.value; if (_.size()) return _; } fail(fu_STRING("")); }()));
        };
        const int max = int(members.m_size);
        int min = 0;
        fu_COW_VEC<s_SolvedNode> arg_d {};
        
        {
            for (int i = 0; (i < int(members.m_size)); i++)
            {
                const s_SolvedNode& member = members[i];
                s_SolvedNode init = ([&]() -> s_SolvedNode { { s_SolvedNode _ = fu_CLONE(member.items[LET_INIT]); if (_) return _; } return tryDefaultInit(member.type); }());
                if (!init)
                {
                    min = max;
                    arg_d.clear();
                    break;
                };
                arg_d.push(init);
            };
        };
        return Scope_add(_scope, fu_STRING("defctor"), id, type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{});
    };
    s_SolvedNode tryDefaultInit(const s_Type& type)
    {
        if ((type.quals & q_ref))
            return s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        return createDefaultInit(type);
    };
    s_SolvedNode createDefaultInit(const s_Type& type)
    {
        return s_SolvedNode { fu_STRING("definit"), int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(fu_STRING("")); }())), fu_CLONE(type), s_ScopeIdx{} };
    };
    s_SolvedNode solveDefinit(const s_Type& type)
    {
        if (!type)
            fail(fu_STRING("Cannot solve definit, no inferred type."));

        return ([&]() -> s_SolvedNode { { s_SolvedNode _ = tryDefaultInit(type); if (_) return _; } fail((fu_STRING("Cannot definit: ") + serializeType(type))); }());
    };
    s_ScopeIdx Partial(const fu_COW_STR& id, const s_ScopeIdx& viaIdx, const s_ScopeIdx& overloadIdx)
    {
        s_Overload via = fu_CLONE(GET(viaIdx));
        s_Overload overload = fu_CLONE(GET(overloadIdx));
        fu_COW_STR kind = fu_STRING("p-unshift");
        int min = (overload.min - 1);
        int max = (overload.max - 1);
        (((min >= 0) && (max >= min)) || fail(fu_STRING("")));
        fu_COW_VEC<s_Type> arg_t = (overload.args ? overload.args.slice(1) : fu_CLONE(overload.args));
        fu_COW_VEC<fu_COW_STR> arg_n = (overload.names ? overload.names.slice(1) : fu_CLONE(overload.names));
        fu_COW_VEC<s_SolvedNode> arg_d = (overload.defaults ? overload.defaults.slice(1) : fu_CLONE(overload.defaults));
        if ((via.kind != fu_STRING("var")))
        {
            kind = fu_STRING("p-wrap");
            min++;
            max++;
            const s_Type& via_t = ([&]() -> const s_Type& { if (via.args) { const s_Type& _ = via.args[0]; if (_) return _; } fail(fu_STRING("")); }());
            arg_t.unshift(via_t);
            if (arg_n)
                arg_n.unshift(fu_STRING("using"));

            if (arg_d)
                arg_d.unshift(s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });

        };
        return Scope_add(_scope, kind, id, overload.type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial { fu_CLONE(viaIdx), fu_CLONE(overloadIdx) });
    };
    bool hasIdentifierChars(const fu_COW_STR& id)
    {
        for (int i = 0; (i < int(id.size())); i++)
        {
            fu_COW_STR c = fu_STRING(id[i]);
            if (((c == fu_STRING("_")) || ((c >= fu_STRING("a")) && (c <= fu_STRING("z"))) || ((c >= fu_STRING("A")) && (c <= fu_STRING("Z"))) || ((c >= fu_STRING("0")) && (c <= fu_STRING("9")))))
                return true;

        };
        return false;
    };
    void scope_using(const s_ScopeIdx& viaIdx)
    {
        s_Overload via = fu_CLONE(GET(viaIdx));
        const s_Type& actual = ([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(fu_STRING("")); }());
        fu_COW_VEC<fu_COW_STR> keys = Scope_keys(_scope);
        for (int i = 0; (i < int(keys.m_size)); i++)
        {
            const fu_COW_STR& id = keys[i];
            if (!hasIdentifierChars(id))
            {
                continue;
            };
            fu_COW_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
            if (!overloads)
            {
                continue;
            };
            bool arity0 = false;
            const int MUT_n0 = int(overloads.m_size);
            for (int i = 0; (i < MUT_n0); i++)
            {
                const s_ScopeIdx& overloadIdx = overloads[i];
                s_Overload overload = fu_CLONE(GET(overloadIdx));
                if ((overload.min < 1))
                {
                    arity0 = true;
                    continue;
                };
                if (overload.tempatle)
                {
                    continue;
                };
                const s_Type& expect = ([&]() -> const s_Type& { { const s_Type& _ = ([&]() -> const fu_COW_VEC<s_Type>& { { const fu_COW_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(fu_STRING("")); }())[0]; if (_) return _; } fail(fu_STRING("")); }());
                if (!isAssignableAsArgument(expect, fu_CLONE(actual)))
                {
                    continue;
                };
                if (((overload.min < 2) && arity0))
                    fail(((fu_STRING("`using` arity-0 conflict: `") + id) + fu_STRING("`.")));

                Partial(id, viaIdx, overloadIdx);
            };
        };
    };
    fu_COW_VEC<int> getNamedArgReorder(const fu_COW_VEC<fu_COW_STR>& callsite, const fu_COW_VEC<fu_COW_STR>& declaration)
    {
        fu_COW_VEC<int> result = fu_COW_VEC<int>{};
        int offset = 0;
        for (int i = 0; (i < int(declaration.m_size)); i++)
        {
            int idx = callsite.find(declaration[i]);
            if ((idx < 0))
            {
                for (int i = fu_CLONE(offset); (i < int(callsite.m_size)); i++)
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
    s_ScopeIdx scope_tryMatch__mutargs(const fu_COW_STR& id, fu_COW_VEC<s_SolvedNode>& args, const int& flags, const s_Type& retType)
    {
        s_ScopeIdx matchIdx {};
        fu_COW_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
        if (!overloads)
            return matchIdx;

        if (!int(args.m_size))
        {
            const s_ScopeIdx& headIdx = overloads[0];
            if ((GET(headIdx).min == 0))
                matchIdx = headIdx;

        };
        if (!matchIdx)
        {
            const int arity = int(args.m_size);
            fu_COW_VEC<fu_COW_STR> names {};
            if ((flags & F_NAMED_ARGS))
            {
                bool some = false;
                for (int i = 0; (i < arity); i++)
                {
                    s_SolvedNode arg = fu_CLONE(args.mutref(i));
                    names.push(((arg.kind == fu_STRING("label")) ? fu_CLONE(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = ((void)(some = true), arg.value); if (_.size()) return _; } fail(fu_STRING("")); }())) : fu_STRING("")));
                };
                (some || fail(fu_STRING("")));
            };
            fu_COW_VEC<int> reorder {};
            for (int i = 0; (i < int(overloads.m_size)); i++){
            {
                s_ScopeIdx overloadIdx = fu_CLONE(overloads[i]);
                s_Overload overload = fu_CLONE(GET(overloadIdx));
                while (true){
                {
                    if (((overload.min > arity) || (overload.max < arity)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((retType && !isAssignable(retType, ([&]() -> s_Type& { { s_Type& _ = overload.type; if (_) return _; } fail(fu_STRING("")); }()))))
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
                            fail(fu_STRING("TODO handle argument reorder in template specialization."));

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

                fu_COW_VEC<s_Type> arg_t = fu_CLONE(([&]() -> fu_COW_VEC<s_Type>& { { fu_COW_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(fu_STRING("")); }()));
                fu_COW_VEC<s_SolvedNode> arg_d = fu_CLONE(overload.defaults);
                const int N = (reorder ? int(reorder.m_size) : int(args.m_size));
                for (int i = 0; (i < N); i++)
                {
                    const int callsiteIndex = fu_CLONE((reorder ? reorder.mutref(i) : i));
                    if ((callsiteIndex < 0))
                    {
                        if (!(arg_d && arg_d[i]))
                        {
                            goto L_NEXT_c;
                        };
                        continue;
                    };
                    if (!isAssignableAsArgument(arg_t[i], fu_CLONE(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(callsiteIndex); if (_) return _; } fail(fu_STRING("")); }()).type)))
                    {
                        goto L_NEXT_c;
                    };
                };
                if (matchIdx)
                    fail(((fu_STRING("Ambiguous callsite, matches multiple functions in scope: `") + id) + fu_STRING("`.")));

                matchIdx = overloadIdx;
                if (reorder)
                {
                    fu_COW_VEC<s_SolvedNode> new_args {};
                    new_args.resize(int(reorder.m_size));
                    for (int i = 0; (i < int(reorder.m_size)); i++)
                    {
                        const int idx = fu_CLONE(reorder.mutref(i));
                        if ((idx >= 0))
                            new_args.mutref(i) = args.mutref(idx);

                    };
                    args = new_args;
                };
            
                }L_NEXT_c:;};
        };
        if (matchIdx)
        {
            s_Overload matched = fu_CLONE(GET(matchIdx));
            const fu_COW_VEC<s_SolvedNode>& arg_d = matched.defaults;
            if (arg_d)
            {
                if ((int(args.m_size) < int(arg_d.m_size)))
                    args.resize(int(arg_d.m_size));

                for (int i = 0; (i < int(arg_d.m_size)); i++)
                    args.mutref(i) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args.mutref(i); if (_) return _; } if (arg_d) { const s_SolvedNode& _ = arg_d[i]; if (_) return _; } fail(fu_STRING("")); }());

            };
            const fu_COW_VEC<s_Type>& arg_t = matched.args;
            if ((arg_t && (int(args.m_size) < int(arg_t.m_size))))
            {
                const fu_COW_VEC<fu_COW_STR>& arg_n = ([&]() -> const fu_COW_VEC<fu_COW_STR>& { { const fu_COW_VEC<fu_COW_STR>& _ = matched.names; if (_) return _; } fail(fu_STRING("")); }());
                for (int i = int(args.m_size); (i < int(arg_t.m_size)); i++)
                {
                    const fu_COW_STR& id = arg_n[i];
                    const s_Type& type = arg_t[i];
                    bindImplicitArg(args, i, id, type);
                };
            };
        };
        return matchIdx;
    };
    s_ScopeIdx scope_match__mutargs(const fu_COW_STR& id, fu_COW_VEC<s_SolvedNode>& args, const int& flags)
    {
        s_ScopeIdx ret = scope_tryMatch__mutargs(id, args, flags, s_Type{});
        if (ret)
            return ret;

        (Scope_lookup(_scope, id) ? fail(((fu_STRING("No overload of `") + id) + fu_STRING("` matches call signature."))) : fail(((fu_STRING("`") + id) + fu_STRING("` is not defined."))));
    };
    s_SolvedNode solveNode(const s_Node& node, const s_Type& type)
    {
        const fu_COW_STR& k = node.kind;
        if ((k == fu_STRING("root")))
            return solveRoot(node);

        if ((k == fu_STRING("block")))
            return solveBlock(node);

        if ((k == fu_STRING("label")))
            return solveComma(node);

        if ((k == fu_STRING("comma")))
            return solveComma(node);

        if ((k == fu_STRING("let")))
            return solveLet(node);

        if ((k == fu_STRING("call")))
            return solveCall(node);

        if ((k == fu_STRING("arrlit")))
            return solveArrayLiteral(node, type);

        if ((k == fu_STRING("if")))
            return solveIf(node, fu_CLONE(type));

        if ((k == fu_STRING("or")))
            return solveOr(node, fu_CLONE(type));

        if ((k == fu_STRING("!")))
            return solveNot(node);

        if ((k == fu_STRING("and")))
            return solveAnd(node, fu_CLONE(type));

        if ((k == fu_STRING("return")))
            return solveReturn(node);

        if ((k == fu_STRING("loop")))
            return solveBlock(node);

        if ((k == fu_STRING("break")))
            return solveJump(node);

        if ((k == fu_STRING("continue")))
            return solveJump(node);

        if ((k == fu_STRING("int")))
            return solveInt(node);

        if ((k == fu_STRING("str")))
            return solveStr(node);

        if ((k == fu_STRING("empty")))
            return solveEmpty(node);

        if ((k == fu_STRING("definit")))
            return solveDefinit(type);

        fail((fu_STRING("TODO: ") + k));
    };
    bool isUnordered(const fu_COW_STR& kind)
    {
        return ((kind == fu_STRING("fn")) || (kind == fu_STRING("struct")));
    };
    s_SolvedNode unorderedPrep(const s_Node& node)
    {
        const fu_COW_STR& k = node.kind;
        if ((k == fu_STRING("fn")))
            return uPrepFn(node);

        if ((k == fu_STRING("struct")))
            return uPrepStruct(node);

        fail((fu_STRING("TODO: ") + k));
    };
    s_SolvedNode unorderedSolve(const s_Node& node, const s_SolvedNode& prep)
    {
        const fu_COW_STR& k = node.kind;
        if ((k == fu_STRING("fn")))
            return uSolveFn(node, prep);

        if ((k == fu_STRING("struct")))
            return uSolveStruct(node, prep);

        fail((fu_STRING("TODO: ") + k));
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
        fu_COW_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(int(items.m_size) - 1)]; if (_) return _; } fail(fu_STRING("")); }());
        return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = last.type; if (_) return _; } fail(fu_STRING("")); }()), items);
    };
    s_SolvedNode solveInt(const s_Node& node)
    {
        return solved(node, t_i32, fu_COW_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveStr(const s_Node& node)
    {
        return solved(node, t_string, fu_COW_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveEmpty(const s_Node& node)
    {
        return solved(node, t_void, fu_COW_VEC<s_SolvedNode>{});
    };
    s_Node createTypeParam(const fu_COW_STR& value)
    {
        return s_Node { fu_STRING("typeparam"), int{}, fu_CLONE(value), fu_COW_VEC<s_Node>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(fu_STRING("")); }())) };
    };
    s_SolvedNode uPrepFn(const s_Node& node)
    {
        return __solveFn(false, false, node, s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }, -1);
    };
    s_SolvedNode uSolveFn(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveFn(true, false, node, prep, -1);
    };
    s_SolvedNode __solveFn(const bool& solve, const bool& spec, const s_Node& n_fn, const s_SolvedNode& prep, const int& caseIdx)
    {
        const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = n_fn.value; if (_.size()) return _; } fail(fu_STRING("TODO anonymous fns")); }());
        if (spec)
        {
            (solve || fail(fu_STRING("")));
        }
        else if ((n_fn.flags & F_TEMPLATE))
        {
            if (solve)
                return ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = prep; if (_) return _; } fail(fu_STRING("")); }());

            s_ScopeIdx tDecl = TemplateDecl(n_fn);
            s_SolvedNode out = solved(n_fn, t_void, fu_COW_VEC<s_SolvedNode>{});
            out.target = tDecl;
            return out;
        };
        if ((!solve && !(n_fn.flags & F_FULLY_TYPED)))
            return s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        const fu_COW_VEC<s_Node>& inItems = n_fn.items;
        ((int(inItems.m_size) >= FN_RET_BACK) || fail(fu_STRING("")));
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = fu_CLONE(prep); if (_) return _; } return solved(n_fn, t_void, fu_COW_VEC<s_SolvedNode>{}); }());
        out.items.resize(int(inItems.m_size));
        if ((_current_fn && (id != fu_STRING("free"))))
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
        };
        
        {
            const int scope0 = Scope_push(_scope);
            std::swap(_current_fn, out);
            fu_COW_VEC<s_SolvedNode>& outItems = _current_fn.items;
            for (int i = 0; (i < (int(inItems.m_size) + FN_ARGS_BACK)); i++)
            {
                const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems[i]; if (_) return _; } fail(fu_STRING("")); }());
                ((n_arg.kind == fu_STRING("let")) || fail(fu_STRING("")));
                if (spec)
                {
                    s_Node mut_arg = fu_CLONE(n_arg);
                    mut_arg.items.mutref(LET_TYPE) = createTypeParam(mut_arg.value);
                    s_Type type = fu_CLONE(_typeParams.mutref(mut_arg.value));
                    if (!(type.quals & q_ref))
                        mut_arg.flags |= F_MUT;

                    outItems.mutref(i) = solveLet(mut_arg);
                }
                else
                    outItems.mutref(i) = solveLet(n_arg);

            };
            s_Node n_ret = fu_CLONE(inItems[(int(inItems.m_size) + FN_RET_BACK)]);
            s_Node n_body = fu_CLONE(([&]() -> const s_Node& { { const s_Node& _ = inItems[(int(inItems.m_size) + FN_BODY_BACK)]; if (_) return _; } fail(fu_STRING("")); }()));
            if ((caseIdx >= 0))
            {
                ((n_body.kind == fu_STRING("pattern")) || fail(fu_STRING("")));
                s_Node branch = fu_CLONE(([&]() -> s_Node& { { s_Node& _ = n_body.items.mutref(caseIdx); if (_) return _; } fail(fu_STRING("")); }()));
                const fu_COW_VEC<s_Node>& items = branch.items;
                n_ret = ([&]() -> const s_Node& { { const s_Node& _ = items[(int(items.m_size) + FN_RET_BACK)]; if (_) return _; } return n_ret; }());
                n_body = items[(int(items.m_size) + FN_BODY_BACK)];
            };
            
            {
                s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(n_ret) : s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
                outItems.mutref((int(outItems.m_size) + FN_RET_BACK)) = s_ret;
            };
            if (solve)
            {
                s_SolvedNode s_body = solveNode(n_body, s_Type{});
                (s_body || fail(fu_STRING("")));
                outItems.mutref((int(outItems.m_size) + FN_BODY_BACK)) = s_body;
            };
            std::swap(_current_fn, out);
            Scope_pop(_scope, scope0);
        };
        if (!prep)
            FnDecl(id, out);

        (!solve || out.items.mutref((int(out.items.m_size) + FN_BODY_BACK)) || fail(fu_STRING("")));
        return out;
    };
    fu_COW_STR TODO_memoize_mangler(const fu_COW_VEC<s_SolvedNode>& args)
    {
        fu_COW_STR mangle = fu_STRING("");
        for (int i = 0; (i < int(args.m_size)); i++)
            mangle += (fu_STRING("\v") + serializeType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(fu_STRING("")); }()).type));

        return mangle;
    };
    s_ScopeIdx trySpecialize(s_Template& tempatle, const fu_COW_VEC<s_SolvedNode>& args)
    {
        fu_COW_STR mangle = TODO_memoize_mangler(args);
        s_SolvedNode spec = fu_CLONE(([&](s_SolvedNode& _) -> s_SolvedNode& { if (!_) _ = doTrySpecialize(tempatle, args); return _; } (tempatle.specializations.upsert(mangle))));
        return spec.target;
    };
    s_SolvedNode doTrySpecialize(s_Template& tempatle, const fu_COW_VEC<s_SolvedNode>& args)
    {
        s_Node node = fu_CLONE(tempatle.node);
        ((node.kind == fu_STRING("fn")) || fail(fu_STRING("TODO")));
        s_SolvedNode result = trySpecializeFn(node, args);
        if (!result)
            result.kind = fu_STRING("spec-fail");

        return result;
    };
    s_SolvedNode trySpecializeFn(const s_Node& node, const fu_COW_VEC<s_SolvedNode>& args)
    {
        const fu_COW_VEC<s_Node>& items = node.items;
        fu_COW_MAP<fu_COW_STR, s_Type> typeParams {};
        const int numArgs = (int(items.m_size) + FN_ARGS_BACK);
        for (int i = 0; (i < numArgs); i++)
        {
            const s_Node& argNode = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(fu_STRING("")); }());
            ((argNode.kind == fu_STRING("let")) || fail(fu_STRING("")));
            s_Type inType = ((int(args.m_size) > i) ? fu_CLONE(args[i].type) : s_Type { fu_COW_STR{}, int{} });
            if (inType)
            {
                const fu_COW_STR& argName = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = argNode.value; if (_.size()) return _; } fail(fu_STRING("")); }());
                s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { fu_COW_STR{}, int{} }; return _; } (typeParams.upsert(argName)));
                ([&]() -> s_Type& { { s_Type& _ = argName_typeParam; if (!_) return _; } fail(((fu_STRING("Type param name collision with argument: `") + argName) + fu_STRING("`."))); }()) = inType;
            };
            inType.quals |= q_ref;
            const s_Node& annot = argNode.items[LET_TYPE];
            if (annot)
            {
                const bool ok = (inType && trySolveTypeParams(annot, fu_CLONE(inType), typeParams));
                if (!ok)
                    return s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

            };
        };
        int caseIdx = -1;
        const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items[(int(items.m_size) + FN_BODY_BACK)]; if (_) return _; } fail(fu_STRING("")); }());
        if ((pattern.kind == fu_STRING("pattern")))
        {
            const fu_COW_VEC<s_Node>& branches = pattern.items;
            for (int i = 0; (i < int(branches.m_size)); i++)
            {
                const s_Node& branch = branches[i];
                const fu_COW_VEC<s_Node>& items = ([&]() -> const s_Node& { { const s_Node& _ = branch; if (_) return _; } fail(fu_STRING("")); }()).items;
                const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STRING("")); }());
                if (evalTypePattern(cond, typeParams))
                {
                    caseIdx = i;
                    break;
                };
            };
            if ((caseIdx < 0))
                return s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        };
        s_SolvedNode current_fn0 {};
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        const int scope0 = Scope_push(_scope);
        s_SolvedNode specialized = __solveFn(true, true, node, s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }, caseIdx);
        (specialized || fail(fu_STRING("")));
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        Scope_pop(_scope, scope0);
        return specialized;
    };
    s_SolvedNode uPrepStruct(const s_Node& node)
    {
        return __solveStruct(false, node, s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
    };
    s_SolvedNode uSolveStruct(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveStruct(true, node, prep);
    };
    s_SolvedNode __solveStruct(const bool& solve, const s_Node& node, const s_SolvedNode& prep)
    {
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = fu_CLONE(prep); if (_) return _; } return solved(node, t_void, fu_COW_VEC<s_SolvedNode>{}); }());
        const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("TODO anonymous structs")); }());
        s_Type structType = initStruct(id, node.flags, ctx);
        if (!prep)
            out.target = Scope_Typedef(_scope, id, structType);

        if (!solve)
            return out;

        out.items = solveStructMembers(node.items, structType);
        
        {
            fu_COW_VEC<s_SolvedNode> members {};
            fu_COW_VEC<s_SolvedNode> items = fu_CLONE(out.items);
            fu_COW_VEC<s_StructField> fields {};
            for (int i = 0; (i < int(items.m_size)); i++)
            {
                const s_SolvedNode& item = items[i];
                if ((item && (item.kind == fu_STRING("let")) && (item.flags & F_FIELD)))
                {
                    members.push(item);
                    fields.push(s_StructField { fu_CLONE(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = item.value; if (_.size()) return _; } fail(fu_STRING("")); }())), fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = item.type; if (_) return _; } fail(fu_STRING("")); }())) });
                };
            };
            finalizeStruct(id, fields, ctx);
            DefaultCtor(id, structType, members);
        };
        return out;
    };
    fu_COW_VEC<s_SolvedNode> solveStructMembers(const fu_COW_VEC<s_Node>& members, const s_Type& structType)
    {
        fu_COW_VEC<s_SolvedNode> out {};
        for (int i = 0; (i < int(members.m_size)); i++)
        {
            const s_Node& node = members[i];
            if ((node.kind == fu_STRING("let")))
                out.push(solveField(structType, node));
            else
                fail((fu_STRING("TODO: ") + node.kind));

        };
        return out;
    };
    s_SolvedNode solveReturn(const s_Node& node)
    {
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, s_Type{}));
        const s_SolvedNode& nextExpr = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = out.items[0]; if (_) return _; } return out; }());
        const s_Type& nextType = ([&]() -> const s_Type& { { const s_Type& _ = nextExpr.type; if (_) return _; } fail(fu_STRING("")); }());
        const int retIdx = (int(_current_fn.items.m_size) + FN_RET_BACK);
        s_SolvedNode prevExpr = fu_CLONE(_current_fn.items.mutref(retIdx));
        const s_Type& prevType = prevExpr.type;
        if (prevType)
        {
            (isAssignable(prevType, nextType) || fail((((fu_STRING("Non-assignable return types: ") + serializeType(prevType)) + fu_STRING(" <- ")) + serializeType(nextType))));
        }
        else
            _current_fn.items.mutref(retIdx) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nextExpr; if (_) return _; } fail(fu_STRING("")); }());

        return out;
    };
    s_SolvedNode solveJump(const s_Node& node)
    {
        return solved(node, t_void, fu_COW_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveBinding(const s_Node& node)
    {
        const s_Node& annot = node.items[LET_TYPE];
        const s_Node& init = node.items[LET_INIT];
        s_SolvedNode s_annot = ([&]() -> s_SolvedNode { if (annot) return evalTypeAnnot(annot); else return s_SolvedNode{}; }());
        const s_Type& t_annot = s_annot.type;
        s_SolvedNode s_init = ([&]() -> s_SolvedNode { if (init) return solveNode(init, t_annot); else return s_SolvedNode{}; }());
        s_Type t_init = fu_CLONE(s_init.type);
        s_Type t_let = (t_annot ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(t_annot) : fu_CLONE(t_annot)) : (((t_init.quals & q_mutref) || (node.flags & F_MUT)) ? clear_refs(t_init) : fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = t_init; if (_) return _; } fail(fu_STRING("Variable declarations without explicit type annotations must be initialized.")); }()))));
        if ((t_annot && t_init))
        {
            (isAssignable(t_annot, t_init) || fail(fu_STRING("Type annotation does not match init expression.")));
        };
        if (s_init)
            s_init = maybeCopyOrMove(s_init, t_let);

        s_SolvedNode out = solved(node, t_let, fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<2> { ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = s_annot; if (_) return _; } return s_init; }()), s_init } });
        if ((node.flags & F_MUT))
        {
            ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = _current_fn; if (_) return _; } fail(fu_STRING("Mutable statics are not currently allowed.")); }());
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
    s_SolvedNode evalTypeAnnot(const s_Node& node)
    {
        if ((node.kind == fu_STRING("call")))
        {
            const fu_COW_VEC<s_Node>& items = node.items;
            if (int(items.m_size))
            {
                if ((int(items.m_size) == 1))
                {
                    s_Type t = evalTypeAnnot(items[0]).type;
                    (t || fail(fu_STRING("")));
                    if ((node.value == fu_STRING("&")))
                        return solved(node, add_ref(t), fu_COW_VEC<s_SolvedNode>{});

                    if ((node.value == fu_STRING("&mut")))
                        return solved(node, add_mutref(t), fu_COW_VEC<s_SolvedNode>{});

                    if ((node.value == fu_STRING("[]")))
                        return solved(node, createArray(t, ctx), fu_COW_VEC<s_SolvedNode>{});

                }
                else if ((int(items.m_size) == 2))
                {
                    s_Type a = evalTypeAnnot(items[0]).type;
                    s_Type b = evalTypeAnnot(items[1]).type;
                    ((a && b) || fail(fu_STRING("")));
                    if ((node.value == fu_STRING("Map")))
                        return solved(node, createMap(a, b, ctx), fu_COW_VEC<s_SolvedNode>{});

                };
            }
            else
            {
                const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("")); }());
                fu_COW_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
                if (overloads)
                {
                    for (int i = 0; (i < int(overloads.m_size)); i++)
                    {
                        s_Overload maybe = fu_CLONE(GET(overloads[i]));
                        if ((maybe.kind == fu_STRING("type")))
                            return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(fu_STRING("")); }()), fu_COW_VEC<s_SolvedNode>{});

                    };
                };
                fail(((fu_STRING("No type `") + id) + fu_STRING("` in scope.")));
            };
        }
        else if ((node.kind == fu_STRING("typeparam")))
        {
            const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("")); }());
            (_typeParams || fail(((fu_STRING("Unexpected type param: `$") + id) + fu_STRING("`."))));
            s_Type type = fu_CLONE(([&]() -> s_Type& { if (_typeParams) { s_Type& _ = _typeParams.mutref(id); if (_) return _; } fail(((fu_STRING("No type param `$") + id) + fu_STRING("` in scope."))); }()));
            return solved(node, type, fu_COW_VEC<s_SolvedNode>{});
        };
        fail(fu_STRING("TODO"));
    };
    bool trySolveTypeParams(const s_Node& node, s_Type&& type, fu_COW_MAP<fu_COW_STR, s_Type>& typeParams)
    {
        if ((node.kind == fu_STRING("call")))
        {
            const fu_COW_VEC<s_Node>& items = node.items;
            if (int(items.m_size))
            {
                if ((int(items.m_size) == 1))
                {
                    s_Type t = ((node.value == fu_STRING("&")) ? tryClear_ref(type) : ((node.value == fu_STRING("&mut")) ? tryClear_mutref(type) : ((node.value == fu_STRING("[]")) ? tryClear_array(type, ctx) : ((void)fail(fu_STRING("TODO")), s_Type { fu_COW_STR{}, int{} }))));
                    if (!t)
                        return false;

                    return trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STRING("")); }()), fu_CLONE(t), typeParams);
                }
                else if ((int(items.m_size) == 2))
                {
                    if ((node.value == fu_STRING("Map")))
                    {
                        s_MapFields kv = tryClear_map(type, ctx);
                        if (!kv)
                            return false;

                        return (trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STRING("")); }()), fu_CLONE(kv.key), typeParams) && trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(fu_STRING("")); }()), fu_CLONE(kv.value), typeParams));
                    };
                };
            }
            else
            {
                const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("")); }());
                fu_COW_VEC<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
                if (overloads)
                {
                    for (int i = 0; (i < int(overloads.m_size)); i++)
                    {
                        s_Overload maybe = fu_CLONE(GET(overloads[i]));
                        if ((maybe.kind == fu_STRING("type")))
                            return isAssignable(([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(fu_STRING("")); }()), type);

                    };
                };
                fail(((fu_STRING("No type `") + id) + fu_STRING("` in scope.")));
            };
        }
        else if ((node.kind == fu_STRING("typeparam")))
        {
            const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("")); }());
            s_Type& _param = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { fu_COW_STR{}, int{} }; return _; } (typeParams.upsert(id)));
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
        fail(fu_STRING("TODO"));
    };
    bool evalTypePattern(const s_Node& node, const fu_COW_MAP<fu_COW_STR, s_Type>& typeParams)
    {
        const fu_COW_VEC<s_Node>& items = node.items;
        if (((node.kind == fu_STRING("call")) && (int(items.m_size) == 2)))
        {
            const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STRING("")); }());
            const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(fu_STRING("")); }());
            if ((node.value == fu_STRING("->")))
            {
                if (((left.kind == fu_STRING("typeparam")) && (right.kind == fu_STRING("typetag"))))
                {
                    const fu_COW_STR& tag = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = right.value; if (_.size()) return _; } fail(fu_STRING("")); }());
                    const s_Type& type = ([&]() -> const s_Type& { if (left.value.size()) { const s_Type& _ = typeParams[left.value]; if (_) return _; } fail(((fu_STRING("No type param `$") + left.value) + fu_STRING("` in scope."))); }());
                    return type_has(type, tag);
                }
                else
                {
                    fu_COW_MAP<fu_COW_STR, s_Type> typeParams0 = fu_CLONE(_typeParams);
                    _typeParams = typeParams;
                    s_Type expect = evalTypeAnnot(right).type;
                    s_Type actual = evalTypeAnnot(left).type;
                    _typeParams = typeParams0;
                    return isAssignable(expect, actual);
                };
            }
            else if ((node.value == fu_STRING("&&")))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));
            else if ((node.value == fu_STRING("||")))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));

        };
        fail(fu_STRING("TODO"));
    };
    s_Node createRead(const fu_COW_STR& id)
    {
        return s_Node { fu_STRING("call"), fu_CLONE(F_ID), fu_CLONE(id), fu_COW_VEC<s_Node>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(fu_STRING("")); }())) };
    };
    s_SolvedNode solveCall(const s_Node& node)
    {
        const fu_COW_STR& id = node.value;
        (id.size() || fail(fu_STRING("")));
        fu_COW_VEC<s_SolvedNode> args = solveNodes(node.items, s_Type{});
        s_ScopeIdx callTargIdx = scope_match__mutargs(id, args, node.flags);
        s_Overload callTarg = fu_CLONE(GET(callTargIdx));
        while (callTarg.partial)
        {
            const bool unshift = (callTarg.kind == fu_STRING("p-unshift"));
            s_Partial partial = fu_CLONE(([&]() -> s_Partial& { { s_Partial& _ = callTarg.partial; if (_) return _; } fail(fu_STRING("")); }()));
            const s_ScopeIdx& viaIdx = ([&]() -> const s_ScopeIdx& { { const s_ScopeIdx& _ = partial.via; if (_) return _; } fail(fu_STRING("")); }());
            callTargIdx = ([&]() -> const s_ScopeIdx& { { const s_ScopeIdx& _ = partial.target; if (_) return _; } fail(fu_STRING("")); }());
            s_Overload via = fu_CLONE(GET(viaIdx));
            callTarg = GET(callTargIdx);
            fu_COW_VEC<s_SolvedNode> innerArgs {};
            if (!unshift)
                innerArgs = fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<1> { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(fu_STRING("")); }()) } };

            s_SolvedNode argNode = CallerNode(createRead(fu_STRING("__partial")), fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(fu_STRING("")); }())), viaIdx, fu_CLONE(innerArgs));
            if (unshift)
                args.unshift(argNode);
            else
                args.mutref(0) = argNode;

        };
        return CallerNode(node, fu_CLONE(([&]() -> s_Type& { { s_Type& _ = callTarg.type; if (_) return _; } fail(fu_STRING("")); }())), callTargIdx, fu_CLONE(args));
    };
    s_SolvedNode solveArrayLiteral(const s_Node& node, const s_Type& type)
    {
        fu_COW_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        s_Type itemType = (type ? tryClear_array(type, ctx) : s_Type { fu_COW_STR{}, int{} });
        int startAt = 0;
        if ((!itemType && int(items.m_size)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[startAt++]; if (_) return _; } fail(fu_STRING("")); }());
            itemType = clear_refs(head.type);
        };
        if (!itemType)
            fail(fu_STRING("Cannot infer empty arraylit."));

        for (int i = fu_CLONE(startAt); (i < int(items.m_size)); i++)
        {
            itemType = type_tryInter(itemType, ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STRING("")); }()).type);
            (itemType || fail(fu_STRING("[array literal] No common supertype.")));
        };
        return solved(node, createArray(itemType, ctx), items);
    };
    s_SolvedNode createLet(const fu_COW_STR& id, const s_Type& type, const int& flags)
    {
        return s_SolvedNode { fu_STRING("let"), fu_CLONE(flags), fu_CLONE(id), fu_COW_VEC<s_SolvedNode>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(fu_STRING("")); }())), fu_CLONE(type), s_ScopeIdx{} };
    };
    s_ScopeIdx injectImplicitArg__mutfn(s_SolvedNode& fnNode, const fu_COW_STR& id, const s_Type& type)
    {
        const int newArgIdx = (int(fnNode.items.m_size) + FN_RET_BACK);
        s_SolvedNode newArgNode = createLet(id, type, F_IMPLICIT);
        fnNode.items.insert(newArgIdx, newArgNode);
        if (fnNode.target)
        {
            s_Overload& o = GET(fnNode.target);
            ((o.kind == fu_STRING("fn")) || fail(fu_STRING("")));
            ((int(o.names.m_size) == int(o.args.m_size)) || fail(fu_STRING("")));
            ((o.names.find(id) < 0) || fail(fu_STRING("Implicit argument name collision.")));
            o.args.push(type);
            o.names.push(id);
        };
        const int scope0 = Scope_push(_scope);
        s_ScopeIdx overload = Binding(id, type);
        Scope_pop(_scope, scope0);
        return overload;
    };
    void bindImplicitArg(fu_COW_VEC<s_SolvedNode>& args, const int& argIdx, const fu_COW_STR& id, const s_Type& type)
    {
        (TEST_expectImplicits || fail(fu_STRING("Attempting to propagate implicit arguments.")));
        ((int(args.m_size) >= argIdx) || fail(fu_STRING("")));
        args.insert(argIdx, CallerNode(createRead(id), fu_CLONE(type), getImplicit(id, type), fu_COW_VEC<s_SolvedNode>{}));
    };
    s_ScopeIdx getImplicit(const fu_COW_STR& id, const s_Type& type)
    {
        fu_COW_VEC<s_SolvedNode> args {};
        s_ScopeIdx matched = scope_tryMatch__mutargs(id, args, 0, type);
        if (!matched)
        {
            if (!_current_fn)
                fail(((fu_STRING("No implicit `") + id) + fu_STRING("` in scope.")));

            matched = injectImplicitArg__mutfn(_current_fn, id, type);
            (matched || fail(fu_STRING("")));
        };
        return matched;
    };
    s_SolvedNode solveIf(const s_Node& node, s_Type&& type)
    {
        const s_Node& n0 = node.items[0];
        const s_Node& n1 = node.items[1];
        const s_Node& n2 = node.items[2];
        s_SolvedNode cond = solveNode(n0, t_bool);
        s_SolvedNode cons = (n1 ? solveNode(n1, s_Type{}) : s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        s_SolvedNode alt = (n2 ? solveNode(n2, cons.type) : s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        s_SolvedNode priExpr = fu_CLONE(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = cons; if (_) return _; } { s_SolvedNode& _ = alt; if (_) return _; } fail(fu_STRING("")); }()));
        s_SolvedNode secExpr = fu_CLONE(([&]() -> s_SolvedNode& { if (cons) { s_SolvedNode& _ = alt; if (_) return _; } return cons; }()));
        const s_Type& priType = priExpr.type;
        const s_Type& secType = secExpr.type;
        if (!((type == t_void) || (type == t_bool)))
        {
            type = (!secType ? fu_CLONE(priType) : type_tryInter(priType, secType));
            (type || fail(fu_STRING("No common supertype.")));
            if (cons)
                cons = maybeCopyOrMove(cons, type);

            if (alt)
                alt = maybeCopyOrMove(alt, type);

        };
        return solved(node, ([&]() -> s_Type& { { s_Type& _ = type; if (_) return _; } fail(fu_STRING("")); }()), fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<3> { cond, cons, alt } });
    };
    s_SolvedNode solveNot(const s_Node& node)
    {
        return solved(node, t_bool, fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<1> { solveNode(node.items[0], t_bool) } });
    };
    s_SolvedNode solveOr(const s_Node& node, s_Type&& type)
    {
        fu_COW_VEC<s_SolvedNode> items = solveNodes(node.items, type);
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = 0; (i < int(items.m_size)); i++)
            {
                s_SolvedNode item = fu_CLONE(items.mutref(i));
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
                for (int i = 0; (i < int(items.m_size)); i++)
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
        fu_COW_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = int(items.m_size); (i-- > 0); )
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
    s_SolvedNode solved(const s_Node& node, const s_Type& type, const fu_COW_VEC<s_SolvedNode>& items)
    {
        return s_SolvedNode { fu_CLONE(node.kind), fu_CLONE(node.flags), fu_CLONE(node.value), fu_CLONE(items), fu_CLONE(node.token), fu_CLONE(type), s_ScopeIdx{} };
    };
    s_SolvedNode CallerNode(const s_Node& node, s_Type&& type, const s_ScopeIdx& target, fu_COW_VEC<s_SolvedNode>&& args)
    {
        s_Overload overload = fu_CLONE(GET(target));
        if ((overload.kind == fu_STRING("field")))
        {
            s_SolvedNode head = fu_CLONE(([&]() -> s_SolvedNode& { if ((int(args.m_size) == 1)) { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(fu_STRING("")); }()));
            const s_Type& headType = ([&]() -> const s_Type& { { const s_Type& _ = head.type; if (_) return _; } fail(fu_STRING("")); }());
            type = add_refs_from(headType, type);
        }
        else if (int(args.m_size))
        {
            const fu_COW_VEC<s_Type>& arg_t = ([&]() -> const fu_COW_VEC<s_Type>& { { const fu_COW_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(fu_STRING("")); }());
            for (int i = 0; (i < int(args.m_size)); i++)
                args.mutref(i) = maybeCopyOrMove(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(i); if (_) return _; } fail(fu_STRING("")); }()), arg_t[i]);

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
            fail(fu_STRING("Needs an explicit STEAL or CLONE."));

        if (WARN_ON_IMPLICIT_COPY)
        {
        };
        return s_SolvedNode { fu_STRING("copy"), int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<1> { node } }, fu_CLONE(node.token), clear_refs(node.type), s_ScopeIdx{} };
    };
    fu_COW_VEC<s_SolvedNode> solveNodes(const fu_COW_VEC<s_Node>& nodes, const s_Type& type)
    {
        fu_COW_VEC<s_SolvedNode> result {};
        s_Token here0 = fu_CLONE(_here);
        result.resize(int(nodes.m_size));
        for (int i = 0; (i < int(nodes.m_size)); i++)
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
            const int i0 = fu_CLONE(i);
            int i1 = int(nodes.m_size);
            for (int i = fu_CLONE(i0); (i < int(nodes.m_size)); i++)
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
            for (int i = fu_CLONE(i0); (i < i1); i++)
            {
                const s_Node& node = nodes[i];
                if (node)
                {
                    _here = ([&]() -> const s_Token& { { const s_Token& _ = node.token; if (_) return _; } return _here; }());
                    result.mutref(i) = unorderedSolve(node, result.mutref(i));
                };
            };
            ((i1 > i0) || fail(fu_STRING("")));
            i = (i1 - 1);
        };
        ((int(result.m_size) == int(nodes.m_size)) || fail(fu_STRING("")));
        _here = here0;
        return result;
    };
    s_SolveResult runSolver_EVAL()
    {
        return s_SolveResult { solveNode(parse, s_Type{}), fu_CLONE(_scope) };
    };
};

#define runSolver(...) ((sf_runSolver { __VA_ARGS__ }).runSolver_EVAL())

s_Scope listGlobals()
{
    s_Scope scope {};
    Scope_Typedef(scope, fu_STRING("i32"), t_i32);
    Scope_Typedef(scope, fu_STRING("bool"), t_bool);
    Scope_Typedef(scope, fu_STRING("void"), t_void);
    Scope_Typedef(scope, fu_STRING("string"), t_string);
    Scope_Typedef(scope, fu_STRING("never"), t_never);
    return scope;
}
inline const fu_COW_STR prelude_src = fu_STRING("\n\n\n// Some lolcode.\n\nfn __native_pure(): never never;\n\nfn STEAL (a: &mut $T): $T __native_pure;\nfn CLONE (a: &    $T): $T __native_pure;\n\nfn print(a: $A): void __native_pure;\nfn print(a: $A, b: $B): void __native_pure;\nfn print(a: $A, b: $B, c: $C): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native_pure;\n\n\n// Arithmetics.\n\nfn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn /(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @integral):          $T __native_pure;\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\n\nfn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native_pure;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\n\n\n// Logic.\n\nfn true (): bool __native_pure;\nfn false(): bool __native_pure;\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T): &mut $T __native_pure;\nfn ||=(a: &mut $T, b: $T): &mut $T __native_pure;\n\nfn SWAP(a: &mut $T, b: &mut $T): void __native_pure;\n\n\n// Arrays.\n\nfn len (a: &$T[]):         i32  __native_pure;\nfn find(a: &$T[], b: &$T): i32  __native_pure;\nfn has (a: &$T[], b: &$T): bool __native_pure;\n\nfn [](a: &$T[], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native_pure;\n    case ($a -> &    $T[]): &    $T __native_pure;\n\nfn push   (a: &mut $T[], b: $T):              void __native_pure;\nfn unshift(a: &mut $T[], b: $T):              void __native_pure;\nfn insert (a: &mut $T[], i: i32, b: $T):      void __native_pure;\n\nfn concat (a: &$T[], b: &$T[]):               $T[] __native_pure;\nfn slice  (a: &$T[], i0: i32, i1: i32):       $T[] __native_pure;\nfn slice  (a: &$T[], i0: i32):                $T[] __native_pure;\n\nfn splice (a: &mut $T[], i: i32, count: i32): void __native_pure;\nfn pop    (a: &mut $T[]):                     void __native_pure;\n\nfn clear  (a: &mut $T[]):                     void __native_pure;\nfn resize (a: &mut $T[], len: i32):           void __native_pure;\nfn shrink (a: &mut $T[], len: i32):           void __native_pure;\n\nfn move   (a: &mut $T[], from: i32, to: i32): void __native_pure;\nfn sort   (a: &mut $T[]):                     void __native_pure;\n\n\n// Strings.\n\nfn len(a: &string):                 i32         __native_pure;\nfn [](a: &string, i: i32):          string      __native_pure;\nfn +=(a: &mut string, b: &string):  &mut string __native_pure;\nfn + (a: &string, b: &string):      string      __native_pure;\n\nfn ==(a: &string, b: &string):      bool        __native_pure;\nfn !=(a: &string, b: &string):      bool        __native_pure;\nfn  >(a: &string, b: &string):      bool        __native_pure;\nfn  <(a: &string, b: &string):      bool        __native_pure;\nfn >=(a: &string, b: &string):      bool        __native_pure;\nfn <=(a: &string, b: &string):      bool        __native_pure;\n\nfn find(a: &string, b: &string):    i32         __native_pure;\nfn has(a: &string, b: &string):     bool        __native_pure;\nfn starts(a: &string, with: &string): bool      __native_pure;\n\nfn slice (a: &string, i0: i32, i1: i32): string __native_pure;\nfn slice (a: &string, i0: i32)         : string __native_pure;\n\nfn substr(a: &string, i0: i32, i1: i32): string __native_pure;\nfn char  (a: &string, i0: i32): i32 __native_pure;\n\nfn split(str: &string, sep: &string): string[] __native_pure;\n\n\n// Maps.\n\nfn [](a: &Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native_pure;\n    case ($a -> &    Map($K, $V)): &    $V __native_pure;\n\nfn keys  (a: &Map($K, $V)): $K[] __native_pure;\nfn values(a: &Map($K, $V)): $V[] __native_pure;\nfn has   (a: &Map($K, $V), b: &$K): bool __native_pure;\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native_pure;\nfn assert()             : never __native_pure;\n\n\n// Butt plugs.\n\n// TODO we should go for an any $B -> call stringify(b) macro.\nfn +(a: &string, b: i32): string __native_pure;\nfn join(a: &string[], sep: &string): string __native_pure;\n\n");

s_Scope solvePrelude()
{
    s_LexResult lexed = lex(prelude_src, fu_STRING("__prelude"));
    s_Node root = parse(fu_STRING("__prelude"), lexed.tokens);
    s_TEMP_Context ctx {};
    s_Scope scope = listGlobals();
    s_SolveResult solved = runSolver(root, scope, ctx);
    return solved.scope;
}
inline const s_Scope PRELUDE = solvePrelude();

s_SolveResult solve(const s_Node& parse, s_TEMP_Context& ctx)
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
    fu_COW_MAP<fu_COW_STR, fu_COW_STR> _libs {};
    fu_COW_MAP<fu_COW_STR, fu_COW_STR> _tfwd {};
    fu_COW_MAP<fu_COW_STR, fu_COW_STR> _ffwd {};
    fu_COW_STR _tdef {};
    fu_COW_STR _fdef {};
    fu_COW_STR _indent = fu_STRING("\n");
    int _fnN {};
    int _clsrN {};
    int _faasN {};
    const s_Overload& GET(const s_ScopeIdx& idx)
    {
        ((idx.raw > 0) || fu_THROW("Assertion failed."));
        return scope.overloads[(idx.raw - 1)];
    };
    [[noreturn]] fu_NEVER fail(fu_COW_STR&& reason)
    {
        fu_THROW(reason);
    };
    void include(const fu_COW_STR& lib)
    {
        if (!(_libs.find(lib) != -1))
            (_libs.upsert(lib) = ((fu_STRING("#include ") + lib) + fu_STRING("\n")));

    };
    fu_COW_STR typeAnnot(const s_Type& type, const int& mode)
    {
        fu_COW_STR fwd = typeAnnotBase(type);
        if (((mode & M_RETVAL) && (type.canon == fu_STRING("never"))))
            return (fu_STRING("[[noreturn]] ") + fwd);

        if ((type.quals & q_mutref))
            return (fwd + fu_STRING("&"));

        if ((type.quals & q_ref))
            return ((fu_STRING("const ") + fwd) + fu_STRING("&"));

        if (((mode & M_CONST) && (type.quals & q_trivial)))
            return (fu_STRING("const ") + fwd);

        if (((mode & M_ARGUMENT) && !(type.quals & q_trivial)))
            return (fwd + fu_STRING("&&"));

        return fwd;
    };
    fu_COW_STR typeAnnotBase(const s_Type& type)
    {
        const fu_COW_STR& c = type.canon;
        if ((c == fu_STRING("i32")))
            return fu_STRING("int");

        if ((c == fu_STRING("bool")))
            return fu_STRING("bool");

        if ((c == fu_STRING("void")))
            return fu_STRING("void");

        if ((c == fu_STRING("string")))
            return annotateString();

        if ((c == fu_STRING("never")))
            return annotateNever();

        const s_Struct& tdef = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(type.canon, ctx); if (_) return _; } fail((fu_STRING("TODO: ") + type.canon)); }());
        const fu_COW_STR& k = tdef.kind;
        if ((k == fu_STRING("struct")))
        {
            if (!(_tfwd.find(type.canon) != -1))
            {
                (_tfwd.upsert(type.canon) = ((fu_STRING("\nstruct ") + type.canon) + fu_STRING(";")));
                _tdef += declareStruct(type, tdef);
            };
            return type.canon;
        };
        if ((k == fu_STRING("array")))
        {
            annotateVector();
            fu_COW_STR item = typeAnnot(tdef.fields[0].type, 0);
            return ((fu_STRING("fu_COW_VEC<") + item) + fu_STRING(">"));
        };
        if ((k == fu_STRING("map")))
        {
            fu_COW_STR k = typeAnnot(tdef.fields[0].type, 0);
            fu_COW_STR v = typeAnnot(tdef.fields[1].type, 0);
            annotateMap();
            return ((((fu_STRING("fu_COW_MAP<") + k) + fu_STRING(", ")) + v) + fu_STRING(">"));
        };
        fail((fu_STRING("TODO: ") + tdef.kind));
    };
    fu_COW_STR declareStruct(const s_Type& t, const s_Struct& s)
    {
        fu_COW_STR def = ((fu_STRING("\nstruct ") + t.canon) + fu_STRING("\n{"));
        fu_COW_STR indent = fu_STRING("\n    ");
        if ((s.flags & F_DESTRUCTOR))
        {
            def += fu_STRING("\n    struct Data\n    {");
            indent += fu_STRING("    ");
        };
        const fu_COW_VEC<s_StructField>& fields = s.fields;
        for (int i = 0; (i < int(fields.m_size)); i++)
        {
            const s_StructField& field = fields[i];
            def += ((((indent + typeAnnot(field.type, 0)) + fu_STRING(" ")) + ID(field.id)) + fu_STRING(";"));
        };
        if ((s.flags & F_DESTRUCTOR))
        {
            def += fu_STRING("\n    };");
            def += fu_STRING("\n");
            def += fu_STRING("\n    Data data;");
            def += fu_STRING("\n    bool dtor = false;");
            def += fu_STRING("\n");
            def += ((fu_STRING("\n    ~") + t.canon) + fu_STRING("() noexcept;"));
            def += ((fu_STRING("\n    inline ") + t.canon) + fu_STRING("(Data data) noexcept : data(data) {};"));
            def += ((((fu_STRING("\n    ") + t.canon) + fu_STRING("(const ")) + t.canon) + fu_STRING("&) = delete;"));
            def += ((((fu_STRING("\n    ") + t.canon) + fu_STRING("& operator=(const ")) + t.canon) + fu_STRING("&) = delete;"));
            def += ((((fu_STRING("\n    ") + t.canon) + fu_STRING("(")) + t.canon) + fu_STRING("&&) noexcept;"));
            def += ((((fu_STRING("\n    ") + t.canon) + fu_STRING("& operator=(")) + t.canon) + fu_STRING("&&) noexcept;"));
        };
        def += fu_STRING("\n    explicit operator bool() const noexcept");
        def += fu_STRING("\n    {");
        def += fu_STRING("\n        return false");
        for (int i = 0; (i < int(fields.m_size)); i++)
            def += (fu_STRING("\n            || ") + boolWrap(fields[i].type, (((s.flags & F_DESTRUCTOR) ? fu_STRING("data.") : fu_STRING("")) + ID(fields[i].id))));

        def += fu_STRING("\n        ;");
        def += fu_STRING("\n    }");
        return (def + fu_STRING("\n};\n"));
    };
    fu_COW_STR collectDedupes(const fu_COW_MAP<fu_COW_STR, fu_COW_STR>& dedupes)
    {
        fu_COW_STR out = fu_STRING("");
        fu_COW_VEC<fu_COW_STR> keys = fu_KEYS(dedupes);
        ([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } (keys));
        for (int i = 0; (i < int(keys.m_size)); i++)
            out += dedupes[keys.mutref(i)];

        return out;
    };
    fu_COW_STR cgRoot(const s_SolvedNode& root)
    {
        fu_COW_STR src = cgStatements(root.items);
        fu_COW_STR header = ((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + _tdef) + _fdef);
        return (header + src);
    };
    fu_COW_STR ID(const fu_COW_STR& id)
    {
        if ((id == fu_STRING("this")))
            return fu_STRING("_");

        if ((id == fu_STRING("template")))
            return fu_STRING("tempatle");

        if ((id == fu_STRING("not")))
            return fu_STRING("nott");

        if ((id == fu_STRING("and")))
            return fu_STRING("andd");

        if ((id == fu_STRING("or")))
            return fu_STRING("orr");

        return id;
    };
    fu_COW_STR cgStatements(const fu_COW_VEC<s_SolvedNode>& nodes)
    {
        fu_COW_STR src = fu_STRING("");
        fu_COW_VEC<fu_COW_STR> lines = cgNodes(nodes, M_STMT);
        for (int i = 0; (i < int(lines.m_size)); i++)
        {
            const fu_COW_STR& line = lines[i];
            if (line.size())
                src += ((_indent + line) + ((last(line) == fu_STRING(";")) ? fu_STRING("\n") : fu_STRING(";")));

        };
        return src;
    };
    fu_COW_STR blockWrap(const fu_COW_VEC<s_SolvedNode>& nodes, const bool& skipCurlies)
    {
        fu_COW_STR indent0 = fu_CLONE(_indent);
        _indent += fu_STRING("    ");
        fu_COW_STR src = cgStatements(nodes);
        if ((!skipCurlies || (int(nodes.m_size) != 1) || ((nodes[0].kind != fu_STRING("return")) && (nodes[0].kind != fu_STRING("call")))))
            src = ((((indent0 + fu_STRING("{")) + src) + indent0) + fu_STRING("}"));

        _indent = indent0;
        return src;
    };
    fu_COW_STR blockWrapSubstatement(const s_SolvedNode& node)
    {
        return ((node.kind != fu_STRING("block")) ? blockWrap(fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<1> { node } }, true) : ((int(node.items.m_size) == 1) ? blockWrapSubstatement(node.items[0]) : cgBlock(node)));
    };
    fu_COW_STR cgBlock(const s_SolvedNode& block)
    {
        return blockWrap(block.items, false);
    };
    fu_COW_STR cgParens(const s_SolvedNode& node)
    {
        fu_COW_VEC<fu_COW_STR> items = cgNodes(node.items, 0);
        if (!int(items.m_size))
            return fu_STRING("(false /*empty parens*/)");

        if ((int(items.m_size) == 1))
            return items[0];

        fu_COW_STR src = fu_STRING("(");
        for (int i = 0; (i < int(items.m_size)); i++)
        {
            if (i)
                src += fu_STRING(", ");

            if ((i < (int(items.m_size) - 1)))
                src += fu_STRING("(void)");

            src += items[i];
        };
        return (src + fu_STRING(")"));
    };
    fu_COW_STR try_cgFnAsStruct(const s_SolvedNode& fn)
    {
        const s_SolvedNode& body = fn.items[(int(fn.items.m_size) + FN_BODY_BACK)];
        if ((!body || (body.kind != fu_STRING("block"))))
            return fu_STRING("");

        const fu_COW_VEC<s_SolvedNode>& items = body.items;
        bool hasClosuresInHeader = false;
        int end = 0;
        for (int i = 0; (i < int(items.m_size)); i++)
        {
            end = i;
            const s_SolvedNode& item = items[i];
            if ((item.kind == fu_STRING("fn")))
            {
                if ((item.flags & F_CLOSURE))
                    hasClosuresInHeader = true;

            }
            else if (((item.kind != fu_STRING("let")) && (item.kind != fu_STRING("struct"))))
            {
                break;
            };
        };
        if (!hasClosuresInHeader)
            return fu_STRING("");

        fu_COW_STR evalName = (fn.value + fu_STRING("_EVAL"));
        s_SolvedNode restFn = s_SolvedNode { fu_STRING("fn"), (fn.flags | F_CLOSURE), fu_CLONE(evalName), fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<2> { fn.items[(int(fn.items.m_size) - 2)], s_SolvedNode { fu_STRING("block"), int{}, fu_COW_STR{}, items.slice(end, int(items.m_size)), fu_CLONE(fn.token), fu_CLONE(t_void), s_ScopeIdx{} } } }, fu_CLONE(fn.token), fu_CLONE(t_void), s_ScopeIdx{} };
        fu_COW_VEC<s_SolvedNode> head = fu_CONCAT(fu_CONCAT(fn.items.slice(0, (int(fn.items.m_size) + FN_ARGS_BACK)), items.slice(0, end)), fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<1> { restFn } });
        ((_clsrN == 0) || fail(fu_STRING("")));
        _clsrN--;
        fu_COW_STR structName = (fu_STRING("sf_") + fn.value);
        fu_COW_STR src = ((((((((((fu_STRING("\nstruct ") + structName) + blockWrap(head, false)) + fu_STRING(";")) + fu_STRING("\n\n#define ")) + fn.value) + fu_STRING("(...) ((")) + structName) + fu_STRING(" { __VA_ARGS__ }).")) + evalName) + fu_STRING("())\n"));
        _clsrN++;
        return src;
    };
    fu_COW_STR cgFn(const s_SolvedNode& fn)
    {
        if (!int(fn.items.m_size))
        {
            fu_COW_STR src = fu_STRING("");
            const s_Template& tempatle = ([&]() -> const s_Template& { { const s_Template& _ = GET(fn.target).tempatle; if (_) return _; } fail(fu_STRING("")); }());
            const fu_COW_MAP<fu_COW_STR, s_SolvedNode>& specs = tempatle.specializations;
            fu_COW_VEC<fu_COW_STR> keys = fu_KEYS(specs);
            ([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } (keys));
            for (int i = 0; (i < int(keys.m_size)); i++)
            {
                fu_COW_STR key = fu_CLONE(keys.mutref(i));
                const s_SolvedNode& s = specs[key];
                if (s.target)
                    src += cgNode(s, 0);

            };
            return src;
        };
        if (((_faasN == 0) && (fn.flags & F_HAS_CLOSURE)))
        {
            _faasN++;
            fu_COW_STR src = try_cgFnAsStruct(fn);
            _faasN--;
            if (src.size())
            {
                _fdef += src;
                return fu_STRING("");
            };
        };
        const int f0 = fu_CLONE(_fnN);
        const int c0 = fu_CLONE(_clsrN);
        fu_COW_STR indent0 = fu_CLONE(_indent);
        _fnN++;
        if ((fn.flags & F_CLOSURE))
            _clsrN++;

        const fu_COW_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& body = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(int(items.m_size) + FN_BODY_BACK)]; if (_) return _; } fail(fu_STRING("")); }());
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(int(items.m_size) + FN_RET_BACK)]; if (_) return _; } fail(fu_STRING("")); }());
        fu_COW_STR annot = typeAnnot(([&]() -> const s_Type& { { const s_Type& _ = ret.type; if (_) return _; } fail(fu_STRING("")); }()), M_RETVAL);
        const bool closure = (!!_clsrN && (fn.flags & F_CLOSURE) && (fn.value != fu_STRING("==")));
        if (!(fn.flags & F_CLOSURE))
            _indent = fu_STRING("\n");

        fu_COW_STR src = (closure ? ((fu_STRING("const auto& ") + fn.value) + fu_STRING(" = [&](")) : (((annot + fu_STRING(" ")) + fn.value) + fu_STRING("(")));
        if ((fn.value == fu_STRING("==")))
            src = (((annot + fu_STRING(" operator")) + fn.value) + fu_STRING("("));

        for (int i = 0; (i < (int(items.m_size) + FN_ARGS_BACK)); i++)
        {
            if (i)
                src += fu_STRING(", ");

            src += binding(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STRING("")); }()), false);
        };
        src += (closure ? (fu_STRING(") -> ") + annot) : fu_STRING(")"));
        if ((!closure && (src != fu_STRING("int auto_main()")) && !(fn.flags & F_CLOSURE) && (int(_fdef.find(([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = fn.value; if (_.size()) return _; } fail(fu_STRING("")); }()))) >= 0)))
            (_ffwd.upsert(src) = ((fu_STRING("\n") + src) + fu_STRING(";")));

        if ((body.kind == fu_STRING("block")))
            src += cgBlock(body);
        else
            src += blockWrap(fu_COW_VEC<s_SolvedNode> { fu_COW_VEC<s_SolvedNode>::INIT<1> { body } }, false);

        _fnN = f0;
        _clsrN = c0;
        _indent = indent0;
        if ((fn.flags & F_DESTRUCTOR))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[0]; if (_) return _; } fail(fu_STRING("")); }());
            const fu_COW_STR& name = head.type.canon;
            src += ((((fu_STRING("\n\n") + name) + fu_STRING("::~")) + name) + fu_STRING("() noexcept"));
            src += fu_STRING("\n{");
            src += fu_STRING("\n    if (!dtor)");
            src += fu_STRING("\n    {");
            src += fu_STRING("\n        dtor = true;");
            src += fu_STRING("\n        free(*this);");
            src += fu_STRING("\n    }");
            src += fu_STRING("\n}");
            include(fu_STRING("<cassert>"));
            include(fu_STRING("<utility>"));
            src += ((((((fu_STRING("\n\n") + name) + fu_STRING("::")) + name) + fu_STRING("(")) + name) + fu_STRING("&& src) noexcept"));
            src += fu_STRING("\n    : data(std::move(src.data))");
            src += fu_STRING("\n{");
            src += fu_STRING("\n    assert(!src.dtor);");
            src += fu_STRING("\n    dtor = src.dtor;");
            src += fu_STRING("\n    src.dtor = true;");
            src += fu_STRING("\n}");
            include(fu_STRING("<cstring>"));
            src += ((((((fu_STRING("\n\n") + name) + fu_STRING("& ")) + name) + fu_STRING("::operator=(")) + name) + fu_STRING("&& src) noexcept"));
            src += fu_STRING("\n{");
            src += fu_STRING("\n    if (&src != this)");
            src += fu_STRING("\n    {");
            src += ((fu_STRING("\n        char temp[sizeof(") + name) + fu_STRING(")];"));
            src += ((fu_STRING("\n        std::memcpy(temp, this, sizeof(") + name) + fu_STRING("));"));
            src += ((fu_STRING("\n        std::memcpy(this, &src, sizeof(") + name) + fu_STRING("));"));
            src += ((fu_STRING("\n        std::memcpy(&src, temp, sizeof(") + name) + fu_STRING("));"));
            src += fu_STRING("\n    }");
            src += fu_STRING("\n");
            src += fu_STRING("\n    return *this;");
            src += fu_STRING("\n}");
        };
        if ((fn.flags & F_CLOSURE))
            return src;

        _fdef += ((fu_STRING("\n") + src) + fu_STRING("\n"));
        return fu_STRING("");
    };
    fu_COW_STR binding(const s_SolvedNode& node, const bool& doInit)
    {
        const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("")); }());
        fu_COW_STR annot = typeAnnot(node.type, ((((node.flags & F_MUT) == 0) ? fu_CLONE(M_CONST) : 0) | (((node.flags & F_ARG) == 0) ? 0 : fu_CLONE(M_ARGUMENT))));
        fu_COW_STR head = ((([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = annot; if (_.size()) return _; } fail(fu_STRING("")); }()) + fu_STRING(" ")) + ID(id));
        s_SolvedNode init = (node.items ? fu_CLONE(node.items[LET_INIT]) : s_SolvedNode { fu_COW_STR{}, int{}, fu_COW_STR{}, fu_COW_VEC<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        if ((!doInit || (node.flags & F_ARG)))
            return head;

        if (init)
            return ((head + fu_STRING(" = ")) + cgNode(init, 0));

        return (head + fu_STRING(" {}"));
    };
    fu_COW_STR cgLet(const s_SolvedNode& node)
    {
        fu_COW_STR src = binding(node, true);
        if ((_fnN || _faasN))
            return src;

        src = fu_JOIN(fu_SPLIT(src, fu_STRING("([&](")), fu_STRING("([]("));
        if (src.starts_with(fu_STRING("const ")))
            src = src.slice(6);

        _fdef += (src = ((fu_STRING("inline const ") + src) + fu_STRING(";\n")));
        return fu_STRING("");
    };
    fu_COW_STR cgReturn(const s_SolvedNode& node)
    {
        if (node.items)
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }());
            fu_COW_STR src = cgNode(head, 0);
            if ((head.type == t_never))
                return src;

            return (fu_STRING("return ") + src);
        };
        return fu_STRING("return");
    };
    fu_COW_STR cgJump(const s_SolvedNode& node)
    {
        if (node.value.size())
            return (((fu_STRING("goto L_") + node.value) + fu_STRING("_")) + fu_STRING(node.kind[0]));

        return node.kind;
    };
    fu_COW_STR cgStringLiteral(const s_SolvedNode& node)
    {
        annotateString();
        fu_COW_STR esc = fu_STRING("");
        for (int i = 0; (i < int(node.value.size())); i++)
        {
            fu_COW_STR c = fu_STRING(node.value[i]);
            if ((c == fu_STRING("\n")))
                esc += fu_STRING("\\n");
            else if ((c == fu_STRING("\r")))
                esc += fu_STRING("\\r");
            else if ((c == fu_STRING("\t")))
                esc += fu_STRING("\\t");
            else if ((c == fu_STRING("\v")))
                esc += fu_STRING("\\v");
            else if ((c == fu_STRING("\\")))
                esc += fu_STRING("\\\\");
            else if ((c == fu_STRING("\"")))
                esc += fu_STRING("\\\"");
            else
                esc += c;

        };
        return ((fu_STRING("fu_STRING(\"") + esc) + fu_STRING("\")"));
    };
    fu_COW_STR cgArrayLiteral(const s_SolvedNode& node)
    {
        fu_COW_VEC<fu_COW_STR> items = cgNodes(node.items, 0);
        if (!int(items.m_size))
            return cgDefault(node.type);

        s_Type itemType = ([&]() -> s_Type { { s_Type _ = tryClear_array(node.type, ctx); if (_) return _; } fail(fu_STRING("")); }());
        fu_COW_STR itemAnnot = typeAnnot(itemType, 0);
        fu_COW_STR arrayAnnot = typeAnnot(node.type, 0);
        return (((((((arrayAnnot + fu_STRING(" { ")) + arrayAnnot) + fu_STRING("::INIT<")) + int(items.m_size)) + fu_STRING("> { ")) + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(" } }"));
    };
    fu_COW_STR cgDefaultInit(const s_SolvedNode& node)
    {
        return cgArrayLiteral(node);
    };
    bool hasNonIdentifierChars(const fu_COW_STR& id)
    {
        for (int i = 0; (i < int(id.size())); i++)
        {
            fu_COW_STR c = fu_STRING(id[i]);
            if (((c == fu_STRING("_")) || ((c >= fu_STRING("a")) && (c <= fu_STRING("z"))) || ((c >= fu_STRING("A")) && (c <= fu_STRING("Z"))) || ((c >= fu_STRING("0")) && (c <= fu_STRING("9")))))
            {
            }
            else
                return true;

        };
        return false;
    };
    fu_COW_STR cgCall(const s_SolvedNode& node, const int& mode)
    {
        const s_Overload& target = ([&]() -> const s_Overload& { { const s_Overload& _ = GET(node.target); if (_) return _; } fail(fu_STRING("")); }());
        fu_COW_VEC<fu_COW_STR> items = cgNodes(node.items, 0);
        if ((target.kind == fu_STRING("defctor")))
        {
            const fu_COW_STR& head = ([&]() -> const s_Type& { { const s_Type& _ = target.type; if (_) return _; } fail(fu_STRING("")); }()).canon;
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(head, ctx); if (_) return _; } fail(fu_STRING("")); }());
            fu_COW_STR open = fu_STRING(" { ");
            fu_COW_STR close = fu_STRING(" }");
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((fu_STRING(" { ") + head) + fu_STRING("::Data { "));
                close = fu_STRING(" }}");
            };
            return (((head + open) + fu_JOIN(items, fu_STRING(", "))) + close);
        };
        const fu_COW_STR& id = ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = target.name; if (_.size()) return _; } fail(fu_STRING("")); }());
        if (hasNonIdentifierChars(id))
        {
            const fu_COW_VEC<s_SolvedNode>& nodes = ([&]() -> const fu_COW_VEC<s_SolvedNode>& { { const fu_COW_VEC<s_SolvedNode>& _ = node.items; if (_) return _; } fail(fu_STRING("")); }());
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nodes[0]; if (_) return _; } fail(fu_STRING("")); }());
            if ((int(items.m_size) == 1))
                return ((node.flags & F_POSTFIX) ? (items[0] + id) : (id + items[0]));

            if ((int(items.m_size) == 2))
            {
                if ((id == fu_STRING("[]")))
                {
                    if ((head.type.canon == fu_STRING("string")))
                        return ((((fu_STRING("fu_STRING(") + items[0]) + fu_STRING("[")) + items[1]) + fu_STRING("])"));

                    if ((head.type.quals & q_mutref))
                        return (((items[0] + fu_STRING(".mutref(")) + items[1]) + fu_STRING(")"));

                    return (((items[0] + fu_STRING("[")) + items[1]) + fu_STRING("]"));
                };
                if ((id == fu_STRING("=")))
                {
                    if (((head.kind == fu_STRING("call")) && (head.value == fu_STRING("[]")) && (int(head.items.m_size) == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STRING("")); }()).type))
                            return ((((((fu_STRING("(") + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STRING("")); }()), 0)) + fu_STRING(".upsert(")) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(fu_STRING("")); }()), 0)) + fu_STRING(") = ")) + items[1]) + fu_STRING(")"));

                    };
                };
                if ((id == fu_STRING("||=")))
                {
                    fu_COW_STR left = fu_CLONE(items[0]);
                    fu_COW_STR right = fu_CLONE(items[1]);
                    if (((head.kind == fu_STRING("call")) && (head.value == fu_STRING("[]")) && (int(head.items.m_size) == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STRING("")); }()).type))
                            left = (((cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STRING("")); }()), 0) + fu_STRING(".upsert(")) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(fu_STRING("")); }()), 0)) + fu_STRING(")"));

                    };
                    fu_COW_STR annot = typeAnnot(head.type, 0);
                    return ((((((((((fu_STRING("([&](") + annot) + fu_STRING(" _) -> ")) + annot) + fu_STRING(" { if (!")) + boolWrap(head.type, fu_STRING("_"))) + fu_STRING(") _ = ")) + right) + fu_STRING("; return _; } (")) + left) + fu_STRING("))"));
                };
                if ((mode & M_STMT))
                    return ((((items[0] + fu_STRING(" ")) + id) + fu_STRING(" ")) + items[1]);
                else
                    return ((((((fu_STRING("(") + items[0]) + fu_STRING(" ")) + id) + fu_STRING(" ")) + items[1]) + fu_STRING(")"));

            };
        };
        if ((target.kind == fu_STRING("var")))
            return ID(id);

        if ((target.kind == fu_STRING("field")))
        {
            fu_COW_STR sep = fu_STRING(".");
            const s_Struct& parent = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }()).type.canon, ctx); if (_) return _; } fail(fu_STRING("")); }());
            if ((parent.flags & F_DESTRUCTOR))
                sep = fu_STRING(".data.");

            return ((items[0] + sep) + ID(id));
        };
        if (((id == fu_STRING("len")) && (int(items.m_size) == 1)))
        {
            if (type_isArray(node.items[0].type))
                return ((fu_STRING("int(") + items[0]) + fu_STRING(".m_size)"));

            return ((fu_STRING("int(") + items[0]) + fu_STRING(".size())"));
        };
        if (((id == fu_STRING("push")) && (int(items.m_size) == 2)))
            return (((items[0] + fu_STRING(".push(")) + items[1]) + fu_STRING(")"));

        if (((id == fu_STRING("pop")) && (int(items.m_size) == 1)))
            return (items[0] + fu_STRING(".pop()"));

        if (((id == fu_STRING("unshift")) && (int(items.m_size) == 2)))
            return (((items[0] + fu_STRING(".unshift(")) + items[1]) + fu_STRING(")"));

        if (((id == fu_STRING("insert")) && (int(items.m_size) == 3)))
            return (((((items[0] + fu_STRING(".insert(")) + items[1]) + fu_STRING(", ")) + items[2]) + fu_STRING(")"));

        if (((id == fu_STRING("splice")) && (int(items.m_size) == 3)))
            return (((((items[0] + fu_STRING(".splice(")) + items[1]) + fu_STRING(", ")) + items[2]) + fu_STRING(")"));

        if (((id == fu_STRING("grow")) && (int(items.m_size) == 2)))
            return (((items[0] + fu_STRING(".grow(")) + items[1]) + fu_STRING(")"));

        if (((id == fu_STRING("shrink")) && (int(items.m_size) == 2)))
            return (((items[0] + fu_STRING(".shrink(")) + items[1]) + fu_STRING(")"));

        if (((id == fu_STRING("resize")) && (int(items.m_size) == 2)))
            return (((items[0] + fu_STRING(".resize(")) + items[1]) + fu_STRING(")"));

        if (((id == fu_STRING("clear")) && (int(items.m_size) == 1)))
            return (items[0] + fu_STRING(".clear()"));

        if (((id == fu_STRING("find")) && (int(items.m_size) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }());
            if ((head.type.canon == fu_STRING("string")))
                return ((((fu_STRING("int(") + items[0]) + fu_STRING(".find(")) + items[1]) + fu_STRING("))"));

            include(fu_STRING("<algorithm>"));
            return (((items[0] + fu_STRING(".find(")) + items[1]) + fu_STRING(")"));
        };
        if (((id == fu_STRING("starts")) && (int(items.m_size) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }());
            if ((head.type.canon == fu_STRING("string")))
                return (((items[0] + fu_STRING(".starts_with(")) + items[1]) + fu_STRING(")"));

        };
        if (((id == fu_STRING("has")) && (int(items.m_size) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }());
            if ((head.type.canon == fu_STRING("string")))
                return ((((fu_STRING("(int(") + items[0]) + fu_STRING(".find(")) + items[1]) + fu_STRING(")) >= 0)"));

            return ((((fu_STRING("(") + items[0]) + fu_STRING(".find(")) + items[1]) + fu_STRING(") != -1)"));
        };
        if (((id == fu_STRING("slice")) && (int(items.m_size) == 2)))
            return (((items[0] + fu_STRING(".slice(")) + items[1]) + fu_STRING(")"));

        if (((id == fu_STRING("slice")) && (int(items.m_size) == 3)))
            return (((((items[0] + fu_STRING(".slice(")) + items[1]) + fu_STRING(", ")) + items[2]) + fu_STRING(")"));

        if (((id == fu_STRING("substr")) && (int(items.m_size) == 3)))
            return (((((items[0] + fu_STRING(".substr(")) + items[1]) + fu_STRING(", ")) + items[2]) + fu_STRING(")"));

        if (((id == fu_STRING("sort")) && (int(items.m_size) == 1)))
        {
            include(fu_STRING("<algorithm>"));
            return ((fu_STRING("([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } (") + items[0]) + fu_STRING("))"));
        };
        if (((id == fu_STRING("char")) && (int(items.m_size) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }());
            if ((head.type.canon == fu_STRING("string")))
                return ((((fu_STRING("int(") + items[0]) + fu_STRING("[")) + items[1]) + fu_STRING("])"));

        };
        if ((((id == fu_STRING("true")) || (id == fu_STRING("false"))) && !int(items.m_size)))
            return id;

        if (((id == fu_STRING("throw")) && (int(items.m_size) == 1)))
            return cgThrow(id, items[0]);

        if (((id == fu_STRING("assert")) && (int(items.m_size) == 0)))
            return cgThrow(id, fu_STRING("\"Assertion failed.\""));

        if (((id == fu_STRING("move")) && (int(items.m_size) == 3)))
            return ((((fu_STRING("([&]() { auto* _ = ") + items[0]) + fu_STRING(".data(); ")) + cgSlide((fu_STRING("_ + ") + items[2]), (fu_STRING("_ + ") + items[1]), fu_STRING("sizeof(*_)"))) + fu_STRING("; } ())"));

        if (((id == fu_STRING("concat")) && (int(items.m_size) == 2)))
            return cgConcat(items);

        if (((id == fu_STRING("split")) && (int(items.m_size) == 2)))
            return cgSplit(items);

        if (((id == fu_STRING("join")) && (int(items.m_size) == 2)))
            return cgJoin(items);

        if (((id == fu_STRING("join")) && (int(items.m_size) == 2)))
            return cgJoin(items);

        if (((id == fu_STRING("keys")) && (int(items.m_size) == 1)))
            return cgKeys(items);

        if (((id == fu_STRING("CLONE")) && (int(items.m_size) == 1)))
            return cgClone(items[0]);

        if (((id == fu_STRING("STEAL")) && (int(items.m_size) == 1)))
            return cgSteal(items[0]);

        if (((id == fu_STRING("SWAP")) && (int(items.m_size) == 2)))
            return cgSwap(items);

        if ((id == fu_STRING("print")))
            return cgPrint(items);

        return (((ID(id) + fu_STRING("(")) + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(")"));
    };
    fu_COW_STR cgPrint(const fu_COW_VEC<fu_COW_STR>& items)
    {
        include(fu_STRING("<iostream>"));
        fu_COW_STR src = fu_STRING("(std::cout");
        for (int i = 0; (i < int(items.m_size)); i++)
            src += (fu_STRING(" << ") + items[i]);

        src += fu_STRING(" << std::endl)");
        return src;
    };
    fu_COW_STR cgSlide(const fu_COW_STR& destExpr, const fu_COW_STR& srcExpr, const fu_COW_STR& numBytesExpr)
    {
        fu_COW_STR SLIDE = fu_STRING("::slide");
        if (!(_tfwd.find(SLIDE) != -1))
        {
            include(fu_STRING("<cstring>"));
            (_tfwd.upsert(SLIDE) = fu_STRING("\ntemplate <size_t N>\ninline void fu_MEMSLIDE(void* dest, void* source)\n{\n    char swap_buffer[N];\n\n    std::memcpy(\n        swap_buffer, source, N);\n\n    if (source < dest)\n        std::memmove(\n            source, (char*)source + N,\n            (char*)dest - (char*)source);\n    else\n        std::memmove(\n            (char*)dest + N, dest,\n            (char*)source - (char*)dest);\n\n    std::memcpy(\n        dest, swap_buffer, N);\n}\n"));
        };
        return ((((((fu_STRING("fu_MEMSLIDE<") + numBytesExpr) + fu_STRING(">(")) + destExpr) + fu_STRING(", ")) + srcExpr) + fu_STRING(")"));
    };
    void annotateMap()
    {
        include(fu_STRING("\"../lib/cow_vec.h\""));
    };
    void annotateVector()
    {
        include(fu_STRING("\"../lib/cow_vec.h\""));
    };
    fu_COW_STR annotateString()
    {
        include(fu_STRING("\"../lib/cow_vec.h\""));
        return fu_STRING("fu_COW_STR");
    };
    fu_COW_STR annotateNever()
    {
        fu_COW_STR NEVER = fu_STRING("::NEVER");
        if (!(_tfwd.find(NEVER) != -1))
        {
            include(fu_STRING("<stdexcept>"));
            (_tfwd.upsert(NEVER) = fu_STRING("\nstruct fu_NEVER\n{\n    fu_NEVER(const fu_NEVER&) = delete;\n    void operator=(const fu_NEVER&) = delete;\n\n    template<typename T>\n    [[noreturn]] operator T() const\n    {\n        throw std::runtime_error(\"fu_NEVER cast\");\n    }\n};\n"));
        };
        return fu_STRING("fu_NEVER");
    };
    fu_COW_STR cgThrow(const fu_COW_STR& kind, const fu_COW_STR& item)
    {
        fu_COW_STR THROW = fu_STRING("::THROW");
        if (!(_ffwd.find(THROW) != -1))
        {
            annotateNever();
            include(fu_STRING("<stdexcept>"));
            include(fu_STRING("<string>"));
            (_ffwd.upsert(THROW) = fu_STRING("\n[[noreturn]] fu_NEVER fu_THROW(const char* what)\n{\n    throw std::runtime_error(what);\n}\n\ntemplate <typename T>\n[[noreturn]] fu_NEVER fu_THROW(const T& what)\n{\n    throw std::runtime_error(\n        std::string(\n            what.m_data, size_t(what.m_size)));\n}\n"));
        };
        if ((kind == fu_STRING("assert")))
        {
        };
        return ((fu_STRING("fu_THROW(") + item) + fu_STRING(")"));
    };
    fu_COW_STR cgConcat(const fu_COW_VEC<fu_COW_STR>& items)
    {
        fu_COW_STR CONCAT = fu_STRING("::CONCAT");
        if (!(_ffwd.find(CONCAT) != -1))
        {
            annotateVector();
            (_ffwd.upsert(CONCAT) = fu_STRING("\ntemplate <typename T>\nfu_COW_VEC<T> fu_CONCAT(\n    const fu_COW_VEC<T>& a,\n    const fu_COW_VEC<T>& b)\n{\n    fu_COW_VEC<T> result;\n    result.reserve(a.size() + b.size());\n\n    for (const auto& i : a) result.push(i);\n    for (const auto& i : b) result.push(i);\n\n    return result;\n}\n"));
        };
        return ((fu_STRING("fu_CONCAT(") + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(")"));
    };
    fu_COW_STR cgJoin(const fu_COW_VEC<fu_COW_STR>& items)
    {
        fu_COW_STR JOIN = fu_STRING("::JOIN");
        if (!(_ffwd.find(JOIN) != -1))
        {
            annotateString();
            annotateVector();
            (_ffwd.upsert(JOIN) = fu_STRING("\ninline fu_COW_STR fu_JOIN(\n    const fu_COW_VEC<fu_COW_STR>& vec,\n    const fu_COW_STR& sep)\n{\n    size_t len = 0;\n    for (size_t i = 0; i < vec.size(); i++)\n    {\n        if (i)\n            len += sep.size();\n\n        len += vec[i].size();\n    }\n\n    fu_COW_STR result;\n    result.reserve(len);\n    for (size_t i = 0; i < vec.size(); i++)\n    {\n        if (i)\n            result += sep;\n\n        result += vec[i];\n    }\n\n    return result;\n}\n"));
        };
        return ((fu_STRING("fu_JOIN(") + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(")"));
    };
    fu_COW_STR cgSplit(const fu_COW_VEC<fu_COW_STR>& items)
    {
        fu_COW_STR SPLIT = fu_STRING("::SPLIT");
        if (!(_ffwd.find(SPLIT) != -1))
        {
            annotateString();
            annotateVector();
            (_ffwd.upsert(SPLIT) = fu_STRING("\ninline fu_COW_VEC<fu_COW_STR> fu_SPLIT(\n    fu_COW_STR s,\n    const fu_COW_STR& sep)\n{\n    fu_COW_VEC<fu_COW_STR> result;\n\n    size_t next;\n    while (int(next = s.find(sep)) >= 0)\n    {\n        result.push(s.slice(0, next));\n        s = s.slice(next + sep.size());\n    }\n\n    result.push(static_cast<fu_COW_STR&&>(s));\n    return result;\n}\n"));
        };
        return ((fu_STRING("fu_SPLIT(") + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(")"));
    };
    fu_COW_STR cgKeys(const fu_COW_VEC<fu_COW_STR>& items)
    {
        fu_COW_STR KEYS = fu_STRING("::KEYS");
        if (!(_ffwd.find(KEYS) != -1))
        {
            annotateMap();
            annotateVector();
            (_ffwd.upsert(KEYS) = fu_STRING("\ntemplate <typename K, typename V>\nfu_COW_VEC<K> fu_KEYS(\n    const fu_COW_MAP<K, V>& map)\n{\n    return map.m_keys;\n}\n"));
        };
        return ((fu_STRING("fu_KEYS(") + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(")"));
    };
    fu_COW_STR cgLiteral(const s_SolvedNode& node)
    {
        return ([&]() -> const fu_COW_STR& { { const fu_COW_STR& _ = node.value; if (_.size()) return _; } fail(fu_STRING("")); }());
    };
    fu_COW_STR cgEmpty()
    {
        return fu_STRING("");
    };
    fu_COW_STR cgIf(const s_SolvedNode& node, const int& mode)
    {
        const s_SolvedNode& n0 = node.items[0];
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & M_STMT);
        const auto& blockWrap_unlessIf = [&](const s_SolvedNode& node) -> fu_COW_STR
        {
            return ((node.kind == fu_STRING("if")) ? (fu_STRING(" ") + cgNode(node, M_STMT)) : blockWrapSubstatement(node));
        };
        fu_COW_STR cond = ([&]() -> fu_COW_STR { if (n0) return boolWrap(n0.type, cgNode(n0, M_RETBOOL)); else return fu_COW_STR{}; }());
        fu_COW_STR cons = ([&]() -> fu_COW_STR { if (n1) return (stmt ? blockWrapSubstatement(n1) : cgNode(n1, 0)); else return fu_COW_STR{}; }());
        fu_COW_STR alt = ([&]() -> fu_COW_STR { if (n2) return (stmt ? blockWrap_unlessIf(n2) : cgNode(n2, 0)); else return fu_COW_STR{}; }());
        if (stmt)
            return ((((fu_STRING("if (") + cond) + fu_STRING(")")) + cons) + (alt.size() ? ((_indent + fu_STRING("else")) + alt) : fu_STRING("")));

        if ((cons.size() && alt.size()))
            return ((((((fu_STRING("(") + cond) + fu_STRING(" ? ")) + cons) + fu_STRING(" : ")) + alt) + fu_STRING(")"));

        if (cons.size())
            return ((((fu_STRING("(") + cond) + fu_STRING(" && ")) + cons) + fu_STRING(")"));

        if (alt.size())
            return ((((fu_STRING("(") + cond) + fu_STRING(" || ")) + alt) + fu_STRING(")"));

        fail(fu_STRING("TODO"));
    };
    fu_COW_STR boolWrap(const s_Type& type, const fu_COW_STR& src)
    {
        if (type_isString(type))
            return (src + fu_STRING(".size()"));

        return src;
    };
    fu_COW_STR cgDefault(const s_Type& type)
    {
        if (((type.quals & q_ref) && !(type.quals & q_mutref)))
        {
            fu_COW_STR DEFAULT = fu_STRING("::DEFAULT");
            if (!(_ffwd.find(DEFAULT) != -1))
                (_ffwd.upsert(DEFAULT) = fu_STRING("\ntemplate <typename T>\nstruct fu_DEFAULT { static inline const T value {}; };\n"));

            return ((fu_STRING("fu_DEFAULT<") + typeAnnot(clear_refs(type), 0)) + fu_STRING(">::value"));
        };
        return (typeAnnot(type, 0) + fu_STRING("{}"));
    };
    fu_COW_STR cgAnd(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            const fu_COW_VEC<s_SolvedNode>& items = node.items;
            const bool retSecondLast = (items[(int(items.m_size) - 1)].type == t_never);
            const int condEnd = (retSecondLast ? (int(items.m_size) - 2) : (int(items.m_size) - 1));
            fu_COW_STR src = fu_STRING("");
            if (condEnd)
            {
                src += fu_STRING("if (");
                for (int i = 0; (i < condEnd); i++)
                {
                    const s_SolvedNode& item = items[i];
                    if (i)
                        src += fu_STRING(" && ");

                    src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                };
                src += fu_STRING(") ");
            };
            fu_COW_STR tail = cgNode(items[condEnd], 0);
            if (retSecondLast)
            {
                src += ((((fu_STRING("{ ") + typeAnnot(type, 0)) + fu_STRING(" _ = ")) + tail) + fu_STRING("; "));
                src += ((fu_STRING("if (!") + boolWrap(type, fu_STRING("_"))) + fu_STRING(") return _; } "));
                src += (cgNode(items[(int(items.m_size) - 1)], 0) + fu_STRING(";"));
            }
            else
            {
                src += ((fu_STRING("return ") + tail) + fu_STRING(";"));
                src += ((fu_STRING(" else return ") + cgDefault(type)) + fu_STRING(";"));
            };
            src = ((((fu_STRING("([&]() -> ") + typeAnnot(type, 0)) + fu_STRING(" { ")) + src) + fu_STRING(" }())"));
            return src;
        };
        fu_COW_STR src = fu_STRING("(");
        const fu_COW_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < int(items.m_size)); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                src += fu_STRING(" && ");

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + fu_STRING(")"));
    };
    fu_COW_STR cgNot(const s_SolvedNode& node)
    {
        const s_SolvedNode& item = node.items[0];
        return (fu_STRING("!") + boolWrap(item.type, cgNode(item, M_RETBOOL)));
    };
    fu_COW_STR cgOr(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            fu_COW_STR annot = typeAnnot(type, 0);
            fu_COW_STR src = ((fu_STRING("([&]() -> ") + annot) + fu_STRING(" {"));
            const fu_COW_VEC<s_SolvedNode>& items = node.items;
            for (int i = 0; (i < (int(items.m_size) - 1)); i++)
            {
                const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STRING("")); }());
                s_SolvedNode tail = fu_CLONE(item);
                if ((item.kind == fu_STRING("and")))
                {
                    const fu_COW_VEC<s_SolvedNode>& items = item.items;
                    tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(int(items.m_size) - 1)]; if (_) return _; } fail(fu_STRING("")); }());
                    src += fu_STRING(" if (");
                    for (int i = 0; (i < (int(items.m_size) - 1)); i++)
                    {
                        if (i)
                            src += fu_STRING(" && ");

                        const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STRING("")); }());
                        src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                    };
                    src += fu_STRING(")");
                };
                src += ((((((fu_STRING(" { ") + annot) + fu_STRING(" _ = ")) + cgNode(tail, 0)) + fu_STRING("; if (")) + boolWrap(tail.type, fu_STRING("_"))) + fu_STRING(") return _; }"));
            };
            const s_SolvedNode& tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(int(items.m_size) - 1)]; if (_) return _; } fail(fu_STRING("")); }());
            if (!(tail.type == t_never))
                src += fu_STRING(" return");

            src += ((fu_STRING(" ") + cgNode(tail, 0)) + fu_STRING("; }())"));
            return src;
        };
        fu_COW_STR src = fu_STRING("(");
        const fu_COW_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < int(items.m_size)); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                src += fu_STRING(" || ");

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + fu_STRING(")"));
    };
    fu_COW_STR postfixBlock(const fu_COW_STR& src, const fu_COW_STR& postfix)
    {
        ((fu_STRING(src[(int(src.size()) - 1)]) == fu_STRING("}")) || fail(fu_STRING("")));
        return ((src.slice(0, (int(src.size()) - 1)) + postfix) + fu_STRING("}"));
    };
    fu_COW_STR cgLoop(const s_SolvedNode& node)
    {
        const fu_COW_VEC<s_SolvedNode>& items = node.items;
        const s_SolvedNode& n_init = items[LOOP_INIT];
        const s_SolvedNode& n_cond = items[LOOP_COND];
        const s_SolvedNode& n_post = items[LOOP_POST];
        const s_SolvedNode& n_body = items[LOOP_BODY];
        const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
        fu_COW_STR init = ([&]() -> fu_COW_STR { if (n_init) return cgNode(n_init, 0); else return fu_COW_STR{}; }());
        fu_COW_STR cond = ([&]() -> fu_COW_STR { if (n_cond) return boolWrap(n_cond.type, cgNode(n_cond, M_RETBOOL)); else return fu_COW_STR{}; }());
        fu_COW_STR post = ([&]() -> fu_COW_STR { if (n_post) return cgNode(n_post, 0); else return fu_COW_STR{}; }());
        fu_COW_STR body = ([&]() -> fu_COW_STR { if (n_body) return blockWrapSubstatement(n_body); else return fu_COW_STR{}; }());
        fu_COW_STR pcnd = ([&]() -> fu_COW_STR { if (n_pcnd) return boolWrap(n_pcnd.type, cgNode(n_pcnd, M_RETBOOL)); else return fu_COW_STR{}; }());
        fu_COW_STR breakLabel = fu_STRING("");
        if ((body.size() && node.value.size()))
        {
            fu_COW_STR brk = ((fu_STRING("L_") + node.value) + fu_STRING("_b"));
            fu_COW_STR cnt = ((fu_STRING("L_") + node.value) + fu_STRING("_c"));
            if ((int(body.find(cnt)) >= 0))
                body = (fu_STRING("{") + postfixBlock(body, (((_indent + fu_STRING("    }")) + cnt) + fu_STRING(":;"))));

            if ((int(body.find(brk)) >= 0))
                breakLabel = (((_indent + fu_STRING("    ")) + brk) + fu_STRING(":;"));

        };
        if (pcnd.size())
        {
            if ((init.size() || post.size() || cond.size()))
                fail(fu_STRING("TODO extended loop."));

            return ((((((fu_STRING("do") + body) + _indent) + fu_STRING("while (")) + pcnd) + fu_STRING(")")) + breakLabel);
        };
        if ((init.size() || post.size() || !cond.size()))
            return ((((((((fu_STRING("for (") + init) + fu_STRING("; ")) + cond) + fu_STRING("; ")) + post) + fu_STRING(")")) + body) + breakLabel);

        return ((((fu_STRING("while (") + cond) + fu_STRING(")")) + body) + breakLabel);
    };
    fu_COW_STR cgNode(const s_SolvedNode& node, const int& mode)
    {
        const fu_COW_STR& k = node.kind;
        if ((k == fu_STRING("root")))
            return cgRoot(node);

        if ((k == fu_STRING("block")))
            return cgBlock(node);

        if ((k == fu_STRING("fn")))
            return cgFn(node);

        if ((k == fu_STRING("return")))
            return cgReturn(node);

        if ((k == fu_STRING("break")))
            return cgJump(node);

        if ((k == fu_STRING("continue")))
            return cgJump(node);

        if ((k == fu_STRING("call")))
            return cgCall(node, mode);

        if ((k == fu_STRING("let")))
            return cgLet(node);

        if ((k == fu_STRING("if")))
            return cgIf(node, mode);

        if ((k == fu_STRING("!")))
            return cgNot(node);

        if ((k == fu_STRING("or")))
            return cgOr(node);

        if ((k == fu_STRING("and")))
            return cgAnd(node);

        if ((k == fu_STRING("loop")))
            return cgLoop(node);

        if ((k == fu_STRING("int")))
            return cgLiteral(node);

        if ((k == fu_STRING("str")))
            return cgStringLiteral(node);

        if ((k == fu_STRING("arrlit")))
            return cgArrayLiteral(node);

        if ((k == fu_STRING("definit")))
            return cgDefaultInit(node);

        if ((k == fu_STRING("empty")))
            return cgEmpty();

        if ((k == fu_STRING("comma")))
            return cgParens(node);

        if ((k == fu_STRING("parens")))
            return cgParens(node);

        if ((k == fu_STRING("label")))
            return cgParens(node);

        if ((k == fu_STRING("struct")))
            return cgEmpty();

        if ((k == fu_STRING("copy")))
            return cgCopyMove(node);

        if ((k == fu_STRING("move")))
            return cgCopyMove(node);

        fail((fu_STRING("TODO: ") + k));
    };
    fu_COW_STR cgCopyMove(const s_SolvedNode& node)
    {
        fu_COW_STR a = cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STRING("")); }()), 0);
        if ((node.kind == fu_STRING("move")))
            return cgSteal(a);

        return cgClone(a);
    };
    fu_COW_STR cgSteal(const fu_COW_STR& src)
    {
        include(fu_STRING("<utility>"));
        return ((fu_STRING("std::move(") + src) + fu_STRING(")"));
    };
    fu_COW_STR cgSwap(const fu_COW_VEC<fu_COW_STR>& items)
    {
        include(fu_STRING("<utility>"));
        return ((fu_STRING("std::swap(") + fu_JOIN(items, fu_STRING(", "))) + fu_STRING(")"));
    };
    fu_COW_STR cgClone(const fu_COW_STR& src)
    {
        fu_COW_STR CLONE = fu_STRING("::CLONE");
        if (!(_ffwd.find(CLONE) != -1))
            (_ffwd.upsert(CLONE) = fu_STRING("\ntemplate <typename T>\ninline T fu_CLONE(const T& source)\n{\n    return source;\n}\n"));

        return ((fu_STRING("fu_CLONE(") + src) + fu_STRING(")"));
    };
    fu_COW_VEC<fu_COW_STR> cgNodes(const fu_COW_VEC<s_SolvedNode>& nodes, const int& mode)
    {
        fu_COW_VEC<fu_COW_STR> result = fu_COW_VEC<fu_COW_STR>{};
        for (int i = 0; (i < int(nodes.m_size)); i++)
        {
            const s_SolvedNode& node = nodes[i];
            fu_COW_STR src = (node ? cgNode(node, mode) : fu_STRING(""));
            result.push(src);
        };
        return result;
    };
    fu_COW_STR cpp_codegen_EVAL()
    {
        ((root.kind == fu_STRING("root")) || fail(fu_STRING("")));
        fu_COW_STR src = cgNode(root, 0);
        return src;
    };
};

#define cpp_codegen(...) ((sf_cpp_codegen { __VA_ARGS__ }).cpp_codegen_EVAL())

fu_COW_STR compile(const fu_COW_STR& fname, const fu_COW_STR& src, s_TEMP_Context& ctx)
{
    s_LexResult res_lex = lex(src, fname);
    s_Node res_parse = parse(fname, res_lex.tokens);
    s_SolveResult res_solve = solve(res_parse, ctx);
    fu_COW_STR cpp = cpp_codegen(res_solve.root, res_solve.scope, ctx);
    return cpp;
}

fu_COW_STR compile_testcase(fu_COW_STR&& src)
{
    fu_COW_STR fname = fu_STRING("testcase");
    if (!(int(src.find(fu_STRING("fn ZERO()"))) >= 0))
        src = ((fu_STRING("\n\nfn ZERO(): i32 {\n") + src) + fu_STRING("\n}\n"));

    src += fu_STRING("\nfn main(): i32 ZERO();\n\n");
    s_TEMP_Context ctx {};
    return compile(fname, src, ctx);
}
inline const fu_COW_STR TEST_SRC = fu_STRING("\n\n    fn test(one: i32)\n    {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn ZERO(): i32\n    {\n        return test(1) - 17;\n    }\n\n");

int ZERO()
{
    fu_COW_STR cpp = compile_testcase(fu_CLONE(TEST_SRC));
    return (int(cpp.find(fu_STRING("main()"))) ? 0 : 101);
}

int auto_main()
{
    return ZERO();
}
