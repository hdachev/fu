#include <algorithm>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

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
struct s_LexErr;
struct s_LexResult;
struct s_MapFields;
struct s_Node;
struct s_Overload;
struct s_Partial;
struct s_Scope;
struct s_ScopeIdx;
struct s_ScopeItem;
struct s_SolveResult;
struct s_SolvedNode;
struct s_Struct;
struct s_StructField;
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
std::vector<T> fu_CONCAT(
    const std::vector<T>& a,
    const std::vector<T>& b)
{
    std::vector<T> result;
    result.reserve(a.size() + b.size());

    for (const auto& i : a) result.push_back(i);
    for (const auto& i : b) result.push_back(i);

    return result;
}

inline std::string fu_JOIN(
    const std::vector<std::string>& vec,
    const std::string& sep)
{
    size_t len = 0;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (i)
            len += sep.size();

        len += vec[i].size();
    }

    std::string result;
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
std::vector<K> fu_KEYS(
    const std::unordered_map<K, V>& map)
{
    std::vector<K> keys;
    keys.reserve(map.size());

    for (auto& kv : map)
        keys.push_back(kv.first);

    return keys;
}

template <typename K, typename V>
const V& fu_MAP_CONST_GET(
    const std::unordered_map<K, V>& map,
    const K& key)
{
    const auto& it = map.find(key);
    if (it == map.end() )
    {
        static const V def {};
        return def;
    }

    return it->second;
}

inline std::vector<std::string> fu_SPLIT(
    std::string s,
    const std::string& sep)
{
    std::vector<std::string> result;

    size_t next;
    while (int(next = s.find(sep)) >= 0)
    {
        result.push_back(s.substr(0, next));
        s = s.substr(next + sep.size());
    }

    result.push_back(s);
    return result;
}

template <typename T>
[[noreturn]] fu_NEVER fu_THROW(const T& what)
{
    throw std::runtime_error(what);
}

inline std::string operator+(const std::string& a, long long b)
{
    return a + std::to_string(b);
}

bool operator==(const s_Type& a, const s_Type& b);
bool someFieldNonCopy(const std::vector<s_StructField>& fields);
bool someFieldNotTrivial(const std::vector<s_StructField>& fields);
int ZERO();
int copyOrMove(const int& flags, const std::vector<s_StructField>& fields, const bool& tryTrivial);
int auto_main();
s_SolveResult solve(const s_Node& parse, s_TEMP_Context& ctx);
s_Type createArray(const s_Type& item, s_TEMP_Context& ctx);
struct s_LexErr
{
    std::string reason;
    std::string kind;
    std::string value;
    std::string fname;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || reason.size()
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

struct s_Token
{
    std::string kind;
    std::string value;
    std::string fname;
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
    std::string fname;
    std::vector<s_LexErr> errors;
    std::vector<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || fname.size()
            || errors.size()
            || tokens.size()
        ;
    }
};

struct s_BINOP
{
    std::unordered_map<std::string, int> PRECEDENCE;
    std::unordered_map<int, bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE.size()
            || RIGHT_TO_LEFT.size()
        ;
    }
};

struct s_Node
{
    std::string kind;
    int flags;
    std::string value;
    std::vector<s_Node> items;
    s_Token token;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
            || items.size()
            || token
        ;
    }
};

struct s_Type
{
    std::string canon;
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
    std::string id;
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
    std::string kind;
    std::string id;
    std::vector<s_StructField> fields;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || id.size()
            || fields.size()
            || flags
        ;
    }
};

struct s_TEMP_Context
{
    std::unordered_map<std::string, s_Struct> types;
    explicit operator bool() const noexcept
    {
        return false
            || types.size()
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
    std::string id;
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
    std::string kind;
    int flags;
    std::string value;
    std::vector<s_SolvedNode> items;
    s_Token token;
    s_Type type;
    s_ScopeIdx target;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
            || items.size()
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
    std::unordered_map<std::string, s_SolvedNode> specializations;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || specializations.size()
        ;
    }
};

struct s_Overload
{
    std::string kind;
    std::string name;
    s_Type type;
    int min;
    int max;
    std::vector<s_Type> args;
    std::vector<std::string> names;
    std::vector<s_SolvedNode> defaults;
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
            || args.size()
            || names.size()
            || defaults.size()
            || partial
            || tempatle
        ;
    }
};

