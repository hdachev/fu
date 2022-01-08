
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/env.h>
#include <fu/init_priority.h>
#include <fu/int.h>
#include <fu/io.h>
#include <fu/never.h>
#include <fu/now.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
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
struct s_Map_tcbzgxDC;
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
struct s_RemoteNode;
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
struct s_TestDiffs;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

fu_STR ascii_lower_rOVPWlZS(const fu_STR&);
fu_STR getFile_TvkTxTi1(fu_STR&&, s_Context&);
fu_STR qBAD_PSFLzFOM(const fu_STR&);
fu_STR resolveFile_TvkTxTi1(const fu_STR&, s_Context&);
s_CodegenOutput cpp_codegen_w3QnwnTR(const s_Module&, const s_Context&);
s_LexerOutput lex_GLuqYFLb(const fu_STR&, fu::view<char>);
s_Module& getModule_TvkTxTi1(const fu_STR&, s_Context&);
s_ModuleStat ModuleStat_now_pUbtfzLn();
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
s_ParserOutput parse_RK3hyBGJ(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&);
s_SolverOutput solve_tk5TYSLn(const s_Context&, s_Module&, const s_Options&);
void ModuleStat_print_2JzWOtmi(const s_ModuleStat&, const fu_STR&, fu::view<char>);
void build_iE8lIG83(bool, fu_STR&&, const fu_STR&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<char>, const fu_STR&, const s_Context&);
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void setModule_2YVZZZ5V(const s_Module&, s_Context&);
void set_next_6vbeTssu(s_TestDiffs&, const fu_STR&, const fu_STR&);

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
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
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

                                #ifndef DEF_s_RemoteNode
                                #define DEF_s_RemoteNode
struct s_RemoteNode
{
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
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
    unsigned status;
    s_RemoteNode remote;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || status
            || remote
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
    s_RemoteNode dEfault;
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
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
            || privates_len
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
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || imports
            || privates
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

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    fu_STR kind;
    int helpers;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> _items;
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
            || _items
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
    int local_of;
    int revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callers
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
    fu_VEC<int> privates;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_items;
    int pub_cnvrts;
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
            || privates
            || usings
            || converts
            || pub_items
            || pub_cnvrts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverOutput
                                #define DEF_s_SolverOutput
struct s_SolverOutput
{
    s_RemoteNode root;
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
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
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
    int init_prio;
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
            || init_prio
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

