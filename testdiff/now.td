
        struct Node { target: int; items?: Node[] }

        noinline fn revSpecFewerArgs(overloads: Node[], args: int[][], root: Node)
        {
            fn cgNode(n: Node) {
                mut src = "";
                for (mut i = 0; i < n.items.len; i++)
                    src ~= cgFn(n.items[i].target);

                return src;
            }

            fn cgFn(target: int) {
                mut src = cgNode(overloads[target]);

                fn foreach(arg: int)
                    src ~= cgNode(overloads[arg]);

                shadow let args = args[target];
                for (mut i = 0; i < args.len; i++)
                    foreach(args[i]);

                return src;
            }

            return cgNode(root);
        }

        fn main() {
            return revSpecFewerArgs(
                [ Node() ], [ [] => int[] ], Node()).len;
        }

---- [ status(0) uniq_bytes(0) uniq_count(0) arc_bytes(0) arc_count(0) ] ----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>

struct Node_LZ9s;
static /*14:*/fu::str cgNode_MbR9(const Node_LZ9s&, /*8:*/fu::view<Node_LZ9s>, /*8:*/fu::view</*14:*/fu::vec<int>>);

                                #ifndef DEF_Node_LZ9sXfZwCP5
                                #define DEF_Node_LZ9sXfZwCP5