struct s_Scope
{
    std::vector<s_ScopeItem> items;
    std::vector<s_Overload> overloads;
    explicit operator bool() const noexcept
    {
        return false
            || items.size()
            || overloads.size()
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

std::string last(const std::string& s)
{
    return (int(s.size()) ? std::string(1, s.at((int(s.size()) - 1))) : std::string(""));
}
inline const std::string OPTOKENS = std::string("{}[]()!?~@#$%^&*/-+<=>,.;:|");
inline const std::vector<std::string> OPERATORS = std::vector<std::string> { std::string("+"), std::string("++"), std::string("-"), std::string("--"), std::string("*"), std::string("**"), std::string("/"), std::string("%"), std::string("<"), std::string("<<"), std::string("<<<"), std::string(">"), std::string(">>"), std::string(">>>"), std::string("==="), std::string("=="), std::string("!="), std::string("!=="), std::string("<="), std::string(">="), std::string("=>"), std::string("->"), std::string("<=>"), std::string("!"), std::string("?"), std::string("??"), std::string("."), std::string(".."), std::string("..."), std::string(":"), std::string("::"), std::string(","), std::string(";"), std::string("&"), std::string("&&"), std::string("|"), std::string("||"), std::string("^"), std::string("~"), std::string("{"), std::string("}"), std::string("["), std::string("]"), std::string("("), std::string(")"), std::string("[]"), std::string("="), std::string("+="), std::string("-="), std::string("*="), std::string("**="), std::string("/="), std::string("%="), std::string("&="), std::string("|="), std::string("^="), std::string("&&="), std::string("||="), std::string("@"), std::string("#"), std::string("$") };

struct sf_lex
{
    const std::string& src;
    const std::string& fname;
    const int end = int(src.size());
    int line = 1;
    int lidx = -1;
    int idx = 0;
    std::vector<s_LexErr> errors {};
    std::vector<s_Token> tokens {};
    void token(const std::string& kind, const std::string& value, const int& idx0, const int& idx1)
    {
        const int col = (idx0 - lidx);
        tokens.push_back(s_Token { fu_CLONE(kind), fu_CLONE(value), fu_CLONE(fname), fu_CLONE(idx0), fu_CLONE(idx1), fu_CLONE(line), fu_CLONE(col) });
    };
    void err_str(const std::string& kind, const int& idx0, const std::string& reason)
    {
        while (((idx < end) && (std::string(1, src.at(idx)) > std::string(" "))))
            idx++;

        const int col = (idx0 - lidx);
        std::string value = ([&]() { size_t _0 = idx0; return src.substr(_0, idx - _0); } ());
        fu_THROW(((((((((((std::string("Lex Error: ") + fname) + std::string("@")) + line) + std::string(":")) + col) + std::string(":\n\t")) + reason) + std::string(" (")) + value) + std::string(")")));
        errors.push_back(s_LexErr { fu_CLONE(reason), fu_CLONE(kind), fu_CLONE(value), fu_CLONE(fname), fu_CLONE(idx0), fu_CLONE(idx), fu_CLONE(line), fu_CLONE(col) });
    };
    void err(const std::string& kind, const int& idx0, const int& reason)
    {
        err_str(kind, idx0, std::string(1, src.at(reason)));
    };
    std::string checkNum(const std::string& kind, const std::string& src)
    {
        if (src.size())
        {
        };
        return kind;
    };
    std::string unescapeStr(const std::string& src, const int& idx0, const int& idx1)
    {
        std::string out = std::string("");
        const int n = (idx1 - 1);
        for (int i = (idx0 + 1); (i < n); i++)
        {
            std::string c = std::string(1, src.at(i));
            if ((c == std::string("\\")))
            {
                std::string c1 = std::string(1, src.at(++i));
                if ((c1 == std::string("n")))
                    out += std::string("\n");
                else if ((c1 == std::string("r")))
                    out += std::string("\r");
                else if ((c1 == std::string("t")))
                    out += std::string("\t");
                else if ((c1 == std::string("v")))
                    out += std::string("\v");
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
            std::string c = std::string(1, src.at(idx++));
            if ((c <= std::string(" ")))
            {
                if ((c == std::string("\n")))
                {
                    line++;
                    lidx = (idx - 1);
                };
            }
            else if ((((c >= std::string("A")) && (c <= std::string("Z"))) || ((c >= std::string("a")) && (c <= std::string("z"))) || (c == std::string("_"))))
            {
                while ((idx < end))
                {
                    std::string c = std::string(1, src.at(idx++));
                    if ((((c >= std::string("A")) && (c <= std::string("Z"))) || ((c >= std::string("a")) && (c <= std::string("z"))) || (c == std::string("_")) || ((c >= std::string("0")) && (c <= std::string("9")))))
                    {
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                const int idx1 = fu_CLONE(idx);
                token(std::string("id"), ([&]() { size_t _0 = idx0; return src.substr(_0, idx1 - _0); } ()), idx0, idx1);
            }
            else if (((c >= std::string("0")) && (c <= std::string("9"))))
            {
                bool hex = false;
                bool dot = false;
                bool exp = false;
                if (((c == std::string("0")) && (idx < end) && (std::string(1, src.at(idx)) == std::string("x"))))
                {
                    hex = true;
                    idx++;
                };
                while ((idx < end))
                {
                    std::string c = std::string(1, src.at(idx++));
                    if (((c >= std::string("0")) && (c <= std::string("9"))))
                    {
                    }
                    else if ((c == std::string(".")))
                    {
                        if ((hex || dot || exp))
                        {
                            err(std::string("num"), idx0, (idx - 1));
                            break;
                        };
                        dot = true;
                    }
                    else if ((((c == std::string("e")) || (c == std::string("E"))) && !hex))
                    {
                        if ((hex || exp))
                        {
                            err(std::string("num"), idx0, (idx - 1));
                            break;
                        };
                        if (((idx < end) && ((std::string(1, src.at(idx)) == std::string("-")) || (std::string(1, src.at(idx)) == std::string("+")))))
                            idx++;

                        exp = true;
                    }
                    else if ((((c >= std::string("a")) && (c <= std::string("f"))) || ((c >= std::string("A")) && (c <= std::string("F")))))
                    {
                        if (!hex)
                        {
                            err(std::string("num"), idx0, (idx - 1));
                            break;
                        };
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                std::string trail = std::string(1, src.at((idx - 1)));
                if ((!((trail >= std::string("0")) && (trail <= std::string("9"))) && !(hex && (((trail >= std::string("a")) && (trail <= std::string("f"))) || ((trail >= std::string("A")) && (trail <= std::string("F")))))))
                    err(std::string("num"), idx0, (idx - 1));
                else
                {
                    const int idx1 = fu_CLONE(idx);
                    std::string str = ([&]() { size_t _0 = idx0; return src.substr(_0, idx1 - _0); } ());
                    token(checkNum(((dot || exp) ? std::string("num") : std::string("int")), str), str, idx0, idx1);
                };
            }
            else if (((c == std::string("'")) || (c == std::string("\"")) || (c == std::string("`"))))
            {
                bool esc = false;
                bool ok = false;
                while ((idx < end))
                {
                    std::string c1 = std::string(1, src.at(idx++));
                    if ((c1 == c))
                    {
                        ok = true;
                        break;
                    }
                    else if ((c1 == std::string("\\")))
                    {
                        esc = true;
                        idx++;
                    }
                    else if ((c == std::string("\n")))
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
                if (!ok)
                    err_str(std::string("str"), idx0, std::string("Unterminated string literal."));
                else
                {
                    const int idx1 = fu_CLONE(idx);
                    std::string str = (esc ? unescapeStr(src, idx0, idx1) : ([&]() { size_t _0 = (idx0 + 1); return src.substr(_0, (idx1 - 1) - _0); } ()));
                    token(std::string("str"), str, idx0, idx1);
                };
            }
            else if (((c == std::string("/")) && (idx < end) && (std::string(1, src.at(idx)) == std::string("/"))))
            {
                idx++;
                while ((idx < end))
                {
                    std::string c1 = std::string(1, src.at(idx++));
                    if ((c1 == std::string("\n")))
                    {
                        line++;
                        lidx = (idx - 1);
                        break;
                    };
                };
            }
            else if (((c == std::string("/")) && (idx < end) && (std::string(1, src.at(idx)) == std::string("*"))))
            {
                idx++;
                while ((idx < end))
                {
                    std::string c = std::string(1, src.at(idx++));
                    if ((c == std::string("\n")))
                    {
                        line++;
                        lidx = (idx - 1);
                    }
                    else if (((c == std::string("*")) && (idx < end) && (std::string(1, src.at(idx)) == std::string("/"))))
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
                    std::string c = std::string(1, src.at(idx++));
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
                        std::string candidate = ([&]() { size_t _0 = begin; return src.substr(_0, end - _0); } ());
                        const bool ok = ([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, candidate); return _1 != _N; } (OPERATORS));
                        if (((end > (begin + 1)) && !ok))
                        {
                            end--;
                            continue;
                        };
                        if (!ok)
                            err(std::string("op"), begin, end);
                        else
                            token(std::string("op"), candidate, begin, end);

                        begin = end;
                        end = idx;
                    };
                };
            }
            else
                err(std::string("?"), idx0, idx0);

        };
        line++;
        lidx = (idx + 0);
        token(std::string("eof"), std::string("eof"), idx, idx);
        return s_LexResult { fu_CLONE(fname), fu_CLONE(errors), fu_CLONE(tokens) };
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
inline const std::vector<std::string> PREFIX = std::vector<std::string> { std::string("++"), std::string("+"), std::string("--"), std::string("-"), std::string("!"), std::string("~"), std::string("?"), std::string("*"), std::string("&"), std::string("&mut") };
inline const std::vector<std::string> POSTFIX = std::vector<std::string> { std::string("++"), std::string("--"), std::string("[]") };

struct sf_setupOperators
{
    s_BINOP out {};
    int precedence = fu_CLONE(P_PREFIX_UNARY);
    bool rightToLeft = false;
    void binop(const std::vector<std::string>& ops)
    {
        precedence++;
        (out.RIGHT_TO_LEFT[precedence] = rightToLeft);
        for (int i = 0; (i < int(ops.size())); i++)
            (out.PRECEDENCE[ops.at(i)] = precedence);

    };
    s_BINOP& setupOperators_EVAL()
    {
        binop(std::vector<std::string> { std::string("as"), std::string("is") });
        rightToLeft = true;
        binop(std::vector<std::string> { std::string("**") });
        rightToLeft = false;
        binop(std::vector<std::string> { std::string("*"), std::string("/"), std::string("%") });
        binop(std::vector<std::string> { std::string("+"), std::string("-") });
        binop(std::vector<std::string> { std::string("<<"), std::string(">>") });
        binop(std::vector<std::string> { std::string("&") });
        binop(std::vector<std::string> { std::string("^") });
        binop(std::vector<std::string> { std::string("|") });
        binop(std::vector<std::string> { std::string("<"), std::string("<="), std::string(">"), std::string(">=") });
        binop(std::vector<std::string> { std::string("=="), std::string("!="), std::string("<=>") });
        binop(std::vector<std::string> { std::string("->") });
        binop(std::vector<std::string> { std::string("&&") });
        binop(std::vector<std::string> { std::string("||") });
        rightToLeft = true;
        binop(std::vector<std::string> { std::string("?") });
        binop(std::vector<std::string> { std::string("="), std::string("+="), std::string("-="), std::string("**="), std::string("*="), std::string("/="), std::string("%="), std::string("<<="), std::string(">>="), std::string("&="), std::string("^="), std::string("|="), std::string("||="), std::string("&&=") });
        rightToLeft = false;
        binop(std::vector<std::string> { std::string(",") });
        return out;
    };
};

#define setupOperators(...) ((sf_setupOperators { __VA_ARGS__ }).setupOperators_EVAL())
inline const s_BINOP BINOP = fu_CLONE(setupOperators());
inline const int& P_COMMA = ([]() -> const int& { { const int& _ = fu_MAP_CONST_GET(BINOP.PRECEDENCE, std::string(",")); if (_) return _; } fu_THROW("Assertion failed."); }());
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
    const std::string& _fname;
    const std::vector<s_Token>& _tokens;
    int _idx = 0;
    s_Token _loc = fu_CLONE(_tokens.at(0));
    int _col0 = 0;
    int _precedence = fu_CLONE(P_RESET);
    int _fnDepth = 0;
    int _numDollars = 0;
    int _numReturns = 0;
    int _implicits = 0;
    std::string _structName = std::string("");
    [[noreturn]] fu_NEVER fail(std::string reason)
    {
        const s_Token& here = _tokens.at(_idx);
        if (!reason.size())
            reason = ((std::string("Unexpected `") + here.value) + std::string("`."));

        const int l0 = fu_CLONE(_loc.line);
        const int c0 = fu_CLONE(_loc.col);
        const int& l1 = here.line;
        const int& c1 = here.col;
        std::string addr = ((l1 == l0) ? (((std::string("@") + l1) + std::string(":")) + c1) : (((((((std::string("@") + l0) + std::string(":")) + c0) + std::string("..")) + l1) + std::string(":")) + c1));
        fu_THROW(((((_fname + std::string(" ")) + addr) + std::string(":\n\t")) + reason));
    };
    [[noreturn]] fu_NEVER fail_Lint(const std::string& reason)
    {
        fail((std::string("Lint: ") + reason));
    };
    s_Node make(const std::string& kind, const std::vector<s_Node>& items, const int& flags, const std::string& value)
    {
        return s_Node { fu_CLONE(kind), fu_CLONE(flags), fu_CLONE(value), fu_CLONE(items), fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _loc; if (_) return _; } fu_THROW(std::string("no loc")); }())) };
    };
    s_Node miss()
    {
        return s_Node { std::string{}, int{}, std::string{}, std::vector<s_Node>{}, s_Token{} };
    };
    s_Token consume(const std::string& kind, const std::string& value)
    {
        const s_Token& token = _tokens.at(_idx);
        if (((token.kind == kind) && (!value.size() || (token.value == value))))
        {
            _idx++;
            return token;
        };
        fail(((((std::string("Expected `") + ([&]() -> const std::string& { { const std::string& _ = value; if (_.size()) return _; } return kind; }())) + std::string("`, got `")) + token.value) + std::string("`.")));
    };
    s_Token tryConsume(const std::string& kind, const std::string& value)
    {
        const s_Token& token = _tokens.at(_idx);
        if (((token.kind == kind) && (!value.size() || (token.value == value))))
        {
            _idx++;
            return token;
        };
        return s_Token { std::string{}, std::string{}, std::string{}, int{}, int{}, int{}, int{} };
    };
    s_Node parseRoot()
    {
        _loc = _tokens.at(_idx);
        s_Node out = make(std::string("root"), parseBlockLike(std::string("eof"), std::string("eof"), std::string("")), 0, std::string(""));
        if (_implicits)
            out.flags |= F_IMPLICIT;

        return out;
    };
    s_Node parseBlock()
    {
        return createBlock(parseBlockLike(std::string("op"), std::string("}"), std::string("")));
    };
    s_Node createBlock(const std::vector<s_Node>& items)
    {
        return make(std::string("block"), items, 0, std::string(""));
    };
    s_Node parseStructDecl()
    {
        s_Token name = tryConsume(std::string("id"), std::string(""));
        const std::string& id = ([&]() -> const std::string& { if (name) { const std::string& _ = name.value; if (_.size()) return _; } fail(std::string("Anon structs.")); }());
        std::string structName0 = fu_CLONE(_structName);
        _structName = id;
        consume(std::string("op"), std::string("{"));
        std::vector<s_Node> items = parseBlockLike(std::string("op"), std::string("}"), std::string("struct"));
        _structName = structName0;
        return make(std::string("struct"), items, 0, (name ? name.value : std::string("")));
    };
    s_Node parseStructItem()
    {
        const s_Token& token = _tokens.at(_idx++);
        if (((token.kind == std::string("op")) || (token.kind == std::string("id"))))
        {
            if ((token.value == std::string("fn")))
                return parseStructMethod();

        };
        _idx--;
        s_Node member = parseLet();
        member.flags |= F_FIELD;
        consume(std::string("op"), std::string(";"));
        return member;
    };
    s_Node parseStructMethod()
    {
        s_Node fnNode = parseFnDecl();
        s_Node typeAnnot = createPrefix(std::string("&"), createRead(([&]() -> std::string& { { std::string& _ = _structName; if (_.size()) return _; } fail(std::string("")); }())));
        ([&](auto& _) { _.insert(_.begin(), createLet(std::string("this"), F_USING, typeAnnot, miss())); } (fnNode.items));
        fnNode.flags |= F_METHOD;
        return fnNode;
    };
    std::vector<s_Node> parseBlockLike(const std::string& endKind, const std::string& endVal, const std::string& mode)
    {
        const int& line0 = _tokens.at(_idx).line;
        const int col00 = fu_CLONE(_col0);
        std::vector<s_Node> items = std::vector<s_Node>{};
        while (true)
        {
            const s_Token& token = _tokens.at(_idx);
            if (((token.kind == endKind) && (token.value == endVal)))
            {
                _col0 = col00;
                _idx++;
                const int& line1 = token.line;
                const int& col1 = token.col;
                ((line1 == line0) || (col1 == _col0) || fail_Lint(((((((((std::string("Bad closing `") + token.value) + std::string("` indent, expecting ")) + (_col0 - 1)) + std::string(", got ")) + (col1 - 1)) + std::string(". Block starts on line ")) + line0) + std::string("."))));
                break;
            };
            _col0 = token.col;
            ((_col0 > col00) || fail_Lint(((((std::string("Bad indent, expecting more than ") + col00) + std::string(". Block starts on line ")) + line0) + std::string("."))));
            s_Node expr = (mode.size() ? parseStructItem() : parseStatement());
            ((expr.kind != std::string("call")) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (int(expr.items.size()) > 1) || fail_Lint(std::string("Orphan pure-looking expression.")));
            const int exprIdx = int(items.size());
            if ((expr.kind != std::string("empty")))
                items.push_back(expr);

            if ((expr.kind == std::string("struct")))
                unwrapStructMethods(items, exprIdx);

        };
        return items;
    };
    void unwrapStructMethods(std::vector<s_Node>& out, const int& structNodeIdx)
    {
        s_Node structNode = fu_CLONE(out.at(structNodeIdx));
        std::vector<s_Node>& members = structNode.items;
        for (int i = 0; (i < int(members.size())); i++)
        {
            s_Node& item = members.at(i);
            if ((item.kind == std::string("fn")))
            {
                if ((item.value == std::string("free")))
                {
                    structNode.flags |= F_DESTRUCTOR;
                    item.flags |= F_DESTRUCTOR;
                };
                ((int(item.items.size()) >= 2) || fail(std::string("")));
                out.push_back(item);
                ([&](auto& _) { const auto& _0 = _.begin() + i--; _.erase(_0, _0 + 1); } (members));
            };
        };
        out.at(structNodeIdx) = structNode;
    };
    s_Node parseStatement()
    {
        s_Token loc0 = fu_CLONE(_loc);
        s_Token token = fu_CLONE((_loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens.at(_idx++); if (_) return _; } fail(std::string("")); }())));
        if (((token.kind == std::string("op")) || (token.kind == std::string("id"))))
        {
            const std::string& v = token.value;
            if ((v == std::string("{")))
                return parseBlock();

            if ((v == std::string("let")))
                return parseLetStmt();

            if ((v == std::string("mut")))
                return ((void)_idx--, parseLetStmt());

            if ((v == std::string("if")))
                return parseIf();

            if ((v == std::string("return")))
                return parseReturn();

            if ((v == std::string("for")))
                return parseFor();

            if ((v == std::string("while")))
                return parseWhile();

            if ((v == std::string("do")))
                return parseDoWhile();

            if ((v == std::string("break")))
                return parseJump(std::string("break"));

            if ((v == std::string("continue")))
                return parseJump(std::string("continue"));

            if ((v == std::string(";")))
                return parseEmpty();

            if ((v == std::string("fn")))
                return parseFnDecl();

            if ((v == std::string("struct")))
                return parseStructDecl();

            if ((v == std::string(":")))
                return parseLabelledStatement();

            if ((v == std::string("pub")))
                return parseStatement();

        };
        _idx--;
        _loc = loc0;
        return parseExpressionStatement();
    };
    s_Node parseLabelledStatement()
    {
        s_Token label = consume(std::string("id"), std::string(""));
        s_Node stmt = parseStatement();
        if ((stmt.kind == std::string("loop")))
        {
            (stmt.value.size() && fail(std::string("")));
            stmt.value = ([&]() -> const std::string& { { const std::string& _ = label.value; if (_.size()) return _; } fail(std::string("")); }());
            return stmt;
        };
        fail(std::string(""));
    };
    s_Node parseEmpty()
    {
        return make(std::string("empty"), std::vector<s_Node>{}, 0, std::string(""));
    };
    s_Node parseExpressionStatement()
    {
        s_Node expr = parseExpression(fu_CLONE(P_RESET));
        consume(std::string("op"), std::string(";"));
        return expr;
    };
    s_Node parseFnDecl()
    {
        const int numDollars0 = fu_CLONE(_numDollars);
        const int numReturns0 = fu_CLONE(_numReturns);
        s_Token name = ([&]() -> s_Token { { s_Token _ = tryConsume(std::string("id"), std::string("")); if (_) return _; } return tryConsume(std::string("op"), std::string("")); }());
        consume(std::string("op"), std::string("("));
        std::vector<s_Node> items {};
        int flags = parseArgsDecl(items, std::string("op"), std::string(")"));
        _fnDepth++;
        s_Node type = tryPopTypeAnnot();
        const int retIdx = int(items.size());
        items.push_back(type);
        flags |= parseFnBodyOrPattern(items);
        if ((!type && (_numReturns == numReturns0)))
            items.at(retIdx) = (type = createRead(std::string("void")));

        if (type)
            flags |= F_FULLY_TYPED;

        
        {
            _fnDepth--;
            _numReturns = numReturns0;
            const int numDollars1 = fu_CLONE(_numDollars);
            _numDollars = numDollars0;
            if ((numDollars1 != numDollars0))
                flags |= F_TEMPLATE;

        };
        return make(std::string("fn"), items, flags, name.value);
    };
    int parseFnBodyOrPattern(std::vector<s_Node>& out_push_body)
    {
        int flags = 0;
        s_Node body {};
        if (tryConsume(std::string("id"), std::string("case")))
        {
            std::vector<s_Node> branches = std::vector<s_Node>{};
            flags |= F_PATTERN;
            do
            {
                s_Node cond = parseUnaryExpression();
                s_Node type = tryPopTypeAnnot();
                s_Node body = parseFnBodyBranch();
                branches.push_back(make(std::string("fnbranch"), std::vector<s_Node> { cond, type, body }, 0, std::string("")));
            }
            while (tryConsume(std::string("id"), std::string("case")));
            body = make(std::string("pattern"), branches, 0, std::string(""));
        }
        else
            body = parseFnBodyBranch();

        out_push_body.push_back(body);
        return flags;
    };
    s_Node parseFnBodyBranch()
    {
        s_Node body = parseStatement();
        return (((body.kind == std::string("block")) || (body.kind == std::string("return"))) ? body : ((void)_numReturns++, createReturn(body)));
    };
    s_Node tryPopTypeAnnot()
    {
        return (tryConsume(std::string("op"), std::string(":")) ? parseTypeAnnot() : miss());
    };
    s_Node parseTypeAnnot()
    {
        return parseUnaryExpression();
    };
    int parseArgsDecl(std::vector<s_Node>& outArgs, const std::string& endk, const std::string& endv)
    {
        bool first = true;
        int outFlags = 0;
        std::vector<s_Node> implicit {};
        bool defaults = false;
        while (true)
        {
            if (tryConsume(endk, endv))
            {
                break;
            };
            if (!first)
                consume(std::string("op"), std::string(","));

            first = false;
            s_Node arg = parseLet();
            if (!arg.items.at(LET_TYPE))
                outFlags |= F_UNTYPED_ARGS;

            if (arg.items.at(LET_INIT))
            {
                if ((arg.flags & F_IMPLICIT))
                    fail(std::string("TODO default implicit arguments"));

                defaults = true;
            }
            else if (defaults)
                fail(std::string("TODO non-trailing default arguments"));

            arg.flags &= ~F_LOCAL;
            arg.flags |= F_ARG;
            if ((arg.flags & F_IMPLICIT))
                implicit.push_back(arg);
            else
                outArgs.push_back(arg);

        };
        if (implicit.size())
        {
            for (int i = 0; (i < int(implicit.size())); i++)
                outArgs.push_back(implicit.at(i));

        };
        return outFlags;
    };
    s_Node parseLetStmt()
    {
        s_Node ret = parseLet();
        consume(std::string("op"), std::string(";"));
        return ret;
    };
    s_Node parseLet()
    {
        int flags = fu_CLONE(F_LOCAL);
        const int numDollars0 = fu_CLONE(_numDollars);
        if (tryConsume(std::string("id"), std::string("using")))
            flags |= F_USING;

        if (tryConsume(std::string("id"), std::string("implicit")))
            flags |= F_IMPLICIT;

        if (tryConsume(std::string("id"), std::string("mut")))
            flags |= F_MUT;

        std::string id = consume(std::string("id"), std::string("")).value;
        s_Node type = tryPopTypeAnnot();
        s_Node init = (tryConsume(std::string("op"), std::string("=")) ? parseExpression(fu_CLONE(P_COMMA)) : s_Node { std::string{}, int{}, std::string{}, std::vector<s_Node>{}, s_Token{} });
        if ((numDollars0 != _numDollars))
            flags |= F_TEMPLATE;

        if ((flags & F_IMPLICIT))
            _implicits++;

        return createLet(id, flags, type, init);
    };
    s_Node createLet(const std::string& id, const int& flags, const s_Node& type, const s_Node& init)
    {
        return make(std::string("let"), std::vector<s_Node> { type, init }, flags, id);
    };
    s_Node parseExpression(const int p1)
    {
        const int p0 = fu_CLONE(_precedence);
        s_Token loc0 = fu_CLONE(_loc);
        _precedence = p1;
        _loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens.at(_idx); if (_) return _; } fail(std::string("")); }());
        s_Node head = parseExpressionHead();
        
        {
            s_Node out {};
            while ((out = tryParseExpressionTail(head)))
            {
                _loc = ([&]() -> const s_Token& { { const s_Token& _ = _tokens.at(_idx); if (_) return _; } fail(std::string("")); }());
                head = out;
            };
        };
        _precedence = p0;
        _loc = loc0;
        return head;
    };
    s_Node tryParseBinary(const s_Node& left, const std::string& op, const int& p1)
    {
        if (((p1 > _precedence) || ((p1 == _precedence) && !fu_MAP_CONST_GET(BINOP.RIGHT_TO_LEFT, p1))))
            return miss();

        _idx++;
        s_Node mid {};
        if ((op == std::string("?")))
        {
            mid = parseExpression(fu_CLONE(_precedence));
            consume(std::string("op"), std::string(":"));
        };
        s_Node right = parseExpression(fu_CLONE(p1));
        if (mid)
            return createIf(left, mid, right);

        if ((op == std::string("||")))
            return createOr(left, right);

        if ((op == std::string("&&")))
            return createAnd(left, right);

        return createCall(op, F_INFIX, std::vector<s_Node> { left, right });
    };
    s_Node tryParseExpressionTail(const s_Node& head)
    {
        const s_Token& token = _tokens.at(_idx++);
        if ((token.kind == std::string("op")))
        {
            const std::string& v = token.value;
            if ((v == std::string(";")))
                return ((void)_idx--, miss());

            if ((v == std::string(".")))
                return parseAccessExpression(head);

            if ((v == std::string("(")))
                return parseCallExpression(head);

            if ((v == std::string("[")))
                return parseIndexExpression(head);

            const int& p1 = fu_MAP_CONST_GET(BINOP.PRECEDENCE, v);
            if (p1)
                return ((void)_idx--, tryParseBinary(head, v, p1));

            if (([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, v); return _1 != _N; } (POSTFIX)))
                return createCall(v, F_POSTFIX, std::vector<s_Node> { head });

        };
        return ((void)_idx--, miss());
    };
    s_Node parseExpressionHead()
    {
        const s_Token& token = _tokens.at(_idx++);
        
        {
            const std::string& k = token.kind;
            if (((k == std::string("int")) || (k == std::string("num")) || (k == std::string("str"))))
                return createLeaf(token.kind, token.value);

            if ((k == std::string("id")))
                return createRead(token.value);

            if ((k == std::string("op")))
            {
                const std::string& v = token.value;
                if ((v == std::string("(")))
                    return parseParens();

                if ((v == std::string("[")))
                    return parseArrayLiteral();

                if ((v == std::string("$")))
                    return parseTypeParam();

                if ((v == std::string("@")))
                    return parseTypeTag();

                if ((v == std::string("[]")))
                    return make(std::string("definit"), std::vector<s_Node>{}, 0, std::string(""));

                return parsePrefix(fu_CLONE(token.value));
            };
        };
        _idx--;
        fail(std::string(""));
    };
    s_Node parseParens()
    {
        std::vector<s_Node> items = std::vector<s_Node>{};
        do
            items.push_back(parseExpression(fu_CLONE(P_COMMA)));
        while (tryConsume(std::string("op"), std::string(",")));
        consume(std::string("op"), std::string(")"));
        return ((int(items.size()) > 1) ? createComma(items) : items.at(0));
    };
    s_Node createComma(const std::vector<s_Node>& nodes)
    {
        return make(std::string("comma"), nodes, 0, std::string(""));
    };
    s_Node parseTypeParam()
    {
        _numDollars++;
        return createTypeParam(consume(std::string("id"), std::string("")).value);
    };
    s_Node createTypeParam(const std::string& value)
    {
        return make(std::string("typeparam"), std::vector<s_Node>{}, 0, value);
    };
    s_Node parseTypeTag()
    {
        return createTypeTag(consume(std::string("id"), std::string("")).value);
    };
    s_Node createTypeTag(const std::string& value)
    {
        return make(std::string("typetag"), std::vector<s_Node>{}, 0, value);
    };
    s_Node parsePrefix(std::string op)
    {
        (([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, op); return _1 != _N; } (PREFIX)) || ((void)_idx--, fail(std::string(""))));
        if (((op == std::string("&")) && tryConsume(std::string("id"), std::string("mut"))))
            op = std::string("&mut");

        return createPrefix(op, parseUnaryExpression());
    };
    s_Node parseUnaryExpression()
    {
        return parseExpression(fu_CLONE(P_PREFIX_UNARY));
    };
    s_Node createPrefix(const std::string& op, const s_Node& expr)
    {
        if ((op == std::string("!")))
            return createNot(expr);

        return createCall(op, F_PREFIX, std::vector<s_Node> { expr });
    };
    s_Node createNot(const s_Node& expr)
    {
        return make(std::string("!"), std::vector<s_Node> { expr }, 0, std::string(""));
    };
    s_Node parseAccessExpression(const s_Node& expr)
    {
        return createCall(consume(std::string("id"), std::string("")).value, F_ACCESS, std::vector<s_Node> { expr });
    };
    int parseCallArgs(const std::string& endop, std::vector<s_Node>& out_args)
    {
        int flags = 0;
        bool first = true;
        while (true)
        {
            if (tryConsume(std::string("op"), endop))
            {
                break;
            };
            if (!first)
                consume(std::string("op"), std::string(","));

            first = false;
            std::string name = std::string("");
            bool autoName = false;
            if (((_tokens.at(_idx).kind == std::string("id")) && (_tokens.at((_idx + 1)).kind == std::string("op")) && (_tokens.at((_idx + 1)).value == std::string(":"))))
            {
                name = _tokens.at(_idx).value;
                _idx += 2;
                flags |= F_NAMED_ARGS;
            }
            else if (((_tokens.at(_idx).kind == std::string("op")) && (_tokens.at(_idx).value == std::string(":"))))
            {
                autoName = true;
                _idx++;
                flags |= F_NAMED_ARGS;
            };
            s_Node expr = parseExpression(fu_CLONE(P_COMMA));
            if (autoName)
            {
                (((expr.kind == std::string("call")) && (expr.flags & F_ID)) || fail(std::string("Can't :auto_name this expression.")));
                name = expr.value;
            };
            out_args.push_back((name.size() ? createLabel(name, expr) : expr));
        };
        return flags;
    };
    s_Node createLabel(const std::string& id, const s_Node& value)
    {
        return make(std::string("label"), std::vector<s_Node> { value }, 0, id);
    };
    s_Node parseCallExpression(const s_Node& expr)
    {
        std::vector<s_Node> args = std::vector<s_Node>{};
        const int argFlags = parseCallArgs(std::string(")"), args);
        if (((expr.kind == std::string("call")) && (expr.flags & F_ACCESS)))
        {
            const s_Node& head = ([&]() -> const s_Node& { if (expr.items.size() && (int(expr.items.size()) == 1)) { const s_Node& _ = expr.items.at(0); if (_) return _; } fail(std::string("")); }());
            ([&](auto& _) { _.insert(_.begin(), head); } (args));
            return createCall(([&]() -> const std::string& { { const std::string& _ = expr.value; if (_.size()) return _; } fail(std::string("")); }()), (F_METHOD | argFlags), args);
        };
        if (((expr.kind == std::string("call")) && (expr.flags & F_ID)))
            return createCall(([&]() -> const std::string& { { const std::string& _ = expr.value; if (_.size()) return _; } fail(std::string("")); }()), argFlags, args);

        fail(std::string("TODO dynamic call"));
    };
    s_Node parseArrayLiteral()
    {
        std::vector<s_Node> args = std::vector<s_Node>{};
        const int argFlags = parseCallArgs(std::string("]"), args);
        return createArrayLiteral(argFlags, args);
    };
    s_Node createArrayLiteral(const int& argFlags, const std::vector<s_Node>& items)
    {
        return make(std::string("arrlit"), items, argFlags, std::string(""));
    };
    s_Node parseIndexExpression(const s_Node& expr)
    {
        std::vector<s_Node> args = std::vector<s_Node>{};
        const int argFlags = parseCallArgs(std::string("]"), args);
        ([&](auto& _) { _.insert(_.begin(), expr); } (args));
        return createCall(std::string("[]"), (F_INDEX & argFlags), args);
    };
    s_Node createLeaf(const std::string& kind, const std::string& value)
    {
        return make(kind, std::vector<s_Node>{}, 0, value);
    };
    s_Node createCall(const std::string& id, const int& flags, const std::vector<s_Node>& args)
    {
        return make(std::string("call"), args, flags, id);
    };
    s_Node createRead(const std::string& id)
    {
        return createCall(([&]() -> const std::string& { { const std::string& _ = id; if (_.size()) return _; } fail(std::string("")); }()), F_ID, std::vector<s_Node>{});
    };
    s_Node parseReturn()
    {
        ((_fnDepth > 0) || ((void)_idx--, fail(std::string(""))));
        _numReturns++;
        if (tryConsume(std::string("op"), std::string(";")))
            return createReturn(s_Node { std::string{}, int{}, std::string{}, std::vector<s_Node>{}, s_Token{} });

        return createReturn(parseExpressionStatement());
    };
    s_Node createReturn(const s_Node& node)
    {
        if (!node)
            return make(std::string("return"), std::vector<s_Node>{}, 0, std::string(""));

        return make(std::string("return"), std::vector<s_Node> { node }, 0, std::string(""));
    };
    s_Node parseJump(const std::string& kind)
    {
        s_Token label = ([&]() -> s_Token { if (tryConsume(std::string("op"), std::string(":"))) return consume(std::string("id"), std::string("")); else return s_Token{}; }());
        s_Node jump = createJump(kind, label.value);
        consume(std::string("op"), std::string(";"));
        return jump;
    };
    s_Node createJump(const std::string& kind, const std::string& label)
    {
        return make(kind, std::vector<s_Node>{}, 0, label);
    };
    s_Node parseIf()
    {
        s_Token nott = tryConsume(std::string("op"), std::string("!"));
        consume(std::string("op"), std::string("("));
        s_Node cond = parseExpression(fu_CLONE(_precedence));
        if (nott)
            cond = createNot(cond);

        consume(std::string("op"), std::string(")"));
        s_Node cons = parseStatement();
        s_Node alt = ([&]() -> s_Node { if (tryConsume(std::string("id"), std::string("else"))) return parseStatement(); else return s_Node{}; }());
        return createIf(cond, cons, alt);
    };
    s_Node createIf(const s_Node& cond, const s_Node& cons, const s_Node& alt)
    {
        return make(std::string("if"), std::vector<s_Node> { cond, cons, alt }, 0, std::string(""));
    };
    s_Node createOr(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame(std::string("or"), left, right);
    };
    s_Node createAnd(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame(std::string("and"), left, right);
    };
    s_Node flattenIfSame(const std::string& kind, const s_Node& left, const s_Node& right)
    {
        const std::string& k_left = left.kind;
        const std::string& k_right = right.kind;
        std::vector<s_Node> items = (((k_left == kind) && (k_right == kind)) ? fu_CONCAT(left.items, right.items) : ((k_left == kind) ? fu_CONCAT(left.items, std::vector<s_Node> { right }) : ((k_right == kind) ? fu_CONCAT(std::vector<s_Node> { left }, right.items) : std::vector<s_Node> { left, right })));
        return make(kind, items, 0, std::string(""));
    };
    s_Node parseFor()
    {
        consume(std::string("op"), std::string("("));
        tryConsume(std::string("id"), std::string("let"));
        s_Node init = parseLetStmt();
        s_Node cond = parseExpressionStatement();
        const s_Token& token = _tokens.at(_idx);
        s_Node post = (((token.kind == std::string("op")) && (token.value == std::string(")"))) ? parseEmpty() : parseExpression(fu_CLONE(_precedence)));
        consume(std::string("op"), std::string(")"));
        s_Node body = parseStatement();
        return createLoop(init, cond, post, body, miss());
    };
    s_Node parseWhile()
    {
        consume(std::string("op"), std::string("("));
        s_Node cond = parseExpression(fu_CLONE(_precedence));
        consume(std::string("op"), std::string(")"));
        s_Node body = parseStatement();
        return createLoop(miss(), cond, miss(), body, miss());
    };
    s_Node parseDoWhile()
    {
        s_Node body = parseStatement();
        consume(std::string("id"), std::string("while"));
        consume(std::string("op"), std::string("("));
        s_Node cond = parseExpression(fu_CLONE(_precedence));
        consume(std::string("op"), std::string(")"));
        consume(std::string("op"), std::string(";"));
        return createLoop(miss(), miss(), miss(), body, cond);
    };
    s_Node createLoop(const s_Node& init, const s_Node& cond, const s_Node& post, const s_Node& body, const s_Node& postcond)
    {
        return make(std::string("loop"), std::vector<s_Node> { init, cond, post, body, postcond }, 0, std::string(""));
    };
    s_Node parse_EVAL()
    {
        ((_tokens.at((int(_tokens.size()) - 1)).kind == std::string("eof")) || fail(std::string("Missing `eof` token.")));
        return parseRoot();
    };
};