                                #ifndef DEF_s_Map_tcbzgxDC
                                #define DEF_s_Map_tcbzgxDC
struct s_Map_tcbzgxDC
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
    s_Map_tcbzgxDC files;
    s_Map_tcbzgxDC fuzzy;
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

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_if_last_rOVPWlZS
                                #define DEFt_if_last_rOVPWlZS
inline char if_last_rOVPWlZS(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR absdir_XdvOmfpz(const fu_STR& a)
{
    return ((if_last_rOVPWlZS(a) == '/') ? fu_STR(a) : (a + '/'));
}

static const fu_STR HOME fu_INIT_PRIORITY(1006) = absdir_XdvOmfpz(fu::env_get("HOME"_fu));

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR locate_PRJDIR_LI96RGZs()
{
    /*MOV*/ fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    if (!(fs > 1000))
        fu::fail(x7E((("Bad compiler.fu: "_fu + fn) + ": "_fu), fu::i64dec(fs)));

    fu_STR _0 {};
    fu::println((fu::slate<1, fu_STR> { (__extension__ (
    {
        /*MOV*/ /*RRET*/ fu_STR x = ("PRJDIR: "_fu + dir);
        _0 = (x);
    (void)0;}), static_cast<fu_STR&&>(_0)) }));
    return /*NRVO*/ dir;
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
extern const fu_STR PRJDIR fu_INIT_PRIORITY(1006) = locate_PRJDIR_LI96RGZs();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE fu_INIT_PRIORITY(1006) = (PRJDIR + "build-cpp/"_fu);
                                #endif

                                #ifndef DEF_FULIB
                                #define DEF_FULIB
extern const fu_STR FULIB fu_INIT_PRIORITY(1006) = (PRJDIR + "include/fu/_fulib.cpp"_fu);
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEFt_clone_eabe9idx
                                #define DEFt_clone_eabe9idx
inline int clone_eabe9idx(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_rOVPWlZS
                                #define DEFt_clone_rOVPWlZS
inline const fu_STR& clone_rOVPWlZS(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_C7TEVOlR
                                #define DEFt_clone_C7TEVOlR
inline const s_ModuleInputs& clone_C7TEVOlR(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Z5oQfAXT
                                #define DEFt_clone_Z5oQfAXT
inline const fu_VEC<int>& clone_Z5oQfAXT(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_TyHd3cFd
                                #define DEFt_clone_TyHd3cFd
inline const fu_VEC<s_Struct>& clone_TyHd3cFd(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Ga719jiI
                                #define DEFt_clone_Ga719jiI
inline const s_RemoteNode& clone_Ga719jiI(const s_RemoteNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_UugjtQNo
                                #define DEFt_clone_UugjtQNo
inline const fu_VEC<s_ScopeItem>& clone_UugjtQNo(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_vHWyh2kA
                                #define DEFt_clone_vHWyh2kA
inline const fu_VEC<s_Overload>& clone_vHWyh2kA(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mya8cha1
                                #define DEFt_clone_mya8cha1
inline const fu_VEC<s_Extended>& clone_mya8cha1(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_g4Ujnafl
                                #define DEFt_clone_g4Ujnafl
inline const fu_VEC<s_Target>& clone_g4Ujnafl(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_KgAJF7rh
                                #define DEFt_clone_KgAJF7rh
inline s_Scope clone_KgAJF7rh(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.items = clone_UugjtQNo(a.items);
        res.overloads = clone_vHWyh2kA(a.overloads);
        res.extended = clone_mya8cha1(a.extended);
        res.imports = clone_Z5oQfAXT(a.imports);
        res.privates = clone_Z5oQfAXT(a.privates);
        res.usings = clone_g4Ujnafl(a.usings);
        res.converts = clone_g4Ujnafl(a.converts);
        res.pub_items = clone_eabe9idx(a.pub_items);
        res.pub_cnvrts = clone_eabe9idx(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_ALGAdvIN
                                #define DEFt_clone_ALGAdvIN
inline s_SolverOutput clone_ALGAdvIN(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_Ga719jiI(a.root);
        res.scope = clone_KgAJF7rh(a.scope);
        res.notes = clone_eabe9idx(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_CTYCPNAe
                                #define DEFt_clone_CTYCPNAe
inline const s_CodegenOutput& clone_CTYCPNAe(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mer3UxL3
                                #define DEFt_clone_mer3UxL3
inline s_ModuleOutputs clone_mer3UxL3(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_Z5oQfAXT(a.deps);
        res.types = clone_TyHd3cFd(a.types);
        res.solve = clone_ALGAdvIN(a.solve);
        res.cpp = clone_CTYCPNAe(a.cpp);
        res.init_prio = clone_eabe9idx(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_Ea67s1xd
                                #define DEFt_clone_Ea67s1xd
inline const s_ModuleStats& clone_Ea67s1xd(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_xKmoTKtA
                                #define DEFt_clone_xKmoTKtA
inline s_Module clone_xKmoTKtA(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_eabe9idx(a.modid);
        res.fname = clone_rOVPWlZS(a.fname);
        res.in = clone_C7TEVOlR(a.in);
        res.out = clone_mer3UxL3(a.out);
        res.stats = clone_Ea67s1xd(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_map_iHfe27wP
                                #define DEFt_map_iHfe27wP
inline fu_VEC<s_Module> map_iHfe27wP(fu::view<s_Module> a, int)
{
    /*MOV*/ fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_xKmoTKtA(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_iDg7mVx5
                                #define DEFt_clone_iDg7mVx5
inline fu_VEC<s_Module> clone_iDg7mVx5(fu::view<s_Module> a)
{
    return map_iHfe27wP(a, 0);
}
                                #endif

                                #ifndef DEFt_clone_4bSXVtDS
                                #define DEFt_clone_4bSXVtDS
inline const s_Map_tcbzgxDC& clone_4bSXVtDS(const s_Map_tcbzgxDC& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_8XhxuvqN
                                #define DEFt_clone_8XhxuvqN
inline s_Context clone_8XhxuvqN(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_iDg7mVx5(a.modules);
        res.files = clone_4bSXVtDS(a.files);
        res.fuzzy = clone_4bSXVtDS(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_WzMqKZ7M
                                #define DEFt_clone_WzMqKZ7M
inline s_Scope clone_WzMqKZ7M(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.items = clone_UugjtQNo(a.items);
        res.overloads = clone_vHWyh2kA(a.overloads);
        res.extended = clone_mya8cha1(a.extended);
        res.imports = clone_Z5oQfAXT(a.imports);
        res.privates = clone_Z5oQfAXT(a.privates);
        res.usings = clone_g4Ujnafl(a.usings);
        res.converts = clone_g4Ujnafl(a.converts);
        res.pub_items = clone_eabe9idx(a.pub_items);
        res.pub_cnvrts = clone_eabe9idx(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_eSWVQhOR
                                #define DEFt_clone_eSWVQhOR
inline s_SolverOutput clone_eSWVQhOR(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_Ga719jiI(a.root);
        res.scope = clone_WzMqKZ7M(a.scope);
        res.notes = clone_eabe9idx(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_vOM158Zb
                                #define DEFt_clone_vOM158Zb
inline s_ModuleOutputs clone_vOM158Zb(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_Z5oQfAXT(a.deps);
        res.types = clone_TyHd3cFd(a.types);
        res.solve = clone_eSWVQhOR(a.solve);
        res.cpp = clone_CTYCPNAe(a.cpp);
        res.init_prio = clone_eabe9idx(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_FWsylQ22
                                #define DEFt_clone_FWsylQ22
inline s_Module clone_FWsylQ22(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_eabe9idx(a.modid);
        res.fname = clone_rOVPWlZS(a.fname);
        res.in = clone_C7TEVOlR(a.in);
        res.out = clone_vOM158Zb(a.out);
        res.stats = clone_Ea67s1xd(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_N_SD_HasStaticInit
                                #define DEF_N_SD_HasStaticInit
inline constexpr int N_SD_HasStaticInit = (1 << 18);
                                #endif

static int compile_O1wkXc2m(const fu_STR& fname, const fu_STR& via, s_Context& ctx, const s_Options& options)
{
    s_Module module = clone_FWsylQ22(getModule_TvkTxTi1(fname, ctx));
    if (!module.in)
    {
        module.out = s_ModuleOutputs{};
        fu_STR _0 {};
        fu_STR src = ((_0 = getFile_TvkTxTi1(fu_STR(fname), ctx)) ? static_cast<fu_STR&&>(_0) : fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)));
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        s_LexerOutput lexer_result = lex_GLuqYFLb(src, fname);
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        s_ParserOutput parser_result = parse_RK3hyBGJ(module.modid, fname, src, lexer_result.tokens, options);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), s_ParserOutput(parser_result) };
        module.stats.lex = (stat1 - stat0);
        module.stats.parse = (stat2 - stat1);
        setModule_2YVZZZ5V(module, ctx);
    }
    else
    {
        if (!(module.out))
            fu::fail((((("import circle: `"_fu + fname) + "\n\t<- "_fu) + via) + "`."_fu));

    };
    if (!module.out)
    {
        module.out.init_prio = 1;
        fu_VEC<fu_STR> fuzimports { module.in.parse.fuzimports };
        for (int i = 0; i < fuzimports.size(); i++)
        {
            const int prio = compile_O1wkXc2m(resolveFile_TvkTxTi1(fuzimports[i], ctx), (fname + (via ? ("\n\t<- "_fu + via) : fu_STR{})), ctx, options);
            if (module.out.init_prio < prio)
                module.out.init_prio = prio;

        };
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        module.out.solve = solve_tk5TYSLn(ctx, module, options);
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        module.out.cpp = cpp_codegen_w3QnwnTR(module, ctx);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
        setModule_2YVZZZ5V(module, ctx);
    };
    return module.out.init_prio + ((module.out.solve.notes & N_SD_HasStaticInit) ? 1 : int{});
}

void build_SigNUJl4(const fu_STR& fname, const bool run, const fu_STR& dir_wrk, const fu_STR& bin, const fu_STR& dir_obj, const fu_STR& dir_src, const fu_STR& dir_cpp, fu::view<char> scheme)
{
    s_Context ctx = clone_8XhxuvqN(CTX_PRELUDE);
    const s_Options options {};

    {
        fu_STR _0 {};
        fu::println((fu::slate<2, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "COMPILE "_fu;
            _0 = (x);
        (void)0;}), static_cast<fu_STR&&>(_0)), fu_STR(fname) }));
        const double t0 = fu::now_hr();
        compile_O1wkXc2m(fname, (*(const fu_STR*)fu::NIL), ctx, options);
        const double t1 = fu::now_hr();
        const double tt = (t1 - t0);
        if ((t1 - t0) > 0.025)
        {
            s_ModuleStat lex {};
            s_ModuleStat parse {};
            s_ModuleStat solve {};
            s_ModuleStat codegen {};
            fu::view<s_Module> m = ctx.modules;
            for (int i = 0; i < m.size(); i++)
            {
                lex += m[i].stats.lex;
                parse += m[i].stats.parse;
                solve += m[i].stats.solve;
                codegen += m[i].stats.codegen;
            };
            ModuleStat_print_2JzWOtmi(lex, "\n    lex "_fu, fu::view<char>{});
            ModuleStat_print_2JzWOtmi(parse, "  parse "_fu, fu::view<char>{});
            ModuleStat_print_2JzWOtmi(solve, "  solve "_fu, fu::view<char>{});
            ModuleStat_print_2JzWOtmi(codegen, "codegen "_fu, "\n"_fu);
        };
        fu_STR _1 {};
        fu_STR _2 {};
        fu_STR _3 {};
        fu::println((fu::slate<3, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "        "_fu;
            _1 = (x);
        (void)0;}), static_cast<fu_STR&&>(_1)), (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = fu::f64dec(tt);
            _2 = (x);
        (void)0;}), static_cast<fu_STR&&>(_2)), (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "s\n"_fu;
            _3 = (x);
        (void)0;}), static_cast<fu_STR&&>(_3)) }));
    };
    build_iE8lIG83(run, fu_STR(dir_wrk), FULIB, fu_STR(bin), fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp), fname, scheme, (*(const fu_STR*)fu::NIL), ctx);
}

static const fu_VEC<fu_STR> NOTES fu_INIT_PRIORITY(1006) = fu_VEC<fu_STR> { fu::slate<15, fu_STR> { "FN_recursion"_fu, "FN_resolve"_fu, "FN_reopen"_fu, "TYPE_recursion"_fu, "TYPE_resolve"_fu, "TYPE_reopen"_fu, "DEAD_code"_fu, "DEAD_call"_fu, "DEAD_let"_fu, "DEAD_if_cond"_fu, "DEAD_if_cons"_fu, "DEAD_arrlit"_fu, "DEAD_loop_init"_fu, "NONTRIV_autocopy"_fu, "RELAX_respec"_fu } };

static fu_STR ensure_main_w1DB7L4Z(const fu_STR& src)
{
    return (fu::has(src, "fn main"_fu) ? fu_STR(src) : (("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu));
}

                                #ifndef DEFt_update_M4LPCBPo
                                #define DEFt_update_M4LPCBPo
inline void update_M4LPCBPo(int, const fu_STR& item, int, const fu_STR& extra, s_Map_tcbzgxDC& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, fu_STR(extra));
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(fu_STR(extra));
}
                                #endif

                                #ifndef DEFt_set_TxPe8oL8
                                #define DEFt_set_TxPe8oL8
inline void set_TxPe8oL8(s_Map_tcbzgxDC& _, const fu_STR& key, const fu_STR& value)
{
    update_M4LPCBPo(0, key, 0, value, _);
}
                                #endif

s_Context compile_snippets_qTyLxMej(fu::view<fu_STR> sources, fu::view<fu_STR> fnames, fu::view<s_Options> options)
{
    /*MOV*/ s_Context ctx = clone_8XhxuvqN(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu_STR& snippet = sources[i];
        fu_STR src = ((i == (sources.size() - 1)) ? ensure_main_w1DB7L4Z(snippet) : fu_STR(snippet));
        fu_STR fname = ((fnames.size() > i) ? fu_STR(fnames[i]) : (x7E((PRJDIR + "__tests__/_"_fu), fu::i64dec(i)) + ".fu"_fu));
        set_TxPe8oL8(ctx.files, fname, src);
        compile_O1wkXc2m(fname, (*(const fu_STR*)fu::NIL), ctx, ((options.size() > i) ? options[i] : (*(const s_Options*)fu::NIL)));
    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        int notes = module.out.solve.notes;
        for (int bit = 0; (bit < NOTES.size()) && notes; bit++)
        {
            const int mask = (1 << bit);
            const int isset = (notes & mask);
            notes &= ~mask;
            if (isset)
                module.out.cpp.src += (("// "_fu + NOTES[bit]) + "\n"_fu);

        };
    };
    return /*NRVO*/ ctx;
}

fu_STR snippet2cpp_XdvOmfpz(const fu_STR& src)
{
    fu_STR fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_qTyLxMej((fu::slate<1, fu_STR> { fu_STR(src) }), (fu::slate<1, fu_STR> { fu_STR(fname) }), fu::view<s_Options>{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu_STR(module.out.cpp.src);

    };
    return fu_STR{};
}

static int unindent_left_mQuocaHs(fu::view<char> src, const int i0)
{
    int i1 = i0;
    while (i1--)
    {
        const char c = src[i1];
        if (c != ' ')
        {
            if (c == '\n')
                return i1 + 1;

            break;
        };
    };
    return int(i0);
}

                                #ifndef DEFt_split_fUoLI6sd
                                #define DEFt_split_fUoLI6sd
inline void split_fUoLI6sd(const fu_STR& str, fu::view<char> sep, int, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEFt_split_OZkl8S7R
                                #define DEFt_split_OZkl8S7R
inline fu_VEC<fu_STR> split_OZkl8S7R(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_fUoLI6sd(str, sep, 0, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_split_2Yrrg70X
                                #define DEFt_split_2Yrrg70X
inline void split_2Yrrg70X(const fu_STR& str, fu::view<char> sep, int, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEFt_split_FrnSuXk6
                                #define DEFt_split_FrnSuXk6
inline fu_VEC<fu_STR> split_FrnSuXk6(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_2Yrrg70X(str, sep, 0, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_only_EepEu5Ed
                                #define DEFt_only_EepEu5Ed
inline const fu_STR& only_EepEu5Ed(fu::view<fu_STR> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static fu_STR ERR_TRIM_XdvOmfpz(const fu_STR& e)
{
    int start = 0;
    bool startOK = false;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '/')
            start = (i + 1);
        else if (c == ':')
            startOK = true;
        else if (c == '\n')
            break;

    };
    if (!(startOK))
        fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_fu + e));

    return fu::slice(e, start);
}

static fu_STR ERR_STRIP_ANSI_XdvOmfpz(/*MOV*/ fu_STR&& e)
{
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '\x1B')
        {
            const int i0 = i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == 'm')
                {
                    i++;
                    e.splice(i0, (i - i0));
                    i = i0;
                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_STRIP_SNIPPETS_XdvOmfpz(/*MOV*/ fu_STR&& e)
{
    int i0 = 0;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if ((c == ' ') || (c == '\n'))
            continue;

        const bool snippet = (((c >= '0') && (c <= '9')) || (c == '|'));
        i++;
        for (; i < e.size(); i++)
        {
            const char c_1 = e[i];
            if (c_1 == '\n')
            {
                i++;
                if (snippet)
                {
                    e.splice(i0, (i - i0));
                    i = i0;
                }
                else
                    i0 = i;

                i--;
                break;
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_KEY_5NtmOG0A(fu::view<fu_STR> sources)
{
    /*MOV*/ fu_STR key {};
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_mQuocaHs(src, src.size());
        key += fu::get_view(src, 0, end);
    };
    return /*NRVO*/ key;
}

                                #ifndef DEFt_map_nCcsFbwE
                                #define DEFt_map_nCcsFbwE
inline fu_VEC<s_Options> map_nCcsFbwE(fu::view<fu_STR> a, int, const s_Options& options)
{
    /*MOV*/ fu_VEC<s_Options> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const s_Options* _0;
        res.mutref(i) = (__extension__ (
        {
            [[maybe_unused]] fu::view<char> _ = a[i];
            _0 = &(options);
        (void)0;}), *_0);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_find_ZPaIFNvW
                                #define DEFt_find_ZPaIFNvW
inline int find_ZPaIFNvW(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_find_VtCzn94C
                                #define DEFt_find_VtCzn94C
inline int find_VtCzn94C(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_grow_if_oob_stpiYkFC
                                #define DEFt_grow_if_oob_stpiYkFC
inline fu_VEC<fu_STR>& grow_if_oob_stpiYkFC(fu_VEC<fu_VEC<fu_STR>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_find_05euw4KZ
                                #define DEFt_find_05euw4KZ
inline int find_05euw4KZ(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

s_Context ZERO_I6W2v6xm(fu_VEC<fu_STR>&& sources, const s_Options& options, s_TestDiffs& testdiffs)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i];
            int start0 = fu::lfind(src, "<fail"_fu);
            if (start0 < 0)
                break;

            int end0 = fu::lfind(src, "</fail>"_fu, start0);
            if (!((end0 >= 0)))
                fu::fail("No closing `</fail>` for `<fail>`."_fu);

            int start1 = (start0 + 5);
            while (src[start1++] != '>')
            {
            };
            fu_STR msg = fu::slice(src, (start0 + 5), (start1 - 1));
            if (!(msg))
                fu::fail("No <fail keywords>."_fu);

            if (!(msg[0] == ' '))
                fu::fail((("Bad <fail keywords>: `<fail"_fu + msg) + ">`."_fu));

            const int end1 = (end0 + 7);
            start0 = unindent_left_mQuocaHs(src, start0);
            end0 = unindent_left_mQuocaHs(src, end0);
            fu_STR prefix = fu::slice(src, 0, start0);
            fu_STR suffix = fu::slice(src, end1, src.size());
            fu_VEC<fu_STR> split = split_OZkl8S7R(fu::slice(src, start1, end0), "<pass/>"_fu);
            if (!(split.size() > 1))
                fu::fail("No `<pass/>` for `<fail>`."_fu);

            if (!(split.size() < 3))
                fu::fail("Multiple `<pass/>` blocks for `<fail>`."_fu);

            fu_VEC<fu_STR> fails = split_FrnSuXk6(split[0], "<fail/>"_fu);
            split.shift();
            fu_STR pass { only_EepEu5Ed(split) };
            for (int j = fails.size(); j-- > 0; )
            {
                fu::view<char> fail = fails[j];
                const int end = unindent_left_mQuocaHs(fail, fail.size());
                sources.mutref(i) = ((prefix + fu::get_view(fail, 0, end)) + suffix);

                try
                {
                    ZERO_I6W2v6xm(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                }
                catch (const std::exception& o_0)
                {
                    fu_STR e = fu_TO_STR(o_0.what());

                {
                    fu_STR e_1 = ERR_TRIM_XdvOmfpz(e);
                    fu_STR actual = ascii_lower_rOVPWlZS(ERR_STRIP_SNIPPETS_XdvOmfpz(ERR_STRIP_ANSI_XdvOmfpz(fu_STR(e_1))));
                    int m0 = -1;
                    for (int m1 = 0; (m1 <= msg.size()); m1++)
                    {
                        const char c = ((m1 < msg.size()) ? char(msg[m1]) : ' ');
                        if ((int(fu::u8(c)) <= 32))
                        {
                            if ((m0 >= 0))
                            {
                                fu_STR expect = ascii_lower_rOVPWlZS(fu::slice(msg, m0, m1));
                                if (!fu::has(actual, expect))
                                    fu::fail((((((("<fail> mismatch:\n\n    Expected error keyword:\n        "_fu + qBAD_PSFLzFOM(expect)) + " from pattern <fail"_fu) + qBAD_PSFLzFOM(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e_1));

                            };
                            m0 = -1;
                        }
                        else if (m0 < 0)
                            m0 = m1;

                    };
                    set_next_6vbeTssu(testdiffs, ERR_KEY_5NtmOG0A(sources), e_1);
                    continue;
                }
                }
;
                fu::fail(("<fail> does not throw:\n"_fu + sources[i]));
            };
            const int end = unindent_left_mQuocaHs(pass, pass.size());
            sources.mutref(i) = ((prefix + fu::get_view(pass, 0, end)) + suffix);
        };
    };
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i_1];
            int start0 = fu::lfind(src, "<alt>"_fu);
            if (start0 < 0)
                break;

            int end0 = fu::lfind(src, "</alt>"_fu, start0);
            if (!((end0 >= 0)))
                fu::fail("No closing `</alt>` for `<alt>`."_fu);

            const int start1 = (start0 + 5);
            const int end1 = (end0 + 6);
            start0 = unindent_left_mQuocaHs(src, start0);
            end0 = unindent_left_mQuocaHs(src, end0);
            fu_STR prefix = fu::slice(src, 0, start0);
            fu_STR suffix = fu::slice(src, end1, src.size());
            fu_VEC<fu_STR> split = split_OZkl8S7R(fu::slice(src, start1, end0), "<alt/>"_fu);
            if (split.size() < 2)
                split += fu_STR{};

            for (int j = split.size(); j-- > 0; )
            {
                fu::view<char> part = split[j];
                const int end = unindent_left_mQuocaHs(part, part.size());
                sources.mutref(i_1) = ((prefix + fu::get_view(part, 0, end)) + suffix);
                if (j)
                    ZERO_I6W2v6xm(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);

            };
        };
    };
    for (int i_2 = 0; i_2 < sources.size(); i_2++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i_2];
            int start0 = fu::lfind(src, "<split/>"_fu);
            const int start1 = (start0 + 8);
            if (start0 < 0)
                break;

            const int start00 = start0;
            while (start0 && (src[(start0 - 1)] == ' '))
                start0--;

            fu_STR moduleA = fu::slice(src, 0, start0);
            fu_STR moduleB = ((x7E((fu::get_view(src, start0, start00) + "import _"_fu), fu::i64dec(i_2)) + ";"_fu) + fu::get_view(src, start1, src.size()));
            fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
            sources.mutref(i_2) = without;
            ZERO_I6W2v6xm(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
            sources.mutref(i_2) = moduleA;
            sources.insert((i_2 + 1), fu_STR(moduleB));
        };
    };
    fu_VEC<fu_VEC<fu_STR>> expectations {};
    fu_VEC<s_Options> options_1 = map_nCcsFbwE(sources, 0, options);
    for (int i_3 = 0; i_3 < sources.size(); i_3++)
    {
        fu_STR& src = sources.mutref(i_3);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = r;

            src.shrink(end);
        };
        int break_notes {};
        int start = 0;
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            int end = find_ZPaIFNvW(src, '\n', (start + 4));
            if (end < 0)
                end = src.size();

            fu_STR annot = fu::slice(src, (start + 4), end);
            if (annot[0] == '!')
            {
                const int idx = find_VtCzn94C(NOTES, fu::slice(annot, 1, annot.size()));
                if (!((idx >= 0)))
                    fu::fail((("Bad break_note: `;; "_fu + annot) + "`."_fu));

                break_notes |= (1 << idx);
            }
            else
                grow_if_oob_stpiYkFC(expectations, i_3) += fu_STR(annot);

            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = end;
        };
        options_1.mutref(i_3).break_notes = break_notes;
    };
    /*MOV*/ s_Context ctx = compile_snippets_qTyLxMej(sources, fu::view<fu_STR>{}, options_1);
    fu_STR testdiff_prepend {};
    for (int i_4 = 0; i_4 < expectations.size(); i_4++)
    {
        fu::view<fu_STR> arr = expectations[i_4];
        fu::view<char> src = sources[i_4];
        const s_CodegenOutput& cpp = ctx.modules[(i_4 + 1)].out.cpp;
        for (int i_5 = 0; i_5 < arr.size(); i_5++)
        {
            const fu_STR& x = arr[i_5];
            const int idx = find_05euw4KZ(x, ' ');
            fu_STR cmd = fu::slice(x, 0, idx);
            fu_STR rest = fu::slice(x, (idx + 1));
            const bool found = fu::has(cpp.src, rest);
            if (cmd == "EXPECT"_fu)
            {
                if (!(found))
                    fu::fail(((((("EXPECT mismatch: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

            }
            else if (cmd != "TODO"_fu)
                fu::fail(((("Unknown ;; CHECK: `;; "_fu + x) + "` in:\n"_fu) + src));
            else if (found)
                fu::fail(((((("TODO test is actually passing: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));
            else
                testdiff_prepend += ((";; "_fu + x) + "\n"_fu);

        };
    };
    const bool run = true;
    build_iE8lIG83(run, fu_STR(DEFAULT_WORKSPACE), FULIB, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), "debug"_fu, "print-src"_fu, ctx);
    build_iE8lIG83(run, fu_STR(DEFAULT_WORKSPACE), FULIB, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), fu::view<char>{}, "print-src"_fu, ctx);

    {
        if (testdiff_prepend)
            testdiff_prepend += "\n"_fu;

        fu_STR key {};
        for (int i_5 = 0; i_5 < sources.size(); i_5++)
        {
            key += sources[i_5];
            fu::view<char> actual = ctx.modules[((i_5 + ctx.modules.size()) - sources.size())].out.cpp.src;
            set_next_6vbeTssu(testdiffs, key, (testdiff_prepend + actual));
        };
    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEFt_replace_Q0b6Gw5m
                                #define DEFt_replace_Q0b6Gw5m
inline fu_STR replace_Q0b6Gw5m(const fu_STR& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu_STR result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu_STR substr = fu::slice(str, last, next);
                    const bool first = !last;
                    const bool last_1 = false;
                    if (!first)
                        result += with;
                    else if (last_1)
                        return fu_STR(str);

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu_STR substr = fu::slice(str, last);
            const bool first = false;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += substr;
        }
        else
        {
            const bool first = true;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += str;
        };
    };
    return /*NRVO*/ result;
}
                                #endif

static fu_STR indent_rLXp1YmT(const fu_STR& src)
{
    return replace_Q0b6Gw5m(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_Xxq967wr(fu::view<fu_VEC<fu_STR>> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<s_Module> expect = ZERO_I6W2v6xm(fu_VEC<fu_STR>(alts[0]), s_Options{}, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu_VEC<s_Module> actual = compile_snippets_qTyLxMej(alts[i], fu::view<fu_STR>{}, fu::view<s_Options>{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);

        for (int m = 0; m < actual.size(); m++)
        {
            const fu_STR& x = expect[m].out.cpp.src;
            const fu_STR& a = actual[m].out.cpp.src;
            if (x != a)
                fu::fail((((x7E((((x7E(((x7E("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_rLXp1YmT(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_rLXp1YmT(a)) + "\n"_fu));

        };
    };
}

                                #ifndef DEFt_join_VtCzn94C
                                #define DEFt_join_VtCzn94C
inline fu_STR join_VtCzn94C(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

void TODO_F0x7UbmU(const fu_VEC<fu_STR>& sources, s_TestDiffs& testdiffs)
{

    try
    {
        ZERO_I6W2v6xm(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        set_next_6vbeTssu(testdiffs, ERR_KEY_5NtmOG0A(sources), ("TODO: "_fu + ERR_TRIM_XdvOmfpz(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_VtCzn94C(sources, "\n\n"_fu)));
}

s_Context ZERO_XdvOmfpz(const fu_STR& src, s_TestDiffs& testdiffs)
{
    return ZERO_I6W2v6xm(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, s_Options{}, testdiffs);
}

void TODO_XdvOmfpz(const fu_STR& src, s_TestDiffs& testdiffs)
{
    TODO_F0x7UbmU(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, testdiffs);
}

void ZERO_SAME_5NtmOG0A(fu::view<fu_STR> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<fu_VEC<fu_STR>> wrap {};
    for (int i = 0; i < alts.size(); i++)
        wrap += fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(alts[i]) } };

    ZERO_SAME_Xxq967wr(wrap, testdiffs);
}

#endif