struct Node_LZ9s
{
                                // shape_hash:    9426cca71aa9fe34
                                // non_triv_mask: 0022000000000000
    int target;
    /*14:*/fu::vec<Node_LZ9s> items;
    Node_LZ9s(const Node_LZ9s&) = default;
    Node_LZ9s(Node_LZ9s&&) = default;
    Node_LZ9s& operator=(Node_LZ9s&&) = default;
    Node_LZ9s& operator=(const Node_LZ9s& selfrec) { return *this = Node_LZ9s(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || target
            || items
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static /*14:*/fu::vec_range<char> foreach_kGbb(const int arg, /*F:F*/ /*15:*/fu::vec_range_mut<char> src, /*F:F*/ /*8:*/fu::view<Node_LZ9s> overloads, /*F:F*/ /*8:*/fu::view</*14:*/fu::vec<int>> args)
{
    return (src += cgNode_MbR9(overloads[arg], overloads, args));
}

static /*14:*/fu::str cgFn_MbR9(const int target, /*7:7*/ /*8:*/fu::view<Node_LZ9s> overloads, /*7:7*/ /*8:*/fu::view</*14:*/fu::vec<int>> args)
{
    /*MOV*/ /*14:*/fu::str src = cgNode_MbR9(overloads[target], overloads, args);
    /*8:*/fu::view<int> /*args|static*/ args_1 = args[target];
    for (int i = 0; i < args_1.size(); i++)
        foreach_kGbb(args_1[i], src, overloads, args);

    return /*NRVO*/ src;
}

static /*14:*/fu::str cgNode_MbR9(/*7:7*/ const Node_LZ9s& n, /*7:7*/ /*8:*/fu::view<Node_LZ9s> overloads, /*7:7*/ /*8:*/fu::view</*14:*/fu::vec<int>> args)
{
    /*MOV*/ /*14:*/fu::str src = fu::str(""_fu);
    for (int i = 0; i < n.items.size(); i++)
        src += cgFn_MbR9(n.items[i].target, overloads, args);

    return /*NRVO*/ src;
}

static /*14:*/fu::str revSpecFewerArgs_MbR9(/*7:7*/ /*8:*/fu::view<Node_LZ9s> overloads, /*7:7*/ /*8:*/fu::view</*14:*/fu::vec<int>> args, /*7:7*/ const Node_LZ9s& root)
{
    return cgNode_MbR9(root, overloads, args);
}

int fu_MAIN()
{
    return revSpecFewerArgs_MbR9(fu::view<Node_LZ9s> {{ Node_LZ9s{} }}, fu::view</*14:*/fu::vec<int>> {{ /*14:AlwaysFalse, LeftAligned, RightAligned*/fu::vec<int>{} }}, Node_LZ9s{}).size();
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_TypeRecursion, N_TypeResolve, N_DeadCode, N_DeadCall, N_DeadLet, N_NonTrivAutoCopy, N_RelaxRespec, N_UnusedImplicit, N_UnusedCall

========

        struct Node { target: int; items?: Node[] }

        noinline fn revSpecFewerArgs(overloads: Node[], args: int[][], root: Node)
        {
            fn cgNode(n: Node) {
                mut src = "";
                for (mut i = 0; i < n.items.len; i++)
                    src ~= cgFn(n.items[i].target);

                return src;
            }

            fn cgFn(target: int) {
                mut src = cgNode(overloads[target]);

                fn foreach(arg: int)
                    src ~= cgNode(overloads[arg]);

                shadow let args = args[target];
                for (mut i = 0; i < args.len; i++)
                    foreach(args[i]);

                return src;
            }

            return cgNode(root);
        }

        fn main() {
            return revSpecFewerArgs(
                [ Node() ], [ [] => int[] ], Node()).len;
        }

---- [ status(0) uniq_bytes(0) uniq_count(0) arc_bytes(0) arc_count(0) ] ----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>

struct Node_LZ9s;
static /*14:LeftAligned, RightAligned*/fu::str cgNode_MbR9(const Node_LZ9s&, /*8:*/fu::view<Node_LZ9s>, /*8:*/fu::view</*14:*/fu::vec<int>>);

                                #ifndef DEF_Node_LZ9sXfZwCP5
                                #define DEF_Node_LZ9sXfZwCP5
struct Node_LZ9s
{
                                // shape_hash:    9426cca71aa9fe34
                                // non_triv_mask: 0022000000000000
    int target;
    /*14:*/fu::vec<Node_LZ9s> items;
    Node_LZ9s(const Node_LZ9s&) = default;
    Node_LZ9s(Node_LZ9s&&) = default;
    Node_LZ9s& operator=(Node_LZ9s&&) = default;
    Node_LZ9s& operator=(const Node_LZ9s& selfrec) { return *this = Node_LZ9s(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || target
            || items
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static /*14:*/fu::vec_range<char> foreach_kGbb(const int arg, /*F:F*/ /*15:LeftAligned, RightAligned*/fu::str& src, /*F:F*/ /*8:*/fu::view<Node_LZ9s> overloads, /*F:F*/ /*8:*/fu::view</*14:*/fu::vec<int>> args)
{
    return (src += cgNode_MbR9(overloads[arg], overloads, args));
}

static /*14:LeftAligned, RightAligned*/fu::str cgFn_MbR9(const int target, /*7:7*/ /*8:*/fu::view<Node_LZ9s> overloads, /*7:7*/ /*8:*/fu::view</*14:*/fu::vec<int>> args)
{
    /*MOV*/ /*14:LeftAligned, RightAligned*/fu::str src = cgNode_MbR9(overloads[target], overloads, args);
    /*8:*/fu::view<int> /*args|static*/ args_1 = args[target];
    for (int i = 0; i < args_1.size(); i++)
        foreach_kGbb(args_1[i], src, overloads, args);

    return /*NRVO*/ src;
}

static /*14:LeftAligned, RightAligned*/fu::str cgNode_MbR9(/*7:7*/ const Node_LZ9s& n, /*7:7*/ /*8:*/fu::view<Node_LZ9s> overloads, /*7:7*/ /*8:*/fu::view</*14:*/fu::vec<int>> args)
{
    /*MOV*/ /*14:LeftAligned, RightAligned*/fu::str src {};
    for (int i = 0; i < n.items.size(); i++)
        src += cgFn_MbR9(n.items[i].target, overloads, args);

    return /*NRVO*/ src;
}

static /*14:LeftAligned, RightAligned*/fu::str revSpecFewerArgs_MbR9(/*7:7*/ /*8:*/fu::view<Node_LZ9s> overloads, /*7:7*/ /*8:*/fu::view</*14:*/fu::vec<int>> args, /*7:7*/ const Node_LZ9s& root)
{
    return cgNode_MbR9(root, overloads, args);
}

int fu_MAIN()
{
    return revSpecFewerArgs_MbR9(fu::view<Node_LZ9s> {{ Node_LZ9s{} }}, fu::view</*14:*/fu::vec<int>> {{ /*14:AlwaysFalse, LeftAligned, RightAligned*/fu::vec<int>{} }}, Node_LZ9s{}).size();
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_TypeRecursion, N_TypeResolve, N_DeadCode, N_DeadCall, N_DeadLet, N_RelaxRespec, N_UnusedImplicit, N_UnusedCall

========