#define parse(...) ((sf_parse { __VA_ARGS__ }).parse_EVAL())
inline const int q_mutref = (1 << 0);
inline const int q_ref = (1 << 1);
inline const int q_copy = (1 << 2);
inline const int q_move = (1 << 3);
inline const int q_trivial = (1 << 4);
inline const int q_primitive = (1 << 5);
inline const int q_arithmetic = (1 << 6);
inline const int q_integral = (1 << 7);
inline const int q_signed = (1 << 8);
inline const std::vector<std::string> TAGS = std::vector<std::string> { std::string("mutref"), std::string("ref"), std::string("copy"), std::string("move"), std::string("trivial"), std::string("primitive"), std::string("arithmetic"), std::string("integral"), std::string("signed") };

bool operator==(const s_Type& a, const s_Type& b)
{
    return ((a.canon == b.canon) && (a.quals == b.quals));
}
inline const int Trivial = (q_copy | q_trivial);
inline const int Primitive = (Trivial | q_primitive);
inline const int Arithmetic = (Primitive | q_arithmetic);
inline const int Integral = (Arithmetic | q_integral);
inline const int SignedInt = (Integral | q_signed);
inline const s_Type t_i32 = s_Type { std::string("i32"), fu_CLONE(SignedInt) };
inline const s_Type t_void = s_Type { std::string("void"), 0 };
inline const s_Type t_bool = s_Type { std::string("bool"), fu_CLONE(Primitive) };
inline const s_Type t_never = s_Type { std::string("never"), 0 };
inline const s_Type t_template = s_Type { std::string("template"), 0 };
inline const s_Type t_string = s_Type { std::string("string"), fu_CLONE(q_copy) };

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return (((host.canon == guest.canon) && ((host.quals == guest.quals) || (!(host.quals & q_mutref) && ((host.quals & guest.quals) == host.quals)))) || ((guest == t_never) && (guest.quals == 0)));
}

bool isAssignableAsArgument(const s_Type& host, s_Type guest)
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
        return s_Type { std::string{}, int{} };

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
    return (t ? qsub(t, q_mutref) : t);
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

std::string serializeType(const s_Type& type)
{
    if (type.quals)
        return ((((std::string("(") + type.canon) + std::string("{")) + type.quals) + std::string("})"));

    return ((std::string("(") + type.canon) + std::string(")"));
}

bool type_has(const s_Type& type, const std::string& tag)
{
    const int idx = ([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, tag); return _1 != _N ? int(_1 - _0) : -1; } (TAGS));
    ((idx >= 0) || fu_THROW(((std::string("Unknown type tag: `") + tag) + std::string("`."))));
    const int mask = (1 << idx);
    return ((type.quals & mask) == mask);
}

s_Type type_tryInter(const s_Type& a, const s_Type& b)
{
    if ((a.canon != b.canon))
        return s_Type { std::string{}, int{} };

    return s_Type { fu_CLONE(a.canon), (a.quals & b.quals) };
}

void registerType(const std::string& canon, const s_Struct& def, s_TEMP_Context& ctx)
{
    (ctx.types[canon] = def);
}

const s_Struct& lookupType(const std::string& canon, const s_TEMP_Context& ctx)
{
    return ([&]() -> const s_Struct& { { const s_Struct& _ = fu_MAP_CONST_GET(ctx.types, canon); if (_) return _; } fu_THROW("Assertion failed."); }());
}

s_Struct& lookupType_mut(const std::string& canon, s_TEMP_Context& ctx)
{
    return ([&]() -> s_Struct& { { s_Struct& _ = ctx.types.at(canon); if (_) return _; } fu_THROW("Assertion failed."); }());
}

s_Type initStruct(const std::string& id, const int& flags, s_TEMP_Context& ctx)
{
    std::string canon = (std::string("s_") + id);
    s_Struct def = s_Struct { std::string("struct"), fu_CLONE(([&]() -> const std::string& { { const std::string& _ = id; if (_.size()) return _; } fu_THROW(std::string("TODO anonymous structs?")); }())), std::vector<s_StructField>{}, (flags | 0) };
    registerType(canon, def, ctx);
    return s_Type { fu_CLONE(canon), copyOrMove(flags, def.fields, false) };
}

void finalizeStruct(const std::string& id, const std::vector<s_StructField>& fields, s_TEMP_Context& ctx)
{
    std::string canon = (std::string("s_") + id);
    s_Struct& def = lookupType_mut(canon, ctx);
    def.fields = ([&]() -> const std::vector<s_StructField>& { { const std::vector<s_StructField>& _ = fields; if (_.size()) return _; } fu_THROW(std::string("TODO empty structs?")); }());
}

int copyOrMove(const int& flags, const std::vector<s_StructField>& fields, const bool& tryTrivial)
{
    if (((flags & F_DESTRUCTOR) || someFieldNonCopy(fields)))
        return q_move;

    if ((tryTrivial && !someFieldNotTrivial(fields)))
        return Trivial;

    return q_copy;
}

bool someFieldNonCopy(const std::vector<s_StructField>& fields)
{
    for (int i = 0; (i < int(fields.size())); i++)
    {
        if (!(fields.at(i).type.quals & q_copy))
            return true;

    };
    return false;
}

bool someFieldNotTrivial(const std::vector<s_StructField>& fields)
{
    for (int i = 0; (i < int(fields.size())); i++)
    {
        if (!(fields.at(i).type.quals & q_trivial))
            return true;

    };
    return false;
}

s_Type createArray(const s_Type& item, s_TEMP_Context& ctx)
{
    const int flags = 0;
    std::vector<s_StructField> fields = std::vector<s_StructField> { s_StructField { std::string("Item"), fu_CLONE(item) } };
    std::string canon = ((std::string("Array(") + serializeType(item)) + std::string(")"));
    registerType(canon, s_Struct { std::string("array"), fu_CLONE(canon), fu_CLONE(fields), fu_CLONE(flags) }, ctx);
    return s_Type { fu_CLONE(canon), copyOrMove(flags, fields, false) };
}

bool type_isString(const s_Type& type)
{
    return (type.canon == std::string("string"));
}

bool type_isArray(const s_Type& type)
{
    return (type.canon.rfind(std::string("Array("), 0) == 0);
}

s_Type tryClear_array(const s_Type& type, const s_TEMP_Context& ctx)
{
    if (!type_isArray(type))
        return s_Type { std::string{}, int{} };

    const s_Struct& def = lookupType(type.canon, ctx);
    return ([&]() -> const s_Type& { if ((def.kind == std::string("array"))) { const s_Type& _ = def.fields.at(0).type; if (_) return _; } fu_THROW("Assertion failed."); }());
}

bool type_isMap(const s_Type& type)
{
    return (type.canon.rfind(std::string("Map("), 0) == 0);
}

s_Type createMap(const s_Type& key, const s_Type& value, s_TEMP_Context& ctx)
{
    const int flags = 0;
    std::vector<s_StructField> fields = std::vector<s_StructField> { s_StructField { std::string("Key"), fu_CLONE(key) }, s_StructField { std::string("Value"), fu_CLONE(value) } };
    std::string canon = ((((std::string("Map(") + serializeType(key)) + std::string(",")) + serializeType(value)) + std::string(")"));
    registerType(canon, s_Struct { std::string("map"), fu_CLONE(canon), fu_CLONE(fields), fu_CLONE(flags) }, ctx);
    return s_Type { fu_CLONE(canon), copyOrMove(flags, fields, false) };
}

s_MapFields tryClear_map(const s_Type& type, const s_TEMP_Context& ctx)
{
    if (!type_isMap(type))
        return s_MapFields { s_Type{}, s_Type{} };

    const s_Struct& def = lookupType(type.canon, ctx);
    ((def.kind == std::string("map")) || fu_THROW("Assertion failed."));
    return s_MapFields { fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = def.fields.at(0).type; if (_) return _; } fu_THROW("Assertion failed."); }())), fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = def.fields.at(1).type; if (_) return _; } fu_THROW("Assertion failed."); }())) };
}

std::vector<s_ScopeIdx> Scope_lookup(const s_Scope& scope, const std::string& id)
{
    std::vector<s_ScopeIdx> results = std::vector<s_ScopeIdx>{};
    const std::vector<s_ScopeItem>& items = scope.items;
    for (int i = int(items.size()); (i-- > 0); )
    {
        const s_ScopeItem& item = items.at(i);
        if ((item.id == id))
            results.push_back(item.index);

    };
    return results;
}

std::vector<std::string> Scope_keys(const s_Scope& scope)
{
    std::vector<std::string> keys = std::vector<std::string>{};
    const std::vector<s_ScopeItem>& items = scope.items;
    for (int i = int(items.size()); (i-- > 0); )
    {
        const std::string& id = items.at(i).id;
        if (!([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, id); return _1 != _N; } (keys)))
            keys.push_back(id);

    };
    return keys;
}

int Scope_push(s_Scope& scope)
{
    return int(scope.items.size());
}

void Scope_pop(s_Scope& scope, const int& memo)
{
    scope.items.resize(memo);
}

s_ScopeIdx Scope_add(s_Scope& scope, const std::string& kind, const std::string& id, const s_Type& type, const int& min, const int& max, const std::vector<std::string>& arg_n, const std::vector<s_Type>& arg_t, const std::vector<s_SolvedNode>& arg_d, const s_Template& tempatle, const s_Partial& partial)
{
    s_ScopeIdx index = s_ScopeIdx { (int(scope.overloads.size()) + 1) };
    s_Overload item = s_Overload { fu_CLONE(kind), fu_CLONE(id), fu_CLONE(type), fu_CLONE(min), fu_CLONE(max), fu_CLONE(arg_t), fu_CLONE(arg_n), fu_CLONE(arg_d), fu_CLONE(partial), fu_CLONE(tempatle) };
    scope.items.push_back(s_ScopeItem { fu_CLONE(id), fu_CLONE(index) });
    scope.overloads.push_back(item);
    return index;
}

s_ScopeIdx Scope_Typedef(s_Scope& scope, const std::string& id, const s_Type& type)
{
    return Scope_add(scope, std::string("type"), id, type, 0, 0, std::vector<std::string>{}, std::vector<s_Type>{}, std::vector<s_SolvedNode>{}, s_Template{}, s_Partial{});
}

struct sf_runSolver
{
    const s_Node& parse;
    const s_Scope& globals;
    s_TEMP_Context& ctx;
    s_Scope _scope = fu_CLONE(globals);
    s_Token _here {};
    s_SolvedNode _current_fn {};
    s_Type _current_strt {};
    std::unordered_map<std::string, s_Type> _typeParams {};
    bool TEST_expectImplicits = false;
    s_Overload& GET(const s_ScopeIdx& idx)
    {
        ((idx.raw > 0) || fu_THROW("Assertion failed."));
        return _scope.overloads.at((idx.raw - 1));
    };
    [[noreturn]] fu_NEVER fail(std::string reason)
    {
        if (!reason.size())
            reason = ((std::string("Unexpected `") + _here.value) + std::string("`."));

        std::string fname = fu_CLONE(_here.fname);
        const int l0 = fu_CLONE(_here.line);
        const int c0 = fu_CLONE(_here.col);
        std::string addr = (((std::string("@") + l0) + std::string(":")) + c0);
        fu_THROW(((((fname + std::string(" ")) + addr) + std::string(":\n\t")) + reason));
    };
    s_ScopeIdx Binding(const std::string& id, const s_Type& type)
    {
        return Scope_add(_scope, std::string("var"), id, type, 0, 0, std::vector<std::string>{}, std::vector<s_Type>{}, std::vector<s_SolvedNode>{}, s_Template{}, s_Partial{});
    };
    s_ScopeIdx Field(const std::string& id, const s_Type& structType, const s_Type& fieldType)
    {
        return Scope_add(_scope, std::string("field"), id, fieldType, 1, 1, std::vector<std::string> { std::string("this") }, std::vector<s_Type> { structType }, std::vector<s_SolvedNode>{}, s_Template{}, s_Partial{});
    };
    s_ScopeIdx TemplateDecl(const s_Node& node)
    {
        const std::string& id = node.value;
        ((node.kind == std::string("fn")) || fail(std::string("TODO")));
        const int min = (int(node.items.size()) + FN_ARGS_BACK);
        const int max = ((node.kind == std::string("fn")) ? 0xffffff : min);
        s_Template tempatle = s_Template { fu_CLONE(node), std::unordered_map<std::string, s_SolvedNode>{} };
        std::vector<std::string> arg_n {};
        if ((node.kind == std::string("fn")))
        {
            const std::vector<s_Node>& items = node.items;
            const int numArgs = (int(items.size()) + FN_ARGS_BACK);
            for (int i = 0; (i < numArgs); i++)
            {
                const s_Node& arg = ([&]() -> const s_Node& { { const s_Node& _ = items.at(i); if (_) return _; } fail(std::string("")); }());
                ((arg.kind == std::string("let")) || fail(std::string("")));
                const std::string& name = ([&]() -> const std::string& { { const std::string& _ = arg.value; if (_.size()) return _; } fail(std::string("")); }());
                arg_n.push_back(name);
            };
        };
        return Scope_add(_scope, std::string("template"), id, t_template, min, max, arg_n, std::vector<s_Type>{}, std::vector<s_SolvedNode>{}, tempatle, s_Partial{});
    };
    s_ScopeIdx FnDecl(const std::string& id, s_SolvedNode& node)
    {
        std::vector<s_SolvedNode> items = fu_CLONE(node.items);
        const s_SolvedNode& rnode = items.at((int(items.size()) + FN_RET_BACK));
        const s_Type& ret = ([&]() -> const s_Type& { if (rnode) { const s_Type& _ = rnode.type; if (_) return _; } fail(std::string("")); }());
        const int max = (int(items.size()) + FN_RET_BACK);
        std::vector<s_SolvedNode> args = ([&](const auto& _) { const auto& _0 = _.begin() + 0; const auto& _1 = _.begin() + max; return std::vector<s_SolvedNode>(_0, _1); } (items));
        std::vector<s_Type> arg_t = std::vector<s_Type>{};
        std::vector<std::string> arg_n = std::vector<std::string>{};
        std::vector<s_SolvedNode> arg_d = std::vector<s_SolvedNode>{};
        int min = 0;
        for (int i = 0; (i < max); i++)
        {
            const s_SolvedNode& arg = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args.at(i); if (_) return _; } fail(std::string("")); }());
            ((arg.kind == std::string("let")) || fail(std::string("")));
            arg_t.push_back(([&]() -> const s_Type& { { const s_Type& _ = arg.type; if (_) return _; } fail(std::string("")); }()));
            arg_n.push_back(([&]() -> const std::string& { { const std::string& _ = arg.value; if (_.size()) return _; } fail(std::string("")); }()));
            const bool isImplicit = !!(arg.flags & F_IMPLICIT);
            if (!isImplicit)
            {
                ((int(arg_d.size()) >= i) || fail(std::string("")));
                const s_SolvedNode& def = arg.items.at(LET_INIT);
                arg_d.push_back(def);
                if (!def)
                    min++;

            };
        };
        s_ScopeIdx overload = Scope_add(_scope, std::string("fn"), id, ret, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{});
        node.target = overload;
        return overload;
    };
    s_ScopeIdx DefaultCtor(const std::string& id, const s_Type& type, const std::vector<s_SolvedNode>& members)
    {
        std::vector<s_Type> arg_t = std::vector<s_Type>{};
        std::vector<std::string> arg_n = std::vector<std::string>{};
        for (int i = 0; (i < int(members.size())); i++)
        {
            const s_SolvedNode& member = members.at(i);
            arg_t.push_back(([&]() -> const s_Type& { { const s_Type& _ = member.type; if (_) return _; } fail(std::string("")); }()));
            arg_n.push_back(([&]() -> const std::string& { { const std::string& _ = member.value; if (_.size()) return _; } fail(std::string("")); }()));
        };
        const int max = int(members.size());
        int min = 0;
        std::vector<s_SolvedNode> arg_d {};
        
        {
            for (int i = 0; (i < int(members.size())); i++)
            {
                const s_SolvedNode& member = members.at(i);
                s_SolvedNode init = ([&]() -> s_SolvedNode { { s_SolvedNode _ = fu_CLONE(member.items.at(LET_INIT)); if (_) return _; } return tryDefaultInit(member.type); }());
                if (!init)
                {
                    min = max;
                    arg_d.clear();
                    break;
                };
                arg_d.push_back(init);
            };
        };
        return Scope_add(_scope, std::string("defctor"), id, type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{});
    };
    s_SolvedNode tryDefaultInit(const s_Type& type)
    {
        if ((type.quals & q_ref))
            return s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        return createDefaultInit(type);
    };
    s_SolvedNode createDefaultInit(const s_Type& type)
    {
        return s_SolvedNode { std::string("definit"), int{}, std::string{}, std::vector<s_SolvedNode>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(std::string("")); }())), fu_CLONE(type), s_ScopeIdx{} };
    };
    s_SolvedNode solveDefinit(const s_Type& type)
    {
        if (!type)
            fail(std::string("Cannot solve definit, no inferred type."));

        return ([&]() -> s_SolvedNode { { s_SolvedNode _ = tryDefaultInit(type); if (_) return _; } fail((std::string("Cannot definit: ") + serializeType(type))); }());
    };
    s_ScopeIdx Partial(const std::string& id, const s_ScopeIdx& viaIdx, const s_ScopeIdx& overloadIdx)
    {
        s_Overload via = fu_CLONE(GET(viaIdx));
        s_Overload overload = fu_CLONE(GET(overloadIdx));
        std::string kind = std::string("p-unshift");
        int min = (overload.min - 1);
        int max = (overload.max - 1);
        (((min >= 0) && (max >= min)) || fail(std::string("")));
        std::vector<s_Type> arg_t = (overload.args.size() ? ([&](const auto& _) { return std::vector<s_Type>(_.begin() + 1, _.end()); } (overload.args)) : overload.args);
        std::vector<std::string> arg_n = (overload.names.size() ? ([&](const auto& _) { return std::vector<std::string>(_.begin() + 1, _.end()); } (overload.names)) : overload.names);
        std::vector<s_SolvedNode> arg_d = (overload.defaults.size() ? ([&](const auto& _) { return std::vector<s_SolvedNode>(_.begin() + 1, _.end()); } (overload.defaults)) : overload.defaults);
        if ((via.kind != std::string("var")))
        {
            kind = std::string("p-wrap");
            min++;
            max++;
            const s_Type& via_t = ([&]() -> const s_Type& { if (via.args.size()) { const s_Type& _ = via.args.at(0); if (_) return _; } fail(std::string("")); }());
            ([&](auto& _) { _.insert(_.begin(), via_t); } (arg_t));
            if (arg_n.size())
                ([&](auto& _) { _.insert(_.begin(), std::string("using")); } (arg_n));

            if (arg_d.size())
                ([&](auto& _) { _.insert(_.begin(), s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }); } (arg_d));

        };
        return Scope_add(_scope, kind, id, overload.type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial { fu_CLONE(viaIdx), fu_CLONE(overloadIdx) });
    };
    bool hasIdentifierChars(const std::string& id)
    {
        for (int i = 0; (i < int(id.size())); i++)
        {
            std::string c = std::string(1, id.at(i));
            if (((c == std::string("_")) || ((c >= std::string("a")) && (c <= std::string("z"))) || ((c >= std::string("A")) && (c <= std::string("Z"))) || ((c >= std::string("0")) && (c <= std::string("9")))))
                return true;

        };
        return false;
    };
    void scope_using(const s_ScopeIdx& viaIdx)
    {
        s_Overload via = fu_CLONE(GET(viaIdx));
        const s_Type& actual = ([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(std::string("")); }());
        std::vector<std::string> keys = Scope_keys(_scope);
        for (int i = 0; (i < int(keys.size())); i++)
        {
            const std::string& id = keys.at(i);
            if (!hasIdentifierChars(id))
            {
                continue;
            };
            std::vector<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
            if (!overloads.size())
            {
                continue;
            };
            bool arity0 = false;
            const int MUT_n0 = int(overloads.size());
            for (int i = 0; (i < MUT_n0); i++)
            {
                const s_ScopeIdx& overloadIdx = overloads.at(i);
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
                const s_Type& expect = ([&]() -> const s_Type& { { const s_Type& _ = ([&]() -> const std::vector<s_Type>& { { const std::vector<s_Type>& _ = overload.args; if (_.size()) return _; } fail(std::string("")); }()).at(0); if (_) return _; } fail(std::string("")); }());
                if (!isAssignableAsArgument(expect, fu_CLONE(actual)))
                {
                    continue;
                };
                if (((overload.min < 2) && arity0))
                    fail(((std::string("`using` arity-0 conflict: `") + id) + std::string("`.")));

                Partial(id, viaIdx, overloadIdx);
            };
        };
    };
    std::vector<int> getNamedArgReorder(const std::vector<std::string>& callsite, const std::vector<std::string>& declaration)
    {
        std::vector<int> result = std::vector<int>{};
        int offset = 0;
        for (int i = 0; (i < int(declaration.size())); i++)
        {
            int idx = ([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, declaration.at(i)); return _1 != _N ? int(_1 - _0) : -1; } (callsite));
            if ((idx < 0))
            {
                for (int i = fu_CLONE(offset); (i < int(callsite.size())); i++)
                {
                    offset++;
                    if (!callsite.at(i).size())
                    {
                        idx = i;
                        break;
                    };
                };
            };
            result.push_back(idx);
        };
        return result;
    };
    s_ScopeIdx scope_tryMatch__mutargs(const std::string& id, std::vector<s_SolvedNode>& args, const int& flags, const s_Type& retType)
    {
        s_ScopeIdx matchIdx {};
        std::vector<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
        if (!overloads.size())
            return matchIdx;

        if (!int(args.size()))
        {
            const s_ScopeIdx& headIdx = overloads.at(0);
            if ((GET(headIdx).min == 0))
                matchIdx = headIdx;

        };
        if (!matchIdx)
        {
            const int arity = int(args.size());
            std::vector<std::string> names {};
            if ((flags & F_NAMED_ARGS))
            {
                bool some = false;
                for (int i = 0; (i < arity); i++)
                {
                    s_SolvedNode arg = fu_CLONE(args.at(i));
                    names.push_back(((arg.kind == std::string("label")) ? ([&]() -> const std::string& { { const std::string& _ = ((void)(some = true), arg.value); if (_.size()) return _; } fail(std::string("")); }()) : std::string("")));
                };
                (some || fail(std::string("")));
            };
            std::vector<int> reorder {};
            for (int i = 0; (i < int(overloads.size())); i++){
            {
                s_ScopeIdx overloadIdx = fu_CLONE(overloads.at(i));
                s_Overload overload = fu_CLONE(GET(overloadIdx));
                while (true){
                {
                    if (((overload.min > arity) || (overload.max < arity)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((retType && !isAssignable(retType, ([&]() -> s_Type& { { s_Type& _ = overload.type; if (_) return _; } fail(std::string("")); }()))))
                    {
                        goto L_NEXT_c;
                    };
                    if ((names.size() && overload.names.size()))
                        reorder = getNamedArgReorder(names, overload.names);
                    else
                        reorder.clear();

                    if (overload.tempatle)
                    {
                        if (reorder.size())
                            fail(std::string("TODO handle argument reorder in template specialization."));

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

                std::vector<s_Type> arg_t = fu_CLONE(([&]() -> std::vector<s_Type>& { { std::vector<s_Type>& _ = overload.args; if (_.size()) return _; } fail(std::string("")); }()));
                std::vector<s_SolvedNode> arg_d = fu_CLONE(overload.defaults);
                const int N = (reorder.size() ? int(reorder.size()) : int(args.size()));
                for (int i = 0; (i < N); i++)
                {
                    const int callsiteIndex = fu_CLONE((reorder.size() ? reorder.at(i) : i));
                    if ((callsiteIndex < 0))
                    {
                        if (!(arg_d.size() && arg_d.at(i)))
                        {
                            goto L_NEXT_c;
                        };
                        continue;
                    };
                    if (!isAssignableAsArgument(arg_t.at(i), fu_CLONE(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.at(callsiteIndex); if (_) return _; } fail(std::string("")); }()).type)))
                    {
                        goto L_NEXT_c;
                    };
                };
                if (matchIdx)
                    fail(((std::string("Ambiguous callsite, matches multiple functions in scope: `") + id) + std::string("`.")));

                matchIdx = overloadIdx;
                if (reorder.size())
                {
                    std::vector<s_SolvedNode> new_args {};
                    new_args.resize(int(reorder.size()));
                    for (int i = 0; (i < int(reorder.size())); i++)
                    {
                        const int idx = fu_CLONE(reorder.at(i));
                        if ((idx >= 0))
                            new_args.at(i) = args.at(idx);

                    };
                    args = new_args;
                };
            
                }L_NEXT_c:;};
        };
        if (matchIdx)
        {
            s_Overload matched = fu_CLONE(GET(matchIdx));
            const std::vector<s_SolvedNode>& arg_d = matched.defaults;
            if (arg_d.size())
            {
                if ((int(args.size()) < int(arg_d.size())))
                    args.resize(int(arg_d.size()));

                for (int i = 0; (i < int(arg_d.size())); i++)
                    args.at(i) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args.at(i); if (_) return _; } if (arg_d.size()) { const s_SolvedNode& _ = arg_d.at(i); if (_) return _; } fail(std::string("")); }());

            };
            const std::vector<s_Type>& arg_t = matched.args;
            if ((arg_t.size() && (int(args.size()) < int(arg_t.size()))))
            {
                const std::vector<std::string>& arg_n = ([&]() -> const std::vector<std::string>& { { const std::vector<std::string>& _ = matched.names; if (_.size()) return _; } fail(std::string("")); }());
                for (int i = int(args.size()); (i < int(arg_t.size())); i++)
                {
                    const std::string& id = arg_n.at(i);
                    const s_Type& type = arg_t.at(i);
                    bindImplicitArg(args, i, id, type);
                };
            };
        };
        return matchIdx;
    };
    s_ScopeIdx scope_match__mutargs(const std::string& id, std::vector<s_SolvedNode>& args, const int& flags)
    {
        s_ScopeIdx ret = scope_tryMatch__mutargs(id, args, flags, s_Type{});
        if (ret)
            return ret;

        (Scope_lookup(_scope, id).size() ? fail(((std::string("No overload of `") + id) + std::string("` matches call signature."))) : fail(((std::string("`") + id) + std::string("` is not defined."))));
    };
    s_SolvedNode solveNode(const s_Node& node, const s_Type& type)
    {
        const std::string& k = node.kind;
        if ((k == std::string("root")))
            return solveRoot(node);

        if ((k == std::string("block")))
            return solveBlock(node);

        if ((k == std::string("label")))
            return solveComma(node);

        if ((k == std::string("comma")))
            return solveComma(node);

        if ((k == std::string("let")))
            return solveLet(node);

        if ((k == std::string("call")))
            return solveCall(node);

        if ((k == std::string("arrlit")))
            return solveArrayLiteral(node, type);

        if ((k == std::string("if")))
            return solveIf(node);

        if ((k == std::string("or")))
            return solveOr(node, fu_CLONE(type));

        if ((k == std::string("!")))
            return solveNot(node);

        if ((k == std::string("and")))
            return solveAnd(node, fu_CLONE(type));

        if ((k == std::string("return")))
            return solveReturn(node);

        if ((k == std::string("loop")))
            return solveBlock(node);

        if ((k == std::string("break")))
            return solveJump(node);

        if ((k == std::string("continue")))
            return solveJump(node);

        if ((k == std::string("int")))
            return solveInt(node);

        if ((k == std::string("str")))
            return solveStr(node);

        if ((k == std::string("empty")))
            return solveEmpty(node);

        if ((k == std::string("definit")))
            return solveDefinit(type);

        fail((std::string("TODO: ") + k));
    };
    bool isUnordered(const std::string& kind)
    {
        return ((kind == std::string("fn")) || (kind == std::string("struct")));
    };
    s_SolvedNode unorderedPrep(const s_Node& node)
    {
        const std::string& k = node.kind;
        if ((k == std::string("fn")))
            return uPrepFn(node);

        if ((k == std::string("struct")))
            return uPrepStruct(node);

        fail((std::string("TODO: ") + k));
    };
    s_SolvedNode unorderedSolve(const s_Node& node, const s_SolvedNode& prep)
    {
        const std::string& k = node.kind;
        if ((k == std::string("fn")))
            return uSolveFn(node, prep);

        if ((k == std::string("struct")))
            return uSolveStruct(node, prep);

        fail((std::string("TODO: ") + k));
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
        std::vector<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at((int(items.size()) - 1)); if (_) return _; } fail(std::string("")); }());
        return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = last.type; if (_) return _; } fail(std::string("")); }()), items);
    };
    s_SolvedNode solveInt(const s_Node& node)
    {
        return solved(node, t_i32, std::vector<s_SolvedNode>{});
    };
    s_SolvedNode solveStr(const s_Node& node)
    {
        return solved(node, t_string, std::vector<s_SolvedNode>{});
    };
    s_SolvedNode solveEmpty(const s_Node& node)
    {
        return solved(node, t_void, std::vector<s_SolvedNode>{});
    };
    s_Node createTypeParam(const std::string& value)
    {
        return s_Node { std::string("typeparam"), int{}, fu_CLONE(value), std::vector<s_Node>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(std::string("")); }())) };
    };
    s_SolvedNode uPrepFn(const s_Node& node)
    {
        return __solveFn(false, false, node, s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }, -1);
    };
    s_SolvedNode uSolveFn(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveFn(true, false, node, prep, -1);
    };
    s_SolvedNode __solveFn(const bool& solve, const bool& spec, const s_Node& n_fn, const s_SolvedNode& prep, const int& caseIdx)
    {
        const std::string& id = ([&]() -> const std::string& { { const std::string& _ = n_fn.value; if (_.size()) return _; } fail(std::string("TODO anonymous fns")); }());
        if (spec)
        {
            (solve || fail(std::string("")));
        }
        else if ((n_fn.flags & F_TEMPLATE))
        {
            if (solve)
                return ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = prep; if (_) return _; } fail(std::string("")); }());

            s_ScopeIdx tDecl = TemplateDecl(n_fn);
            s_SolvedNode out = solved(n_fn, t_void, std::vector<s_SolvedNode>{});
            out.target = tDecl;
            return out;
        };
        if ((!solve && !(n_fn.flags & F_FULLY_TYPED)))
            return s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        const std::vector<s_Node>& inItems = n_fn.items;
        ((int(inItems.size()) >= FN_RET_BACK) || fail(std::string("")));
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = fu_CLONE(prep); if (_) return _; } return solved(n_fn, t_void, std::vector<s_SolvedNode>{}); }());
        out.items.resize(int(inItems.size()));
        if ((_current_fn && (id != std::string("free"))))
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
        };
        
        {
            s_SolvedNode current_fn0 = fu_CLONE(_current_fn);
            const int scope0 = Scope_push(_scope);
            _current_fn = out;
            std::vector<s_SolvedNode>& outItems = _current_fn.items;
            for (int i = 0; (i < (int(inItems.size()) + FN_ARGS_BACK)); i++)
            {
                const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems.at(i); if (_) return _; } fail(std::string("")); }());
                ((n_arg.kind == std::string("let")) || fail(std::string("")));
                if (spec)
                {
                    s_Node mut_arg = fu_CLONE(n_arg);
                    mut_arg.items.at(LET_TYPE) = createTypeParam(mut_arg.value);
                    outItems.at(i) = solveLet(mut_arg);
                }
                else
                    outItems.at(i) = solveLet(n_arg);

            };
            s_Node n_ret = fu_CLONE(inItems.at((int(inItems.size()) + FN_RET_BACK)));
            s_Node n_body = fu_CLONE(([&]() -> const s_Node& { { const s_Node& _ = inItems.at((int(inItems.size()) + FN_BODY_BACK)); if (_) return _; } fail(std::string("")); }()));
            if ((caseIdx >= 0))
            {
                ((n_body.kind == std::string("pattern")) || fail(std::string("")));
                s_Node branch = fu_CLONE(([&]() -> s_Node& { { s_Node& _ = n_body.items.at(caseIdx); if (_) return _; } fail(std::string("")); }()));
                const std::vector<s_Node>& items = branch.items;
                n_ret = ([&]() -> const s_Node& { { const s_Node& _ = items.at((int(items.size()) + FN_RET_BACK)); if (_) return _; } return n_ret; }());
                n_body = items.at((int(items.size()) + FN_BODY_BACK));
            };
            
            {
                s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(n_ret) : s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
                outItems.at((int(outItems.size()) + FN_RET_BACK)) = s_ret;
            };
            if (solve)
            {
                s_SolvedNode s_body = solveNode(n_body, s_Type{});
                (s_body || fail(std::string("")));
                outItems.at((int(outItems.size()) + FN_BODY_BACK)) = s_body;
            };
            out = _current_fn;
            _current_fn = current_fn0;
            Scope_pop(_scope, scope0);
        };
        if (!prep)
            FnDecl(id, out);

        (!solve || out.items.at((int(out.items.size()) + FN_BODY_BACK)) || fail(std::string("")));
        return out;
    };
    std::string TODO_memoize_mangler(const std::vector<s_SolvedNode>& args)
    {
        std::string mangle = std::string("");
        for (int i = 0; (i < int(args.size())); i++)
            mangle += (std::string("\v") + serializeType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args.at(i); if (_) return _; } fail(std::string("")); }()).type));

        return mangle;
    };
    s_ScopeIdx trySpecialize(s_Template& tempatle, const std::vector<s_SolvedNode>& args)
    {
        std::string mangle = TODO_memoize_mangler(args);
        s_SolvedNode spec = fu_CLONE(([&](s_SolvedNode& _) -> s_SolvedNode& { if (!_) _ = doTrySpecialize(tempatle, args); return _; } (tempatle.specializations[mangle])));
        return spec.target;
    };
    s_SolvedNode doTrySpecialize(s_Template& tempatle, const std::vector<s_SolvedNode>& args)
    {
        s_Node node = fu_CLONE(tempatle.node);
        ((node.kind == std::string("fn")) || fail(std::string("TODO")));
        s_SolvedNode result = trySpecializeFn(node, args);
        if (!result)
            result.kind = std::string("spec-fail");

        return result;
    };
    s_SolvedNode trySpecializeFn(const s_Node& node, const std::vector<s_SolvedNode>& args)
    {
        const std::vector<s_Node>& items = node.items;
        std::unordered_map<std::string, s_Type> typeParams {};
        const int numArgs = (int(items.size()) + FN_ARGS_BACK);
        for (int i = 0; (i < numArgs); i++)
        {
            const s_Node& argNode = ([&]() -> const s_Node& { { const s_Node& _ = items.at(i); if (_) return _; } fail(std::string("")); }());
            ((argNode.kind == std::string("let")) || fail(std::string("")));
            s_Type inType = ((int(args.size()) > i) ? args.at(i).type : s_Type { std::string{}, int{} });
            if (inType)
            {
                const std::string& argName = ([&]() -> const std::string& { { const std::string& _ = argNode.value; if (_.size()) return _; } fail(std::string("")); }());
                s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { std::string{}, int{} }; return _; } (typeParams[argName]));
                ([&]() -> s_Type& { { s_Type& _ = argName_typeParam; if (!_) return _; } fail(((std::string("Type param name collision with argument: `") + argName) + std::string("`."))); }()) = inType;
            };
            inType.quals |= q_ref;
            if ((argNode.flags & F_TEMPLATE))
            {
                const s_Node& annot = argNode.items.at(LET_TYPE);
                if (annot)
                {
                    const bool ok = (inType && trySolveTypeParams(annot, fu_CLONE(inType), typeParams));
                    if (!ok)
                        return s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

                };
            };
        };
        int caseIdx = -1;
        const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items.at((int(items.size()) + FN_BODY_BACK)); if (_) return _; } fail(std::string("")); }());
        if ((pattern.kind == std::string("pattern")))
        {
            const std::vector<s_Node>& branches = pattern.items;
            for (int i = 0; (i < int(branches.size())); i++)
            {
                const s_Node& branch = branches.at(i);
                const std::vector<s_Node>& items = ([&]() -> const s_Node& { { const s_Node& _ = branch; if (_) return _; } fail(std::string("")); }()).items;
                const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = items.at(0); if (_) return _; } fail(std::string("")); }());
                if (evalTypePattern(cond, typeParams))
                {
                    caseIdx = i;
                    break;
                };
            };
            if ((caseIdx < 0))
                return s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };

        };
        const int scope0 = Scope_push(_scope);
        std::unordered_map<std::string, s_Type> typeParams0 = fu_CLONE(_typeParams);
        s_SolvedNode current_fn0 = fu_CLONE(_current_fn);
        _typeParams = typeParams;
        _current_fn = s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} };
        s_SolvedNode specialized = __solveFn(true, true, node, s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} }, caseIdx);
        (specialized || fail(std::string("")));
        _current_fn = current_fn0;
        _typeParams = typeParams0;
        Scope_pop(_scope, scope0);
        return specialized;
    };
    s_SolvedNode uPrepStruct(const s_Node& node)
    {
        return __solveStruct(false, node, s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
    };
    s_SolvedNode uSolveStruct(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveStruct(true, node, prep);
    };
    s_SolvedNode __solveStruct(const bool& solve, const s_Node& node, const s_SolvedNode& prep)
    {
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = fu_CLONE(prep); if (_) return _; } return solved(node, t_void, std::vector<s_SolvedNode>{}); }());
        const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("TODO anonymous structs")); }());
        s_Type type = initStruct(id, node.flags, ctx);
        if (!prep)
            out.target = Scope_Typedef(_scope, id, type);

        if (!solve)
            return out;

        
        {
            s_Type current_strt0 = fu_CLONE(_current_strt);
            _current_strt = type;
            out.items = solveNodes(node.items, s_Type{});
            _current_strt = current_strt0;
        };
        
        {
            std::vector<s_SolvedNode> members {};
            std::vector<s_SolvedNode> items = fu_CLONE(out.items);
            std::vector<s_StructField> fields {};
            for (int i = 0; (i < int(items.size())); i++)
            {
                const s_SolvedNode& item = items.at(i);
                if ((item && (item.kind == std::string("let")) && (item.flags & F_FIELD)))
                {
                    members.push_back(item);
                    fields.push_back(s_StructField { fu_CLONE(([&]() -> const std::string& { { const std::string& _ = item.value; if (_.size()) return _; } fail(std::string("")); }())), fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = item.type; if (_) return _; } fail(std::string("")); }())) });
                };
            };
            finalizeStruct(id, fields, ctx);
            DefaultCtor(id, type, members);
        };
        return out;
    };
    s_SolvedNode solveReturn(const s_Node& node)
    {
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, s_Type{}));
        const s_SolvedNode& nextExpr = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = out.items.at(0); if (_) return _; } return out; }());
        const s_Type& nextType = ([&]() -> const s_Type& { { const s_Type& _ = nextExpr.type; if (_) return _; } fail(std::string("")); }());
        const int retIdx = (int(_current_fn.items.size()) + FN_RET_BACK);
        s_SolvedNode prevExpr = fu_CLONE(_current_fn.items.at(retIdx));
        const s_Type& prevType = prevExpr.type;
        if (prevType)
        {
            (isAssignable(prevType, nextType) || fail((((std::string("Non-assignable return types: ") + serializeType(prevType)) + std::string(" <- ")) + serializeType(nextType))));
        }
        else
            _current_fn.items.at(retIdx) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nextExpr; if (_) return _; } fail(std::string("")); }());

        return out;
    };
    s_SolvedNode solveJump(const s_Node& node)
    {
        return solved(node, t_void, std::vector<s_SolvedNode>{});
    };
    s_SolvedNode solveLet(const s_Node& node)
    {
        const s_Node& annot = node.items.at(LET_TYPE);
        const s_Node& init = node.items.at(LET_INIT);
        s_SolvedNode s_annot = ([&]() -> s_SolvedNode { if (annot) return evalTypeAnnot(annot); else return s_SolvedNode{}; }());
        const s_Type& t_annot = s_annot.type;
        s_SolvedNode s_init = ([&]() -> s_SolvedNode { if (init) return solveNode(init, t_annot); else return s_SolvedNode{}; }());
        s_Type t_init = fu_CLONE(s_init.type);
        s_Type t_let = (t_annot ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(t_annot) : t_annot) : (((t_init.quals & q_mutref) || (node.flags & F_MUT)) ? clear_refs(t_init) : ([&]() -> const s_Type& { { const s_Type& _ = t_init; if (_) return _; } fail(std::string("Variable declarations without explicit type annotations must be initialized.")); }())));
        if ((t_annot && t_init))
        {
            (isAssignable(t_annot, t_init) || fail(std::string("Type annotation does not match init expression.")));
        };
        if (s_init)
            s_init = maybeCopyOrMove(s_init, t_let);

        s_SolvedNode out = solved(node, t_let, std::vector<s_SolvedNode> { ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = s_annot; if (_) return _; } return s_init; }()), s_init });
        const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
        if ((node.flags & F_MUT))
        {
            ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = _current_fn; if (_) return _; } fail(std::string("Mutable statics are not currently allowed.")); }());
        };
        s_ScopeIdx overload = ((out.flags & F_FIELD) ? Field(id, ([&]() -> s_Type& { { s_Type& _ = _current_strt; if (_) return _; } fail(std::string("")); }()), t_let) : Binding(id, ((node.flags & F_MUT) ? add_mutref(t_let) : add_ref(t_let))));
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode evalTypeAnnot(const s_Node& node)
    {
        if ((node.kind == std::string("call")))
        {
            const std::vector<s_Node>& items = node.items;
            if (int(items.size()))
            {
                if ((int(items.size()) == 1))
                {
                    s_Type t = evalTypeAnnot(items.at(0)).type;
                    (t || fail(std::string("")));
                    if ((node.value == std::string("&")))
                        return solved(node, add_ref(t), std::vector<s_SolvedNode>{});

                    if ((node.value == std::string("&mut")))
                        return solved(node, add_mutref(t), std::vector<s_SolvedNode>{});

                    if ((node.value == std::string("[]")))
                        return solved(node, createArray(t, ctx), std::vector<s_SolvedNode>{});

                }
                else if ((int(items.size()) == 2))
                {
                    s_Type a = evalTypeAnnot(items.at(0)).type;
                    s_Type b = evalTypeAnnot(items.at(1)).type;
                    ((a && b) || fail(std::string("")));
                    if ((node.value == std::string("Map")))
                        return solved(node, createMap(a, b, ctx), std::vector<s_SolvedNode>{});

                };
            }
            else
            {
                const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
                std::vector<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
                if (overloads.size())
                {
                    for (int i = 0; (i < int(overloads.size())); i++)
                    {
                        s_Overload maybe = fu_CLONE(GET(overloads.at(i)));
                        if ((maybe.kind == std::string("type")))
                            return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(std::string("")); }()), std::vector<s_SolvedNode>{});

                    };
                };
                fail(((std::string("No type `") + id) + std::string("` in scope.")));
            };
        }
        else if ((node.kind == std::string("typeparam")))
        {
            const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
            (_typeParams.size() || fail(((std::string("Unexpected type param: `$") + id) + std::string("`."))));
            s_Type type = fu_CLONE(([&]() -> s_Type& { if (_typeParams.size()) { s_Type& _ = _typeParams.at(id); if (_) return _; } fail(((std::string("No type param `$") + id) + std::string("` in scope."))); }()));
            return solved(node, type, std::vector<s_SolvedNode>{});
        };
        fail(std::string("TODO"));
    };
    bool trySolveTypeParams(const s_Node& node, s_Type type, std::unordered_map<std::string, s_Type>& typeParams)
    {
        if ((node.kind == std::string("call")))
        {
            const std::vector<s_Node>& items = node.items;
            if (int(items.size()))
            {
                if ((int(items.size()) == 1))
                {
                    s_Type t = ((node.value == std::string("&")) ? tryClear_ref(type) : ((node.value == std::string("&mut")) ? tryClear_mutref(type) : ((node.value == std::string("[]")) ? tryClear_array(type, ctx) : ((void)fail(std::string("TODO")), s_Type { std::string{}, int{} }))));
                    if (!t)
                        return false;

                    return trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items.at(0); if (_) return _; } fail(std::string("")); }()), fu_CLONE(t), typeParams);
                }
                else if ((int(items.size()) == 2))
                {
                    if ((node.value == std::string("Map")))
                    {
                        s_MapFields kv = tryClear_map(type, ctx);
                        if (!kv)
                            return false;

                        return (trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items.at(0); if (_) return _; } fail(std::string("")); }()), fu_CLONE(kv.key), typeParams) && trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items.at(1); if (_) return _; } fail(std::string("")); }()), fu_CLONE(kv.value), typeParams));
                    };
                };
            }
            else
            {
                const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
                std::vector<s_ScopeIdx> overloads = Scope_lookup(_scope, id);
                if (overloads.size())
                {
                    for (int i = 0; (i < int(overloads.size())); i++)
                    {
                        s_Overload maybe = fu_CLONE(GET(overloads.at(i)));
                        if ((maybe.kind == std::string("type")))
                            return isAssignable(([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(std::string("")); }()), type);

                    };
                };
                fail(((std::string("No type `") + id) + std::string("` in scope.")));
            };
        }
        else if ((node.kind == std::string("typeparam")))
        {
            const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
            s_Type& _param = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { std::string{}, int{} }; return _; } (typeParams[id]));
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
        fail(std::string("TODO"));
    };
    bool evalTypePattern(const s_Node& node, const std::unordered_map<std::string, s_Type>& typeParams)
    {
        const std::vector<s_Node>& items = node.items;
        if (((node.kind == std::string("call")) && (int(items.size()) == 2)))
        {
            const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = items.at(0); if (_) return _; } fail(std::string("")); }());
            const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = items.at(1); if (_) return _; } fail(std::string("")); }());
            if ((node.value == std::string("->")))
            {
                if (((left.kind == std::string("typeparam")) && (right.kind == std::string("typetag"))))
                {
                    const std::string& tag = ([&]() -> const std::string& { { const std::string& _ = right.value; if (_.size()) return _; } fail(std::string("")); }());
                    const s_Type& type = ([&]() -> const s_Type& { if (left.value.size()) { const s_Type& _ = fu_MAP_CONST_GET(typeParams, left.value); if (_) return _; } fail(((std::string("No type param `$") + left.value) + std::string("` in scope."))); }());
                    return type_has(type, tag);
                }
                else
                {
                    std::unordered_map<std::string, s_Type> typeParams0 = fu_CLONE(_typeParams);
                    _typeParams = typeParams;
                    s_Type expect = evalTypeAnnot(right).type;
                    s_Type actual = evalTypeAnnot(left).type;
                    _typeParams = typeParams0;
                    return isAssignable(expect, actual);
                };
            }
            else if ((node.value == std::string("&&")))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));
            else if ((node.value == std::string("||")))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));

        };
        fail(std::string("TODO"));
    };
    s_Node createRead(const std::string& id)
    {
        return s_Node { std::string("call"), fu_CLONE(F_ID), fu_CLONE(id), std::vector<s_Node>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(std::string("")); }())) };
    };
    s_SolvedNode solveCall(const s_Node& node)
    {
        const std::string& id = node.value;
        (id.size() || fail(std::string("")));
        std::vector<s_SolvedNode> args = solveNodes(node.items, s_Type{});
        s_ScopeIdx callTargIdx = scope_match__mutargs(id, args, node.flags);
        s_Overload callTarg = fu_CLONE(GET(callTargIdx));
        while (callTarg.partial)
        {
            const bool unshift = (callTarg.kind == std::string("p-unshift"));
            s_Partial partial = fu_CLONE(([&]() -> s_Partial& { { s_Partial& _ = callTarg.partial; if (_) return _; } fail(std::string("")); }()));
            const s_ScopeIdx& viaIdx = ([&]() -> const s_ScopeIdx& { { const s_ScopeIdx& _ = partial.via; if (_) return _; } fail(std::string("")); }());
            callTargIdx = ([&]() -> const s_ScopeIdx& { { const s_ScopeIdx& _ = partial.target; if (_) return _; } fail(std::string("")); }());
            s_Overload via = fu_CLONE(GET(viaIdx));
            callTarg = GET(callTargIdx);
            std::vector<s_SolvedNode> innerArgs {};
            if (!unshift)
                innerArgs = std::vector<s_SolvedNode> { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.at(0); if (_) return _; } fail(std::string("")); }()) };

            s_SolvedNode argNode = CallerNode(createRead(std::string("__partial")), fu_CLONE(([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(std::string("")); }())), viaIdx, fu_CLONE(innerArgs));
            if (unshift)
                ([&](auto& _) { _.insert(_.begin(), argNode); } (args));
            else
                args.at(0) = argNode;

        };
        return CallerNode(node, fu_CLONE(([&]() -> s_Type& { { s_Type& _ = callTarg.type; if (_) return _; } fail(std::string("")); }())), callTargIdx, fu_CLONE(args));
    };
    s_SolvedNode solveArrayLiteral(const s_Node& node, const s_Type& type)
    {
        std::vector<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        s_Type itemType = (type ? tryClear_array(type, ctx) : s_Type { std::string{}, int{} });
        int startAt = 0;
        if ((!itemType && int(items.size())))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at(startAt++); if (_) return _; } fail(std::string("")); }());
            itemType = clear_refs(head.type);
        };
        if (!itemType)
            fail(std::string("Cannot infer empty arraylit."));

        for (int i = fu_CLONE(startAt); (i < int(items.size())); i++)
        {
            itemType = type_tryInter(itemType, ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at(i); if (_) return _; } fail(std::string("")); }()).type);
            (itemType || fail(std::string("[array literal] No common supertype.")));
        };
        return solved(node, createArray(itemType, ctx), items);
    };
    s_SolvedNode createLet(const std::string& id, const s_Type& type, const int& flags)
    {
        return s_SolvedNode { std::string("let"), fu_CLONE(flags), fu_CLONE(id), std::vector<s_SolvedNode>{}, fu_CLONE(([&]() -> s_Token& { { s_Token& _ = _here; if (_) return _; } fail(std::string("")); }())), fu_CLONE(type), s_ScopeIdx{} };
    };
    s_ScopeIdx injectImplicitArg__mutfn(s_SolvedNode& fnNode, const std::string& id, const s_Type& type)
    {
        const int newArgIdx = (int(fnNode.items.size()) + FN_RET_BACK);
        s_SolvedNode newArgNode = createLet(id, type, F_IMPLICIT);
        ([&](auto& _) { _.insert(_.begin() + newArgIdx, newArgNode); } (fnNode.items));
        if (fnNode.target)
        {
            s_Overload& o = GET(fnNode.target);
            ((o.kind == std::string("fn")) || fail(std::string("")));
            ((int(o.names.size()) == int(o.args.size())) || fail(std::string("")));
            ((([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, id); return _1 != _N ? int(_1 - _0) : -1; } (o.names)) < 0) || fail(std::string("Implicit argument name collision.")));
            o.args.push_back(type);
            o.names.push_back(id);
        };
        const int scope0 = Scope_push(_scope);
        s_ScopeIdx overload = Binding(id, type);
        Scope_pop(_scope, scope0);
        return overload;
    };
    void bindImplicitArg(std::vector<s_SolvedNode>& args, const int& argIdx, const std::string& id, const s_Type& type)
    {
        (TEST_expectImplicits || fail(std::string("Attempting to propagate implicit arguments.")));
        ((int(args.size()) >= argIdx) || fail(std::string("")));
        ([&](auto& _) { _.insert(_.begin() + argIdx, CallerNode(createRead(id), fu_CLONE(type), getImplicit(id, type), std::vector<s_SolvedNode>{})); } (args));
    };
    s_ScopeIdx getImplicit(const std::string& id, const s_Type& type)
    {
        std::vector<s_SolvedNode> args {};
        s_ScopeIdx matched = scope_tryMatch__mutargs(id, args, 0, type);
        if (!matched)
        {
            if (!_current_fn)
                fail(((std::string("No implicit `") + id) + std::string("` in scope.")));

            matched = injectImplicitArg__mutfn(_current_fn, id, type);
            (matched || fail(std::string("")));
        };
        return matched;
    };
    s_SolvedNode solveIf(const s_Node& node)
    {
        const s_Node& n0 = node.items.at(0);
        const s_Node& n1 = node.items.at(1);
        const s_Node& n2 = node.items.at(2);
        s_SolvedNode cond = solveNode(n0, t_bool);
        s_SolvedNode cons = (n1 ? solveNode(n1, s_Type{}) : s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        s_SolvedNode alt = (n2 ? solveNode(n2, cons.type) : s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        const s_SolvedNode& priExpr = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = cons; if (_) return _; } { const s_SolvedNode& _ = alt; if (_) return _; } fail(std::string("")); }());
        const s_SolvedNode& secExpr = ([&]() -> const s_SolvedNode& { if (cons) { const s_SolvedNode& _ = alt; if (_) return _; } return cons; }());
        const s_Type& priType = priExpr.type;
        const s_Type& secType = secExpr.type;
        s_Type outType = (!secType ? priType : type_tryInter(priType, secType));
        (outType || fail(std::string("No common supertype.")));
        return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = outType; if (_) return _; } fail(std::string("")); }()), std::vector<s_SolvedNode> { cond, cons, alt });
    };
    s_SolvedNode solveNot(const s_Node& node)
    {
        return solved(node, t_bool, std::vector<s_SolvedNode> { solveNode(node.items.at(0), t_bool) });
    };
    s_SolvedNode solveOr(const s_Node& node, s_Type type)
    {
        std::vector<s_SolvedNode> items = solveNodes(node.items, type);
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = 0; (i < int(items.size())); i++)
            {
                s_SolvedNode item = fu_CLONE(items.at(i));
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
                if (!(sumType.quals & q_ref))
                {
                    for (int i = 0; (i < int(items.size())); i++)
                    {
                        if ((items.at(i).type.quals & q_ref))
                            items.at(i) = maybeCopyOrMove(items.at(i), sumType);

                    };
                };
                type = sumType;
            }
            else
                type = t_bool;

        };
        return solved(node, type, items);
    };
    s_SolvedNode solveAnd(const s_Node& node, s_Type type)
    {
        std::vector<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = int(items.size()); (i-- > 0); )
            {
                const s_SolvedNode& item = items.at(i);
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
    s_SolvedNode solved(const s_Node& node, const s_Type& type, const std::vector<s_SolvedNode>& items)
    {
        return s_SolvedNode { fu_CLONE(node.kind), fu_CLONE(node.flags), fu_CLONE(node.value), fu_CLONE(items), fu_CLONE(node.token), fu_CLONE(type), s_ScopeIdx{} };
    };
    s_SolvedNode CallerNode(const s_Node& node, s_Type type, const s_ScopeIdx& target, std::vector<s_SolvedNode> args)
    {
        s_Overload overload = fu_CLONE(GET(target));
        if ((overload.kind == std::string("field")))
        {
            s_SolvedNode head = fu_CLONE(([&]() -> s_SolvedNode& { if ((int(args.size()) == 1)) { s_SolvedNode& _ = args.at(0); if (_) return _; } fail(std::string("")); }()));
            const s_Type& headType = ([&]() -> const s_Type& { { const s_Type& _ = head.type; if (_) return _; } fail(std::string("")); }());
            type = add_refs_from(headType, type);
        }
        else if (int(args.size()))
        {
            const std::vector<s_Type>& arg_t = ([&]() -> const std::vector<s_Type>& { { const std::vector<s_Type>& _ = overload.args; if (_.size()) return _; } fail(std::string("")); }());
            for (int i = 0; (i < int(args.size())); i++)
                args.at(i) = maybeCopyOrMove(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.at(i); if (_) return _; } fail(std::string("")); }()), arg_t.at(i));

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
            fail(std::string("Needs an explicit STEAL or CLONE."));

        return s_SolvedNode { std::string("copy"), int{}, std::string{}, std::vector<s_SolvedNode> { node }, fu_CLONE(node.token), clear_refs(node.type), s_ScopeIdx{} };
    };
    std::vector<s_SolvedNode> solveNodes(const std::vector<s_Node>& nodes, const s_Type& type)
    {
        std::vector<s_SolvedNode> result {};
        s_Token here0 = fu_CLONE(_here);
        result.resize(int(nodes.size()));
        for (int i = 0; (i < int(nodes.size())); i++)
        {
            const s_Node& node = nodes.at(i);
            if (!node)
            {
                continue;
            };
            if (!isUnordered(node.kind))
            {
                _here = ([&]() -> const s_Token& { { const s_Token& _ = node.token; if (_) return _; } return _here; }());
                result.at(i) = solveNode(node, type);
                continue;
            };
            const int i0 = fu_CLONE(i);
            int i1 = int(nodes.size());
            for (int i = fu_CLONE(i0); (i < int(nodes.size())); i++)
            {
                const s_Node& node = nodes.at(i);
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
                result.at(i) = unorderedPrep(node);
            };
            for (int i = fu_CLONE(i0); (i < i1); i++)
            {
                const s_Node& node = nodes.at(i);
                if (node)
                {
                    _here = ([&]() -> const s_Token& { { const s_Token& _ = node.token; if (_) return _; } return _here; }());
                    result.at(i) = unorderedSolve(node, result.at(i));
                };
            };
            ((i1 > i0) || fail(std::string("")));
            i = (i1 - 1);
        };
        ((int(result.size()) == int(nodes.size())) || fail(std::string("")));
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
    Scope_Typedef(scope, std::string("i32"), t_i32);
    Scope_Typedef(scope, std::string("bool"), t_bool);
    Scope_Typedef(scope, std::string("void"), t_void);
    Scope_Typedef(scope, std::string("string"), t_string);
    Scope_Typedef(scope, std::string("never"), t_never);
    return scope;
}
inline const std::string prelude_src = std::string("\n\n\n// Some lolcode.\n\nfn __native_pure(): never never;\n\nfn STEAL (a: &mut $T): $T __native_pure;\nfn CLONE (a: &    $T): $T __native_pure;\n\n\n// Arithmetics.\n\nfn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn /(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @integral):          $T __native_pure;\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\n\nfn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native_pure;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\n\n\n// Logic.\n\nfn true (): bool __native_pure;\nfn false(): bool __native_pure;\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T): &mut $T __native_pure;\nfn ||=(a: &mut $T, b: $T): &mut $T __native_pure;\n\nfn swap(a: &mut $T, b: &mut $T): void __native_pure;\n\n\n// Arrays.\n\nfn len (a: &$T[]):         i32  __native_pure;\nfn find(a: &$T[], b: &$T): i32  __native_pure;\nfn has (a: &$T[], b: &$T): bool __native_pure;\n\nfn [](a: &$T[], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native_pure;\n    case ($a -> &    $T[]): &    $T __native_pure;\n\nfn push   (a: &mut $T[], b: $T):              void __native_pure;\nfn unshift(a: &mut $T[], b: $T):              void __native_pure;\nfn insert (a: &mut $T[], i: i32, b: $T):      void __native_pure;\n\nfn concat (a: &$T[], b: &$T[]):               $T[] __native_pure;\nfn slice  (a: &$T[], i0: i32, i1: i32):       $T[] __native_pure;\nfn slice  (a: &$T[], i0: i32):                $T[] __native_pure;\n\nfn splice (a: &mut $T[], i: i32, count: i32): void __native_pure;\nfn pop    (a: &mut $T[]):                     void __native_pure;\n\nfn clear  (a: &mut $T[]):                     void __native_pure;\nfn resize (a: &mut $T[], len: i32):           void __native_pure;\nfn shrink (a: &mut $T[], len: i32):           void __native_pure;\n\nfn move   (a: &mut $T[], from: i32, to: i32): void __native_pure;\nfn sort   (a: &mut $T[]):                     void __native_pure;\n\n\n// Strings.\n\nfn len(a: &string):                 i32         __native_pure;\nfn [](a: &string, i: i32):          string      __native_pure;\nfn +=(a: &mut string, b: &string):  &mut string __native_pure;\nfn + (a: &string, b: &string):      string      __native_pure;\n\nfn ==(a: &string, b: &string):      bool        __native_pure;\nfn !=(a: &string, b: &string):      bool        __native_pure;\nfn  >(a: &string, b: &string):      bool        __native_pure;\nfn  <(a: &string, b: &string):      bool        __native_pure;\nfn >=(a: &string, b: &string):      bool        __native_pure;\nfn <=(a: &string, b: &string):      bool        __native_pure;\n\nfn find(a: &string, b: &string):    i32         __native_pure;\nfn has(a: &string, b: &string):     bool        __native_pure;\nfn starts(a: &string, with: &string): bool      __native_pure;\n\nfn slice (a: &string, i0: i32, i1: i32): string __native_pure;\nfn slice (a: &string, i0: i32)         : string __native_pure;\n\nfn substr(a: &string, i0: i32, i1: i32): string __native_pure;\nfn char  (a: &string, i0: i32): i32 __native_pure;\n\nfn split(str: &string, sep: &string): string[] __native_pure;\n\n\n// Maps.\n\nfn [](a: &Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native_pure;\n    case ($a -> &    Map($K, $V)): &    $V __native_pure;\n\nfn keys  (a: &Map($K, $V)): $K[] __native_pure;\nfn values(a: &Map($K, $V)): $V[] __native_pure;\nfn has   (a: &Map($K, $V), b: &$K): bool __native_pure;\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native_pure;\nfn assert()             : never __native_pure;\n\n\n// Butt plugs.\n\n// TODO we should go for an any $B -> call stringify(b) macro.\nfn +(a: &string, b: i32): string __native_pure;\nfn join(a: &string[], sep: &string): string __native_pure;\n\n");

s_Scope solvePrelude()
{
    s_LexResult lexed = lex(prelude_src, std::string("__prelude"));
    (lexed.errors.size() || (!lexed.tokens.size() && fu_THROW(std::string("Failure to lex prelude."))));
    s_Node root = parse(std::string("__prelude"), lexed.tokens);
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

struct sf_cpp_codegen
{
    const s_SolvedNode& root;
    const s_Scope& scope;
    const s_TEMP_Context& ctx;
    std::unordered_map<std::string, std::string> _libs {};
    std::unordered_map<std::string, std::string> _tfwd {};
    std::unordered_map<std::string, std::string> _ffwd {};
    std::string _tdef {};
    std::string _fdef {};
    std::string _indent = std::string("\n");
    int _fnN {};
    int _clsrN {};
    int _faasN {};
    const s_Overload& GET(const s_ScopeIdx& idx)
    {
        ((idx.raw > 0) || fu_THROW("Assertion failed."));
        return scope.overloads.at((idx.raw - 1));
    };
    [[noreturn]] fu_NEVER fail(std::string reason)
    {
        fu_THROW(reason);
    };
    void include(const std::string& lib)
    {
        if (!(_libs.count(lib) != 0))
            (_libs[lib] = ((std::string("#include ") + lib) + std::string("\n")));

    };
    std::string typeAnnot(const s_Type& type, const int& mode)
    {
        std::string fwd = typeAnnotBase(type);
        if (((mode & M_RETVAL) && (type.canon == std::string("never"))))
            return (std::string("[[noreturn]] ") + fwd);

        if ((type.quals & q_mutref))
            return (fwd + std::string("&"));

        if ((type.quals & q_ref))
            return ((std::string("const ") + fwd) + std::string("&"));

        if (((mode & M_CONST) && (type.quals & q_trivial)))
            return (std::string("const ") + fwd);

        return fwd;
    };
    std::string typeAnnotBase(const s_Type& type)
    {
        const std::string& c = type.canon;
        if ((c == std::string("i32")))
            return std::string("int");

        if ((c == std::string("bool")))
            return std::string("bool");

        if ((c == std::string("void")))
            return std::string("void");

        if ((c == std::string("string")))
            return annotateString();

        if ((c == std::string("never")))
            return annotateNever();

        const s_Struct& tdef = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(type.canon, ctx); if (_) return _; } fail((std::string("TODO: ") + type.canon)); }());
        const std::string& k = tdef.kind;
        if ((k == std::string("struct")))
        {
            if (!(_tfwd.count(type.canon) != 0))
            {
                (_tfwd[type.canon] = ((std::string("\nstruct ") + type.canon) + std::string(";")));
                _tdef += declareStruct(type, tdef);
            };
            return type.canon;
        };
        if ((k == std::string("array")))
        {
            std::string item = typeAnnot(tdef.fields.at(0).type, 0);
            include(std::string("<vector>"));
            return ((std::string("std::vector<") + item) + std::string(">"));
        };
        if ((k == std::string("map")))
        {
            std::string k = typeAnnot(tdef.fields.at(0).type, 0);
            std::string v = typeAnnot(tdef.fields.at(1).type, 0);
            include(std::string("<unordered_map>"));
            return ((((std::string("std::unordered_map<") + k) + std::string(", ")) + v) + std::string(">"));
        };
        fail((std::string("TODO: ") + tdef.kind));
    };
    std::string declareStruct(const s_Type& t, const s_Struct& s)
    {
        std::string def = ((std::string("\nstruct ") + t.canon) + std::string("\n{"));
        std::string indent = std::string("\n    ");
        if ((s.flags & F_DESTRUCTOR))
        {
            def += std::string("\n    struct Data\n    {");
            indent += std::string("    ");
        };
        const std::vector<s_StructField>& fields = s.fields;
        for (int i = 0; (i < int(fields.size())); i++)
        {
            const s_StructField& field = fields.at(i);
            def += ((((indent + typeAnnot(field.type, 0)) + std::string(" ")) + ID(field.id)) + std::string(";"));
        };
        if ((s.flags & F_DESTRUCTOR))
        {
            def += std::string("\n    };");
            def += std::string("\n");
            def += std::string("\n    Data data;");
            def += std::string("\n    bool dtor = false;");
            def += std::string("\n");
            def += ((std::string("\n    ~") + t.canon) + std::string("() noexcept;"));
            def += ((std::string("\n    inline ") + t.canon) + std::string("(Data data) noexcept : data(data) {};"));
            def += ((((std::string("\n    ") + t.canon) + std::string("(const ")) + t.canon) + std::string("&) = delete;"));
            def += ((((std::string("\n    ") + t.canon) + std::string("& operator=(const ")) + t.canon) + std::string("&) = delete;"));
            def += ((((std::string("\n    ") + t.canon) + std::string("(")) + t.canon) + std::string("&&) noexcept;"));
            def += ((((std::string("\n    ") + t.canon) + std::string("& operator=(")) + t.canon) + std::string("&&) noexcept;"));
        };
        def += std::string("\n    explicit operator bool() const noexcept");
        def += std::string("\n    {");
        def += std::string("\n        return false");
        for (int i = 0; (i < int(fields.size())); i++)
            def += (std::string("\n            || ") + boolWrap(fields.at(i).type, (((s.flags & F_DESTRUCTOR) ? std::string("data.") : std::string("")) + ID(fields.at(i).id))));

        def += std::string("\n        ;");
        def += std::string("\n    }");
        return (def + std::string("\n};\n"));
    };
    std::string collectDedupes(const std::unordered_map<std::string, std::string>& dedupes)
    {
        std::string out = std::string("");
        std::vector<std::string> keys = fu_KEYS(dedupes);
        ([&](auto& _) { std::sort(_.begin(), _.end()); } (keys));
        for (int i = 0; (i < int(keys.size())); i++)
            out += fu_MAP_CONST_GET(dedupes, keys.at(i));

        return out;
    };
    std::string cgRoot(const s_SolvedNode& root)
    {
        std::string src = cgStatements(root.items);
        std::string header = ((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + _tdef) + _fdef);
        return (header + src);
    };
    std::string ID(const std::string& id)
    {
        if ((id == std::string("this")))
            return std::string("_");

        if ((id == std::string("template")))
            return std::string("tempatle");

        if ((id == std::string("not")))
            return std::string("nott");

        if ((id == std::string("and")))
            return std::string("andd");

        if ((id == std::string("or")))
            return std::string("orr");

        return id;
    };
    std::string cgStatements(const std::vector<s_SolvedNode>& nodes)
    {
        std::string src = std::string("");
        std::vector<std::string> lines = cgNodes(nodes, M_STMT);
        for (int i = 0; (i < int(lines.size())); i++)
        {
            const std::string& line = lines.at(i);
            if (line.size())
                src += ((_indent + line) + ((last(line) == std::string(";")) ? std::string("\n") : std::string(";")));

        };
        return src;
    };
    std::string blockWrap(const std::vector<s_SolvedNode>& nodes, const bool& skipCurlies)
    {
        std::string indent0 = fu_CLONE(_indent);
        _indent += std::string("    ");
        std::string src = cgStatements(nodes);
        if ((!skipCurlies || (int(nodes.size()) != 1) || ((nodes.at(0).kind != std::string("return")) && (nodes.at(0).kind != std::string("call")))))
            src = ((((indent0 + std::string("{")) + src) + indent0) + std::string("}"));

        _indent = indent0;
        return src;
    };
    std::string blockWrapSubstatement(const s_SolvedNode& node)
    {
        return ((node.kind != std::string("block")) ? blockWrap(std::vector<s_SolvedNode> { node }, true) : ((int(node.items.size()) == 1) ? blockWrapSubstatement(node.items.at(0)) : cgBlock(node)));
    };
    std::string cgBlock(const s_SolvedNode& block)
    {
        return blockWrap(block.items, false);
    };
    std::string cgParens(const s_SolvedNode& node)
    {
        std::vector<std::string> items = cgNodes(node.items, 0);
        if (!int(items.size()))
            return std::string("(false /*empty parens*/)");

        if ((int(items.size()) == 1))
            return items.at(0);

        std::string src = std::string("(");
        for (int i = 0; (i < int(items.size())); i++)
        {
            if (i)
                src += std::string(", ");

            if ((i < (int(items.size()) - 1)))
                src += std::string("(void)");

            src += items.at(i);
        };
        return (src + std::string(")"));
    };
    std::string try_cgFnAsStruct(const s_SolvedNode& fn)
    {
        const s_SolvedNode& body = fn.items.at((int(fn.items.size()) + FN_BODY_BACK));
        if ((!body || (body.kind != std::string("block"))))
            return std::string("");

        const std::vector<s_SolvedNode>& items = body.items;
        bool hasClosuresInHeader = false;
        int end = 0;
        for (int i = 0; (i < int(items.size())); i++)
        {
            end = i;
            const s_SolvedNode& item = items.at(i);
            if ((item.kind == std::string("fn")))
            {
                if ((item.flags & F_CLOSURE))
                    hasClosuresInHeader = true;

            }
            else if (((item.kind != std::string("let")) && (item.kind != std::string("struct"))))
            {
                break;
            };
        };
        if (!hasClosuresInHeader)
            return std::string("");

        std::string evalName = (fn.value + std::string("_EVAL"));
        s_SolvedNode restFn = s_SolvedNode { std::string("fn"), (fn.flags | F_CLOSURE), fu_CLONE(evalName), std::vector<s_SolvedNode> { fn.items.at((int(fn.items.size()) - 2)), s_SolvedNode { std::string("block"), int{}, std::string{}, ([&](const auto& _) { const auto& _0 = _.begin() + end; const auto& _1 = _.begin() + int(items.size()); return std::vector<s_SolvedNode>(_0, _1); } (items)), fu_CLONE(fn.token), fu_CLONE(t_void), s_ScopeIdx{} } }, fu_CLONE(fn.token), fu_CLONE(t_void), s_ScopeIdx{} };
        std::vector<s_SolvedNode> head = fu_CONCAT(fu_CONCAT(([&](const auto& _) { const auto& _0 = _.begin() + 0; const auto& _1 = _.begin() + (int(fn.items.size()) + FN_ARGS_BACK); return std::vector<s_SolvedNode>(_0, _1); } (fn.items)), ([&](const auto& _) { const auto& _0 = _.begin() + 0; const auto& _1 = _.begin() + end; return std::vector<s_SolvedNode>(_0, _1); } (items))), std::vector<s_SolvedNode> { restFn });
        ((_clsrN == 0) || fail(std::string("")));
        _clsrN--;
        std::string structName = (std::string("sf_") + fn.value);
        std::string src = ((((((((((std::string("\nstruct ") + structName) + blockWrap(head, false)) + std::string(";")) + std::string("\n\n#define ")) + fn.value) + std::string("(...) ((")) + structName) + std::string(" { __VA_ARGS__ }).")) + evalName) + std::string("())\n"));
        _clsrN++;
        return src;
    };
    std::string cgFn(const s_SolvedNode& fn)
    {
        if (!int(fn.items.size()))
        {
            std::string src = std::string("");
            const s_Template& tempatle = ([&]() -> const s_Template& { { const s_Template& _ = GET(fn.target).tempatle; if (_) return _; } fail(std::string("")); }());
            const std::unordered_map<std::string, s_SolvedNode>& specs = tempatle.specializations;
            std::vector<std::string> keys = fu_KEYS(specs);
            ([&](auto& _) { std::sort(_.begin(), _.end()); } (keys));
            for (int i = 0; (i < int(keys.size())); i++)
            {
                std::string key = fu_CLONE(keys.at(i));
                const s_SolvedNode& s = fu_MAP_CONST_GET(specs, key);
                if (s.target)
                    src += cgNode(s, 0);

            };
            return src;
        };
        if (((_faasN == 0) && (fn.flags & F_HAS_CLOSURE)))
        {
            _faasN++;
            std::string src = try_cgFnAsStruct(fn);
            _faasN--;
            if (src.size())
            {
                _fdef += src;
                return std::string("");
            };
        };
        const int f0 = fu_CLONE(_fnN);
        const int c0 = fu_CLONE(_clsrN);
        std::string indent0 = fu_CLONE(_indent);
        _fnN++;
        if ((fn.flags & F_CLOSURE))
            _clsrN++;

        const std::vector<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& body = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at((int(items.size()) + FN_BODY_BACK)); if (_) return _; } fail(std::string("")); }());
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at((int(items.size()) + FN_RET_BACK)); if (_) return _; } fail(std::string("")); }());
        std::string annot = typeAnnot(([&]() -> const s_Type& { { const s_Type& _ = ret.type; if (_) return _; } fail(std::string("")); }()), M_RETVAL);
        const bool closure = (!!_clsrN && (fn.flags & F_CLOSURE) && (fn.value != std::string("==")));
        if (!(fn.flags & F_CLOSURE))
            _indent = std::string("\n");

        std::string src = (closure ? ((std::string("const auto& ") + fn.value) + std::string(" = [&](")) : (((annot + std::string(" ")) + fn.value) + std::string("(")));
        if ((fn.value == std::string("==")))
            src = (((annot + std::string(" operator")) + fn.value) + std::string("("));

        for (int i = 0; (i < (int(items.size()) + FN_ARGS_BACK)); i++)
        {
            if (i)
                src += std::string(", ");

            src += binding(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at(i); if (_) return _; } fail(std::string("")); }()), false);
        };
        src += (closure ? (std::string(") -> ") + annot) : std::string(")"));
        if ((!closure && (src != std::string("int auto_main()")) && !(fn.flags & F_CLOSURE) && (int(_fdef.find(([&]() -> const std::string& { { const std::string& _ = fn.value; if (_.size()) return _; } fail(std::string("")); }()))) >= 0)))
            (_ffwd[src] = ((std::string("\n") + src) + std::string(";")));

        if ((body.kind == std::string("block")))
            src += cgBlock(body);
        else
            src += blockWrap(std::vector<s_SolvedNode> { body }, false);

        _fnN = f0;
        _clsrN = c0;
        _indent = indent0;
        if ((fn.flags & F_DESTRUCTOR))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at(0); if (_) return _; } fail(std::string("")); }());
            const std::string& name = head.type.canon;
            src += ((((std::string("\n\n") + name) + std::string("::~")) + name) + std::string("() noexcept"));
            src += std::string("\n{");
            src += std::string("\n    if (!dtor)");
            src += std::string("\n    {");
            src += std::string("\n        dtor = true;");
            src += std::string("\n        free(*this);");
            src += std::string("\n    }");
            src += std::string("\n}");
            include(std::string("<cassert>"));
            include(std::string("<utility>"));
            src += ((((((std::string("\n\n") + name) + std::string("::")) + name) + std::string("(")) + name) + std::string("&& src) noexcept"));
            src += std::string("\n    : data(std::move(src.data))");
            src += std::string("\n{");
            src += std::string("\n    assert(!src.dtor);");
            src += std::string("\n    dtor = src.dtor;");
            src += std::string("\n    src.dtor = true;");
            src += std::string("\n}");
            include(std::string("<cstring>"));
            src += ((((((std::string("\n\n") + name) + std::string("& ")) + name) + std::string("::operator=(")) + name) + std::string("&& src) noexcept"));
            src += std::string("\n{");
            src += std::string("\n    if (&src != this)");
            src += std::string("\n    {");
            src += ((std::string("\n        char temp[sizeof(") + name) + std::string(")];"));
            src += ((std::string("\n        std::memcpy(temp, this, sizeof(") + name) + std::string("));"));
            src += ((std::string("\n        std::memcpy(this, &src, sizeof(") + name) + std::string("));"));
            src += ((std::string("\n        std::memcpy(&src, temp, sizeof(") + name) + std::string("));"));
            src += std::string("\n    }");
            src += std::string("\n");
            src += std::string("\n    return *this;");
            src += std::string("\n}");
        };
        if ((fn.flags & F_CLOSURE))
            return src;

        _fdef += ((std::string("\n") + src) + std::string("\n"));
        return std::string("");
    };
    std::string binding(const s_SolvedNode& node, const bool& doInit)
    {
        const std::string& id = ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
        std::string annot = typeAnnot(node.type, (((node.flags & F_MUT) == 0) ? M_CONST : 0));
        std::string head = ((([&]() -> const std::string& { { const std::string& _ = annot; if (_.size()) return _; } fail(std::string("")); }()) + std::string(" ")) + ID(id));
        s_SolvedNode init = (node.items.size() ? node.items.at(LET_INIT) : s_SolvedNode { std::string{}, int{}, std::string{}, std::vector<s_SolvedNode>{}, s_Token{}, s_Type{}, s_ScopeIdx{} });
        if ((!doInit || (node.flags & F_ARG)))
            return head;

        if (init)
            return ((head + std::string(" = ")) + cgNode(init, 0));

        return (head + std::string(" {}"));
    };
    std::string cgLet(const s_SolvedNode& node)
    {
        std::string src = binding(node, true);
        if ((_fnN || _faasN))
            return src;

        src = fu_JOIN(fu_SPLIT(src, std::string("([&](")), std::string("([]("));
        if ((src.rfind(std::string("const "), 0) == 0))
            src = src.substr(6);

        _fdef += (src = ((std::string("inline const ") + src) + std::string(";\n")));
        return std::string("");
    };
    std::string cgReturn(const s_SolvedNode& node)
    {
        if (node.items.size())
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            std::string src = cgNode(head, 0);
            if ((head.type == t_never))
                return src;

            return (std::string("return ") + src);
        };
        return std::string("return");
    };
    std::string cgJump(const s_SolvedNode& node)
    {
        if (node.value.size())
            return (((std::string("goto L_") + node.value) + std::string("_")) + std::string(1, node.kind.at(0)));

        return node.kind;
    };
    std::string cgStringLiteral(const s_SolvedNode& node)
    {
        include(std::string("<string>"));
        std::string esc = std::string("");
        for (int i = 0; (i < int(node.value.size())); i++)
        {
            std::string c = std::string(1, node.value.at(i));
            if ((c == std::string("\n")))
                esc += std::string("\\n");
            else if ((c == std::string("\r")))
                esc += std::string("\\r");
            else if ((c == std::string("\t")))
                esc += std::string("\\t");
            else if ((c == std::string("\v")))
                esc += std::string("\\v");
            else if ((c == std::string("\\")))
                esc += std::string("\\\\");
            else if ((c == std::string("\"")))
                esc += std::string("\\\"");
            else
                esc += c;

        };
        return ((std::string("std::string(\"") + esc) + std::string("\")"));
    };
    std::string cgArrayLiteral(const s_SolvedNode& node)
    {
        std::vector<std::string> items = cgNodes(node.items, 0);
        if (!int(items.size()))
            return cgDefault(node.type);

        std::string annot = typeAnnot(node.type, 0);
        return (((annot + std::string(" { ")) + fu_JOIN(items, std::string(", "))) + std::string(" }"));
    };
    std::string cgDefaultInit(const s_SolvedNode& node)
    {
        return cgArrayLiteral(node);
    };
    bool hasNonIdentifierChars(const std::string& id)
    {
        for (int i = 0; (i < int(id.size())); i++)
        {
            std::string c = std::string(1, id.at(i));
            if (((c == std::string("_")) || ((c >= std::string("a")) && (c <= std::string("z"))) || ((c >= std::string("A")) && (c <= std::string("Z"))) || ((c >= std::string("0")) && (c <= std::string("9")))))
            {
            }
            else
                return true;

        };
        return false;
    };
    std::string cgCall(const s_SolvedNode& node, const int& mode)
    {
        const s_Overload& target = ([&]() -> const s_Overload& { { const s_Overload& _ = GET(node.target); if (_) return _; } fail(std::string("")); }());
        std::vector<std::string> items = cgNodes(node.items, 0);
        if ((target.kind == std::string("defctor")))
        {
            const std::string& head = ([&]() -> const s_Type& { { const s_Type& _ = target.type; if (_) return _; } fail(std::string("")); }()).canon;
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(head, ctx); if (_) return _; } fail(std::string("")); }());
            std::string open = std::string(" { ");
            std::string close = std::string(" }");
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((std::string(" { ") + head) + std::string("::Data { "));
                close = std::string(" }}");
            };
            return (((head + open) + fu_JOIN(items, std::string(", "))) + close);
        };
        const std::string& id = ([&]() -> const std::string& { { const std::string& _ = target.name; if (_.size()) return _; } fail(std::string("")); }());
        if (hasNonIdentifierChars(id))
        {
            const std::vector<s_SolvedNode>& nodes = ([&]() -> const std::vector<s_SolvedNode>& { { const std::vector<s_SolvedNode>& _ = node.items; if (_.size()) return _; } fail(std::string("")); }());
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nodes.at(0); if (_) return _; } fail(std::string("")); }());
            if ((int(items.size()) == 1))
                return ((node.flags & F_POSTFIX) ? (items.at(0) + id) : (id + items.at(0)));

            if ((int(items.size()) == 2))
            {
                if ((id == std::string("[]")))
                {
                    if ((head.type.canon == std::string("string")))
                        return ((((std::string("std::string(1, ") + items.at(0)) + std::string(".at(")) + items.at(1)) + std::string("))"));

                    if (type_isMap(head.type))
                    {
                        if (!(head.type.quals & q_mutref))
                            return cgMapConstGet(items.at(0), items.at(1));

                        return (((items.at(0) + std::string(".at(")) + items.at(1)) + std::string(")"));
                    };
                    return (((items.at(0) + std::string(".at(")) + items.at(1)) + std::string(")"));
                };
                if ((id == std::string("=")))
                {
                    if (((head.kind == std::string("call")) && (head.value == std::string("[]")) && (int(head.items.size()) == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items.at(0); if (_) return _; } fail(std::string("")); }()).type))
                            return ((((((std::string("(") + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items.at(0); if (_) return _; } fail(std::string("")); }()), 0)) + std::string("[")) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items.at(1); if (_) return _; } fail(std::string("")); }()), 0)) + std::string("] = ")) + items.at(1)) + std::string(")"));

                    };
                };
                if ((id == std::string("||=")))
                {
                    std::string left = fu_CLONE(items.at(0));
                    std::string right = fu_CLONE(items.at(1));
                    if (((head.kind == std::string("call")) && (head.value == std::string("[]")) && (int(head.items.size()) == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items.at(0); if (_) return _; } fail(std::string("")); }()).type))
                            left = (((cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items.at(0); if (_) return _; } fail(std::string("")); }()), 0) + std::string("[")) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items.at(1); if (_) return _; } fail(std::string("")); }()), 0)) + std::string("]"));

                    };
                    std::string annot = typeAnnot(head.type, 0);
                    return ((((((((((std::string("([&](") + annot) + std::string(" _) -> ")) + annot) + std::string(" { if (!")) + boolWrap(head.type, std::string("_"))) + std::string(") _ = ")) + right) + std::string("; return _; } (")) + left) + std::string("))"));
                };
                if ((mode & M_STMT))
                    return ((((items.at(0) + std::string(" ")) + id) + std::string(" ")) + items.at(1));
                else
                    return ((((((std::string("(") + items.at(0)) + std::string(" ")) + id) + std::string(" ")) + items.at(1)) + std::string(")"));

            };
        };
        if ((target.kind == std::string("var")))
            return ID(id);

        if ((target.kind == std::string("field")))
        {
            std::string sep = std::string(".");
            const s_Struct& parent = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }()).type.canon, ctx); if (_) return _; } fail(std::string("")); }());
            if ((parent.flags & F_DESTRUCTOR))
                sep = std::string(".data.");

            return ((items.at(0) + sep) + ID(id));
        };
        if (((id == std::string("len")) && (int(items.size()) == 1)))
            return ((std::string("int(") + items.at(0)) + std::string(".size())"));

        if (((id == std::string("push")) && (int(items.size()) == 2)))
            return (((items.at(0) + std::string(".push_back(")) + items.at(1)) + std::string(")"));

        if (((id == std::string("pop")) && (int(items.size()) == 1)))
            return (items.at(0) + std::string(".pop_back()"));

        if (((id == std::string("unshift")) && (int(items.size()) == 2)))
            return ((((std::string("([&](auto& _) { _.insert(_.begin(), ") + items.at(1)) + std::string("); } (")) + items.at(0)) + std::string("))"));

        if (((id == std::string("insert")) && (int(items.size()) == 3)))
            return ((((((std::string("([&](auto& _) { _.insert(_.begin() + ") + items.at(1)) + std::string(", ")) + items.at(2)) + std::string("); } (")) + items.at(0)) + std::string("))"));

        if (((id == std::string("splice")) && (int(items.size()) == 3)))
            return ((((((std::string("([&](auto& _) { const auto& _0 = _.begin() + ") + items.at(1)) + std::string("; _.erase(_0, _0 + ")) + items.at(2)) + std::string("); } (")) + items.at(0)) + std::string("))"));

        if (((id == std::string("grow")) && (int(items.size()) == 2)))
            return (((items.at(0) + std::string(".resize(")) + items.at(1)) + std::string(")"));

        if (((id == std::string("shrink")) && (int(items.size()) == 2)))
            return (((items.at(0) + std::string(".resize(")) + items.at(1)) + std::string(")"));

        if (((id == std::string("resize")) && (int(items.size()) == 2)))
            return (((items.at(0) + std::string(".resize(")) + items.at(1)) + std::string(")"));

        if (((id == std::string("clear")) && (int(items.size()) == 1)))
            return (items.at(0) + std::string(".clear()"));

        if (((id == std::string("find")) && (int(items.size()) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return ((((std::string("int(") + items.at(0)) + std::string(".find(")) + items.at(1)) + std::string("))"));

            include(std::string("<algorithm>"));
            return ((((std::string("([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, ") + items.at(1)) + std::string("); return _1 != _N ? int(_1 - _0) : -1; } (")) + items.at(0)) + std::string("))"));
        };
        if (((id == std::string("starts")) && (int(items.size()) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return ((((std::string("(") + items.at(0)) + std::string(".rfind(")) + items.at(1)) + std::string(", 0) == 0)"));

        };
        if (((id == std::string("has")) && (int(items.size()) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return ((((std::string("(int(") + items.at(0)) + std::string(".find(")) + items.at(1)) + std::string(")) >= 0)"));

            if (type_isMap(head.type))
                return ((((std::string("(") + items.at(0)) + std::string(".count(")) + items.at(1)) + std::string(") != 0)"));

            include(std::string("<algorithm>"));
            return ((((std::string("([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, ") + items.at(1)) + std::string("); return _1 != _N; } (")) + items.at(0)) + std::string("))"));
        };
        if (((id == std::string("slice")) && (int(items.size()) == 3)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return ((((((std::string("([&]() { size_t _0 = ") + items.at(1)) + std::string("; return ")) + items.at(0)) + std::string(".substr(_0, ")) + items.at(2)) + std::string(" - _0); } ())"));

            return ((((((((std::string("([&](const auto& _) { const auto& _0 = _.begin() + ") + items.at(1)) + std::string("; const auto& _1 = _.begin() + ")) + items.at(2)) + std::string("; return ")) + typeAnnot(node.type, 0)) + std::string("(_0, _1); } (")) + items.at(0)) + std::string("))"));
        };
        if (((id == std::string("slice")) && (int(items.size()) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return (((items.at(0) + std::string(".substr(")) + items.at(1)) + std::string(")"));

            return ((((((std::string("([&](const auto& _) { return ") + typeAnnot(node.type, 0)) + std::string("(_.begin() + ")) + items.at(1)) + std::string(", _.end()); } (")) + items.at(0)) + std::string("))"));
        };
        if (((id == std::string("sort")) && (int(items.size()) == 1)))
        {
            include(std::string("<algorithm>"));
            return ((std::string("([&](auto& _) { std::sort(_.begin(), _.end()); } (") + items.at(0)) + std::string("))"));
        };
        if (((id == std::string("substr")) && (int(items.size()) == 3)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return (((((items.at(0) + std::string(".substr(")) + items.at(1)) + std::string(", ")) + items.at(2)) + std::string(")"));

        };
        if (((id == std::string("char")) && (int(items.size()) == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }());
            if ((head.type.canon == std::string("string")))
                return ((((std::string("int(") + items.at(0)) + std::string("[")) + items.at(1)) + std::string("])"));

        };
        if ((((id == std::string("true")) || (id == std::string("false"))) && !int(items.size())))
            return id;

        if (((id == std::string("throw")) && (int(items.size()) == 1)))
            return cgThrow(id, items.at(0));

        if (((id == std::string("assert")) && (int(items.size()) == 0)))
            return cgThrow(id, std::string("\"Assertion failed.\""));

        if (((id == std::string("move")) && (int(items.size()) == 3)))
            return ((((std::string("([&]() { auto* _ = ") + items.at(0)) + std::string(".data(); ")) + cgSlide((std::string("_ + ") + items.at(2)), (std::string("_ + ") + items.at(1)), std::string("sizeof(*_)"))) + std::string("; } ())"));

        if (((id == std::string("concat")) && (int(items.size()) == 2)))
            return cgConcat(items);

        if (((id == std::string("split")) && (int(items.size()) == 2)))
            return cgSplit(items);

        if (((id == std::string("join")) && (int(items.size()) == 2)))
            return cgJoin(items);

        if (((id == std::string("join")) && (int(items.size()) == 2)))
            return cgJoin(items);

        if (((id == std::string("keys")) && (int(items.size()) == 1)))
            return cgKeys(items);

        if (((id == std::string("CLONE")) && (int(items.size()) == 1)))
            return cgClone(items.at(0));

        if (((id == std::string("STEAL")) && (int(items.size()) == 1)))
            return cgSteal(items.at(0));

        return (((ID(id) + std::string("(")) + fu_JOIN(items, std::string(", "))) + std::string(")"));
    };
    std::string cgSlide(const std::string& destExpr, const std::string& srcExpr, const std::string& numBytesExpr)
    {
        std::string SLIDE = std::string("::slide");
        if (!(_tfwd.count(SLIDE) != 0))
        {
            include(std::string("<cstring>"));
            (_tfwd[SLIDE] = std::string("\ntemplate <size_t N>\ninline void fu_MEMSLIDE(void* dest, void* source)\n{\n    char swap_buffer[N];\n\n    std::memcpy(\n        swap_buffer, source, N);\n\n    if (source < dest)\n        std::memmove(\n            source, (char*)source + N,\n            (char*)dest - (char*)source);\n    else\n        std::memmove(\n            (char*)dest + N, dest,\n            (char*)source - (char*)dest);\n\n    std::memcpy(\n        dest, swap_buffer, N);\n}\n"));
        };
        return ((((((std::string("fu_MEMSLIDE<") + numBytesExpr) + std::string(">(")) + destExpr) + std::string(", ")) + srcExpr) + std::string(")"));
    };
    std::string annotateString()
    {
        std::string STRING = std::string("::string");
        if (!(_ffwd.count(STRING) != 0))
        {
            include(std::string("<string>"));
            (_ffwd[STRING] = std::string("\ninline std::string operator+(const std::string& a, long long b)\n{\n    return a + std::to_string(b);\n}\n"));
        };
        return std::string("std::string");
    };
    std::string annotateNever()
    {
        std::string NEVER = std::string("::NEVER");
        if (!(_tfwd.count(NEVER) != 0))
        {
            include(std::string("<stdexcept>"));
            (_tfwd[NEVER] = std::string("\nstruct fu_NEVER\n{\n    fu_NEVER(const fu_NEVER&) = delete;\n    void operator=(const fu_NEVER&) = delete;\n\n    template<typename T>\n    [[noreturn]] operator T() const\n    {\n        throw std::runtime_error(\"fu_NEVER cast\");\n    }\n};\n"));
        };
        return std::string("fu_NEVER");
    };
    std::string cgThrow(const std::string& kind, const std::string& item)
    {
        std::string THROW = std::string("::THROW");
        if (!(_ffwd.count(THROW) != 0))
        {
            annotateNever();
            include(std::string("<stdexcept>"));
            (_ffwd[THROW] = std::string("\ntemplate <typename T>\n[[noreturn]] fu_NEVER fu_THROW(const T& what)\n{\n    throw std::runtime_error(what);\n}\n"));
        };
        if ((kind == std::string("assert")))
        {
        };
        return ((std::string("fu_THROW(") + item) + std::string(")"));
    };
    std::string cgConcat(const std::vector<std::string>& items)
    {
        std::string CONCAT = std::string("::CONCAT");
        if (!(_ffwd.count(CONCAT) != 0))
        {
            include(std::string("<vector>"));
            (_ffwd[CONCAT] = std::string("\ntemplate <typename T>\nstd::vector<T> fu_CONCAT(\n    const std::vector<T>& a,\n    const std::vector<T>& b)\n{\n    std::vector<T> result;\n    result.reserve(a.size() + b.size());\n\n    for (const auto& i : a) result.push_back(i);\n    for (const auto& i : b) result.push_back(i);\n\n    return result;\n}\n"));
        };
        return ((std::string("fu_CONCAT(") + fu_JOIN(items, std::string(", "))) + std::string(")"));
    };
    std::string cgJoin(const std::vector<std::string>& items)
    {
        std::string JOIN = std::string("::JOIN");
        if (!(_ffwd.count(JOIN) != 0))
        {
            include(std::string("<string>"));
            include(std::string("<vector>"));
            (_ffwd[JOIN] = std::string("\ninline std::string fu_JOIN(\n    const std::vector<std::string>& vec,\n    const std::string& sep)\n{\n    size_t len = 0;\n    for (size_t i = 0; i < vec.size(); i++)\n    {\n        if (i)\n            len += sep.size();\n\n        len += vec[i].size();\n    }\n\n    std::string result;\n    result.reserve(len);\n    for (size_t i = 0; i < vec.size(); i++)\n    {\n        if (i)\n            result += sep;\n\n        result += vec[i];\n    }\n\n    return result;\n}\n"));
        };
        return ((std::string("fu_JOIN(") + fu_JOIN(items, std::string(", "))) + std::string(")"));
    };
    std::string cgSplit(const std::vector<std::string>& items)
    {
        std::string SPLIT = std::string("::SPLIT");
        if (!(_ffwd.count(SPLIT) != 0))
        {
            include(std::string("<string>"));
            include(std::string("<vector>"));
            (_ffwd[SPLIT] = std::string("\ninline std::vector<std::string> fu_SPLIT(\n    std::string s,\n    const std::string& sep)\n{\n    std::vector<std::string> result;\n\n    size_t next;\n    while (int(next = s.find(sep)) >= 0)\n    {\n        result.push_back(s.substr(0, next));\n        s = s.substr(next + sep.size());\n    }\n\n    result.push_back(s);\n    return result;\n}\n"));
        };
        return ((std::string("fu_SPLIT(") + fu_JOIN(items, std::string(", "))) + std::string(")"));
    };
    std::string cgKeys(const std::vector<std::string>& items)
    {
        std::string KEYS = std::string("::KEYS");
        if (!(_ffwd.count(KEYS) != 0))
        {
            include(std::string("<unordered_map>"));
            include(std::string("<vector>"));
            (_ffwd[KEYS] = std::string("\ntemplate <typename K, typename V>\nstd::vector<K> fu_KEYS(\n    const std::unordered_map<K, V>& map)\n{\n    std::vector<K> keys;\n    keys.reserve(map.size());\n\n    for (auto& kv : map)\n        keys.push_back(kv.first);\n\n    return keys;\n}\n"));
        };
        return ((std::string("fu_KEYS(") + fu_JOIN(items, std::string(", "))) + std::string(")"));
    };
    std::string cgMapConstGet(const std::string& map, const std::string& key)
    {
        std::string MAP_CONST_GET = std::string("::MAP_CONST_GET");
        if (!(_ffwd.count(MAP_CONST_GET) != 0))
        {
            include(std::string("<unordered_map>"));
            (_ffwd[MAP_CONST_GET] = std::string("\ntemplate <typename K, typename V>\nconst V& fu_MAP_CONST_GET(\n    const std::unordered_map<K, V>& map,\n    const K& key)\n{\n    const auto& it = map.find(key);\n    if (it == map.end() )\n    {\n        static const V def {};\n        return def;\n    }\n\n    return it->second;\n}\n"));
        };
        return ((((std::string("fu_MAP_CONST_GET(") + map) + std::string(", ")) + key) + std::string(")"));
    };
    std::string cgLiteral(const s_SolvedNode& node)
    {
        return ([&]() -> const std::string& { { const std::string& _ = node.value; if (_.size()) return _; } fail(std::string("")); }());
    };
    std::string cgEmpty()
    {
        return std::string("");
    };
    std::string cgIf(const s_SolvedNode& node, const int& mode)
    {
        const s_SolvedNode& n0 = node.items.at(0);
        const s_SolvedNode& n1 = node.items.at(1);
        const s_SolvedNode& n2 = node.items.at(2);
        const bool stmt = !!(mode & M_STMT);
        const auto& blockWrap_unlessIf = [&](const s_SolvedNode& node) -> std::string
        {
            return ((node.kind == std::string("if")) ? (std::string(" ") + cgNode(node, M_STMT)) : blockWrapSubstatement(node));
        };
        std::string cond = ([&]() -> std::string { if (n0) return boolWrap(n0.type, cgNode(n0, M_RETBOOL)); else return std::string{}; }());
        std::string cons = ([&]() -> std::string { if (n1) return (stmt ? blockWrapSubstatement(n1) : cgNode(n1, 0)); else return std::string{}; }());
        std::string alt = ([&]() -> std::string { if (n2) return (stmt ? blockWrap_unlessIf(n2) : cgNode(n2, 0)); else return std::string{}; }());
        if (stmt)
            return ((((std::string("if (") + cond) + std::string(")")) + cons) + (alt.size() ? ((_indent + std::string("else")) + alt) : std::string("")));

        if ((cons.size() && alt.size()))
            return ((((((std::string("(") + cond) + std::string(" ? ")) + cons) + std::string(" : ")) + alt) + std::string(")"));

        if (cons.size())
            return ((((std::string("(") + cond) + std::string(" && ")) + cons) + std::string(")"));

        if (alt.size())
            return ((((std::string("(") + cond) + std::string(" || ")) + alt) + std::string(")"));

        fail(std::string("TODO"));
    };
    std::string boolWrap(const s_Type& type, const std::string& src)
    {
        if ((type_isArray(type) || type_isString(type) || type_isMap(type)))
            return (src + std::string(".size()"));

        return src;
    };
    std::string cgDefault(const s_Type& type)
    {
        if (((type.quals & q_ref) && !(type.quals & q_mutref)))
        {
            std::string DEFAULT = std::string("::DEFAULT");
            if (!(_ffwd.count(DEFAULT) != 0))
                (_ffwd[DEFAULT] = std::string("\ntemplate <typename T>\nstruct fu_DEFAULT { static inline const T value {}; };\n"));

            return ((std::string("fu_DEFAULT<") + typeAnnot(clear_refs(type), 0)) + std::string(">::value"));
        };
        return (typeAnnot(type, 0) + std::string("{}"));
    };
    std::string cgAnd(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            const std::vector<s_SolvedNode>& items = node.items;
            const bool retSecondLast = (items.at((int(items.size()) - 1)).type == t_never);
            const int condEnd = (retSecondLast ? (int(items.size()) - 2) : (int(items.size()) - 1));
            std::string src = std::string("");
            if (condEnd)
            {
                src += std::string("if (");
                for (int i = 0; (i < condEnd); i++)
                {
                    const s_SolvedNode& item = items.at(i);
                    if (i)
                        src += std::string(" && ");

                    src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                };
                src += std::string(") ");
            };
            std::string tail = cgNode(items.at(condEnd), 0);
            if (retSecondLast)
            {
                src += ((((std::string("{ ") + typeAnnot(type, 0)) + std::string(" _ = ")) + tail) + std::string("; "));
                src += ((std::string("if (!") + boolWrap(type, std::string("_"))) + std::string(") return _; } "));
                src += (cgNode(items.at((int(items.size()) - 1)), 0) + std::string(";"));
            }
            else
            {
                src += ((std::string("return ") + tail) + std::string(";"));
                src += ((std::string(" else return ") + cgDefault(type)) + std::string(";"));
            };
            src = ((((std::string("([&]() -> ") + typeAnnot(type, 0)) + std::string(" { ")) + src) + std::string(" }())"));
            return src;
        };
        std::string src = std::string("(");
        const std::vector<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < int(items.size())); i++)
        {
            const s_SolvedNode& item = items.at(i);
            if (i)
                src += std::string(" && ");

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + std::string(")"));
    };
    std::string cgNot(const s_SolvedNode& node)
    {
        const s_SolvedNode& item = node.items.at(0);
        return (std::string("!") + boolWrap(item.type, cgNode(item, M_RETBOOL)));
    };
    std::string cgOr(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            std::string annot = typeAnnot(type, 0);
            std::string src = ((std::string("([&]() -> ") + annot) + std::string(" {"));
            const std::vector<s_SolvedNode>& items = node.items;
            for (int i = 0; (i < (int(items.size()) - 1)); i++)
            {
                const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at(i); if (_) return _; } fail(std::string("")); }());
                s_SolvedNode tail = fu_CLONE(item);
                if ((item.kind == std::string("and")))
                {
                    const std::vector<s_SolvedNode>& items = item.items;
                    tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at((int(items.size()) - 1)); if (_) return _; } fail(std::string("")); }());
                    src += std::string(" if (");
                    for (int i = 0; (i < (int(items.size()) - 1)); i++)
                    {
                        if (i)
                            src += std::string(" && ");

                        const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at(i); if (_) return _; } fail(std::string("")); }());
                        src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                    };
                    src += std::string(")");
                };
                src += ((((((std::string(" { ") + annot) + std::string(" _ = ")) + cgNode(tail, 0)) + std::string("; if (")) + boolWrap(tail.type, std::string("_"))) + std::string(") return _; }"));
            };
            const s_SolvedNode& tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items.at((int(items.size()) - 1)); if (_) return _; } fail(std::string("")); }());
            if (!(tail.type == t_never))
                src += std::string(" return");

            src += ((std::string(" ") + cgNode(tail, 0)) + std::string("; }())"));
            return src;
        };
        std::string src = std::string("(");
        const std::vector<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < int(items.size())); i++)
        {
            const s_SolvedNode& item = items.at(i);
            if (i)
                src += std::string(" || ");

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + std::string(")"));
    };
    std::string postfixBlock(const std::string& src, const std::string& postfix)
    {
        ((std::string(1, src.at((int(src.size()) - 1))) == std::string("}")) || fail(std::string("")));
        return ((([&]() { size_t _0 = 0; return src.substr(_0, (int(src.size()) - 1) - _0); } ()) + postfix) + std::string("}"));
    };
    std::string cgLoop(const s_SolvedNode& node)
    {
        const std::vector<s_SolvedNode>& items = node.items;
        const s_SolvedNode& n_init = items.at(LOOP_INIT);
        const s_SolvedNode& n_cond = items.at(LOOP_COND);
        const s_SolvedNode& n_post = items.at(LOOP_POST);
        const s_SolvedNode& n_body = items.at(LOOP_BODY);
        const s_SolvedNode& n_pcnd = items.at(LOOP_POST_COND);
        std::string init = ([&]() -> std::string { if (n_init) return cgNode(n_init, 0); else return std::string{}; }());
        std::string cond = ([&]() -> std::string { if (n_cond) return boolWrap(n_cond.type, cgNode(n_cond, M_RETBOOL)); else return std::string{}; }());
        std::string post = ([&]() -> std::string { if (n_post) return cgNode(n_post, 0); else return std::string{}; }());
        std::string body = ([&]() -> std::string { if (n_body) return blockWrapSubstatement(n_body); else return std::string{}; }());
        std::string pcnd = ([&]() -> std::string { if (n_pcnd) return boolWrap(n_pcnd.type, cgNode(n_pcnd, M_RETBOOL)); else return std::string{}; }());
        std::string breakLabel = std::string("");
        if ((body.size() && node.value.size()))
        {
            std::string brk = ((std::string("L_") + node.value) + std::string("_b"));
            std::string cnt = ((std::string("L_") + node.value) + std::string("_c"));
            if ((int(body.find(cnt)) >= 0))
                body = (std::string("{") + postfixBlock(body, (((_indent + std::string("    }")) + cnt) + std::string(":;"))));

            if ((int(body.find(brk)) >= 0))
                breakLabel = (((_indent + std::string("    ")) + brk) + std::string(":;"));

        };
        if (pcnd.size())
        {
            if ((init.size() || post.size() || cond.size()))
                fail(std::string("TODO extended loop."));

            return ((((((std::string("do") + body) + _indent) + std::string("while (")) + pcnd) + std::string(")")) + breakLabel);
        };
        if ((init.size() || post.size() || !cond.size()))
            return ((((((((std::string("for (") + init) + std::string("; ")) + cond) + std::string("; ")) + post) + std::string(")")) + body) + breakLabel);

        return ((((std::string("while (") + cond) + std::string(")")) + body) + breakLabel);
    };
    std::string cgNode(const s_SolvedNode& node, const int& mode)
    {
        const std::string& k = node.kind;
        if ((k == std::string("root")))
            return cgRoot(node);

        if ((k == std::string("block")))
            return cgBlock(node);

        if ((k == std::string("fn")))
            return cgFn(node);

        if ((k == std::string("return")))
            return cgReturn(node);

        if ((k == std::string("break")))
            return cgJump(node);

        if ((k == std::string("continue")))
            return cgJump(node);

        if ((k == std::string("call")))
            return cgCall(node, mode);

        if ((k == std::string("let")))
            return cgLet(node);

        if ((k == std::string("if")))
            return cgIf(node, mode);

        if ((k == std::string("!")))
            return cgNot(node);

        if ((k == std::string("or")))
            return cgOr(node);

        if ((k == std::string("and")))
            return cgAnd(node);

        if ((k == std::string("loop")))
            return cgLoop(node);

        if ((k == std::string("int")))
            return cgLiteral(node);

        if ((k == std::string("str")))
            return cgStringLiteral(node);

        if ((k == std::string("arrlit")))
            return cgArrayLiteral(node);

        if ((k == std::string("definit")))
            return cgDefaultInit(node);

        if ((k == std::string("empty")))
            return cgEmpty();

        if ((k == std::string("comma")))
            return cgParens(node);

        if ((k == std::string("parens")))
            return cgParens(node);

        if ((k == std::string("label")))
            return cgParens(node);

        if ((k == std::string("struct")))
            return cgEmpty();

        if ((k == std::string("copy")))
            return cgCopyMove(node);

        if ((k == std::string("move")))
            return cgCopyMove(node);

        fail((std::string("TODO: ") + k));
    };
    std::string cgCopyMove(const s_SolvedNode& node)
    {
        std::string a = cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items.at(0); if (_) return _; } fail(std::string("")); }()), 0);
        if ((node.kind == std::string("move")))
            return cgSteal(a);

        return cgClone(a);
    };
    std::string cgSteal(const std::string& src)
    {
        include(std::string("<utility>"));
        return ((std::string("std::move(") + src) + std::string(")"));
    };
    std::string cgClone(const std::string& src)
    {
        std::string CLONE = std::string("::CLONE");
        if (!(_ffwd.count(CLONE) != 0))
            (_ffwd[CLONE] = std::string("\ntemplate <typename T>\ninline T fu_CLONE(const T& source)\n{\n    return source;\n}\n"));

        return ((std::string("fu_CLONE(") + src) + std::string(")"));
    };
    std::vector<std::string> cgNodes(const std::vector<s_SolvedNode>& nodes, const int& mode)
    {
        std::vector<std::string> result = std::vector<std::string>{};
        for (int i = 0; (i < int(nodes.size())); i++)
        {
            const s_SolvedNode& node = nodes.at(i);
            std::string src = (node ? cgNode(node, mode) : std::string(""));
            result.push_back(src);
        };
        return result;
    };
    std::string cpp_codegen_EVAL()
    {
        ((root.kind == std::string("root")) || fail(std::string("")));
        std::string src = cgNode(root, 0);
        return src;
    };
};

#define cpp_codegen(...) ((sf_cpp_codegen { __VA_ARGS__ }).cpp_codegen_EVAL())

std::string compile(const std::string& fname, const std::string& src, s_TEMP_Context& ctx)
{
    s_LexResult res_lex = lex(src, fname);
    s_Node res_parse = parse(fname, res_lex.tokens);
    s_SolveResult res_solve = solve(res_parse, ctx);
    std::string cpp = cpp_codegen(res_solve.root, res_solve.scope, ctx);
    return cpp;
}

std::string compile_testcase(std::string src)
{
    std::string fname = std::string("testcase");
    if (!(int(src.find(std::string("fn ZERO()"))) >= 0))
        src = ((std::string("\n\nfn ZERO(): i32 {\n") + src) + std::string("\n}\n"));

    src += std::string("\nfn main(): i32 ZERO();\n\n");
    s_TEMP_Context ctx {};
    return compile(fname, src, ctx);
}
inline const std::string TEST_SRC = std::string("\n\n    fn test(one: i32)\n    {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn ZERO(): i32\n    {\n        return test(1) - 17;\n    }\n\n");

int ZERO()
{
    std::string cpp = compile_testcase(fu_CLONE(TEST_SRC));
    return (int(cpp.find(std::string("main()"))) ? 0 : 101);
}

int auto_main()
{
    return ZERO();
}
