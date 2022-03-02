

        fn main(): i32 {}               

-----
_0.fu @3:9:

[2m      | [0m
[2m      | [0m
    3 |         [31;1mfn[0m main(): i32 {}               
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- void

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        fn main(): i32 { return 0; }    

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


        fn test(): i32 {}               
        fn main() test();

-----
_0.fu @3:9:

[2m      | [0m
[2m      | [0m
    3 |         [31;1mfn[0m test(): i32 {}               
[2m      |         fn main() test();[0m
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- void

        Solving [35;1mfn[0m [34;1mtest_H9fhQUVP[0m

-----


        fn test(): i32 { return 0; }    
        fn main() test();

-----

#ifndef FU_NO_FDEFs

static int test_H9fhQUVP()
{
    return 0;
}

int fu_MAIN()
{
    return test_H9fhQUVP();
}

#endif


int main() { return fu_MAIN(); }

-----

        return 1 - 1;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 1 - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sum(a: i32, b: i32): i32
            a + b;

        return sum(1, -1);

-----

#ifndef FU_NO_FDEFs

static int sum_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return sum_Y2eLgl0W(1, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sum(a: i32, b: i32)
            a + b;

        return sum(1, -1);

-----

#ifndef FU_NO_FDEFs

static int sum_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return sum_Y2eLgl0W(1, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sign(a: i32)
            a > 0 ? 1 : a < 0 ? -1 : 0;

        return sign(7) + sign(-3) + sign(0);

-----

#ifndef FU_NO_FDEFs

static int sign_neXOK2KY(const int a)
{
    return ((a > 0) ? 1 : ((a < 0) ? -1 : 0));
}

int fu_MAIN()
{
    return (sign_neXOK2KY(7) + sign_neXOK2KY(-3)) + sign_neXOK2KY(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sign(a: i32) {
            if (a > 0)
                return 1;

            return -2;
        }

        return sign(10) * 2 + sign(-5);

-----

#ifndef FU_NO_FDEFs

static int sign_neXOK2KY(const int a)
{
    if (a > 0)
        return 1;

    return -2;
}

int fu_MAIN()
{
    return (sign_neXOK2KY(10) * 2) + sign_neXOK2KY(-5);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sign(a: i32) {
            if (a > 0)
                return 1;
            else
                return -2;
        }

        return sign(10) * 2 + sign(-5);

-----

#ifndef FU_NO_FDEFs

static int sign_neXOK2KY(const int a)
{
    if (a > 0)
        return 1;
    else
        return -2;

}

int fu_MAIN()
{
    return (sign_neXOK2KY(10) * 2) + sign_neXOK2KY(-5);
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn main() {
            let  i = -1;
            let sb = i.i8;
            let  b = i.u8;

            return sb == -1 && b == 255 ? 0 : 1;
        }

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int i = -1;
    const fu::i8 sb = fu::i8(i);
    const fu::u8 b = fu::u8(unsigned(i));
    return (((sb == fu::i8(-1)) && (b == fu::u8(255u))) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let sb = (-1).i8;
            let  i =  sb.i32;
            let  u =  sb.u32;

            return i == -1 && u.i32 == 255 ? 0 : 1;
        }

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const fu::i8 sb = fu::i8(-1);
    const int i = int(sb);
    const unsigned u = unsigned(fu::u8(sb));
    return (((i == -1) && (int(u) == 255)) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let b = byte(200);
            let i = b.i32;
            return i == 200 ? 0 : 1;
        }

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const char b = char(200);
    const int i = int(fu::u8(b));
    return ((i == 200) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let a = 3;
        mut b = a;
        b++;
        return b - (a + 1);

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = 3;
    int b = a;
    b++;
    return b - (a + 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        for (mut i = 0; i < 10; i++)
            sum++;

        return sum * 2 - 20;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum++;

    return (sum * 2) - 20;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        for (mut i = 10; i --> 0; )
            sum--;

        return sum * 2 + 20;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    for (int i = 10; i-- > 0; )
        sum--;

    return (sum * 2) + 20;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn decr(num: &mut i32)
            num--;

        mut res = 0;
        decr(res);
        return res + 1;

-----

#ifndef FU_NO_FDEFs

static int decr_tSbBZlcD(int& num)
{
    return num--;
}

int fu_MAIN()
{
    int res = 0;
    decr_tSbBZlcD(res);
    return res + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn decr(ref num: i32)
            num--;

        mut res = 0;
        decr(res);
        return res + 1;

-----

#ifndef FU_NO_FDEFs

static int decr_tSbBZlcD(int& num)
{
    return num--;
}

int fu_MAIN()
{
    int res = 0;
    decr_tSbBZlcD(res);
    return res + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut res = 0;
        fn decr()
            res--;

        decr();
        return res + 1;

-----

#ifndef FU_NO_FDEFs

static int decr_EJhRWC6k(int& res)
{
    return res--;
}

int fu_MAIN()
{
    int res = 0;
    decr_EJhRWC6k(res);
    return res + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut res = 0;
        fn decr(num: &mut i32) { num--; } // ret void

        decr(res);
        return res + 1;

-----

#ifndef FU_NO_FDEFs

static void decr_tSbBZlcD(int& num)
{
    num--;
}

int fu_MAIN()
{
    int res = 0;
    decr_tSbBZlcD(res);
    return res + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        while (sum < 15)
            sum++;

        return sum - 15;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    while (sum < 15)
        sum++;

    return sum - 15;
}

#endif


int main() { return fu_MAIN(); }

-----


        let sum = 0;        
        while (sum < 15)
            sum++;

        return sum - 15;

-----
_0.fu @8:16:

[2m      |         let sum = 0;        [0m
[2m      |         while (sum < 15)[0m
    8 |             sum[31;1m++[0m;
[2m      | [0m
[2m      |         return sum - 15;[0m

	Bad call to [34;1mpostfix++[0m: 

	[35;1mtemplate[0m [34;1mpostfix++[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        mut sum = 0;        
        while (sum < 15)
            sum++;

        return sum - 15;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    while (sum < 15)
        sum++;

    return sum - 15;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        while (sum < 15)
            sum += 2;

        return sum - 16;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    while (sum < 15)
        sum += 2;

    return sum - 16;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut i = 5;
        mut sum = 0;
        while (let x = i--) sum += x - i;
        return sum - 5;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int i = 5;
    int sum = 0;
    while (const int x = i--)
        sum += (x - i);

    return sum - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn named(a: i32, b: i32)
            a - b * 2;

        return named(b: 3, 6);

-----

#ifndef FU_NO_FDEFs

static int named_Y2eLgl0W(const int a, const int b)
{
    return a - (b * 2);
}

int fu_MAIN()
{
    return named_Y2eLgl0W(6, 3);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn named(a: i32, b: i32)
            a - b * 2;

        fn other(a: i32, b: i32)
            named(:b, :a);

        return other(b: 3, 6);

-----

#ifndef FU_NO_FDEFs

static int named_Y2eLgl0W(const int a, const int b)
{
    return a - (b * 2);
}

static int other_7FVEK3BH(const int a, const int b)
{
    return named_Y2eLgl0W(a, b);
}

int fu_MAIN()
{
    return other_7FVEK3BH(6, 3);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ret_only_arg(a) a;

        fn main() 0.ret_only_arg;

-----

#ifndef FU_NO_FDEFs

inline static int ret_only_arg_pZ8wRcaF(const int a)
{
    return a;
}

int fu_MAIN()
{
    return int(ret_only_arg_pZ8wRcaF(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ret_only_arg(a) a;

-----

-----

        fn ret_only_arg(a) a;
        import _0;
        fn main() 0.ret_only_arg;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_ret_only_arg_pZ8wRcaF
                                #define DEFt_ret_only_arg_pZ8wRcaF
inline int ret_only_arg_pZ8wRcaF(const int a)
{
    return a;
}
                                #endif

int fu_MAIN()
{
    return int(ret_only_arg_pZ8wRcaF(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Range {
            min: i32;
            max: i32;
        }

        fn size(r: Range)
            r.max - r.min;

        return size(Range(14, 21)) - 7;

-----

struct s_Range;

                                #ifndef DEF_s_Range
                                #define DEF_s_Range
struct s_Range
{
    int min;
    int max;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int size_DHkEjcEF(const s_Range& r)
{
    return r.max - r.min;
}

int fu_MAIN()
{
    return size_DHkEjcEF(s_Range { 14, 21 }) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Range {
            min: i32;
            max: i32;
        }

        mut r = Range(1, 2);
        r.min++;
        return r.max - r.min;

-----

struct s_Range;

                                #ifndef DEF_s_Range
                                #define DEF_s_Range
struct s_Range
{
    int min;
    int max;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_Range r = s_Range { 1, 2 };
    r.min++;
    return r.max - r.min;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Range {
            min: i32;
            max: i32;
        }


        let r =             
            Range(1, 2);

        r.min++;
        return r.max - r.min;

-----
_0.fu @14:14:

[2m      |             Range(1, 2);[0m
[2m      | [0m
   14 |         r.min[31;1m++[0m;
[2m      |         return r.max - r.min;[0m
[2m      | [0m

	Bad call to [34;1mpostfix++[0m: 

	[35;1mtemplate[0m [34;1mpostfix++[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Range {
            min: i32;
            max: i32;
        }


        mut r =             
            Range(1, 2);

        r.min++;
        return r.max - r.min;

-----

struct s_Range;

                                #ifndef DEF_s_Range
                                #define DEF_s_Range
struct s_Range
{
    int min;
    int max;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_Range r = s_Range { 1, 2 };
    r.min++;
    return r.max - r.min;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Range {
            r_min: i32;
            r_max: i32;
        }

        fn size(using r: Range)
            r_max - r_min;

        return size(Range(14, 21)) - 7;

-----

struct s_Range;

                                #ifndef DEF_s_Range
                                #define DEF_s_Range
struct s_Range
{
    int r_min;
    int r_max;
    explicit operator bool() const noexcept
    {
        return false
            || r_min
            || r_max
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int size_DHkEjcEF(const s_Range& r)
{
    return r.r_max - r.r_min;
}

int fu_MAIN()
{
    return size_DHkEjcEF(s_Range { 14, 21 }) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct X {
            a: i32;
        }

        fn test(using x: X, b: i32) a + b;
        fn hey(using x: X) test(-1);

        return X(1).hey;

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_5Uq3of9N(const s_X& x, const int b)
{
    return x.a + b;
}

static int hey_DHkEjcEF(const s_X& x)
{
    return test_5Uq3of9N(x, -1);
}

int fu_MAIN()
{
    return hey_DHkEjcEF(s_X { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Pos {
            x: i32;
        }

        struct Player {
            using pos: Pos;
        }

        fn dist(using p: Player, other: Player)
            x - other.x;

        let a = Player(Pos(10));
        let b = Player(Pos( 4));

        return dist(a, b) - 6;

-----

struct s_Player;
struct s_Pos;

                                #ifndef DEF_s_Pos
                                #define DEF_s_Pos
struct s_Pos
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Player
                                #define DEF_s_Player
struct s_Player
{
    s_Pos pos;
    explicit operator bool() const noexcept
    {
        return false
            || pos
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int dist_9ZQvlupG(const s_Player& p, const s_Player& other)
{
    return p.pos.x - other.pos.x;
}

int fu_MAIN()
{
    const s_Player a = s_Player { s_Pos { 10 } };
    const s_Player b = s_Player { s_Pos { 4 } };
    return dist_9ZQvlupG(a, b) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { x: i32; y: i32; };
        struct B { x: i32; z: i32; };
        fn test(using a: A, using b: B)

            x + z; 

        fn main() test(A(1, 1), B(-1, -1));

-----
_0.fu @6:13:

[2m      |         fn test(using a: A, using b: B)[0m
[2m      | [0m
    6 |             [31;1mx[0m + z; 
[2m      | [0m
[2m      |         fn main() test(A(1, 1), B(-1, -1));[0m

	Ambiguous callsite, matches multiple items in scope:

	[35;1mfield[0m [34;1mx[0m(
	    [34;1mthis[0m: B
	        via [35;1marg[0m [34;1mb[0m) from global scope and 

	[35;1mfield[0m [34;1mx[0m(
	    [34;1mthis[0m: A
	        via [35;1marg[0m [34;1ma[0m) from global scope, as seen from `test_EaTR4Cbg`.

        Solving [35;1mfn[0m [34;1mtest_EaTR4Cbg[0m

-----

        struct A { x: i32; y: i32; };
        struct B { x: i32; z: i32; };
        fn test(using a: A, using b: B)

            y + z; 

        fn main() test(A(1, 1), B(-1, -1));

-----

struct s_A;
struct s_B;

                                #ifndef DEF_s_A
                                #define DEF_s_A
struct s_A
{
    int x;
    int y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int x;
    int z;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || z
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_EaTR4Cbg(const s_A& a, const s_B& b)
{
    return a.y + b.z;
}

int fu_MAIN()
{
    return test_EaTR4Cbg(s_A { 1, 1 }, s_B { -1, -1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct CurrentFn {
            parent_idx: i32;
            using RoR?: CurrentFn_ResetOnResolve; // not yet populated
        };

        struct CurrentFn_ResetOnResolve {
            ret_count: i32;
        };

        fn test(f: CurrentFn) f.parent_idx - f.ret_count;
        fn main() test(CurrentFn(1, CurrentFn_ResetOnResolve(1)));

-----

struct s_CurrentFn;
struct s_CurrentFn_ResetOnResolve;

                                #ifndef DEF_s_CurrentFn_ResetOnResolve
                                #define DEF_s_CurrentFn_ResetOnResolve
struct s_CurrentFn_ResetOnResolve
{
    int ret_count;
    explicit operator bool() const noexcept
    {
        return false
            || ret_count
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    int parent_idx;
    s_CurrentFn_ResetOnResolve RoR;
    explicit operator bool() const noexcept
    {
        return false
            || parent_idx
            || RoR
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_vEF4Qiyl(const s_CurrentFn& f)
{
    return f.parent_idx - f.RoR.ret_count;
}

int fu_MAIN()
{
    return test_vEF4Qiyl(s_CurrentFn { 1, s_CurrentFn_ResetOnResolve { 1 } });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct HasPredicate {
            true kind   : string;
            items       : i32;
        };

        fn main() {
            let isTrue  = HasPredicate("let", 0);
            let isFalse = HasPredicate("",    1);
            return isTrue && !isFalse ? 0 : 1;
        }

-----

#include <fu/str.h>

struct s_HasPredicate;

                                #ifndef DEF_s_HasPredicate
                                #define DEF_s_HasPredicate
struct s_HasPredicate
{
    fu_STR kind;
    int items;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_HasPredicate isTrue = s_HasPredicate { "let"_fu, 0 };
    s_HasPredicate isFalse = s_HasPredicate { fu_STR{}, 1 };
    return ((isTrue && !isFalse) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = 3;
        return x / 2 - 1;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int x = 3;
    return (x / 2) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn hey(a) a * a;
        fn main = 0.hey;

-----

#ifndef FU_NO_FDEFs

inline static int hey_pZ8wRcaF(const int a)
{
    return a * a;
}

int fu_MAIN()
{
    return hey_pZ8wRcaF(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn div3by(a: $T) 3 / a;
        return div3by(2) - 1;

-----

#ifndef FU_NO_FDEFs

inline static int div3by_kvdihmBv(const int a)
{
    return 3 / a;
}

int fu_MAIN()
{
    return div3by_kvdihmBv(2) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn div3by(a) 3 / a;
        return div3by(2) - 1;

-----

#ifndef FU_NO_FDEFs

inline static int div3by_kvdihmBv(const int a)
{
    return 3 / a;
}

int fu_MAIN()
{
    return div3by_kvdihmBv(2) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn add3(a: i32, b = 3) a + b;
        fn main() add3(-3);

-----

#ifndef FU_NO_FDEFs

static int add3_XFamX2JF(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return add3_XFamX2JF(-3, 3);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn add3(a: $T, b = 3) a + b;
        struct v1 { x: i32; };
        fn +(a: v1, b: i32) v1(a.x + b);
        fn main() add3(2.v1).x - 5;

-----

struct s_v1;

                                #ifndef DEF_s_v1
                                #define DEF_s_v1
struct s_v1
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_v1 operator+(const s_v1& a, const int b)
{
    return s_v1 { (a.x + b) };
}

inline static s_v1 add3_7JuQm897(const s_v1& a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return add3_7JuQm897(s_v1 { 2 }, 3).x - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul_ab_init(a: $T, b = 0) a*b;
        fn main() mul_ab_init(1);

-----

#ifndef FU_NO_FDEFs

inline static int mul_ab_init_XFamX2JF(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_init_XFamX2JF(1, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul_ab_annot_init(a: $T, b: $T = 0) a*b;
        fn main() mul_ab_annot_init(1);

-----

#ifndef FU_NO_FDEFs

inline static int mul_ab_annot_init_XFamX2JF(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_annot_init_XFamX2JF(1, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul_ab_opt(a: $T, b?: $T) a*b;
        fn main() mul_ab_opt(1);

-----

#ifndef FU_NO_FDEFs

inline static int mul_ab_opt_XFamX2JF(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_opt_XFamX2JF(1, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ab(a, b) a + b*2;
        fn main() ab(b: 1, a: -2);

-----

#ifndef FU_NO_FDEFs

inline static int ab_XFamX2JF(const int a, const int b)
{
    return a + (b * 2);
}

int fu_MAIN()
{
    return ab_XFamX2JF(-2, 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct yi32 { y: i32; };
        fn add_s_vy(v, s) s + v.y;
        fn main() add_s_vy(v: yi32(1), -1);

-----

struct s_yi32;

                                #ifndef DEF_s_yi32
                                #define DEF_s_yi32
struct s_yi32
{
    int y;
    explicit operator bool() const noexcept
    {
        return false
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int add_s_vy_7JuQm897(const s_yi32& v, const int s)
{
    return s + v.y;
}

int fu_MAIN()
{
    return add_s_vy_7JuQm897(s_yi32 { 1 }, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct xi32 { x: i32; };
        fn add_s_vx(s, v) s + v.x; // <- args reordered
        fn main() add_s_vx(v: xi32(1), -1);

-----

struct s_xi32;

                                #ifndef DEF_s_xi32
                                #define DEF_s_xi32
struct s_xi32
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int add_s_vx_Ld0ZtN1s(const int s, const s_xi32& v)
{
    return s + v.x;
}

int fu_MAIN()
{
    return add_s_vx_Ld0ZtN1s(-1, s_xi32 { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ab(a, b = 0, c = 0) a + b*2 + c*3;
        fn main() ab(3, c: -1);

-----

#ifndef FU_NO_FDEFs

inline static int ab_jGV0i41P(const int a, const int b, const int c)
{
    return (a + (b * 2)) + (c * 3);
}

int fu_MAIN()
{
    return ab_jGV0i41P(3, 0, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ab(a, b = -1) a + b*2;
        fn main() ab(3.0, -1.5).i32;

-----

#ifndef FU_NO_FDEFs

inline static double ab_WeMz04uj(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_WeMz04uj(3.0, -1.5));
}

#endif


int main() { return fu_MAIN(); }

-----

        let NEG_ONE_FIVE = -1.5;
        fn ab(a: $T, b: $T = -1) a + b*2;
        fn main() ab(3, NEG_ONE_FIVE).i32;

-----

#ifndef FU_NO_FDEFs

static const double NEG_ONE_FIVE = -1.5;

inline static double ab_WeMz04uj(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_WeMz04uj(3.0, NEG_ONE_FIVE));
}

#endif


int main() { return fu_MAIN(); }

-----

        let TWO = 2.0;
        fn ab(a: $T, b: $T = -1) a + b*2;
        fn main() ab(TWO).i32;

-----

#ifndef FU_NO_FDEFs

static const double TWO = 2.0;

inline static double ab_WeMz04uj(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_WeMz04uj(TWO, -1.0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn self_rec_template(x: $T): $T                     // !FN_resolve
            x > 0 ? self_rec_template(x / 2 - 5) : x;

        fn main()
            self_rec_template(7) + 2;

-----

inline static int self_rec_template_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

inline static int self_rec_template_pZ8wRcaF(const int x)
{
    return ((x > 0) ? self_rec_template_pZ8wRcaF(((x / 2) - 5)) : int(x));
}

int fu_MAIN()
{
    return self_rec_template_pZ8wRcaF(7) + 2;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn ab_rec(a: $T): $T = a ? ba_rec(a - 2) : -100;
        fn ba_rec(a: $T): $T = a ? ab_rec(a - 7) : -200;
        fn main() ab_rec(11) + 200;

-----

inline static int ab_rec_pZ8wRcaF(int);
inline static int ba_rec_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

inline static int ba_rec_pZ8wRcaF(const int a)
{
    return (a ? ab_rec_pZ8wRcaF((a - 7)) : -200);
}

inline static int ab_rec_pZ8wRcaF(const int a)
{
    return (a ? ba_rec_pZ8wRcaF((a - 2)) : -100);
}

int fu_MAIN()
{
    return ab_rec_pZ8wRcaF(11) + 200;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn main() {
            let a = 1;
            fn add1(b) a + b;
            return 2.add1 - 3;
        }

-----

#ifndef FU_NO_FDEFs

inline static int add1_kvdihmBv(const int b, const int a)
{
    return a + b;
}

int fu_MAIN()
{
    const int a = 1;
    return add1_kvdihmBv(2, a) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn map(a: [$T], fn) {               // !DEAD_code
            mut res: fn($T)[];
            res.grow_junk(a.len);
            for (mut i = 0; i < a.len; i++) res[i] = fn(a[i]);
            return res;
        }

        pub fn clone(a: $T)
        case ($T.is::copy) a;
        case ($T -> [$U]) a.map(fn clone);
        default {
            mut res: $T;
            for (fieldname i: $T) res.i = a.i.clone();
            return res;
        }

        pub nocopy struct Scope { x: i32; };
        pub struct ModuleOutputs { deps: Scope[]; };

        pub fn test(a: ModuleOutputs) {
            let b = a.clone();
            return a.deps.len - b.deps.len;
        }

        pub fn main() test(ModuleOutputs);

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_ModuleOutputs;
struct s_Scope;

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    int x;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<s_Scope> deps;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || deps
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_clone_pZ8wRcaF
                                #define DEFt_clone_pZ8wRcaF
inline int clone_pZ8wRcaF(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_63UTQUTz
                                #define DEFt_clone_63UTQUTz
inline s_Scope clone_63UTQUTz(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};
    res.x = clone_pZ8wRcaF(a.x);
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_map_dMeJ4qaa
                                #define DEFt_map_dMeJ4qaa
inline fu_VEC<s_Scope> map_dMeJ4qaa(fu::view<s_Scope> a)
{
    /*MOV*/ fu_VEC<s_Scope> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_63UTQUTz(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_ywclbwCp
                                #define DEFt_clone_ywclbwCp
inline fu_VEC<s_Scope> clone_ywclbwCp(fu::view<s_Scope> a)
{
    return map_dMeJ4qaa(a);
}
                                #endif

                                #ifndef DEFt_clone_dSUXNWlQ
                                #define DEFt_clone_dSUXNWlQ
inline s_ModuleOutputs clone_dSUXNWlQ(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};
    res.deps = clone_ywclbwCp(a.deps);
    return /*NRVO*/ res;
}
                                #endif

int test_dSUXNWlQ(const s_ModuleOutputs& a)
{
    s_ModuleOutputs b = clone_dSUXNWlQ(a);
    return a.deps.size() - b.deps.size();
}

int fu_MAIN()
{
    return test_dSUXNWlQ(s_ModuleOutputs{});
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct X { a: i32; };
        inline fn add_uxa_b_inline(using x: X, b: i32) a + b;
        fn hey(using x: X) add_uxa_b_inline(-1);
        return X(1).hey;

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int hey_DHkEjcEF(const s_X& x)
{
    const int b = -1;
    return x.a + b;
}

int fu_MAIN()
{
    return hey_DHkEjcEF(s_X { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct X { a: i32; };
        fn add_uxa_b_template(using x: X, b /* untyped */) a + b;
        fn hey(using x: X) add_uxa_b_template(-1);
        return X(1).hey;

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int add_uxa_b_template_b0YUJhhU(const s_X& x, const int b)
{
    return x.a + b;
}

static int hey_DHkEjcEF(const s_X& x)
{
    return add_uxa_b_template_b0YUJhhU(x, -1);
}

int fu_MAIN()
{
    return hey_DHkEjcEF(s_X { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        fn incr(a) a++;
        fn main() {
            mut a = 1;
            incr: || a;
            return a - 2;
        }

-----

#ifndef FU_NO_FDEFs

inline static int incr_S1tbCzg8(int& a)
{
    return a++;
}

int fu_MAIN()
{
    int a = 1;
    incr_S1tbCzg8(a);
    return a - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn inl_lies(x: u32): i32 = x;
        fn main() 0.inl_lies ? 1 : 0;

-----
_0.fu @3:20:

[2m      | [0m
[2m      |         inline fn inl_lies(x: u32): i32 = x;[0m
    3 |         fn main() 0[31;1m.[0minl_lies ? 1 : 0;
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- u32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        inline fn inl_lies(x: u32) = x;
        fn main() 0.inl_lies ? 1 : 0;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    // Hoisted:
    unsigned x;

    unsigned BL_1_v {};
    return ((__extension__ (
    {
        x = 0u;
        BL_1_v = (x);
    (void)0;}), unsigned(BL_1_v)) ? 1 : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn what(ref x: i32, ref y: i32) {

            let z = y;   
            swap(x, z);  // swap is defined(ref x: $T, ref y: $T),
        }                //  we ignore the 'ref' part in type patterns,
                         //   so we only notice later when checking the spec
        fn main() {
            mut a = 1; mut b = 0; what(a, b);
            return a;
        }

-----
_0.fu @5:17:

[2m      | [0m
[2m      |             let z = y;   [0m
    5 |             swap[31;1m([0mx, z);  // swap is defined(ref x: $T, ref y: $T),
[2m      |         }                //  we ignore the 'ref' part in type patterns,[0m
[2m      |                          //   so we only notice later when checking the spec[0m

	Bad call to [34;1mswap[0m: 

	[35;1mtemplate[0m [34;1m
<fu/vec/view_swap.h>
fu::view_swap[0m: Wrong number of arguments: expects 3, got 2.

	[35;1mtemplate[0m [34;1m
no_AAR
<utility>
std::swap[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mwhat_vnbprror[0m

-----

        fn what(ref x: i32, ref y: i32) {

            ref z = y;   
            swap(x, z);  // swap is defined(ref x: $T, ref y: $T),
        }                //  we ignore the 'ref' part in type patterns,
                         //   so we only notice later when checking the spec
        fn main() {
            mut a = 1; mut b = 0; what(a, b);
            return a;
        }

-----

#include <utility>

#ifndef FU_NO_FDEFs

static void what_vnbprror(int& x, int& y)
{
    std::swap(x, y);
}

int fu_MAIN()
{
    /*MOV*/ int a = 1;
    int b = 0;
    what_vnbprror(a, b);
    return /*NRVO*/ a;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn any(a, b) a || b;
        fn main() any(0, []);

-----

#ifndef FU_NO_FDEFs

inline static int any_hm1gBuJN(const int a)
{
    return a ? a : ((void)void(), 0);
}

int fu_MAIN()
{
    return int(any_hm1gBuJN(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn both(a, b) a && b;
        fn main() both(1, []);

-----

#ifndef FU_NO_FDEFs

inline static void both_hm1gBuJN(const int a)
{
    return a ? void() : void();
}

void fu_MAIN()
{
    return ((void)both_hm1gBuJN(1), void());
}

#endif


int main() { return fu_MAIN(), 0; }

-----

        fn either(a, b) a ? a : b;
        fn main() either(0, []);

-----

#ifndef FU_NO_FDEFs

inline static int either_hm1gBuJN(const int a)
{
    return (a ? a : ((void)void(), 0));
}

int fu_MAIN()
{
    return int(either_hm1gBuJN(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn identity(dont_leak_me) dont_leak_me;

-----

-----

        pub fn identity(dont_leak_me) dont_leak_me;

        let dont_leak_me = 1;
        fn main() _0::identity(dont_leak_me * 2) - 2;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_dont_leak_me
                                #define DEF_dont_leak_me
inline constexpr int dont_leak_me = 1;
                                #endif

                                #ifndef DEFt_identity_pZ8wRcaF
                                #define DEFt_identity_pZ8wRcaF
inline int identity_pZ8wRcaF(const int dont_leak_me)
{
    return dont_leak_me;
}
                                #endif

int fu_MAIN()
{
    return identity_pZ8wRcaF((dont_leak_me * 2)) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub inline fn inl_id_leak(dont_leak_me) dont_leak_me;
        let dont_leak_me = 1;
        fn main() inl_id_leak(dont_leak_me * 2) - 2;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_dont_leak_me
                                #define DEF_dont_leak_me
inline constexpr int dont_leak_me = 1;
                                #endif

int fu_MAIN()
{
    // Hoisted:
    int dont_leak_me;

    int BL_1_v {};
    return (__extension__ (
    {
        dont_leak_me = (::dont_leak_me * 2);
        BL_1_v = (dont_leak_me);
    (void)0;}), int(BL_1_v)) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        let static = 1;
        fn template(arg) static + arg;
        let arg = 7;                        // <- template shouldn't see this
        let result = template(arg / -4);    // <- when specializing here
        fn main() result;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_static
                                #define DEF_static
inline constexpr int sTatic = 1;
                                #endif

                                #ifndef DEF_arg
                                #define DEF_arg
inline constexpr int arg = 7;
                                #endif

inline static int template_pZ8wRcaF(const int arg)
{
    return sTatic + arg;
}

static const int result = template_pZ8wRcaF((arg / -4));

int fu_MAIN()
{
    return result;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let static = 1;
            fn template(arg) static + arg;
            let arg = 7; // same here, except we're in a fn.
            return template(arg / -4);
        }

-----

#ifndef FU_NO_FDEFs

inline static int template_GFXc0u8P(const int arg, const int sTatic)
{
    return sTatic + arg;
}

int fu_MAIN()
{
    const int sTatic = 1;
    const int arg = 7;
    return template_GFXc0u8P((arg / -4), sTatic);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn template_add(a, b) a + b;

-----

-----

        fn template_add(a, b) a + b;

        struct HasInt { i: i32 };

        fn +(a: HasInt, b: HasInt) HasInt(a.i + b.i);
        fn main() _0::template_add(HasInt(1), HasInt(2)).i - 3;

-----

struct s_HasInt;

                                #ifndef DEF_s_HasInt
                                #define DEF_s_HasInt
struct s_HasInt
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_HasInt operator+(const s_HasInt& a, const s_HasInt& b)
{
    return s_HasInt { (a.i + b.i) };
}

                                #ifndef DEFt_template_add_fghRFb0q
                                #define DEFt_template_add_fghRFb0q
inline s_HasInt template_add_fghRFb0q(const s_HasInt& a, const s_HasInt& b)
{
    return a + b;
}
                                #endif

int fu_MAIN()
{
    return template_add_fghRFb0q(s_HasInt { 1 }, s_HasInt { 2 }).i - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn template_add(a, b) a + b;

-----

-----

        fn template_add(a, b) a + b;

        struct HasInt { i: i32 };

-----

-----

        fn template_add(a, b) a + b;

        struct HasInt { i: i32 };
        import _1;
        fn +(a: HasInt, b: HasInt) HasInt(a.i + b.i);
        fn main() _0::template_add(HasInt(1), HasInt(2)).i - 3;

-----

struct s_HasInt;

                                #ifndef DEF_s_HasInt
                                #define DEF_s_HasInt
struct s_HasInt
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_HasInt operator+(const s_HasInt& a, const s_HasInt& b)
{
    return s_HasInt { (a.i + b.i) };
}

                                #ifndef DEFt_template_add_fghRFb0q
                                #define DEFt_template_add_fghRFb0q
inline s_HasInt template_add_fghRFb0q(const s_HasInt& a, const s_HasInt& b)
{
    return a + b;
}
                                #endif

int fu_MAIN()
{
    return template_add_fghRFb0q(s_HasInt { 1 }, s_HasInt { 2 }).i - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn template_add(a, b) a + b;

        struct HasInt { i: i32 };
        fn main() {
            infix fn +(a: HasInt, b: HasInt) HasInt(a.i + b.i); // its hard to defend this -
            _0::template_add(HasInt(1), HasInt(2)).i - 3;       //  the thing above works but this doesn't.
        }                                                       //   given the autoshadowing, we might just want to allow everything.

-----
TODO: _0.fu @2:33:

[2m      | [0m
    2 |         fn template_add(a, b) a [31;1m+[0m b;
[2m      | [0m

	Bad call to [34;1m+[0m: 

	[35;1mtemplate[0m [34;1m+[0m: Could not specialize: No body pattern matched.

	[35;1mtemplate[0m [34;1m+[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mtemplate_add_fghRFb0q[0m
                [35;1mfn[0m [34;1mmain[0m

-----

        fn inner(i: i32): i32
            i > 0 ? outer(i - 1) : 0;

        fn outer(i: i32): i32
            2 * inner(i);

        return outer(1);

-----

static int inner_neXOK2KY(int);
static int outer_kvdihmBv(int);

#ifndef FU_NO_FDEFs

static int inner_neXOK2KY(const int i)
{
    return ((i > 0) ? outer_kvdihmBv((i - 1)) : 0);
}

static int outer_kvdihmBv(const int i)
{
    return 2 * inner_neXOK2KY(i);
}

int fu_MAIN()
{
    return outer_kvdihmBv(1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn test(one: i32)
        {
            let zero = one - 1;
            let two  = one * 2;

            fn inner(i: i32): i32
                i > zero ? outer(i - one) : zero;

            fn outer(i: i32): i32
                two * inner(i);

            return outer(one) + (two - one) * 17;
        }

        fn main() test(1) - 17;

-----

static int inner_kuHARie0(int, int, int, int);
static int outer_lhie4e7W(int, int, int, int);

#ifndef FU_NO_FDEFs

static int inner_kuHARie0(const int i, const int zero, const int one, const int two)
{
    return ((i > zero) ? outer_lhie4e7W((i - one), two, zero, one) : int(zero));
}

static int outer_lhie4e7W(const int i, const int two, const int zero, const int one)
{
    return two * inner_kuHARie0(i, zero, one, two);
}

static int test_pZ8wRcaF(const int one)
{
    const int zero = (one - 1);
    const int two = (one * 2);
    return outer_lhie4e7W(one, two, zero, one) + ((two - one) * 17);
}

int fu_MAIN()
{
    return test_pZ8wRcaF(1) - 17;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn inner(i: i32): i32
            outer(i - 1);

        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        let implicit x = 7;
        return outer(1) - 7;

-----

static int inner_neXOK2KY(int, int);
static int outer_7FVEK3BH(int, int);

#ifndef FU_NO_FDEFs

static int inner_neXOK2KY(const int i, const int x)
{
    return outer_7FVEK3BH((i - 1), x);
}

static int outer_7FVEK3BH(const int i, const int x)
{
    return ((i > 0) ? inner_neXOK2KY(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_7FVEK3BH(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn inner_noret(i: i32)
            outer_noret(i - 1);

        fn outer_noret(implicit x: i32, i: i32)
            i > 0   ? inner_noret(i)
                    : x + i;

        let implicit x = 7;
        return outer_noret(1) - 7;

-----

static int inner_noret_neXOK2KY(int, int);
static int outer_noret_7FVEK3BH(int, int);

#ifndef FU_NO_FDEFs

static int inner_noret_neXOK2KY(const int i, const int x)
{
    return outer_noret_7FVEK3BH((i - 1), x);
}

static int outer_noret_7FVEK3BH(const int i, const int x)
{
    return ((i > 0) ? inner_noret_neXOK2KY(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_noret_7FVEK3BH(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        inline fn inner_inl(i: i32): i32
            outer_inl(i - 1);

        fn outer_inl(implicit x: i32, i: i32): i32
            i > 0   ? inner_inl(i)
                    : x + i;

        let implicit x = 7;
        return outer_inl(1) - 7;

-----

static int outer_inl_7FVEK3BH(int, int);

#ifndef FU_NO_FDEFs

static int outer_inl_7FVEK3BH(const int i, const int x)
{
    return ((i > 0) ? outer_inl_7FVEK3BH((i - 1), x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_inl_7FVEK3BH(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn inner_templ(i): i32
            outer_templ(i - 1);

        fn outer_templ(implicit x: i32, i): i32
            i > 0   ? inner_templ(i)
                    : x + i;

        let implicit x = 7;
        return outer_templ(1) - 7;

-----

inline static int inner_templ_RLhLkOEI(int, int);
inline static int outer_templ_2JI7Mt1B(int, int);

#ifndef FU_NO_FDEFs

inline static int inner_templ_RLhLkOEI(const int i, const int x)
{
    return outer_templ_2JI7Mt1B((i - 1), x);
}

inline static int outer_templ_2JI7Mt1B(const int i, const int x)
{
    return ((i > 0) ? inner_templ_RLhLkOEI(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_templ_2JI7Mt1B(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn inner_templ_noret(i)
            outer_templ_noret(i - 1);

        fn outer_templ_noret(implicit x: i32, i)
            i > 0   ? inner_templ_noret(i)
                    : x + i;

        let implicit x = 7;
        return outer_templ_noret(1) - 7;

-----

inline static int inner_templ_noret_RLhLkOEI(int, int);
inline static int outer_templ_noret_2JI7Mt1B(int, int);

#ifndef FU_NO_FDEFs

inline static int inner_templ_noret_RLhLkOEI(const int i, const int x)
{
    return outer_templ_noret_2JI7Mt1B((i - 1), x);
}

inline static int outer_templ_noret_2JI7Mt1B(const int i, const int x)
{
    return ((i > 0) ? inner_templ_noret_RLhLkOEI(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_templ_noret_2JI7Mt1B(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn outer(i: i32): i32
            i > 0   ? inner(i)
                    : 2 * i;

        fn inner(implicit x: i32, i: i32): i32
            outer(i - 2 * x);

        let implicit x = 3;
        return outer(6);

-----

static int inner_7FVEK3BH(int, int);
static int outer_neXOK2KY(int, int);

#ifndef FU_NO_FDEFs

static int inner_7FVEK3BH(const int i, const int x)
{
    return outer_neXOK2KY((i - (2 * x)), x);
}

static int outer_neXOK2KY(const int i, const int x)
{
    return ((i > 0) ? inner_7FVEK3BH(i, x) : (2 * i));
}

int fu_MAIN()
{
    const int x = 3;
    return outer_neXOK2KY(6, x);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn has_implicit(implicit i: i32, add: i32): i32
            i + add;

        inline fn injects_implicit_while_inlined(): i32
            has_implicit(1); // broken by no ss.declash

        fn main() {
            let implicit i = 2;
            return injects_implicit_while_inlined() - 3;
        }

-----

#ifndef FU_NO_FDEFs

static int has_implicit_XFamX2JF(const int add, const int i)
{
    return i + add;
}

int fu_MAIN()
{
    const int i = 2;
    return has_implicit_XFamX2JF(1, i) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn outer_inl(i: i32): i32
            i > 0   ? inner_inl(i)
                    : 2 * i;

        fn inner_inl(implicit x: i32, i: i32): i32
            outer_inl(i - 2 * x); // broken by no ss.declash

        let implicit x = 3;
        return outer_inl(6);

-----

static int inner_inl_7FVEK3BH(int, int);

#ifndef FU_NO_FDEFs

static int inner_inl_7FVEK3BH(const int i, const int x)
{
    const int i_1 = (i - (2 * x));
    return ((i_1 > 0) ? inner_inl_7FVEK3BH(i_1, x) : (2 * i_1));
}

int fu_MAIN()
{
    const int x = 3;
    const int i = 6;
    return ((i > 0) ? inner_inl_7FVEK3BH(i, x) : (2 * i));
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn outer_templ(i): i32
            i > 0   ? inner_templ(i)
                    : 2 * i;

        fn inner_templ(implicit x: i32, i): i32
            outer_templ(i - 2 * x);

        let implicit x = 3;
        return outer_templ(6);

-----

inline static int inner_templ_Ab5zP4b5(int, int);
inline static int outer_templ_A1oHZf5p(int, int);

#ifndef FU_NO_FDEFs

inline static int inner_templ_Ab5zP4b5(const int i, const int x)
{
    return outer_templ_A1oHZf5p((i - (2 * x)), x);
}

inline static int outer_templ_A1oHZf5p(const int i, const int x)
{
    return ((i > 0) ? inner_templ_Ab5zP4b5(i, x) : (2 * i));
}

int fu_MAIN()
{
    const int x = 3;
    return outer_templ_A1oHZf5p(6, x);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        fn inner(i: i32): i32
            outer(i - 1);

        let implicit x = 7;
        return outer(1) - 7;

-----

static int inner_kvdihmBv(int, int);
static int outer_Y2eLgl0W(int, int);

#ifndef FU_NO_FDEFs

static int inner_kvdihmBv(const int i, const int x)
{
    return outer_Y2eLgl0W((i - 1), x);
}

static int outer_Y2eLgl0W(const int i, const int x)
{
    return ((i > 0) ? inner_kvdihmBv(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_Y2eLgl0W(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn outer(implicit x: i32, i: i32)
            i > 0   ? inner(i)
                    : x + i;

        fn noret(i: i32) = outer(i);

        fn template(i) = i & 1 ? outer(i) : noret(i);

        fn inner(i: i32): i32
            template(i - 1);

        fn main() {
            let implicit x = 7;
            return outer(1) - 7;
        }

-----

inline static int template_pZ8wRcaF(int, int);
static int inner_pZ8wRcaF(int, int);
static int noret_pZ8wRcaF(int, int);
static int outer_XFamX2JF(int, int);

#ifndef FU_NO_FDEFs

static int noret_pZ8wRcaF(const int i, const int x)
{
    return outer_XFamX2JF(i, x);
}

inline static int template_pZ8wRcaF(const int i, const int x)
{
    return ((i & 1) ? outer_XFamX2JF(i, x) : noret_pZ8wRcaF(i, x));
}

static int inner_pZ8wRcaF(const int i, const int x)
{
    return template_pZ8wRcaF((i - 1), x);
}

static int outer_XFamX2JF(const int i, const int x)
{
    return ((i > 0) ? inner_pZ8wRcaF(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_XFamX2JF(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_1(call_self = false): i32
            = !call_self ? returns_x : calls_self_1 * 2;

        let implicit x = 7;
        return calls_self_1(true) - 14;

-----

static int calls_self_1_VmS8Rj1d(bool, int);

#ifndef FU_NO_FDEFs

static int returns_x_neXOK2KY(const int x)
{
    return x;
}

static int calls_self_1_VmS8Rj1d(const bool call_self, const int x)
{
    return (!call_self ? int(returns_x_neXOK2KY(x)) : (calls_self_1_VmS8Rj1d(false, x) * 2));
}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_1_VmS8Rj1d(true, x) - 14;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_2(call_self = false): i32
            = call_self ? calls_self_2 * 3 : returns_x;

        let implicit x = 7;
        return calls_self_2(true) - 21;

-----

static int calls_self_2_VmS8Rj1d(bool, int);

#ifndef FU_NO_FDEFs

static int returns_x_neXOK2KY(const int x)
{
    return x;
}

static int calls_self_2_VmS8Rj1d(const bool call_self, const int x)
{
    return (call_self ? (calls_self_2_VmS8Rj1d(false, x) * 3) : int(returns_x_neXOK2KY(x)));
}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_2_VmS8Rj1d(true, x) - 21;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_3(call_self = false): i32
        {
            let add = 1; // <- this wasnt visible
            fn do_call_self(mul: i32 = 0)
                = calls_self_3 * mul + add;

            return call_self ? do_call_self(4) : returns_x;
        }

        let implicit x = 7;
        return calls_self_3(true) - 29;

-----

static int calls_self_3_VmS8Rj1d(bool, int);
static int do_call_self_tsR6R1Y0(int, int, int);

#ifndef FU_NO_FDEFs

static int do_call_self_tsR6R1Y0(const int mul, const int x, const int add)
{
    return (calls_self_3_VmS8Rj1d(false, x) * mul) + add;
}

static int returns_x_neXOK2KY(const int x)
{
    return x;
}

static int calls_self_3_VmS8Rj1d(const bool call_self, const int x)
{
    const int add = 1;
    return (call_self ? do_call_self_tsR6R1Y0(4, x, add) : int(returns_x_neXOK2KY(x)));
}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_3_VmS8Rj1d(true, x) - 29;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn noret_x(implicit x: i32) x;

        fn templ_calls_self_2(call_self): i32
            = call_self ? templ_calls_self_2(false) * 3 : noret_x;

        fn main() {
            let implicit x = 7;
            return templ_calls_self_2(true) - 21;
        }

-----

inline static int templ_calls_self_2_OSD8YZzw(bool, int);

#ifndef FU_NO_FDEFs

static int noret_x_pZ8wRcaF(const int x)
{
    return x;
}

inline static int templ_calls_self_2_OSD8YZzw(const bool call_self, const int x)
{
    return (call_self ? (templ_calls_self_2_OSD8YZzw(false, x) * 3) : int(noret_x_pZ8wRcaF(x)));
}

int fu_MAIN()
{
    const int x = 7;
    return templ_calls_self_2_OSD8YZzw(true, x) - 21;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        struct Range {
            min: i32;
            max: i32;
        }

        fn size(using implicit r: Range)
            max - min;

        fn test()
            size();

        let implicit r = Range(14, 21);

        return test  - 7;

-----

struct s_Range;

                                #ifndef DEF_s_Range
                                #define DEF_s_Range
struct s_Range
{
    int min;
    int max;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int size_DHkEjcEF(const s_Range& r)
{
    return r.max - r.min;
}

static int test_fwJRfWgj(const s_Range& r)
{
    return size_DHkEjcEF(r);
}

int fu_MAIN()
{
    const s_Range r = s_Range { 14, 21 };
    return test_fwJRfWgj(r) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Range {
            min: i32;
            max: i32;
        }

        fn size(using implicit r: Range)
            max - min;

        fn inner()
            size();

        fn outer()
            inner();

        let implicit r = Range(14, 21);

        return outer() - 7;

-----

struct s_Range;

                                #ifndef DEF_s_Range
                                #define DEF_s_Range
struct s_Range
{
    int min;
    int max;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int size_DHkEjcEF(const s_Range& r)
{
    return r.max - r.min;
}

static int inner_fwJRfWgj(const s_Range& r)
{
    return size_DHkEjcEF(r);
}

static int outer_GlILXiYX(const s_Range& r)
{
    return inner_fwJRfWgj(r);
}

int fu_MAIN()
{
    const s_Range r = s_Range { 14, 21 };
    return outer_GlILXiYX(r) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let a = 1;
            let b = 2;
            let c = 3;

            fn depth1(x: i32) {
                fn depth2(y: i32) {
                    return sibling1(x + y + b);
                }

                return depth2(x + a);
            }

            fn sibling1(z: i32): i32 {
                return z + c;
            }

            return depth1(0) - 6;
        }

-----

#ifndef FU_NO_FDEFs

static int sibling1_kvdihmBv(const int z, const int c)
{
    return z + c;
}

static int depth2_A1oHZf5p(const int y, const int x, const int b, const int c)
{
    return sibling1_kvdihmBv(((x + y) + b), c);
}

static int depth1_neXOK2KY(const int x, const int a, const int b, const int c)
{
    return depth2_A1oHZf5p((x + a), x, b, c);
}

int fu_MAIN()
{
    const int a = 1;
    const int b = 2;
    const int c = 3;
    return depth1_neXOK2KY(0, a, b, c) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn goto0(x): i32 = x ? goto0(x / 2) : 0;
        fn main() goto0(1);

-----

inline static int goto0_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

inline static int goto0_pZ8wRcaF(const int x)
{
    return (x ? goto0_pZ8wRcaF((x / 2)) : 0);
}

int fu_MAIN()
{
    return goto0_pZ8wRcaF(1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion

-----

        fn goto0(x) x ? goto0(x / 2) : 0;
        fn main() goto0(1);

-----

inline static int goto0_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

inline static int goto0_pZ8wRcaF(const int x)
{
    return (x ? goto0_pZ8wRcaF((x / 2)) : 0);
}

int fu_MAIN()
{
    return goto0_pZ8wRcaF(1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn goto0(x) x ? goto0(x / 2) : x; // ideally same as above
        fn main() goto0(1);

-----

inline static int goto0_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

inline static int goto0_pZ8wRcaF(const int x)
{
    return (x ? goto0_pZ8wRcaF((x / 2)) : int(x));
}

int fu_MAIN()
{
    return goto0_pZ8wRcaF(1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn goto0(x) x && goto0(x / 2); // ideally same as above [again]
        fn main() goto0(1);

-----

inline static int goto0_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

inline static int goto0_pZ8wRcaF(const int x)
{
    return x ? goto0_pZ8wRcaF((x / 2)) : int{};
}

int fu_MAIN()
{
    return goto0_pZ8wRcaF(1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn ref_a(ref a: i32) a;

        fn main() {
            mut a: i32;
            ref r = ref_a(a);
            r++;
            return a - 1;
        }

-----

#ifndef FU_NO_FDEFs

static int& ref_a_K4OPjUNR(int& a)
{
    return a;
}

int fu_MAIN()
{
    int a {};
    int& r = ref_a_K4OPjUNR(a);
    r++;
    return a - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ref_a_or_ref_b(ref a: i32, ref b: i32)
            a || b;

        fn main() {
            mut a: i32;
            mut b: i32;
            ref a_or_b = ref_a_or_ref_b(a, b);
            a_or_b++;
            return b - 1;
        }

-----

#ifndef FU_NO_FDEFs

static int& ref_a_or_ref_b_vnbprror(int& a, int& b)
{
    return a ? a : b;
}

int fu_MAIN()
{
    int a {};
    int b {};
    int& a_or_b = ref_a_or_ref_b_vnbprror(a, b);
    a_or_b++;
    return b - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn impl(implicit ref _impl: i32) _impl;
        fn arg_or_impl(ref arg: i32) arg || impl;
        fn main() {
            let implicit mut _impl: i32;
            mut arg: i32;
            ref ref = arg_or_impl(arg);
            return arg - ref;
        }

-----

#ifndef FU_NO_FDEFs

static int& impl_K4OPjUNR(int& _impl)
{
    return _impl;
}

static int& arg_or_impl_K4OPjUNR(int& arg, int& _impl)
{
    return arg ? arg : impl_K4OPjUNR(_impl);
}

int fu_MAIN()
{
    int _impl {};
    int arg {};
    const int ref = arg_or_impl_K4OPjUNR(arg, _impl);
    return arg - ref;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn hello(ref a: i32[], ref b: i32[], x: i32): &mut i32[] {
            if (x == 0) return a;
            if (x == 1) return b;
            return hello(b, a, x / 17);
        }

        fn main() {
            mut a = [1, 2, 3];
            mut b = [4, 5, 6];
            hello(a, b, 397)[1] *= 5;
            return b[1] - 25;
        }

-----

#include <fu/vec.h>

static fu_VEC<int>& hello_K3DCpUsJ(fu_VEC<int>&, fu_VEC<int>&, int);

#ifndef FU_NO_FDEFs

static fu_VEC<int>& hello_K3DCpUsJ(fu_VEC<int>& a, fu_VEC<int>& b, const int x)
{
    if (x == 0)
        return a;

    if (x == 1)
        return b;

    return hello_K3DCpUsJ(b, a, (x / 17));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<3, int> { 1, 2, 3 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<3, int> { 4, 5, 6 } };
    hello_K3DCpUsJ(a, b, 397).mutref(1) *= 5;
    return b[1] - 25;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// RELAX_respec

-----

        pub fn ZERO(implicit ref sum: i32, mut x: i32) {
            while (x) {
                ZERO( --x ); // Same as below but without the unused 'y' thing,
                sum += x;    //  everything works because the call to ZERO isnt really unconditional,
            }                //   and if it were, then the never return would actually be correct.
        }

        fn main() {
            let implicit mut sum = 0;
            ZERO(4);
            return sum - 11;
        }

-----

void ZERO_TJokLdgd(int, int&);

#ifndef FU_NO_FDEFs

void ZERO_TJokLdgd(int x, int& sum)
{
    while (x)
    {
        ZERO_TJokLdgd(int(--x), sum);
        sum += x;
    };
}

int fu_MAIN()
{
    int sum = 0;
    ZERO_TJokLdgd(4, sum);
    return sum - 11;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_code

-----

        pub fn ZERO(implicit ref sum: i32, mut x: i32) {
            while (x) {
                let y = x / 2;
                ZERO( --x ); // Unconditional self recursion, initially hinted as t_never,
                ZERO(   y ); //  meaning y remains unused here on first solve.
                sum += x;
            }
        }

        fn main() {
            let implicit mut sum = 0;
            ZERO(4);
            return sum - 12;
        }

-----

void ZERO_TJokLdgd(int, int&);

#ifndef FU_NO_FDEFs

void ZERO_TJokLdgd(int x, int& sum)
{
    while (x)
    {
        const int y = (x / 2);
        ZERO_TJokLdgd(int(--x), sum);
        ZERO_TJokLdgd(int(y), sum);
        sum += x;
    };
}

int fu_MAIN()
{
    int sum = 0;
    ZERO_TJokLdgd(4, sum);
    return sum - 12;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_code

-----

        struct Node {
            items: Node[];
        }

        fn solve(root: Node)
        {
            fn solveBlock(node: Node) {
                let items = solveNodes(node.items);
                //*
                return solveBlock(items);
            }

            fn solveBlock(items: i32[]) {
                //*/
                if (!Lifetime_allowsMutrefReturn(items))
                    throw("Nope!");

                return items;
            }

            fn solveNode(node: Node, implicit ref next: i32) {
                if (!node.items)
                    return [ next++ ];

                let implicit CTX = node.items.len; // <- this shows up as an closure-arg with an outdated revision
                return solveBlock(node);
            }

            fn Lifetime_each(items, visit)
                for (mut i = items.len; i --> 0; )
                    visit(items[i]);

            fn Lifetime_allowsMutrefReturn(items: i32[]) {
                Lifetime_each(:items, visit: |item, implicit CTX: i32| {
                    if (item == CTX)
                        return false;
                });

                return true;
            }

            fn solveNodes(nodes: Node[]) {
                mut result: i32[];
                for (mut i = 0; i < nodes.len; i++)
                    result ~= solveNode(nodes[i]);

                return result;
            }

            return solveNode(root);
        }

        fn main() {
            let implicit mut next = 0;

            let solve = solve(Node([
                Node([ Node ]),
                Node(),
            ]));

            return solve.len - 2;
        }

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Node;

static fu_VEC<int> solveBlock_DHkEjcEF(const s_Node&, int&, int);
static fu_VEC<int> solveNode_sVPe1X61(const s_Node&, int&);
static fu_VEC<int> solveNodes_8RrnI41u(fu::view<s_Node>, int&);

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_VEC<s_Node> items;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<int> solveNodes_8RrnI41u(fu::view<s_Node> nodes, int& next)
{
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < nodes.size(); i++)
        result += solveNode_sVPe1X61(nodes[i], next);

    return /*NRVO*/ result;
}

static bool Lifetime_allowsMutrefReturn_q0AcuL8d(fu::view<int> items, const int CTX)
{

    {
        for (int i = items.size(); i-- > 0; )
        {
            const int item = items[i];
            const int CTX_1 = CTX;
            if (item == CTX_1)
                return false;

        };
    };
    return true;
}

static const fu_VEC<int>& solveBlock_g1qjTJJ8(const fu_VEC<int>& items, const int CTX)
{
    if (!Lifetime_allowsMutrefReturn_q0AcuL8d(items, CTX))
        fu::fail("Nope!"_fu);

    return items;
}

static fu_VEC<int> solveBlock_DHkEjcEF(const s_Node& node, int& next, const int CTX)
{
    /*MOV*/ fu_VEC<int> items = solveNodes_8RrnI41u(node.items, next);
    return /* MOVE_FROM_CONST_REF */static_cast<fu_VEC<int>&&>(const_cast<fu_VEC<int>&>(solveBlock_g1qjTJJ8(items, CTX)));
}

static fu_VEC<int> solveNode_sVPe1X61(const s_Node& node, int& next)
{
    if (!node.items)
        return fu_VEC<int> { fu::slate<1, int> { next++ } };

    const int CTX = node.items.size();
    return solveBlock_DHkEjcEF(node, next, CTX);
}

static fu_VEC<int> solve_vEF4Qiyl(const s_Node& root, int& next)
{
    return solveNode_sVPe1X61(root, next);
}

int fu_MAIN()
{
    int next = 0;
    fu_VEC<int> solve = solve_vEF4Qiyl(s_Node { fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node { fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node{} } } }, s_Node{} } } }, next);
    return solve.size() - 2;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// TYPE_recursion
// TYPE_resolve

-----

        fn woot(implicit x: i32) = x;

        fn main() {


            return woot() - 2;
        }

-----
_0.fu @7:24:

[2m      | [0m
[2m      | [0m
    7 |             return woot[31;1m([0m) - 2;
[2m      |         }[0m
[2m      | [0m

	No implicit [31;1mx[0m in scope, needed to call [35;1mfn[0m [34;1mwoot_pZ8wRcaF[0m.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn woot(implicit x: i32) = x;

        fn main() {

            let implicit x = 2;

            return woot() - 2;
        }

-----

#ifndef FU_NO_FDEFs

static int woot_pZ8wRcaF(const int x)
{
    return x;
}

int fu_MAIN()
{
    const int x = 2;
    return woot_pZ8wRcaF(x) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----


        fn woot(implicit y: i32) = y;


        fn hey() {
            let implicit x = 2;
            return woot() - 2;
        }

        let here = hey();
        fn main() = here;

-----
_0.fu @11:23:

[2m      |         }[0m
[2m      | [0m
   11 |         let here = hey[31;1m([0m);
[2m      |         fn main() = here;[0m
[2m      | [0m

	No implicit [31;1my[0m in scope, needed to call [35;1mfn[0m [34;1mhey_H9fhQUVP[0m.

-----


        fn woot(implicit x: i32) = x;


        fn hey() {
            let implicit x = 2;
            return woot() - 2;
        }

        let here = hey();
        fn main() = here;

-----

#ifndef FU_NO_FDEFs

static int woot_pZ8wRcaF(const int x)
{
    return x;
}

static int hey_H9fhQUVP()
{
    const int x = 2;
    return woot_pZ8wRcaF(x) - 2;
}

static const int here = hey_H9fhQUVP();

int fu_MAIN()
{
    return here;
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = 1;

        fn test(): &i32
            x;

        return test - 1;

-----

#ifndef FU_NO_FDEFs

static int test_EJhRWC6k(const int x)
{
    return x;
}

int fu_MAIN()
{
    const int x = 1;
    return test_EJhRWC6k(x) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        let a = 1;
        let x: &i32 = a;

        return a - x;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = 1;
    return a - a;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test {
            x: &i32;
        }

        let a = 1;
        let test = Test(a);

        return test.x - 1;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = 1;
    const s_Test test = s_Test { a };
    return test.x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut a = 0;
        mut b = a;
        b++;
        let c = a = b;

        return a - c;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int a = 0;
    int b = a;
    b++;
    const int c = (a = b);
    return a - c;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut arr = [0, 1, 2, 3, 4];
        arr.push(5);

        fn test(view: &i32[]): i32 {
            mut sum = 0;
            for (mut i = 0; i < view.len; i++)
                sum += view[i];

            return sum - 15;
        }

        return test(arr);

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int test_g1qjTJJ8(fu::view<int> view)
{
    int sum = 0;
    for (int i = 0; i < view.size(); i++)
        sum += view[i];

    return sum - 15;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
    arr.push(5);
    return test_g1qjTJJ8(arr);
}

#endif


int main() { return fu_MAIN(); }

-----

        mut arr: i32[] = [1, 2, 3, 4];
        arr.push(5);

        fn test(view: &i32[]): i32 {
            mut sum = 0;
            for (mut i = 0; i < view.len; i++)
                sum += view[i];

            return sum - 15;
        }

        return test(arr);

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int test_g1qjTJJ8(fu::view<int> view)
{
    int sum = 0;
    for (int i = 0; i < view.size(); i++)
        sum += view[i];

    return sum - 15;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<4, int> { 1, 2, 3, 4 } };
    arr.push(5);
    return test_g1qjTJJ8(arr);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = 5;
        mut arr = [ -5 ];
        arr.push(x);
        return arr[0] + arr[1];

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int x = 5;
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { -5 } };
    arr.push(int(x));
    return arr[0] + arr[1];
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----


        let x = [ named: 0 ]; 
        return x[0];

-----
_0.fu @6:17:

[2m      | [0m
[2m      | [0m
    6 |         let x = [31;1m[[0m named: 0 ]; 
[2m      |         return x[0];[0m
[2m      | [0m

	TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name.

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        let x = [        0 ]; 
        return x[0];

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return int(x[0]);
}

#endif


int main() { return fu_MAIN(); }

-----

        mut other: i32[][];
        mut arr:   i32[][];
        for (mut i = 4; i --> 0; )
        {
            arr.resize(i);

            // fill up with non small vecs so we can check alloc counts
            for (shadow mut i = 0; i < arr.len; i++)
                arr[i] ||= [ i, i, i, i, i, i, i, i ]; // defeat small vec

            // now this convers the "Last chance to do nothing" opti -
            //  noop resize a shared vec.
            other = arr;
            arr.resize(other.len || i);
        }
        return other.len;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<fu_VEC<int>> other {};
    fu_VEC<fu_VEC<int>> arr {};
    for (int i = 4; i-- > 0; )
    {
        arr.resize(i);
        for (int i_1 = 0; i_1 < arr.size(); i_1++)
        {
            fu_VEC<int>& a = arr.mutref(i_1);
            if (!(a))
                a = fu_VEC<int> { fu::slate<8, int> { int(i_1), int(i_1), int(i_1), int(i_1), int(i_1), int(i_1), int(i_1), int(i_1) } };

        };
        other = arr;
        int _0 {};
        arr.resize(((_0 = other.size()) ? _0 : int(i)));
    };
    return other.size();
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.push(5);
        if ((arr0[1] + arr0[4] - arr0[5]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.push(5);
        if ((arr1[1] + arr1[4] - arr1[5]) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.push(5);
        if ((arr2[1] + arr2[4] - arr2[5]) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.push(5);
        if (((arr0[1] + arr0[4]) - arr0[5]) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.push(5);
        if (((arr1[1] + arr1[4]) - arr1[5]) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.push(5);
        if (((orig[1] + orig[4]) - orig[5]) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.insert(5, 5);
        if ((arr0[1] + arr0[4] - arr0[5]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.insert(5, 5);
        if ((arr1[1] + arr1[4] - arr1[5]) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.insert(5, 5);
        if ((arr2[1] + arr2[4] - arr2[5]) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.insert(5, 5);
        if (((arr0[1] + arr0[4]) - arr0[5]) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.insert(5, 5);
        if (((arr1[1] + arr1[4]) - arr1[5]) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.insert(5, 5);
        if (((orig[1] + orig[4]) - orig[5]) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.pop();
        if ((arr0[1] + arr0[3] - arr0.len) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.pop();
        if ((arr1[1] + arr1[3] - arr1.len) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.pop();
        if ((arr2[1] + arr2[3] - arr2.len) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.pop();
        if (((arr0[1] + arr0[3]) - arr0.size()) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.pop();
        if (((arr1[1] + arr1[3]) - arr1.size()) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.pop();
        if (((orig[1] + orig[3]) - orig.size()) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.splice(4, 1);
        if ((arr0[1] + arr0[3] - arr0.len) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.splice(4, 1);
        if ((arr1[1] + arr1[3] - arr1.len) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.splice(4, 1);
        if ((arr2[1] + arr2[3] - arr2.len) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.splice(4, 1);
        if (((arr0[1] + arr0[3]) - arr0.size()) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.splice(4, 1);
        if (((arr1[1] + arr1[3]) - arr1.size()) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.splice(4, 1);
        if (((orig[1] + orig[3]) - orig.size()) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.unshift(5);
        if ((arr0[2] + arr0[5] - arr0[0]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.unshift(5);
        if ((arr1[2] + arr1[5] - arr1[0]) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.unshift(5);
        if ((arr2[2] + arr2[5] - arr2[0]) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.unshift(5);
        if (((arr0[2] + arr0[5]) - arr0[0]) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.unshift(5);
        if (((arr1[2] + arr1[5]) - arr1[0]) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.unshift(5);
        if (((orig[2] + orig[5]) - orig[0]) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.insert(0, 5);
        if ((arr0[2] + arr0[5] - arr0[0]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.insert(0, 5);
        if ((arr1[2] + arr1[5] - arr1[0]) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.insert(0, 5);
        if ((arr2[2] + arr2[5] - arr2[0]) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.insert(0, 5);
        if (((arr0[2] + arr0[5]) - arr0[0]) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.insert(0, 5);
        if (((arr1[2] + arr1[5]) - arr1[0]) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.insert(0, 5);
        if (((orig[2] + orig[5]) - orig[0]) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.shift();
        if ((arr0[0] + arr0[2] - arr0[3]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.shift();
        if ((arr1[0] + arr1[2] - arr1[3]) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.shift();
        if ((arr2[0] + arr2[2] - arr2[3]) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.shift();
        if (((arr0[0] + arr0[2]) - arr0[3]) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.shift();
        if (((arr1[0] + arr1[2]) - arr1[3]) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.shift();
        if (((orig[0] + orig[2]) - orig[3]) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.insert(1, 5);
        if ((arr0[2] + arr0[5] - arr0[1]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = orig;
        arr1.insert(1, 5);
        if ((arr1[2] + arr1[5] - arr1[1]) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.insert(1, 5);
        if ((arr2[2] + arr2[5] - arr2[1]) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };
        arr0.insert(1, 5);
        if (((arr0[2] + arr0[5]) - arr0[1]) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.insert(1, 5);
        if (((arr1[2] + arr1[5]) - arr1[1]) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.insert(1, 5);
        if (((orig[2] + orig[5]) - orig[1]) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----


    {
        mut arr0 = [0,1,2,3,100];
        arr0.splice(1, 3);
        if ((arr0.len + arr0[0] + arr0[1] - 102) != 0) return 13;
    }

    mut orig = [0,1,2,3,100];

    {
        mut arr1 = orig;
        arr1.splice(1, 3);
        if ((arr1.len + arr1[0] + arr1[1] - 102) != 0) return 17;
    }

    {
        ref arr2 = orig;
        if (arr2.len != 5) return 38;
        arr2.splice(1, 3);
        if ((arr2.len + arr2[0] + arr2[1] - 102) != 0) return 23;
    }

    return 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    {
        fu_VEC<int> arr0 = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 100 } };
        arr0.splice(1, 3);
        if ((((arr0.size() + arr0[0]) + arr0[1]) - 102) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu::slate<5, int> { 0, 1, 2, 3, 100 } };

    {
        fu_VEC<int> arr1 { orig };
        arr1.splice(1, 3);
        if ((((arr1.size() + arr1[0]) + arr1[1]) - 102) != 0)
            return 17;

    };

    {
        if (orig.size() != 5)
            return 38;

        orig.splice(1, 3);
        if ((((orig.size() + orig[0]) + orig[1]) - 102) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        let OPERATORS = [ "+", "-", "*", "/" ];

        fn main()
            OPERATORS[2] == "*" ? 0 : 1;

-----

#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<fu_STR> OPERATORS fu_INIT_PRIORITY(1001) = fu_VEC<fu_STR> { fu::slate<4, fu_STR> { "+"_fu, "-"_fu, "*"_fu, "/"_fu } };

int fu_MAIN()
{
    return ((OPERATORS[2] == "*"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Y { b: bool; }
        struct X { y: Y[]; }

        mut x: X[];
        x.push( X([ Y(true) ]) );

        return x.len + x[0].y.len * 2 - 3;

-----

#include <fu/vec.h>

struct s_X;
struct s_Y;

                                #ifndef DEF_s_Y
                                #define DEF_s_Y
struct s_Y
{
    bool b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    fu_VEC<s_Y> y;
    explicit operator bool() const noexcept
    {
        return false
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<s_X> x {};
    x.push(s_X { fu_VEC<s_Y> { fu::slate<1, s_Y> { s_Y { true } } } });
    return (x.size() + (x[0].y.size() * 2)) - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct SelfRec { x: SelfRec[]; };
        fn main() SelfRec( [ SelfRec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor

-----

#include <fu/vec.h>

struct s_SelfRec;

                                #ifndef DEF_s_SelfRec
                                #define DEF_s_SelfRec
struct s_SelfRec
{
    fu_VEC<s_SelfRec> x;
    s_SelfRec(const s_SelfRec&) = default;
    s_SelfRec(s_SelfRec&&) = default;
    s_SelfRec& operator=(s_SelfRec&&) = default;
    s_SelfRec& operator=(const s_SelfRec& selfrec) { return *this = s_SelfRec(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_SelfRec { fu_VEC<s_SelfRec> { fu::slate<1, s_SelfRec> { s_SelfRec{} } } }.x.size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve

-----

        struct ABRec { x: BARec[]; };
        struct BARec { x: ABRec[]; };
        fn main() ABRec( [ BARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor

-----

#include <fu/vec.h>

struct s_ABRec;
struct s_BARec;

                                #ifndef DEF_s_ABRec
                                #define DEF_s_ABRec
struct s_ABRec
{
    fu_VEC<s_BARec> x;
    s_ABRec(const s_ABRec&) = default;
    s_ABRec(s_ABRec&&) = default;
    s_ABRec& operator=(s_ABRec&&) = default;
    s_ABRec& operator=(const s_ABRec& selfrec) { return *this = s_ABRec(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BARec
                                #define DEF_s_BARec
struct s_BARec
{
    fu_VEC<s_ABRec> x;
    s_BARec(const s_BARec&) = default;
    s_BARec(s_BARec&&) = default;
    s_BARec& operator=(s_BARec&&) = default;
    s_BARec& operator=(const s_BARec& selfrec) { return *this = s_BARec(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_ABRec { fu_VEC<s_BARec> { fu::slate<1, s_BARec> { s_BARec{} } } }.x.size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_reopen

-----

        struct ABRec { x: BARec[]; y: ABBARec[]; };
        struct BARec { x: ABRec[]; y: ABBARec[]; };
        struct ABBARec { x: ABRec[]; y: BARec[]; };
        fn main() ABRec( [ BARec() ], [ ABBARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor

-----

#include <fu/vec.h>

struct s_ABBARec;
struct s_ABRec;
struct s_BARec;

                                #ifndef DEF_s_ABBARec
                                #define DEF_s_ABBARec
struct s_ABBARec
{
    fu_VEC<s_ABRec> x;
    fu_VEC<s_BARec> y;
    s_ABBARec(const s_ABBARec&) = default;
    s_ABBARec(s_ABBARec&&) = default;
    s_ABBARec& operator=(s_ABBARec&&) = default;
    s_ABBARec& operator=(const s_ABBARec& selfrec) { return *this = s_ABBARec(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ABRec
                                #define DEF_s_ABRec
struct s_ABRec
{
    fu_VEC<s_BARec> x;
    fu_VEC<s_ABBARec> y;
    s_ABRec(const s_ABRec&) = default;
    s_ABRec(s_ABRec&&) = default;
    s_ABRec& operator=(s_ABRec&&) = default;
    s_ABRec& operator=(const s_ABRec& selfrec) { return *this = s_ABRec(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BARec
                                #define DEF_s_BARec
struct s_BARec
{
    fu_VEC<s_ABRec> x;
    fu_VEC<s_ABBARec> y;
    s_BARec(const s_BARec&) = default;
    s_BARec(s_BARec&&) = default;
    s_BARec& operator=(s_BARec&&) = default;
    s_BARec& operator=(const s_BARec& selfrec) { return *this = s_BARec(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_ABRec { fu_VEC<s_BARec> { fu::slate<1, s_BARec> { s_BARec{} } }, fu_VEC<s_ABBARec> { fu::slate<1, s_ABBARec> { s_ABBARec{} } } }.x.size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_reopen

-----

        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]
        a.sort();
        return a[0] + a[1] + a[3] + a[4];

-----

#include <fu/vec.h>
#include <fu/vec/sort.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<6, int> { 7, 1, 5, 3, 99, -13 } };
    fu::sort(a);
    return ((a[0] + a[1]) + a[3]) + a[4];
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        let a = [0, 1, 2, 3];
        let b = a.slice(1, 3);
        return b.len - b[1];

-----

#include <fu/vec.h>
#include <fu/vec/slice.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<4, int> { 0, 1, 2, 3 } };
    fu_VEC<int> b = fu::slice(a, 1, 3);
    return b.size() - b[1];
}

#endif


int main() { return fu_MAIN(); }

-----

        let a = [0, 1, 2, 3];
        let b = a.slice(1);
        return b.len - b[2];

-----

#include <fu/vec.h>
#include <fu/vec/slice.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<4, int> { 0, 1, 2, 3 } };
    fu_VEC<int> b = fu::slice(a, 1);
    return b.size() - b[2];
}

#endif


int main() { return fu_MAIN(); }

-----

        fn collectDedupes(mut vals) {
            vals.sort();
            return vals[0];
        }

        fn main() {
            let vals = [ 1, 0 ];
            return collectDedupes(vals);
        }

-----

#include <fu/vec.h>
#include <fu/vec/sort.h>

#ifndef FU_NO_FDEFs

inline static int collectDedupes_WgWjr9S0(fu_VEC<int>&& vals)
{
    fu::sort(vals);
    return int(vals[0]);
}

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 0 } };
    return collectDedupes_WgWjr9S0(fu_VEC<int>(vals));
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn collectDedupes(mut vals: i32[]) {
            vals.sort();
            return vals[0];
        }

        fn main() {
            let vals = [ 1, 0 ];
            return collectDedupes(vals);
        }

-----

#include <fu/vec.h>
#include <fu/vec/sort.h>

#ifndef FU_NO_FDEFs

static int collectDedupes_WgWjr9S0(fu_VEC<int>&& vals)
{
    fu::sort(vals);
    return int(vals[0]);
}

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 0 } };
    return collectDedupes_WgWjr9S0(fu_VEC<int>(vals));
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn sort01(ref arr: [$T]) {
            mut tmp: $T;
            if (arr[0] > arr[1]) {
                swap(arr[0], tmp);
                swap(arr[1], tmp);
            }
        }

        fn collectDedupes(mut vals) {
            vals.sort01();
            return vals[0];
        }

        fn main() {
            let vals = [ 1, 0 ];
            return collectDedupes(vals);
        }

-----

#include <fu/vec.h>
#include <utility>

#ifndef FU_NO_FDEFs

inline static void sort01_5UkPjt2z(fu_VEC<int>& arr)
{
    int tmp {};
    if (arr[0] > arr[1])
    {
        std::swap(arr.mutref(0), tmp);
        std::swap(arr.mutref(1), tmp);
    };
}

inline static int collectDedupes_WgWjr9S0(fu_VEC<int>&& vals)
{
    sort01_5UkPjt2z(vals);
    return int(vals[0]);
}

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 0 } };
    return collectDedupes_WgWjr9S0(fu_VEC<int>(vals));
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        mut str = "hello ";
        str ~= "world";

        return str.len - 11;

-----

#include <fu/str.h>
#include <fu/vec/concat.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR str = "hello "_fu;
    str += "world"_fu;
    return str.size() - 11;
}

#endif


int main() { return fu_MAIN(); }

-----

        let str = "hello " ~ "world";

        return str.starts(with: "hel")
             ? str  .ends(with: "rld")
             ? str.len - 11
             : 171
             : 173;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_starts_KclJlPSO
                                #define DEFt_starts_KclJlPSO
inline bool starts_KclJlPSO(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEFt_ends_KclJlPSO
                                #define DEFt_ends_KclJlPSO
inline bool ends_KclJlPSO(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

int fu_MAIN()
{
    fu_STR str = ("hello "_fu + "world"_fu);
    return (starts_KclJlPSO(str, "hel"_fu) ? (ends_KclJlPSO(str, "rld"_fu) ? (str.size() - 11) : 171) : 173);
}

#endif


int main() { return fu_MAIN(); }

-----

        let str = "a" ~ 1710010;

        return str == "a1710010"
             ? 0 : 101;

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

int fu_MAIN()
{
    fu_STR str = x7E("a"_fu, fu::i64dec(1710010));
    return ((str == "a1710010"_fu) ? 0 : 101);
}

#endif


int main() { return fu_MAIN(); }

-----

        let str = "hello world";
        mut cpy = "";
        for (mut i = 0; i < str.len; i++)
            cpy ~= str[i];

        return (cpy.len - 11) + (cpy == str ? 0 : 1);

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR str = "hello world"_fu;
    fu_STR cpy {};
    for (int i = 0; i < str.size(); i++)
        cpy += char(str[i]);

    return (cpy.size() - 11) + ((cpy == str) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        return "hello world".find("world")
             - 2 * [1, 7, 13, 14, 19].find(14);

-----

#include <fu/str.h>
#include <fu/vec/find.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_find_P563x6wB
                                #define DEFt_find_P563x6wB
inline int find_P563x6wB(fu::view<int> a, const int b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

int fu_MAIN()
{
    return fu::lfind("hello world"_fu, "world"_fu) - (2 * find_P563x6wB((fu::slate<5, int> { 1, 7, 13, 14, 19 }), 14));
}

#endif


int main() { return fu_MAIN(); }

-----

        return ("hello world".has("world") ? 1 : 0)
             + ([1, 14, 96, 2].has(14)     ? 2 : 0)
             - 3;

-----

#include <fu/str.h>
#include <fu/vec/find.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_has_P563x6wB
                                #define DEFt_has_P563x6wB
inline bool has_P563x6wB(fu::view<int> a, const int b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

int fu_MAIN()
{
    return ((fu::has("hello world"_fu, "world"_fu) ? 1 : 0) + (has_P563x6wB((fu::slate<4, int> { 1, 14, 96, 2 }), 14) ? 2 : 0)) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        let hw = "hello world!";
        let a = hw.slice(6, 6 + 5);
        let b = hw.substr(6, 5);
        return a == b && a == "world" ? a.len - 5 : 1;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/slice.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR hw = "hello world!"_fu;
    fu_STR a = fu::slice(hw, 6, (6 + 5));
    fu_STR b = fu::substr(hw, 6, 5);
    return (((a == b) && (a == "world"_fu)) ? (a.size() - 5) : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let tests =
        [
            "",
            " ",
            "  ",
            "hey you duders",
            " hey you duders",
            "hey you duders ",
            "  hey you duders ",
            "  hey you  duders ",
            "  hey you  duders  "
        ];

        fn test(item: string)
            item == item.split(" ").join(" ")
                ? 0
                : item.len;

        mut sum = 0;
        for (mut i = 0; i < tests.len; i++)
            sum += test(tests[i]);

        return sum;

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_split_pH29EELm
                                #define DEFt_split_pH29EELm
inline void split_pH29EELm(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_pH29EELm(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_join_IswWtOx1
                                #define DEFt_join_IswWtOx1
inline fu_STR join_IswWtOx1(fu::view<fu_STR> a, fu::view<char> sep)
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

static int test_PdEGHMBt(const fu_STR& item)
{
    return ((item == join_IswWtOx1(split_KclJlPSO(item, " "_fu), " "_fu)) ? 0 : item.size());
}

int fu_MAIN()
{
    fu_VEC<fu_STR> tests = fu_VEC<fu_STR> { fu::slate<9, fu_STR> { fu_STR{}, " "_fu, "  "_fu, "hey you duders"_fu, " hey you duders"_fu, "hey you duders "_fu, "  hey you duders "_fu, "  hey you  duders "_fu, "  hey you  duders  "_fu } };
    /*MOV*/ int sum = 0;
    for (int i = 0; i < tests.size(); i++)
        sum += test_PdEGHMBt(tests[i]);

    return /*NRVO*/ sum;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn main() '\e'.i32 - 27
             ||   '\0'.i32
             || '\x11'.i32 - 17
             || '\xaA'.i32 - 170;

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int _0 {};
    return (_0 = (int(fu::u8('\x1B')) - 27)) ? _0 : (_0 = int(fu::u8('\x00'))) ? _0 : (_0 = (int(fu::u8('\x11')) - 17)) ? _0 : (int(fu::u8('\xAA')) - 170);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main()                           
            "\u{ffffff}".u32               
            ;

-----
_0.fu@3:22:
	Invalid \u-escape: bad code point.
	str: `f}".u32`
-----

        fn main()                           
            "\u{042e}" == "Ю"  ? 0 : 1     
            ;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return (("\xD0\xAE"_fu == "\xD0\xAE"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let strA = "0123456789abcdef0123456789ABCDEF";

        fn main()
        {
            let a0 = alloc::STAT_COUNT();
            strA.slice(0, 26) == "0123456789abcdef0123456789" || throw("bad slice");

            let a1 = alloc::STAT_COUNT();
            a0 == a1 || throw("did alloc");

            return 0;
        }

-----

-----

        let strA = "0123456789abcdef0123456789ABCDEF";

        fn main()
            strA.slice(26, 32) == "ABCDEF"
                ? 0 : 1;

-----

#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/slice.h>

#ifndef FU_NO_FDEFs

static const fu_STR strA fu_INIT_PRIORITY(1001) = "0123456789abcdef0123456789ABCDEF"_fu;

int fu_MAIN()
{
    return ((fu::slice(strA, 26, 32) == "ABCDEF"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        mut x: Map(string, i32);

        x["hello"] = 1;
        x["world"] = 2;

        return x["hello"] - x["world"] + 1;

-----
TODO: _0.fu @5:9:

[2m      | fn main(): i32 {[0m
[2m      | [0m
    5 |         [31;1mmut[0m x: Map(string, i32);
[2m      | [0m
[2m      |         x["hello"] = 1;[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        mut x: Map(string, i32);

        x["hello"] = 1;
        x["world"] = 2;

        let b = "hello world";
        mut offset = 0;

        fn pop(): string {
            mut a = "";

            while (offset < b.len) {
                let c = b[offset++];
                if (c == ' ')
                    break;

                a ~= c;
            }

            return a;
        }

        return x[pop()] - x[pop()] + 1;

-----
TODO: _0.fu @5:9:

[2m      | fn main(): i32 {[0m
[2m      | [0m
    5 |         [31;1mmut[0m x: Map(string, i32);
[2m      | [0m
[2m      |         x["hello"] = 1;[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn test(a = 1, b = 2) a + b;
        return test() - 3;

-----

#ifndef FU_NO_FDEFs

static int test_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_Y2eLgl0W(1, 2) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test(b: -1);

-----

#ifndef FU_NO_FDEFs

static int test_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_Y2eLgl0W(1, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test(-2);

-----

#ifndef FU_NO_FDEFs

static int test_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_Y2eLgl0W(-2, 2);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a?: i32; b?: i32; }
        let t = Test(1);
        return t.a - 1 + t.b * 7;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_Test t = s_Test { 1, 0 };
    return (t.a - 1) + (t.b * 7);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a?: i32; b?: i32; }
        let t = Test(1);
        return t.b;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    /*MOV*/ const s_Test t = s_Test { 1, 0 };
    return int(t.b);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a?: i32; b?: i32; }
        let t = Test(a: 1);
        return t.a - 1 + t.b * 7;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_Test t = s_Test { 1, 0 };
    return (t.a - 1) + (t.b * 7);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a?: i32; b?: i32; }
        let t = Test(b: 1);
        return t.b - 1 + t.a * 7;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_Test t = s_Test { 0, 1 };
    return (t.b - 1) + (t.a * 7);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { x?: i32; };
        fn hey() Test();
        return hey.x;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Test hey_hpa9AihZ()
{
    return s_Test{};
}

int fu_MAIN()
{
    return hey_hpa9AihZ().x;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { x?: i32; };
        fn hey(y: i32 = 0)
            y   ? Test(1)
                : Test();

        return hey.x;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Test hey_A1oHZf5p(const int y)
{
    return (y ? s_Test { 1 } : s_Test{});
}

int fu_MAIN()
{
    return hey_A1oHZf5p(0).x;
}

#endif


int main() { return fu_MAIN(); }

-----


        fn test(a = "hello") a.len;     
        fn main() test(-1);

-----
_0.fu @4:23:

[2m      | [0m
[2m      |         fn test(a = "hello") a.len;     [0m
    4 |         fn main() test[31;1m([0m-1);
[2m      | [0m

	Bad call to [34;1mtest[0m: 

	[35;1mfn[0m [34;1mtest_vhnG1IeH[0m: Argument [35;1marg[0m [34;1ma[0m expects [2byte], got i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        fn test(a = 0) a + 1;           
        fn main() test(-1);

-----

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(const int a)
{
    return a + 1;
}

int fu_MAIN()
{
    return test_pZ8wRcaF(-1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a = 3, b = a * 2) a + b;
        fn main() test + test(a: -1) * 3;

-----
TODO: o-fc888c80ce214241-230.cpp:11:30: error: use of undeclared identifier 'a'
    return test_XFamX2JF(3, (a * 2)) + (test_XFamX2JF(-1, (a * 2)) * 3);
                             ^
/Users/hdachev/fu/build-cpp/o-fc888c80ce214241-230.cpp:11:60: error: use of undeclared identifier 'a'
    return test_XFamX2JF(3, (a * 2)) + (test_XFamX2JF(-1, (a * 2)) * 3);
                                                           ^
2 errors generated.

Failing testcase:


        fn test(a = 3, b = a * 2) a + b;
        fn main() test + test(a: -1) * 3;

Sources:

#ifndef FU_NO_FDEFs

static int test_XFamX2JF(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_XFamX2JF(3, (a * 2)) + (test_XFamX2JF(-1, (a * 2)) * 3);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(ref a: i32, incr: i32) {
            fn woot(x, ref b: i32 = a) {
                if (x & 1) {
                    x /= 2;
                    return test(x, b);
                }
                b += x;
            }
            return woot(incr, a);
        }

        fn main() {
            mut x = 10;
            test(x, 5);
            return x - 12;
        }

-----
TODO: o-922f1da53df8e612-13992.cpp:97
-----

        struct Arg { name: string };
        fn main() {
            let arg = Arg(<fail argument name id>id<pass/>name</fail>: "hey");
            return arg.name.len - 3;
        }

-----
TODO: <fail> mismatch:

    Expected error keyword:
        [31;1mid[0m from pattern <fail[31;1m argument name id[0m>

    ... not present in error message:

_0.fu @4:26:

[2m      |         struct Arg { name: string };[0m
[2m      |         fn main() {[0m
    4 |             let arg = Arg[31;1m([0mid: "hey");
[2m      |             return arg.name.len - 3;[0m
[2m      |         }[0m

	Bad call to [34;1mArg[0m: 

	[35;1mtype[0m [34;1mArg[0m: Argument name mismatch [TODO REPORT]

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        let s = 7;
        return s ? 0 : 1;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int s = 7;
    return (s ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let s = 0;
        return s ? 1 : 0;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int s = 0;
    return (s ? 1 : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        let s = "hello";
        return s ? 0 : 1;

-----

#include <fu/str.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR s = "hello"_fu;
    return (s ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let s = "";
        return s ? 1 : 0;

-----

#include <fu/default.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const fu_STR& s = (*(const fu_STR*)fu::NIL);
    return (s ? 1 : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        let s = [ 4 ];
        return s ? 0 : 1;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> s = fu_VEC<int> { fu::slate<1, int> { 4 } };
    return (s ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        mut s = [ 4 ];
        s.pop();
        return s ? 1 : 0;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> s = fu_VEC<int> { fu::slate<1, int> { 4 } };
    s.pop();
    return (s ? 1 : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct S { x: i32; }
        let s: S = S(1);
        return s ? 0 : 1;

-----

struct s_S;

                                #ifndef DEF_s_S
                                #define DEF_s_S
struct s_S
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_S s = s_S { 1 };
    return (s ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct S { x: i32; }
        let s: S;
        return s ? 1 : 0;

-----

struct s_S;

                                #ifndef DEF_s_S
                                #define DEF_s_S
struct s_S
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_S s {};
    return (s ? 1 : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        :OUTER for (mut y = 1; y < 10; y++)
        {
            sum += y * 10; // 10, 20
            for (mut x = 1; x < 10; x++)
            {
                sum += x; // 1, 1, 2
                if (y == 1) continue :OUTER;
                if (x == 2) break    :OUTER;
            }
        }

        return sum - 34;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    for (int y = 1; y < 10; y++)
    { {
        sum += (y * 10);
        for (int x = 1; x < 10; x++)
        {
            sum += x;
            if (y == 1)
                goto BL_2;

            if (x == 2)
                goto LL_1;

        };
      } BL_2:;
    } LL_1:;

    return sum - 34;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        :OUTER for (mut x = 0;; x++) {
            for (mut y = 0; y < x; y++) {
                if (y & 1 && !(x & 1))
                    continue :OUTER;

                sum += x;
            }

            sum += x * 1000 + 100;
            if (x > 1) // EXPECT break;
                break; // anon
        }

        // x=0:           + 0100
        // x=1: 1         + 1100
        // x=2: 2
        // x=3: 3 + 3 + 3 + 3100 break
        return sum - 4312;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;
    for (int x = 0; ; x++)
    { {
        for (int y = 0; y < x; y++)
        {
            if ((y & 1) && !(x & 1))
                goto BL_2;

            sum += x;
        };
        sum += ((x * 1000) + 100);
        if (x > 1)
            break;

      } BL_2:;
    };
    return sum - 4312;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(ref sum: i32) {
            :FIRST {
                if (sum & 1)
                    break:
                        FIRST;
                sum++;
            }
            :SECOND {
                if (sum & 1)
                    break:

                        FIRST;      
                sum++;

                if (sum & 2)
                    break:
                        SECOND;
                sum++;
            }
        }

        fn main() {
            mut sum = 0;
            test(sum);
            return sum - 1;
        }

-----
_0.fu @11:21:

[2m      |             :SECOND {[0m
[2m      |                 if (sum & 1)[0m
   11 |                     [31;1mbreak[0m:
[2m      | [0m
[2m      |                         FIRST;      [0m

	No label `FIRST` in scope.

        Solving [35;1mfn[0m [34;1mtest_K4OPjUNR[0m

-----

        fn test(ref sum: i32) {
            :FIRST {
                if (sum & 1)
                    break:
                        FIRST;
                sum++;
            }
            :SECOND {
                if (sum & 1)
                    break:

                        SECOND;     
                sum++;

                if (sum & 2)
                    break:
                        SECOND;
                sum++;
            }
        }

        fn main() {
            mut sum = 0;
            test(sum);
            return sum - 1;
        }

-----

#ifndef FU_NO_FDEFs

static void test_K4OPjUNR(int& sum)
{

    { {
        if (sum & 1)
            goto BL_1;

        sum++;
      } BL_1:;
    };

    { {
        if (sum & 1)
            goto BL_3;

        sum++;
        if (sum & 2)
            goto BL_3;

        sum++;
      } BL_3:;
    };
}

int fu_MAIN()
{
    int sum = 0;
    test_K4OPjUNR(sum);
    return sum - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = "hello";
        let y = "world";
        let w = x || y;

        return w == "hello" ? 0 : 1;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu::view<char> w = (x ? x : y);
    return ((w == "hello"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = "hello";
        let y = "world";
        let w = x && y;

        return w == "world" ? 0 : 1;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu::view<char> w = (x ? y : fu::view<char>{});
    return ((w == "world"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = "hello";
        let y = "world";
        let w = 3 && x || y;

        return w == "hello" ? 0 : 1;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu::view<char> w = (3 && x ? x : y);
    return ((w == "hello"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = "hello";
        let y = "world";
        let arr: i32[];
        let w = arr && x || y;

        return w == "world" ? 0 : 1;

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu_VEC<int> arr {};
    fu::view<char> w = (arr && x ? x : y);
    return ((w == "world"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = "hello";
        let y = "world";
        let arr: i32[];
        let w = arr && x || y || throw("Nope.");

        return w == "world" ? 0 : 1;

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu_VEC<int> arr {};
    fu::view<char> w = (arr && x ? x : y ? y : fu::fail("Nope."_fu));
    return ((w == "world"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn what(a: i32) {
            a == 2 || a & 1 || throw("what1");
            a  > 1 && a & 1 && throw("what2");
            a  > 0 && a & 3 || throw("what3");
            return a + 4;
        }
        fn main() 1.what - 2.what + 1;

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int what_pZ8wRcaF(const int a)
{
    if (!((a == 2) || (a & 1)))
        fu::fail("what1"_fu);

    if ((a > 1) && (a & 1))
        fu::fail("what2"_fu);

    if (!((a > 0) && (a & 3)))
        fu::fail("what3"_fu);

    return a + 4;
}

int fu_MAIN()
{
    return (what_pZ8wRcaF(1) - what_pZ8wRcaF(2)) + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn gen(len: i32) {
            mut res: i32[];
            for (mut i = 0; i < len; i++) res ~= i;
            return res;
        }
        fn test(len: i32) {
            let x = [-5, +5];
            let y = len.gen && x;
            return x[y.len / 2];
        }
        fn main() 0.test + 1.test;

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_VEC<int> gen_pZ8wRcaF(const int len)
{
    /*MOV*/ fu_VEC<int> res {};
    for (int i = 0; i < len; i++)
        res += int(i);

    return /*NRVO*/ res;
}

static int test_pZ8wRcaF(const int len)
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<2, int> { -5, +5 } };
    fu::view<int> y = (gen_pZ8wRcaF(len) ? x : fu::view<int>{});
    return int(x[(y.size() / 2)]);
}

int fu_MAIN()
{
    return test_pZ8wRcaF(0) + test_pZ8wRcaF(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn is_mutref(t: string)     t.len == 6;
        fn is_never(t: string)      t.len == 5;

        fn test(ref init: string, ref annot: string)
            init.is_mutref && annot ||
            init.is_never  && annot || throw("noreturn");

        fn main() {
            mut annot = "hey!";
            mut init = "woot!";
            return test(:init, :annot).len - 4;
        }

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static bool is_mutref_vhnG1IeH(fu::view<char> t)
{
    return t.size() == 6;
}

static bool is_never_vhnG1IeH(fu::view<char> t)
{
    return t.size() == 5;
}

static fu_STR& test_keVbOyRY(fu::view<char> init, fu_STR& annot)
{
    return is_mutref_vhnG1IeH(init) && annot ? annot : is_never_vhnG1IeH(init) && annot ? annot : fu::fail("noreturn"_fu);
}

int fu_MAIN()
{
    fu_STR annot = "hey!"_fu;
    fu_STR init = "woot!"_fu;
    return test_keVbOyRY(init, annot).size() - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(mut init: string) {
            init.len && init || throw("noreturn");
            return init.len;
        }

        fn main() test("woot!") - 5;

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int test_vhnG1IeH(fu_STR&& init)
{
    if (!(init.size() && init))
        fu::fail("noreturn"_fu);

    return init.size();
}

int fu_MAIN()
{
    return test_vhnG1IeH("woot!"_fu) - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn is_mutref(t: string)     t.len == 6;
        fn is_never(t: string)      t.len == 5;
        let F_ARG = 1;

        fn test(ref init: string, ref annot: string, mut flags: i32) {
            init.is_mutref  || init.is_never  && annot
                            || !init && flags & F_ARG
                            || throw("noreturn");
            return flags;
        }

        fn main() {
            mut annot = "hey!";
            mut init = "woot!";
            return test(:init, :annot, 0);
        }

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = 1;
                                #endif

static bool is_mutref_vhnG1IeH(fu::view<char> t)
{
    return t.size() == 6;
}

static bool is_never_vhnG1IeH(fu::view<char> t)
{
    return t.size() == 5;
}

static int test_TRBR5uOl(const fu_STR& init, fu::view<char> annot, /*MOV*/ const int flags)
{
    if (!(is_mutref_vhnG1IeH(init) || (is_never_vhnG1IeH(init) && annot) || (!init && (flags & F_ARG))))
        fu::fail("noreturn"_fu);

    return int(flags);
}

int fu_MAIN()
{
    fu_STR annot = "hey!"_fu;
    fu_STR init = "woot!"_fu;
    return test_TRBR5uOl(init, annot, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn a(a)  a ?  a : [];   // ifs used cons-type to seed alt-type
        fn b(b) !b ? [] : b;    //  which works for 'a', but not for 'b'.
        fn main() 1.a - 1.b;

-----

#include <fu/default.h>

#ifndef FU_NO_FDEFs

inline static int a_pZ8wRcaF(const int a)
{
    return (a ? a : (*(const int*)fu::NIL));
}

inline static int b_pZ8wRcaF(const int b)
{
    return (!b ? (*(const int*)fu::NIL) : b);
}

int fu_MAIN()
{
    return a_pZ8wRcaF(1) - b_pZ8wRcaF(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Type { i: i32 };
        fn is_mutref (t: Type) !!(t.i & 3);
        fn is_ref    (t: Type) !!(t.i & 1);
        fn clear_refs(t: Type) Type(t.i &~ 3);

        fn tryClearRefs(t: Type, mutref?: bool): Type =     // type-hints vs type-assertions:
            (mutref ? t.is_mutref : t.is_ref)               //  solveBlocks used within '&&' and '?'
                && clear_refs(t);                           //   so the '?' complained 'bool' doesnt assign to 'Type'

        fn main() {
            let a = tryClearRefs(Type(6), true);
            let b = tryClearRefs(Type(6), false);
            return a.i + b.i - 4;
        }

-----

struct s_Type;

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static bool is_mutref_vEF4Qiyl(const s_Type& t)
{
    return !!(t.i & 3);
}

static bool is_ref_vEF4Qiyl(const s_Type& t)
{
    return !!(t.i & 1);
}

static s_Type clear_refs_vEF4Qiyl(const s_Type& t)
{
    return s_Type { (t.i & ~3) };
}

static s_Type tryClearRefs_XkRRLfSk(const s_Type& t, const bool mutref)
{
    return (mutref ? is_mutref_vEF4Qiyl(t) : is_ref_vEF4Qiyl(t)) ? clear_refs_vEF4Qiyl(t) : s_Type{};
}

int fu_MAIN()
{
    const s_Type a = tryClearRefs_XkRRLfSk(s_Type { 6 }, true);
    const s_Type b = tryClearRefs_XkRRLfSk(s_Type { 6 }, false);
    return (a.i + b.i) - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut i = 7;
        i ||= 11;
        return i - 7;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int i = 7;

    {
        if (!(i))
            i = 11;

    };
    return i - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut i = 0;
        i ||= 11;
        return i - 11;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int i = 0;

    {
        if (!(i))
            i = 11;

    };
    return i - 11;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut a = 1;
        mut b = 0;
        a ||= ++b;
        return  b;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int a = 1;
    /*MOV*/ int b = 0;

    {
        if (!(a))
            a = ++b;

    };
    return /*NRVO*/ b;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut CHANGE = false;
        CHANGE ||= true;
        return CHANGE.i32 - 1;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    bool CHANGE = false;

    {
        if (!(CHANGE))
            CHANGE = true;

    };
    return int(CHANGE) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut m: Map(string, string);
        mut g = 0;

        m["hello"] = "world";
        fn f() {
            g++;
            return "cruel world";
        }

        m["hello"] ||= f();
        return g;

-----
TODO: _0.fu @5:9:

[2m      | fn main(): i32 {[0m
[2m      | [0m
    5 |         [31;1mmut[0m m: Map(string, string);
[2m      |         mut g = 0;[0m
[2m      | [0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        mut m: Map(string, string);
        mut g = 0;

        m["_not_hello_"] = "world";
        fn f() {
            g++;
            return "cruel world";
        }

        m["hello"] ||= f();
        return g - 1;

-----
TODO: _0.fu @5:9:

[2m      | fn main(): i32 {[0m
[2m      | [0m
    5 |         [31;1mmut[0m m: Map(string, string);
[2m      |         mut g = 0;[0m
[2m      | [0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Test { x: i32; }
        fn test(t: &mut Test) t.x++;
        mut t = Test();

        t.test;             
        return t.x - 1;

-----
_0.fu @10:9:

[2m      | [0m
[2m      |         t.test;             [0m
   10 |         [31;1mreturn[0m t.x - 1;
[2m      | [0m
[2m      | }[0m

	Orphan pure-looking expression.

-----

        struct Test { x: i32; }
        fn test(t: &mut Test) t.x++;
        mut t = Test();

        t.test();           
        return t.x - 1;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_XYrArFev(s_Test& t)
{
    return t.x++;
}

int fu_MAIN()
{
    s_Test t = s_Test{};
    test_XYrArFev(t);
    return t.x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        {
            {
                return 0;
            }
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        {

        {
            return 0;
        }

        }

-----
_0.fu @7:9:

[2m      |         {[0m
[2m      | [0m
    7 |         [31;1m{[0m
[2m      |             return 0;[0m
[2m      |         }[0m

	Inconsistent indent at `{`: expected more than 9, got 9. Block starts on line 5.

-----

        {

            {
                return 0;
            }

        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        {
            return 0;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        {
            return 0;

       }


-----
_0.fu @11:1:

[2m      | [0m
[2m      | [0m
   11 | [31;1m}[0m
[2m      | [0m

	Inconsistent indent at closing `}`: expected 8, got 7. Block starts on line 5.

-----

        {
            return 0;

        }


-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        {
            return 0;

         }


-----
_0.fu @11:1:

[2m      | [0m
[2m      | [0m
   11 | [31;1m}[0m
[2m      | [0m

	Inconsistent indent at closing `}`: expected 8, got 9. Block starts on line 5.

-----

        {
            return 0;

        }


-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        let y = [ 1 ];              ;; TODO fu::slate<1, int> y
        let 
            z = [ 2 ];              ;; TODO fu::slate<1, int> z

        return y[0] - 1

-----
_0.fu @7:17:

[2m      |         let y = [ 1 ];              // TODO fu::slate<1, int> y[0m
[2m      |         let [0m
    7 |             z = [31;1m[[0m 2 ];              // TODO fu::slate<1, int> z
[2m      | [0m
[2m      |         return y[0] - 1[0m

	Unused variable: [31;1mz[0m: make it [35;1mlax[0m if this is intentional.

-----

        let y = [ 1 ];              // TODO fu::slate<1, int> y
        let lax
            z = [ 2 ];              // TODO fu::slate<1, int> z

        return y[0] - 1

-----
;; TODO fu::slate<1, int> y
;; TODO fu::slate<1, int> z


#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> y = fu_VEC<int> { fu::slate<1, int> { 1 } };
    [[maybe_unused]] fu_VEC<int> z = fu_VEC<int> { fu::slate<1, int> { 2 } };
    return y[0] - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn fail(a: string) throw("hey: " ~ a);
        fn hello(a: string,

            b: string)
                a && fail(a) ? b : a;

        fn main() hello("", "nope").len;

-----
_0.fu @3:9:

[2m      | [0m
[2m      |         fn fail(a: string) throw("hey: " ~ a);[0m
    3 |         [31;1mfn[0m hello(a: string,
[2m      | [0m
[2m      |             b: string)[0m

	Unused variable: [31;1mb[0m: make it [35;1mlax[0m if this is intentional.

-----

        fn fail(a: string) throw("hey: " ~ a);
        fn hello(a: string,
lax
            b: string)
                a && fail(a) ? b : a;

        fn main() hello("", "nope").len;

-----

#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never fail_vhnG1IeH(fu::view<char> a)
{
    fu::fail(("hey: "_fu + a));
}

static const fu_STR& hello_Oh8CgYG9(const fu_STR& a, fu::view<char>)
{
    return (a ? fail_vhnG1IeH(a) : a);
}

int fu_MAIN()
{
    return hello_Oh8CgYG9((*(const fu_STR*)fu::NIL), "nope"_fu).size();
}

#endif


int main() { return fu_MAIN(); }
// DEAD_if_cons

-----

        fn incr(ref x: i32) x++;
        fn lints_ambig_expr_indent(ref a: i32, ref b: i32) {
            return a.incr

            +

                b.incr;
        }

        fn main() {
            mut a = 0; mut b = 0;
            lints_ambig_expr_indent(a, b);
            return a - b;
        }

-----
_0.fu @8:23:

[2m      |             +[0m
[2m      | [0m
    8 |                 b.incr[31;1m;[0m
[2m      |         }[0m
[2m      | [0m

	Ambiguous indent at `+`: expected more than 13, got 13

-----

        fn incr(ref x: i32) x++;
        fn lints_ambig_expr_indent(ref a: i32, ref b: i32) {
            return a.incr

              +

                b.incr;
        }

        fn main() {
            mut a = 0; mut b = 0;
            lints_ambig_expr_indent(a, b);
            return a - b;
        }

-----

#ifndef FU_NO_FDEFs

static int incr_K4OPjUNR(int& x)
{
    return x++;
}

static int lints_ambig_expr_indent_vnbprror(int& a, int& b)
{
    return incr_K4OPjUNR(a) + incr_K4OPjUNR(b);
}

int fu_MAIN()
{
    int a = 0;
    int b = 0;
    lints_ambig_expr_indent_vnbprror(a, b);
    return a - b;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn lints_ambig_jump_semis(mut x: i32) {

            return
            x;

        }

        fn main() 0.lints_ambig_jump_semis;

-----
_0.fu @5:13:

[2m      | [0m
[2m      |             return[0m
    5 |             [31;1mx[0m;
[2m      | [0m
[2m      |         }[0m

	Ambiguous indent at `x`: expected more than 13, got 13

-----

        fn lints_ambig_jump_semis(mut x: i32) {

            return x;

        }

        fn main() 0.lints_ambig_jump_semis;

-----

#ifndef FU_NO_FDEFs

static int lints_ambig_jump_semis_pZ8wRcaF(/*MOV*/ const int x)
{
    return int(x);
}

int fu_MAIN()
{
    return lints_ambig_jump_semis_pZ8wRcaF(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) a || 
                              a = A(incr(a));     //  this was an honest mistake.

        fn main() { mut v = 0; return A(v) - 1; }

-----
_0.fu @4:45:

[2m      |         fn incr(ref a: i32) ++a;[0m
[2m      |         fn A(ref a: i32) a || [0m
    4 |                               a = A(incr(a))[31;1m;[0m     //  this was an honest mistake.
[2m      | [0m
[2m      |         fn main() { mut v = 0; return A(v) - 1; }[0m

	Unparenthesized `or` on the left side of an `=`.

-----

        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) a ||  // Lint should complain here,
                             (a = A(incr(a)));    //  this was an honest mistake.

        fn main() { mut v = 0; return A(v) - 1; }

-----

static int& A_K4OPjUNR(int&);

#ifndef FU_NO_FDEFs

static int& incr_K4OPjUNR(int& a)
{
    return ++a;
}

static int& A_K4OPjUNR(int& a)
{
    return a ? a : (a = A_K4OPjUNR(incr_K4OPjUNR(a)));
}

int fu_MAIN()
{
    int v = 0;
    return A_K4OPjUNR(v) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn test(is_mutref: bool, args: i32[], ref sum: i32) {

            if (is_mutref)
                for (mut i = 0; i < args.len; i++)
                    if (args[i] & 1)
                        sum += args[i];

            else
                for (mut i = 0; i < args.len; i++)
                    if (args[i] & 2)
                        sum += args[i];
        }

        fn main() {
            mut sum = 0;
            test(true , [ 1,  2,  3  ], sum);
            test(false, [ 11, 22, 33 ], sum);
            return sum - 1 - 3 - 11 - 22;
        }

-----
_0.fu @10:17:

[2m      | [0m
[2m      |             else[0m
   10 |                 [31;1mfor[0m (mut i = 0; i < args.len; i++)
[2m      |                     if (args[i] & 2)[0m
[2m      |                         sum += args[i];[0m

	Inconsistent indent at `else`: expected 21, got 13. `if` starts on line 6.

-----

        fn test(is_mutref: bool, args: i32[], ref sum: i32) {

            if (is_mutref) {
                for (mut i = 0; i < args.len; i++)
                    if (args[i] & 1)
                        sum += args[i];
            }

            else
                for (mut i = 0; i < args.len; i++)
                    if (args[i] & 2)
                        sum += args[i];
        }

        fn main() {
            mut sum = 0;
            test(true , [ 1,  2,  3  ], sum);
            test(false, [ 11, 22, 33 ], sum);
            return sum - 1 - 3 - 11 - 22;
        }

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void test_gyCiJzZW(const bool is_mutref, fu::view<int> args, int& sum)
{
    if (is_mutref)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (args[i] & 1)
                sum += args[i];

        };
    }
    else
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (args[i] & 2)
                sum += args[i];

        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    test_gyCiJzZW(true, (fu::slate<3, int> { 1, 2, 3 }), sum);
    test_gyCiJzZW(false, (fu::slate<3, int> { 11, 22, 33 }), sum);
    return (((sum - 1) - 3) - 11) - 22;
}

#endif


int main() { return fu_MAIN(); }

-----

        //
        // The -1.abs problem.
        //
        // Ruby lexes the minus into the numeric literal.
        //  This is kinda inconsistent, altough it does make sense.
        //
        // Rust & all c-likes lex to -abs(1).
        //  Rust linters warn about this.
        //
        // One thing we can do is change the precedence of some unaries
        //  to above method call - others, like ! benefit from usual precedence.
        //   In my experience, the unary * op in c/cpp always disappoints re: precedence,
        //    but the & op usually works the way you want it to.
        //     So introducing more precedence rules is a really questionable idea.
        //
        // We'll go the rust way for starters,
        //  this will be a compile time error for now.
        //
        fn test()   
            -1.0    
                .abs;

        fn main() test ? 0 : 7;

-----
_0.fu @22:18:

[2m      |         fn test()   [0m
[2m      |             -1.0    [0m
   22 |                 .[31;1mabs[0m;
[2m      | [0m
[2m      |         fn main() test ? 0 : 7;[0m

	Here the unary -/+ separates from the numeric literal, and wraps around the whole expression. Please parenthesize explicitly to make this obvious.

-----

        //
        // The -1.abs problem.
        //
        // Ruby lexes the minus into the numeric literal.
        //  This is kinda inconsistent, altough it does make sense.
        //
        // Rust & all c-likes lex to -abs(1).
        //  Rust linters warn about this.
        //
        // One thing we can do is change the precedence of some unaries
        //  to above method call - others, like ! benefit from usual precedence.
        //   In my experience, the unary * op in c/cpp always disappoints re: precedence,
        //    but the & op usually works the way you want it to.
        //     So introducing more precedence rules is a really questionable idea.
        //
        // We'll go the rust way for starters,
        //  this will be a compile time error for now.
        //
        fn test()   
            (-1.0)  
                .abs;

        fn main() test ? 0 : 7;

-----

#include <cmath>

#ifndef FU_NO_FDEFs

static double test_H9fhQUVP()
{
    return std::abs(-1.0);
}

int fu_MAIN()
{
    return (test_H9fhQUVP() ? 0 : 7);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(ref a: i32, ref b: i32) {
            return (++a) + (++b);
        }

        fn main() {
            mut x = 0;


            ref y = x; 

            let z = test(x, y);
            return x+y - z;
        }

-----
_0.fu @12:29:

[2m      |             ref y = x; [0m
[2m      | [0m
   12 |             let z = test(x, [31;1my[0m);
[2m      |             return x+y - z;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mtest_vnbprror[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mx[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn test(ref a: i32, ref b: i32) {
            return (++a) + (++b);
        }

        fn main() {
            mut x = 0;


            mut y = x; 

            let z = test(x, y);
            return x+y - z;
        }

-----

#ifndef FU_NO_FDEFs

static int test_vnbprror(int& a, int& b)
{
    return ++a + ++b;
}

int fu_MAIN()
{
    int x = 0;
    int y = x;
    const int z = test_vnbprror(x, y);
    return (x + y) - z;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn test_inner(ref a: i32, ref b: i32)
            (++a) + (++b);

        pub fn test_outer(ref a: i32, ref b: i32)
            test_inner(a, b);

        fn main() {
            mut x = 0;


            ref y = x; 

            let z = test_outer(x, y);
            return x+y - z;
        }

-----
_0.fu @14:35:

[2m      |             ref y = x; [0m
[2m      | [0m
   14 |             let z = test_outer(x, [31;1my[0m);
[2m      |             return x+y - z;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mtest_outer_vnbprror[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mx[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        pub fn test_inner(ref a: i32, ref b: i32)
            (++a) + (++b);

        pub fn test_outer(ref a: i32, ref b: i32)
            test_inner(a, b);

        fn main() {
            mut x = 0;


            mut y = x; 

            let z = test_outer(x, y);
            return x+y - z;
        }

-----

#ifndef FU_NO_FDEFs

int test_inner_vnbprror(int& a, int& b)
{
    return ++a + ++b;
}

int test_outer_vnbprror(int& a, int& b)
{
    return test_inner_vnbprror(a, b);
}

int fu_MAIN()
{
    int x = 0;
    int y = x;
    const int z = test_outer_vnbprror(x, y);
    return (x + y) - z;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            if (a.len & 1) {

                a ~= 1; // Invalidates 'b'.

            }
            b++;
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 3;
        }

-----
_0.fu @9:13:

[2m      | [0m
[2m      |             }[0m
    9 |             [31;1mb[0m++;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mb[0m, reference invalidated by write to [31;1ma[0m at 6:19:

[2m      |             if (a.len & 1) {[0m
[2m      | [0m
    6 |                 a [31;1m~=[0m 1; // Invalidates 'b'.
[2m      | [0m
[2m      |             }[0m

	At call to [34;1m
<fu/vec/concat_one.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_5UkPjt2z[0m

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            if (a.len & 1) {

                b++;

            }
            b++;
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 3;
        }

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static void test_5UkPjt2z(fu_VEC<int>& a)
{
    int& b = a.mutref(0);
    if (a.size() & 1)
        b++;

    b++;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_5UkPjt2z(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        nocopy struct nci32 { i: i32; };

        fn test(ref a: nci32, b: nci32) a.i++ || b.i;
        fn main() {
            mut x = nci32(0);

            ref y = x;                        

            return test(x, y);
        }

-----
_0.fu @10:28:

[2m      |             ref y = x;                        [0m
[2m      | [0m
   10 |             return test(x, [31;1my[0m);
[2m      |         }[0m
[2m      | [0m

	[35;1mfn[0m [34;1mtest_zzIYHIZ6[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mx[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        nocopy struct nci32 { i: i32; };

        fn test(ref a: nci32, b: nci32) a.i++ || b.i;
        fn main() {
            mut x = nci32(0);

            let y = nci32(0);                 

            return test(x, y);
        }

-----

struct s_nci32;

                                #ifndef DEF_s_nci32
                                #define DEF_s_nci32
struct s_nci32
{
    int i;
    s_nci32(const s_nci32&) = delete;
    s_nci32(s_nci32&&) = default;
    s_nci32& operator=(const s_nci32&) = delete;
    s_nci32& operator=(s_nci32&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_zzIYHIZ6(s_nci32& a, const s_nci32& b)
{
    int _0 {};
    return (_0 = a.i++) ? _0 : int(b.i);
}

int fu_MAIN()
{
    s_nci32 x = s_nci32 { 0 };
    const s_nci32 y = s_nci32 { 0 };
    return test_zzIYHIZ6(x, y);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            if (a.len & 1) { // Lets be extra sure here.

                a ~= 1; // Invalidates 'b'.
                b++;

            }
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 3;
        }

-----
_0.fu @7:17:

[2m      | [0m
[2m      |                 a ~= 1; // Invalidates 'b'.[0m
    7 |                 [31;1mb[0m++;
[2m      | [0m
[2m      |             }[0m

	Cannot access [31;1mb[0m, reference invalidated by write to [31;1ma[0m at 6:19:

[2m      |             if (a.len & 1) { // Lets be extra sure here.[0m
[2m      | [0m
    6 |                 a [31;1m~=[0m 1; // Invalidates 'b'.
[2m      |                 b++;[0m
[2m      | [0m

	At call to [34;1m
<fu/vec/concat_one.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_5UkPjt2z[0m

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            if (a.len & 1) { // Lets be extra sure here.

                b++;
                a ~= 1;

            }
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 3;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static void test_5UkPjt2z(fu_VEC<int>& a)
{
    int& b = a.mutref(0);
    if (a.size() & 1)
    {
        b++;
        a += 1;
    };
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_5UkPjt2z(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            for (mut i = 2; i --> 0; )
            {
                b++; // Same thing but reordered as a loop.
                if (a.len & 3) {

                    a ~= 1; // Invalidates 'b'.

                }
            }
            a ~= 100; // Invalidates 'b' but that's fine!
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 105;
        }

-----
_0.fu @9:23:

[2m      |                 if (a.len & 3) {[0m
[2m      | [0m
    9 |                     a [31;1m~=[0m 1; // Invalidates 'b'.
[2m      | [0m
[2m      |                 }[0m

	Write to [31;1ma[0m at call to [35;1m__native[0m [34;1m
<fu/vec/concat_one.h>
+=[0m invalidates the use of [31;1mb[0m at 6:17:

[2m      |             for (mut i = 2; i --> 0; )[0m
[2m      |             {[0m
    6 |                 [31;1mb[0m++; // Same thing but reordered as a loop.
[2m      |                 if (a.len & 3) {[0m
[2m      | [0m

	... on next loop iteration.

	Written
            

        Solving [35;1mfn[0m [34;1mtest_5UkPjt2z[0m

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            for (mut i = 2; i --> 0; )
            {
                b++; // Same thing but reordered as a loop.
                if (a.len & 3) {

                    b++;

                }
            }
            a ~= 100; // Invalidates 'b' but that's fine!
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 105;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static void test_5UkPjt2z(fu_VEC<int>& a)
{
    int& b = a.mutref(0);
    for (int i = 2; i-- > 0; )
    {
        b++;
        if (a.size() & 3)
            b++;

    };
    a += 100;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_5UkPjt2z(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 105;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            for (mut i = 2; i --> 0; )
            {
                if (i & 1) {
                    b += 2; // Same thing but reordered as a loop.
                }
                else {

                    a ~= 1; // Invalidates 'b', same as a above, but now in an if/else -

                }
            }
            a ~= 100; // Invalidates 'b' but that's fine!
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 106;
        }

-----
_0.fu @11:23:

[2m      |                 else {[0m
[2m      | [0m
   11 |                     a [31;1m~=[0m 1; // Invalidates 'b', same as a above, but now in an if/else -
[2m      | [0m
[2m      |                 }[0m

	Write to [31;1ma[0m at call to [35;1m__native[0m [34;1m
<fu/vec/concat_one.h>
+=[0m invalidates the use of [31;1mb[0m at 7:21:

[2m      |             {[0m
[2m      |                 if (i & 1) {[0m
    7 |                     [31;1mb[0m += 2; // Same thing but reordered as a loop.
[2m      |                 }[0m
[2m      |                 else {[0m

	... on next loop iteration.

	Written
            

        Solving [35;1mfn[0m [34;1mtest_5UkPjt2z[0m

-----

        fn test(ref a: i32[]) {
            ref b = a[0];
            for (mut i = 2; i --> 0; )
            {
                if (i & 1) {
                    b += 2; // Same thing but reordered as a loop.
                }
                else {
 //  got the used-in-a-loop stuff wrong when switching to cant_invalidate.
                    b += 3;

                }
            }
            a ~= 100; // Invalidates 'b' but that's fine!
        }

        fn main() {
            mut arr = [ 1 ]; test(arr);
            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 106;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static void test_5UkPjt2z(fu_VEC<int>& a)
{
    int& b = a.mutref(0);
    for (int i = 2; i-- > 0; )
    {
        if (i & 1)
            b += 2;
        else
            b += 3;

    };
    a += 100;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_5UkPjt2z(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 106;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        // both args alias, but there's no risk of inval.
        fn incr_a_or_b(ref a: i32, ref b: i32)
            (a || b)++;

        fn main() {
            mut Z = 0;
            mut A = 1;
            mut B = 0;

            incr_a_or_b(Z, B); // incr B, now 1
            incr_a_or_b(A, B); // incr A, now 2
            incr_a_or_b(B, B); // incr _target, now 2 // alias!

            return (100*A + B) - 202;
        }

-----

#ifndef FU_NO_FDEFs

static int incr_a_or_b_vnbprror(int& a, int& b)
{
    return (a ? a : b)++;
}

int fu_MAIN()
{
    int Z = 0;
    int A = 1;
    int B = 0;
    incr_a_or_b_vnbprror(Z, B);
    incr_a_or_b_vnbprror(A, B);
    incr_a_or_b_vnbprror(B, B);
    return ((100 * A) + B) - 202;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct V { v: i32; };

        fn main() {
            mut A: V = [ 1 ];
            ref a = A.v;
            ref b = A.v;
            ref c = a || b;
            return ++++c - 3; // double mutation of a union
        }

-----

struct s_V;

                                #ifndef DEF_s_V
                                #define DEF_s_V
struct s_V
{
    int v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_V A = s_V { 1 };
    int& a = A.v;
    int& b = A.v;
    int& c = (a ? a : b);
    return ++++c - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct V { v: i32; };

        fn main() {
            mut A: V = [ 1 ];
            ref a = A.v;
            ref b = A.v;
            return ++++(a || b) - 3; // same, without a helper var
        }

-----

struct s_V;

                                #ifndef DEF_s_V
                                #define DEF_s_V
struct s_V
{
    int v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_V A = s_V { 1 };
    int& a = A.v;
    int& b = A.v;
    return ++++(a ? a : b) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct V { v: i32; w?: i32; ww?: i32; };

        fn main() {
            mut A: V = [ 1 ];
            mut B: V = [ 1 ];


            ref aa = A.v || A.w; 

            ref bb = B.v || B.w;
            ++++bb;

            ref a = A.v || A.ww;
            ref b = B.v || B.ww;

            ref c = a || b;
            ++++c;

            return aa - 3; // same, without a helper var
        }

-----
_0.fu @20:20:

[2m      |             ++++c;[0m
[2m      | [0m
   20 |             return [31;1maa[0m - 3; // same, without a helper var
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1maa[0m, reference invalidated by write to [31;1mc[0m at 18:15:

[2m      | [0m
[2m      |             ref c = a || b;[0m
   18 |             ++[31;1m++[0mc;
[2m      | [0m
[2m      |             return aa - 3; // same, without a helper var[0m

	At call to [34;1m++[0m
            

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct V { v: i32; w?: i32; ww?: i32; };

        fn main() {
            mut A: V = [ 1 ];
            mut B: V = [ 1 ];


            fn  aa = A.v || A.w; 

            ref bb = B.v || B.w;
            ++++bb;

            ref a = A.v || A.ww;
            ref b = B.v || B.ww;

            ref c = a || b;
            ++++c;

            return aa - 3; // same, without a helper var
        }

-----

struct s_V;

                                #ifndef DEF_s_V
                                #define DEF_s_V
struct s_V
{
    int v;
    int w;
    int ww;
    explicit operator bool() const noexcept
    {
        return false
            || v
            || w
            || ww
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int& aa_fwJRfWgj(s_V& A)
{
    return A.v ? A.v : A.w;
}

int fu_MAIN()
{
    s_V A = s_V { 1, 0, 0 };
    s_V B = s_V { 1, 0, 0 };
    int& bb = (B.v ? B.v : B.w);
    ++++bb;
    int& a = (A.v ? A.v : A.ww);
    int& b = (B.v ? B.v : B.ww);
    int& c = (a ? a : b);
    ++++c;
    return aa_fwJRfWgj(A) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        // a can alias b
        // c can alias d
        pub fn ab_cd (ref a: i32, ref b: i32, ref c: i32, ref d: i32) {
            ref ab = a || b;
            ref cd = c || d;
            ++++ab;
            ++++cd;
        }

        fn main() {
            mut ab = 0;
            mut cd = 0;


            ab_cd(ab, cd, ab, cd); 

            return ab - cd;
        }

-----
_0.fu @16:31:

[2m      | [0m
[2m      | [0m
   16 |             ab_cd(ab, cd, ab, [31;1mcd[0m); 
[2m      | [0m
[2m      |             return ab - cd;[0m

	[35;1mfn[0m [34;1mab_cd_zV9tBajF[0m: Arguments [31;1mc[0m and [31;1ma[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        // a can alias b
        // c can alias d
        pub fn ab_cd (ref a: i32, ref b: i32, ref c: i32, ref d: i32) {
            ref ab = a || b;
            ref cd = c || d;
            ++++ab;
            ++++cd;
        }

        fn main() {
            mut ab = 0;
            mut cd = 0;


            ab_cd(ab, ab, cd, cd); 

            return ab - cd;
        }

-----

#ifndef FU_NO_FDEFs

void ab_cd_zV9tBajF(int& a, int& b, int& c, int& d)
{
    int& ab = (a ? a : b);
    int& cd = (c ? c : d);
    ++++ab;
    ++++cd;
}

int fu_MAIN()
{
    int ab = 0;
    int cd = 0;
    ab_cd_zV9tBajF(ab, ab, cd, cd);
    return ab - cd;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct X { i: i32; j: i32; };
        // a can alias b
        // c can alias d
        pub fn ab_cd_defer(ref a: X, ref b: X, ref c: X, ref d: X, j?: bool) {
            defer {
                ref ab = a || b;
                ref abi = j ? ab.j : ab.i;
                ++++abi;
            }
            ref cd = c || d;
            ref cdi = j ? cd.j : cd.i;
            ++++cdi;
        }

        fn main() {
            mut ab = X(0, 0);
            mut cd = X(0, 0);


            ab_cd_defer(ab, cd, ab, cd); 

            return ab.i - cd.i;
        }

-----
_0.fu @21:37:

[2m      | [0m
[2m      | [0m
   21 |             ab_cd_defer(ab, cd, ab, [31;1mcd[0m); 
[2m      | [0m
[2m      |             return ab.i - cd.i;[0m

	[35;1mfn[0m [34;1mab_cd_defer_KE4Hkugz[0m: Arguments [31;1mc[0m and [31;1ma[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct X { i: i32; j: i32; };
        // a can alias b
        // c can alias d
        pub fn ab_cd_defer(ref a: X, ref b: X, ref c: X, ref d: X, j?: bool) {
            defer {
                ref ab = a || b;
                ref abi = j ? ab.j : ab.i;
                ++++abi;
            }
            ref cd = c || d;
            ref cdi = j ? cd.j : cd.i;
            ++++cdi;
        }

        fn main() {
            mut ab = X(0, 0);
            mut cd = X(0, 0);


            ab_cd_defer(ab, ab, cd, cd); 

            return ab.i - cd.i;
        }

-----

#include <fu/defer.h>

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int i;
    int j;
    explicit operator bool() const noexcept
    {
        return false
            || i
            || j
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

void ab_cd_defer_KE4Hkugz(s_X& a, s_X& b, s_X& c, s_X& d, const bool j)
{
    fu_DEFER(
    {
        s_X& ab = (a ? a : b);
        int& abi = (j ? ab.j : ab.i);
        ++++abi;
    });
    s_X& cd = (c ? c : d);
    int& cdi = (j ? cd.j : cd.i);
    ++++cdi;
}

int fu_MAIN()
{
    s_X ab = s_X { 0, 0 };
    s_X cd = s_X { 0, 0 };
    ab_cd_defer_KE4Hkugz(ab, ab, cd, cd, bool{});
    return ab.i - cd.i;
}

#endif


int main() { return fu_MAIN(); }

-----

        // a can alias b
        // c can alias d
        pub fn ab_cd_inner (ref a: i32, ref b: i32, ref c: i32, ref d: i32) {
            ref ab = a || b;
            ref cd = c || d;
            ++++ab;
            ++++cd;
        }

        pub fn ab_cd_outer (ref a: i32, ref b: i32, ref c: i32, ref d: i32)
            ab_cd_inner(a, b, c, d);

        fn main() {
            mut ab = 0;
            mut cd = 0;


            ab_cd_outer(ab, cd, ab, cd); 

            return ab - cd;
        }

-----
_0.fu @19:37:

[2m      | [0m
[2m      | [0m
   19 |             ab_cd_outer(ab, cd, ab, [31;1mcd[0m); 
[2m      | [0m
[2m      |             return ab - cd;[0m

	[35;1mfn[0m [34;1mab_cd_outer_zV9tBajF[0m: Arguments [31;1mc[0m and [31;1ma[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        // a can alias b
        // c can alias d
        pub fn ab_cd_inner (ref a: i32, ref b: i32, ref c: i32, ref d: i32) {
            ref ab = a || b;
            ref cd = c || d;
            ++++ab;
            ++++cd;
        }

        pub fn ab_cd_outer (ref a: i32, ref b: i32, ref c: i32, ref d: i32)
            ab_cd_inner(a, b, c, d);

        fn main() {
            mut ab = 0;
            mut cd = 0;


            ab_cd_outer(ab, ab, cd, cd); 

            return ab - cd;
        }

-----

#ifndef FU_NO_FDEFs

void ab_cd_inner_zV9tBajF(int& a, int& b, int& c, int& d)
{
    int& ab = (a ? a : b);
    int& cd = (c ? c : d);
    ++++ab;
    ++++cd;
}

void ab_cd_outer_zV9tBajF(int& a, int& b, int& c, int& d)
{
    ab_cd_inner_zV9tBajF(a, b, c, d);
}

int fu_MAIN()
{
    int ab = 0;
    int cd = 0;
    ab_cd_outer_zV9tBajF(ab, ab, cd, cd);
    return ab - cd;
}

#endif


int main() { return fu_MAIN(); }

-----

        // a can alias b
        // c can alias d
        // e can alias f
        // g can alias h
        pub fn abcd_efgh(ref a: i32, ref b: i32, ref c: i32, ref d: i32,
                         ref e: i32, ref f: i32, ref g: i32, ref h: i32)
        {
            ref ab = a || b; ref cd = c || d; ref abcd = ab || cd;
            ref ef = e || f; ref gh = g || h; ref efgh = ef || gh;
            ++++abcd; ++++ab; ++++cd;
            ++++efgh; ++++ef; ++++gh;
        }

        fn main() {
            mut ab = 0; mut cd = 0;
            mut ef = 0; mut gh = 0;


            abcd_efgh(ab, ab, cd, gh, ef, ef, cd, gh); 

            return (ab + cd) - (ef + gh);
        }

-----
_0.fu @20:51:

[2m      | [0m
[2m      | [0m
   20 |             abcd_efgh(ab, ab, cd, gh, ef, ef, cd, [31;1mgh[0m); 
[2m      | [0m
[2m      |             return (ab + cd) - (ef + gh);[0m

	[35;1mfn[0m [34;1mabcd_efgh_LyQNZEUR[0m: Arguments [31;1mg[0m and [31;1mc[0m (args #6 and #2) both alias:

                [35;1mvar[0m [34;1mcd[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        // a can alias b
        // c can alias d
        // e can alias f
        // g can alias h
        pub fn abcd_efgh(ref a: i32, ref b: i32, ref c: i32, ref d: i32,
                         ref e: i32, ref f: i32, ref g: i32, ref h: i32)
        {
            ref ab = a || b; ref cd = c || d; ref abcd = ab || cd;
            ref ef = e || f; ref gh = g || h; ref efgh = ef || gh;
            ++++abcd; ++++ab; ++++cd;
            ++++efgh; ++++ef; ++++gh;
        }

        fn main() {
            mut ab = 0; mut cd = 0;
            mut ef = 0; mut gh = 0;


            abcd_efgh(ab, ab, cd, cd, ef, ef, gh, gh); 

            return (ab + cd) - (ef + gh);
        }

-----

#ifndef FU_NO_FDEFs

void abcd_efgh_LyQNZEUR(int& a, int& b, int& c, int& d, int& e, int& f, int& g, int& h)
{
    int& ab = (a ? a : b);
    int& cd = (c ? c : d);
    int& abcd = (ab ? ab : cd);
    int& ef = (e ? e : f);
    int& gh = (g ? g : h);
    int& efgh = (ef ? ef : gh);
    ++++abcd;
    ++++ab;
    ++++cd;
    ++++efgh;
    ++++ef;
    ++++gh;
}

int fu_MAIN()
{
    int ab = 0;
    int cd = 0;
    int ef = 0;
    int gh = 0;
    abcd_efgh_LyQNZEUR(ab, ab, cd, cd, ef, ef, gh, gh);
    return (ab + cd) - (ef + gh);
}

#endif


int main() { return fu_MAIN(); }

-----

        // a cannot alias b
        pub fn incr_a_or_b_and_b_or_a(ref a: i32, ref b: i32) {
            ref x = a || b; ++x;
            ref y = b || a; ++y;
        }

        fn main() {
            mut a = 0;
            mut b = 0;


            incr_a_or_b_and_b_or_a(a, a); 

            return a + b - 2;
        }

-----
_0.fu @13:39:

[2m      | [0m
[2m      | [0m
   13 |             incr_a_or_b_and_b_or_a(a, [31;1ma[0m); 
[2m      | [0m
[2m      |             return a + b - 2;[0m

	[35;1mfn[0m [34;1mincr_a_or_b_and_b_or_a_vnbprror[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1ma[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        // a cannot alias b
        pub fn incr_a_or_b_and_b_or_a(ref a: i32, ref b: i32) {
            ref x = a || b; ++x;
            ref y = b || a; ++y;
        }

        fn main() {
            mut a = 0;
            mut b = 0;


            incr_a_or_b_and_b_or_a(a, b); 

            return a + b - 2;
        }

-----

#ifndef FU_NO_FDEFs

void incr_a_or_b_and_b_or_a_vnbprror(int& a, int& b)
{
    int& x = (a ? a : b);
    ++x;
    int& y = (b ? b : a);
    ++y;
}

int fu_MAIN()
{
    int a = 0;
    int b = 0;
    incr_a_or_b_and_b_or_a_vnbprror(a, b);
    return (a + b) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        // same as below -
        //  but using a helper variable
        //   which provides a "name" for the outcome of a|b.
        fn incr_a_or_b_by2_via_x(ref a: i32, ref b: i32) {
            ref x = a || b;
            ++++x;
        }

        fn main() {
            mut Z = 0;
            mut A = 2;
            mut B = 0;

            incr_a_or_b_by2_via_x(Z, B); // incr B, now 2
            incr_a_or_b_by2_via_x(A, B); // incr A, now 4
            incr_a_or_b_by2_via_x(B, B); // incr _target, now 4 // alias!

            return (100*A + B) - 404;
        }

-----

#ifndef FU_NO_FDEFs

static void incr_a_or_b_by2_via_x_vnbprror(int& a, int& b)
{
    int& x = (a ? a : b);
    ++++x;
}

int fu_MAIN()
{
    int Z = 0;
    int A = 2;
    int B = 0;
    incr_a_or_b_by2_via_x_vnbprror(Z, B);
    incr_a_or_b_by2_via_x_vnbprror(A, B);
    incr_a_or_b_by2_via_x_vnbprror(B, B);
    return ((100 * A) + B) - 404;
}

#endif


int main() { return fu_MAIN(); }

-----

        // same as above -
        //  but notice we increment twice, which breaks current setup.
        fn incr_a_or_b_by2(ref a: i32, ref b: i32)
            ++++(a || b);

        fn main() {
            mut Z = 0;
            mut A = 2;
            mut B = 0;

            incr_a_or_b_by2(Z, B); // incr B, now 2
            incr_a_or_b_by2(A, B); // incr A, now 4
            incr_a_or_b_by2(B, B); // incr _target, now 4 // alias!

            return (100*A + B) - 404;
        }

-----

#ifndef FU_NO_FDEFs

static int& incr_a_or_b_by2_vnbprror(int& a, int& b)
{
    return ++++(a ? a : b);
}

int fu_MAIN()
{
    int Z = 0;
    int A = 2;
    int B = 0;
    incr_a_or_b_by2_vnbprror(Z, B);
    incr_a_or_b_by2_vnbprror(A, B);
    incr_a_or_b_by2_vnbprror(B, B);
    return ((100 * A) + B) - 404;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn alias(ref arr: i32[], ref item: i32) {
            arr ~= 1;
            return item;
        }

        fn main() {
            mut a = [ 0 ];

            ref c = alias(a, a[0]);

            return c++;
        }

-----
_0.fu @10:31:

[2m      |             mut a = [ 0 ];[0m
[2m      | [0m
   10 |             ref c = alias(a, a[31;1m[[0m0]);
[2m      | [0m
[2m      |             return c++;[0m

	[35;1mfn[0m [34;1malias_ndkRofCB[0m: Arguments [31;1mitem[0m and [31;1marr[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1ma[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn alias(ref arr: i32[], ref item: i32) {
            arr ~= 1;
            return item;
        }

        fn main() {
            mut a = [ 0 ];

            mut b = [ 0 ];
            ref c = alias(a, b[0]);

            return c++;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static int& alias_ndkRofCB(fu_VEC<int>& arr, int& item)
{
    arr += 1;
    return item;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    int& c = alias_ndkRofCB(a, b.mutref(0));
    return c++;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(ref a: i32[], ref b: i32[]) {

            ref aa = a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            ref cc = bb || aa;     // Mustn't compile.
            return cc;
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----
_0.fu @7:28:

[2m      | [0m
[2m      |             ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.[0m
    7 |             ref cc = bb || [31;1maa[0m;     // Mustn't compile.
[2m      |             return cc;[0m
[2m      |         }[0m

	Cannot access [31;1maa[0m, reference invalidated by write to [31;1ma[0m at 6:30:

[2m      |             ref aa = a[0]; [0m
[2m      | [0m
    6 |             ref bb = b[0]; a [31;1m~=[0m 1; // Invalidates 'aa' if ref.
[2m      |             ref cc = bb || aa;     // Mustn't compile.[0m
[2m      |             return cc;[0m

	At call to [34;1m
<fu/vec/concat_one.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_p5gMbQCn[0m

-----

        fn test(ref a: i32[], ref b: i32[]) {

            fn  aa() a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            ref cc = bb || aa;     // Mustn't compile.
            return cc;
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static int& aa_y1jV3SX3(fu_VEC<int>& a)
{
    return a.mutref(0);
}

static int& test_p5gMbQCn(fu_VEC<int>& a, fu_VEC<int>& b)
{
    int& bb = b.mutref(0);
    a += 1;
    int& cc = (bb ? bb : aa_y1jV3SX3(a));
    return cc;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return int(test_p5gMbQCn(a, b));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(ref a: i32[], ref b: i32[]) {

            ref aa = a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return bb || aa;       // Same as above, but no explicit binding.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----
_0.fu @7:26:

[2m      | [0m
[2m      |             ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.[0m
    7 |             return bb || [31;1maa[0m;       // Same as above, but no explicit binding.
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1maa[0m, reference invalidated by write to [31;1ma[0m at 6:30:

[2m      |             ref aa = a[0]; [0m
[2m      | [0m
    6 |             ref bb = b[0]; a [31;1m~=[0m 1; // Invalidates 'aa' if ref.
[2m      |             return bb || aa;       // Same as above, but no explicit binding.[0m
[2m      |         }[0m

	At call to [34;1m
<fu/vec/concat_one.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_p5gMbQCn[0m

-----

        fn test(ref a: i32[], ref b: i32[]) {

            fn  aa() a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return bb || aa;       // Same as above, but no explicit binding.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static int& aa_y1jV3SX3(fu_VEC<int>& a)
{
    return a.mutref(0);
}

static int& test_p5gMbQCn(fu_VEC<int>& a, fu_VEC<int>& b)
{
    int& bb = b.mutref(0);
    a += 1;
    return bb ? bb : aa_y1jV3SX3(a);
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return int(test_p5gMbQCn(a, b));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn noop(x) x;
        fn test(ref a: i32[], ref b: i32[]) {

            ref aa = a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return noop(bb || aa); // Same as above, but bound at callsite.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----
_0.fu @8:31:

[2m      | [0m
[2m      |             ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.[0m
    8 |             return noop(bb || [31;1maa[0m); // Same as above, but bound at callsite.
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1maa[0m, reference invalidated by write to [31;1ma[0m at 7:30:

[2m      |             ref aa = a[0]; [0m
[2m      | [0m
    7 |             ref bb = b[0]; a [31;1m~=[0m 1; // Invalidates 'aa' if ref.
[2m      |             return noop(bb || aa); // Same as above, but bound at callsite.[0m
[2m      |         }[0m

	At call to [34;1m
<fu/vec/concat_one.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_p5gMbQCn[0m

-----

        fn noop(x) x;
        fn test(ref a: i32[], ref b: i32[]) {

            fn  aa() a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return noop(bb || aa); // Same as above, but bound at callsite.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static int& aa_hpa9AihZ(fu_VEC<int>& a)
{
    return a.mutref(0);
}

inline static int& noop_K4OPjUNR(int& x)
{
    return x;
}

static int& test_p5gMbQCn(fu_VEC<int>& a, fu_VEC<int>& b)
{
    int& bb = b.mutref(0);
    a += 1;
    return noop_K4OPjUNR((bb ? bb : aa_hpa9AihZ(a)));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return int(test_p5gMbQCn(a, b));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn either(a, b) a || b;
        fn test(ref a: i32[], ref b: i32[]) {

            ref aa = a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return either(bb, aa); // For completeness.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----
_0.fu @8:31:

[2m      | [0m
[2m      |             ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.[0m
    8 |             return either(bb, [31;1maa[0m); // For completeness.
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1maa[0m, reference invalidated by write to [31;1ma[0m at 7:30:

[2m      |             ref aa = a[0]; [0m
[2m      | [0m
    7 |             ref bb = b[0]; a [31;1m~=[0m 1; // Invalidates 'aa' if ref.
[2m      |             return either(bb, aa); // For completeness.[0m
[2m      |         }[0m

	At call to [34;1m
<fu/vec/concat_one.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_p5gMbQCn[0m

-----

        fn either(a, b) a || b;
        fn test(ref a: i32[], ref b: i32[]) {

            fn aa()  a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return either(bb, aa); // For completeness.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static int& aa_hpa9AihZ(fu_VEC<int>& a)
{
    return a.mutref(0);
}

inline static int& either_vnbprror(int& a, int& b)
{
    return a ? a : b;
}

static int& test_p5gMbQCn(fu_VEC<int>& a, fu_VEC<int>& b)
{
    int& bb = b.mutref(0);
    a += 1;
    return either_vnbprror(bb, aa_hpa9AihZ(a));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return int(test_p5gMbQCn(a, b));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn what(ref cond: i32, ref cons: i32)
            cond && (cons += 1);

        fn main() {
            mut x = 1;
            return what(x, x) - 2;
        }

-----

#ifndef FU_NO_FDEFs

static int& what_vnbprror(int& cond, int& cons)
{
    return !cond ? cond : (cons += 1);
}

int fu_MAIN()
{
    int x = 1;
    return what_vnbprror(x, x) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Target {
            overload: i32[];
            extended: i32[];
        };

        fn which(ref t: Target, i: i32) i & 1
            ? t.overload
            : t.extended;

        fn test(ref target: Target)
        {
            ref overload = target.which(target.overload.len);
            ref extended = target.which(target.overload.len + 1);

            mut change = false;
            if (overload)
            {
                for (mut i = 0; i < overload.len; i++)
                {
                    let a = overload[i];
                    let b = extended[i];
                    if (a != b)
                    {
                        change = true;
                        break;
                    }
                }
            }

            if (change)
            {
                extended[0] = 3;

                shadow ref overload = target.which(target.overload.len);
                overload[0] = 5; // Said write to overload invalidates ext on next loop iter.
            }
        }

        fn main()
        {
            mut target = Target([ 0 ], [ 1 ]);
            target.test();
            return target.overload[0] * 10 + target.extended[0] * 100 - 350;
        }

-----

#include <fu/vec.h>

struct s_Target;

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    fu_VEC<int> overload;
    fu_VEC<int> extended;
    explicit operator bool() const noexcept
    {
        return false
            || overload
            || extended
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<int>& which_n9NTIunl(s_Target& t, const int i)
{
    return ((i & 1) ? t.overload : t.extended);
}

static void test_4htgoDpn(s_Target& target)
{
    const fu_VEC<int>& overload = which_n9NTIunl(target, target.overload.size());
    fu_VEC<int>& extended = which_n9NTIunl(target, (target.overload.size() + 1));
    bool change = false;
    if (overload)
    {
        for (int i = 0; i < overload.size(); i++)
        {
            const int a = overload[i];
            const int b = extended[i];
            if (a != b)
            {
                change = true;
                break;
            };
        };
    };
    if (change)
    {
        extended.mutref(0) = 3;
        fu_VEC<int>& overload_1 = which_n9NTIunl(target, target.overload.size());
        overload_1.mutref(0) = 5;
    };
}

int fu_MAIN()
{
    s_Target target = s_Target { fu_VEC<int> { fu::slate<1, int> { 0 } }, fu_VEC<int> { fu::slate<1, int> { 1 } } };
    test_4htgoDpn(target);
    return ((target.overload[0] * 10) + (target.extended[0] * 100)) - 350;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(ref a: i32, ref b: i32) {
            a += b;
            b += a;
        }

        struct AB { a: i32; b: i32 };

        fn main() {
            mut ab = AB(1, 2);
            <alt>
            ref a = ab.a;
            ref b = ab.b;
            test(a, b);
            <alt/>
            ref a = ab.a;
            test(a, ab.b);
            <alt/>
            test(ab.a, ab.b);
            </alt>
            return ab.b - 5;
        }

-----
TODO: _0.fu @12:24:

[2m      |             mut ab = AB(1, 2);[0m
[2m      | [0m
   12 |             test(ab.a, [31;1mab[0m.b);
[2m      | [0m
[2m      |             return ab.b - 5;[0m

	[35;1mfn[0m [34;1mtest_vnbprror[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Helper { vars: i32[]; };

        fn test(ref _helpers: Helper[], helpers_idx: i32) {
            ref old = _helpers[helpers_idx - 1].vars;
            ref new = _helpers[helpers_idx    ].vars;
            new    ~= old[helpers_idx];
        }

        fn main() {
            mut helpers = [ Helpers([ 1, 2 ]), Helpers([ 4, 8 ]) ];
            test(helpers, 1);
            return helpers[1][2] - 2;
        }

-----
TODO: _0.fu @7:23:

[2m      |             ref old = _helpers[helpers_idx - 1].vars;[0m
[2m      |             ref new = _helpers[helpers_idx    ].vars;[0m
    7 |             new    ~= [31;1mold[0m[helpers_idx];
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mold[0m, reference invalidated by write to [31;1m_helpers[0m at 6:31:

[2m      |         fn test(ref _helpers: Helper[], helpers_idx: i32) {[0m
[2m      |             ref old = _helpers[helpers_idx - 1].vars;[0m
    6 |             ref new = _helpers[31;1m[[0mhelpers_idx    ].vars;
[2m      |             new    ~= old[helpers_idx];[0m
[2m      |         }[0m

	At call to [34;1m
.mutref[0m
            

        Solving [35;1mfn[0m [34;1mtest_PZx0frs1[0m

-----

        fn outer() {
            mut sum = 0;
            mut x = 1;
            for (;;) {      // bck complained that the write to 'x' at the end
                let v = x;  //  invalidates use of 'v' on next loop iter here, which is not true
                for (mut i = 0; i < 10; i++) {
                    sum += v;
                    if (sum > 40)
                        return sum;
                }

                x = v * 2;
            }
        }

        fn main() outer - 42;

-----

#ifndef FU_NO_FDEFs

static int outer_H9fhQUVP()
{
    /*MOV*/ int sum = 0;
    int x = 1;
    for (; ; )
    {
        const int v = x;
        for (int i = 0; i < 10; i++)
        {
            sum += v;
            if (sum > 40)
                return /*NRVO*/ sum;

        };
        x = (v * 2);
    };
}

int fu_MAIN()
{
    return outer_H9fhQUVP() - 42;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn append_self(ref a: i32[])
        {
            let b = a;
            a ~= b; // b narrowed down to a slice which is non-copyable
                    //  but it (unfortunately) wanted to copy to a temp.
        }

        fn main() {
            mut arr = [1, 2];
            arr.append_self();
            return arr[2] + arr[3] - 3;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat.h>

#ifndef FU_NO_FDEFs

static void append_self_5UkPjt2z(fu_VEC<int>& a)
{
    fu_VEC<int> b { a };
    a += b;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    append_self_5UkPjt2z(arr);
    return (arr[2] + arr[3]) - 3;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn but_is_it_pure(ref x: i32) {

            return x++; 
        }
        pure fn pure_fn(ref a: i32, ref b: i32) {
            ref x = a || b;
            return but_is_it_pure(x);
        }
        fn main() {
            mut x = 0;
            mut y = 0;
            return pure_fn(x, y);
        }

-----
_0.fu @6:9:

[2m      |             return x++; [0m
[2m      |         }[0m
    6 |         [31;1mpure[0m fn pure_fn(ref a: i32, ref b: i32) {
[2m      |             ref x = a || b;[0m
[2m      |             return but_is_it_pure(x);[0m

	[35;1mfn[0m [34;1mpure_fn_vnbprror[0m is not pure, writes to argument [34;1ma[0m:

            via [35;1mfn[0m [34;1mbut_is_it_pure_K4OPjUNR[0m at 8:34:

[2m      |         pure fn pure_fn(ref a: i32, ref b: i32) {[0m
[2m      |             ref x = a || b;[0m
    8 |             return but_is_it_pure[31;1m([0mx);
[2m      |         }[0m
[2m      |         fn main() {[0m

            via [35;1m__native[0m [34;1mpostfix++[0m at 4:21:

[2m      |         fn but_is_it_pure(ref x: i32) {[0m
[2m      | [0m
    4 |             return x[31;1m++[0m; 
[2m      |         }[0m
[2m      |         pure fn pure_fn(ref a: i32, ref b: i32) {[0m

            

-----

        fn but_is_it_pure(ref x: i32) {

            return x;   
        }
        pure fn pure_fn(ref a: i32, ref b: i32) {
            ref x = a || b;
            return but_is_it_pure(x);
        }
        fn main() {
            mut x = 0;
            mut y = 0;
            return pure_fn(x, y);
        }

-----

#ifndef FU_NO_FDEFs

static int& but_is_it_pure_K4OPjUNR(int& x)
{
    return x;
}

static int& pure_fn_vnbprror(int& a, int& b)
{
    int& x = (a ? a : b);
    return but_is_it_pure_K4OPjUNR(x);
}

int fu_MAIN()
{
    /*MOV*/ int x = 0;
    /*MOV*/ int y = 0;
    return int(pure_fn_vnbprror(x, y));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            mut _info: string[];

            pure fn fail(mut reason: string = "") {
                for (mut i = _info.len; i --> 0; ) {
                    ref info = _info[i]; // notice the ref, has to relax away
                    reason ~= info ? i : [];
                }

                return reason;
            }

            return fail.len;
        }

-----

#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7Ex3D_OaOrPOXm
                                #define DEFt_x7Ex3D_OaOrPOXm
inline fu_STR& x7Ex3D_OaOrPOXm(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu_STR fail_PdEGHMBt(/*MOV*/ fu_STR&& reason, fu::view<fu_STR> _info)
{
    for (int i = _info.size(); i-- > 0; )
    {
        const fu_STR& info = _info[i];
        x7Ex3D_OaOrPOXm(reason, fu::i64dec((info ? i : (*(const int*)fu::NIL))));
    };
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<fu_STR> _info {};
    return fail_PdEGHMBt(fu_STR{}, _info).size();
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn main() {
            mut _info: string[];

            pure fn fail(mut reason: string = "") {
                for (mut i = _info.len; i --> 0; ) {
                    ref info = _info[i]; // notice the ref, has to relax away
                    reason ~= info && i;
                }

                return reason;
            }

            return fail.len;
        }

-----

#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7Ex3D_OaOrPOXm
                                #define DEFt_x7Ex3D_OaOrPOXm
inline fu_STR& x7Ex3D_OaOrPOXm(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu_STR fail_PdEGHMBt(/*MOV*/ fu_STR&& reason, fu::view<fu_STR> _info)
{
    for (int i = _info.size(); i-- > 0; )
    {
        const fu_STR& info = _info[i];
        x7Ex3D_OaOrPOXm(reason, fu::i64dec((info ? i : (*(const int*)fu::NIL))));
    };
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<fu_STR> _info {};
    return fail_PdEGHMBt(fu_STR{}, _info).size();
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn main() {
            mut _info = [ 101 ];

            pure fn fail(mut reason: string = "") {
                ref info = _info[0]; // <- notice the ref, has to relax away
                reason ~= info ? ("" ~ info) : [];
                return reason;
            }

            return fail.len - 3; // "101".len is 3.
        }

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_PdEGHMBt(/*MOV*/ fu_STR&& reason, fu::view<int> _info)
{
    const int info = _info[0];
    reason += (info ? x7E(fu::view<char>{}, fu::i64dec(info)) : fu_STR{});
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<int> _info = fu_VEC<int> { fu::slate<1, int> { 101 } };
    return fail_PdEGHMBt(fu_STR{}, _info).size() - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn main() {
            mut _info = [ 101 ];

            pure fn fail(mut reason: string = "") {
                ref info = _info[0]; // <- notice the ref, has to relax away
                reason ~= info && ("" ~ info);
                return reason;
            }

            return fail.len - 3; // "101".len is 3.
        }

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_PdEGHMBt(/*MOV*/ fu_STR&& reason, fu::view<int> _info)
{
    const int info = _info[0];
    reason += (info ? x7E(fu::view<char>{}, fu::i64dec(info)) : fu_STR{});
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<int> _info = fu_VEC<int> { fu::slate<1, int> { 101 } };
    return fail_PdEGHMBt(fu_STR{}, _info).size() - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Helpers { row: i32[]; };

        fn test(ref _helpers: Helpers[], mut N: i32, row: i32)
        {
            fn solveNode_H(h: Helpers) {
                while (N % h.row[h.row.len - 1]) {
                    N--;
                    _helpers.grow(_helpers.len * 2);
                }
            }

            fn solveJump() {
                solveNode_H(_helpers[row]);
                return _helpers.len;
            }

            return solveJump() - 1 * 2*2*2*2;
        }

        fn main()
        {
            mut _helpers = [ Helpers([ 1, 2, 3, 4, 5 ]) ];
            return test(_helpers, row: 0, N: 4)
        }

-----

#include <fu/vec.h>

struct s_Helpers;

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
{
    fu_VEC<int> row;
    explicit operator bool() const noexcept
    {
        return false
            || row
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void solveNode_H_DHkEjcEF(const s_Helpers& h, int& N, fu_VEC<s_Helpers>& _helpers)
{
    while (N % h.row[(h.row.size() - 1)])
    {
        N--;
        _helpers.grow((_helpers.size() * 2));
    };
}

static int solveJump_fwJRfWgj(fu_VEC<s_Helpers>& _helpers, const int row, int& N)
{
    solveNode_H_DHkEjcEF(s_Helpers(_helpers[row]), N, _helpers);
    return _helpers.size();
}

static int test_pAPjFVuh(fu_VEC<s_Helpers>& _helpers, int N, const int row)
{
    return solveJump_fwJRfWgj(_helpers, row, N) - ((((1 * 2) * 2) * 2) * 2);
}

int fu_MAIN()
{
    fu_VEC<s_Helpers> _helpers = fu_VEC<s_Helpers> { fu::slate<1, s_Helpers> { s_Helpers { fu_VEC<int> { fu::slate<5, int> { 1, 2, 3, 4, 5 } } } } };
    return test_pAPjFVuh(_helpers, 4, 0);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        struct Helpers { row: i32[]; };

        fn test(ref _helpers: Helpers[], mut N: i32, row: i32)
        {
            fn solveNode_HH_inner(h: Helpers) {
                while (N % h.row[h.row.len - 1]) {
                    N--;
                    _helpers.grow(_helpers.len * 2);
                }
            }

            fn solveNode_HH(h: Helpers) {
                return solveNode_HH_inner(h);
            }

            fn solveJump() {
                solveNode_HH(_helpers[row]);
                return _helpers.len;
            }

            return solveJump() - 1 * 2*2*2*2;
        }

        fn main()
        {
            mut _helpers = [ Helpers([ 1, 2, 3, 4, 5 ]) ];
            return test(_helpers, row: 0, N: 4)
        }

-----

#include <fu/vec.h>

struct s_Helpers;

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
{
    fu_VEC<int> row;
    explicit operator bool() const noexcept
    {
        return false
            || row
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void solveNode_HH_inner_DHkEjcEF(const s_Helpers& h, int& N, fu_VEC<s_Helpers>& _helpers)
{
    while (N % h.row[(h.row.size() - 1)])
    {
        N--;
        _helpers.grow((_helpers.size() * 2));
    };
}

static void solveNode_HH_z7mygf5y(const s_Helpers& h, int& N, fu_VEC<s_Helpers>& _helpers)
{
    solveNode_HH_inner_DHkEjcEF(h, N, _helpers);
}

static int solveJump_GlILXiYX(fu_VEC<s_Helpers>& _helpers, const int row, int& N)
{
    solveNode_HH_z7mygf5y(s_Helpers(_helpers[row]), N, _helpers);
    return _helpers.size();
}

static int test_pAPjFVuh(fu_VEC<s_Helpers>& _helpers, int N, const int row)
{
    return solveJump_GlILXiYX(_helpers, row, N) - ((((1 * 2) * 2) * 2) * 2);
}

int fu_MAIN()
{
    fu_VEC<s_Helpers> _helpers = fu_VEC<s_Helpers> { fu::slate<1, s_Helpers> { s_Helpers { fu_VEC<int> { fu::slate<5, int> { 1, 2, 3, 4, 5 } } } } };
    return test_pAPjFVuh(_helpers, 4, 0);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(ref _helpers: i32[][], mut N: i32, row: i32)
        {
            fn solveNode_a(h: i32[]) {
                while (N % h[h.len - 1]) {
                    N--;
                    _helpers.grow(_helpers.len * 2);
                }
            }

            fn solveJump() {
                solveNode_a(_helpers[row]); // We've relaxed to a view, which bck can't copy
                return _helpers.len;
            }

            return solveJump() - 1 * 2*2*2*2;
        }

        fn main()
        {
            mut _helpers = [[ 1, 2, 3, 4, 5 ]];
            return test(_helpers, row: 0, N: 4)
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void solveNode_a_uSOO5j5e(fu::view<int> h, int& N, fu_VEC<fu_VEC<int>>& _helpers)
{
    while (N % h[(h.size() - 1)])
    {
        N--;
        _helpers.grow((_helpers.size() * 2));
    };
}

static int solveJump_hpa9AihZ(fu_VEC<fu_VEC<int>>& _helpers, const int row, int& N)
{
    solveNode_a_uSOO5j5e(fu_VEC<int>(_helpers[row]), N, _helpers);
    return _helpers.size();
}

static int test_D3BA07IO(fu_VEC<fu_VEC<int>>& _helpers, int N, const int row)
{
    return solveJump_hpa9AihZ(_helpers, row, N) - ((((1 * 2) * 2) * 2) * 2);
}

int fu_MAIN()
{
    fu_VEC<fu_VEC<int>> _helpers = fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<5, int> { 1, 2, 3, 4, 5 } } } };
    return test_D3BA07IO(_helpers, 4, 0);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        struct Arg { i: i32; };

        // A mutref fail.
        fn mutargs(args: &mut Arg[])
        {
            // This miscompiles to ref into args,
            //  after which we invalidate the reference.
            //

            ref  badref = args[0];

            args = [ Arg(11) ]; // INVALIDATE badref.
            return badref;
        }       // oct2021: now latest issue here is that
                //  this gets bcked AFTER jump lifetimes are unwound
                //   and it all looks as if everything's fine (lt badref == lt args).

        fn main()
        {
            mut args = [ Arg(7) ];
            return mutargs(args).i - 7;
        }

-----
_0.fu @14:20:

[2m      | [0m
[2m      |             args = [ Arg(11) ]; // INVALIDATE badref.[0m
   14 |             return [31;1mbadref[0m;
[2m      |         }       // oct2021: now latest issue here is that[0m
[2m      |                 //  this gets bcked AFTER jump lifetimes are unwound[0m

	Cannot access [31;1mbadref[0m, reference invalidated by write to [31;1margs[0m at 13:18:

[2m      |             ref  badref = args[0];[0m
[2m      | [0m
   13 |             args [31;1m=[0m [ Arg(11) ]; // INVALIDATE badref.
[2m      |             return badref;[0m
[2m      |         }       // oct2021: now latest issue here is that[0m

	At call to [34;1m=[0m
            

        Solving [35;1mfn[0m [34;1mmutargs_r8hNNXxt[0m

-----

        struct Arg { i: i32; };

        // A mutref fail.
        fn mutargs(args: &mut Arg[])
        {
            // This miscompiles to ref into args,
            //  after which we invalidate the reference.
            //

            mut  badref = args[0];

            args = [ Arg(11) ]; // INVALIDATE badref.
            return badref;
        }       // oct2021: now latest issue here is that
                //  this gets bcked AFTER jump lifetimes are unwound
                //   and it all looks as if everything's fine (lt badref == lt args).

        fn main()
        {
            mut args = [ Arg(7) ];
            return mutargs(args).i - 7;
        }

-----

#include <fu/vec.h>

struct s_Arg;

                                #ifndef DEF_s_Arg
                                #define DEF_s_Arg
struct s_Arg
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Arg mutargs_r8hNNXxt(fu_VEC<s_Arg>& args)
{
    /*MOV*/ const s_Arg badref { args[0] };
    args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { 11 } } };
    return /*NRVO*/ badref;
}

int fu_MAIN()
{
    fu_VEC<s_Arg> args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { 7 } } };
    return mutargs_r8hNNXxt(args).i - 7;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Arg { i: i32[]; };

        fn witharg(using a: Arg)
            i[i.len - 1] * 4;

        fn mutargs(args: &mut Arg[]) {

            ref  badref = args[0];

            args = [ Arg([ 11 ]) ]; // INVALIDATE badref.
            return witharg(badref);
        }

        fn main() {
            mut args = [ Arg([ 7 ]) ];
            return mutargs(args) - 28;
        }

-----
_0.fu @12:28:

[2m      | [0m
[2m      |             args = [ Arg([ 11 ]) ]; // INVALIDATE badref.[0m
   12 |             return witharg([31;1mbadref[0m);
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mbadref[0m, reference invalidated by write to [31;1margs[0m at 11:18:

[2m      |             ref  badref = args[0];[0m
[2m      | [0m
   11 |             args [31;1m=[0m [ Arg([ 11 ]) ]; // INVALIDATE badref.
[2m      |             return witharg(badref);[0m
[2m      |         }[0m

	At call to [34;1m=[0m
            

        Solving [35;1mfn[0m [34;1mmutargs_r8hNNXxt[0m

-----

        struct Arg { i: i32[]; };

        fn witharg(using a: Arg)
            i[i.len - 1] * 4;

        fn mutargs(args: &mut Arg[]) {

            let  badref = args[0];

            args = [ Arg([ 11 ]) ]; // INVALIDATE badref.
            return witharg(badref);
        }

        fn main() {
            mut args = [ Arg([ 7 ]) ];
            return mutargs(args) - 28;
        }

-----

#include <fu/vec.h>

struct s_Arg;

                                #ifndef DEF_s_Arg
                                #define DEF_s_Arg
struct s_Arg
{
    fu_VEC<int> i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int witharg_vEF4Qiyl(const s_Arg& a)
{
    return a.i[(a.i.size() - 1)] * 4;
}

static int mutargs_r8hNNXxt(fu_VEC<s_Arg>& args)
{
    s_Arg badref { args[0] };
    args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 11 } } } } };
    return witharg_vEF4Qiyl(badref);
}

int fu_MAIN()
{
    fu_VEC<s_Arg> args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 7 } } } } };
    return mutargs_r8hNNXxt(args) - 28;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        struct Arg { i: i32[]; };

        fn witharg(using a: Arg, x: i32)
            i[i.len - 1] * x;

        fn mutargs(args: &mut Arg[]) {

            ref  badref = args[0];

            for (mut i = 0;; i++) {
                let ret = witharg(badref, i * 4);
                if (ret)
                    return ret;

                args = [ Arg([ 11 ]) ]; // INVALIDATE badref.
            }
        }

        fn main() {
            mut args = [ Arg([ 7 ]) ];
            return mutargs(args) - 28;
        }

-----
_0.fu @16:22:

[2m      |                     return ret;[0m
[2m      | [0m
   16 |                 args [31;1m=[0m [ Arg([ 11 ]) ]; // INVALIDATE badref.
[2m      |             }[0m
[2m      |         }[0m

	Write to [31;1margs[0m at call to [35;1m__native[0m [34;1m=[0m invalidates the use of [31;1mbadref[0m at 12:35:

[2m      | [0m
[2m      |             for (mut i = 0;; i++) {[0m
   12 |                 let ret = witharg([31;1mbadref[0m, i * 4);
[2m      |                 if (ret)[0m
[2m      |                     return ret;[0m

	... on next loop iteration.

	Written
            

        Solving [35;1mfn[0m [34;1mmutargs_r8hNNXxt[0m

-----

        struct Arg { i: i32[]; };

        fn witharg(using a: Arg, x: i32)
            i[i.len - 1] * x;

        fn mutargs(args: &mut Arg[]) {

            let  badref = args[0];

            for (mut i = 0;; i++) {
                let ret = witharg(badref, i * 4);
                if (ret)
                    return ret;

                args = [ Arg([ 11 ]) ]; // INVALIDATE badref.
            }
        }

        fn main() {
            mut args = [ Arg([ 7 ]) ];
            return mutargs(args) - 28;
        }

-----

#include <fu/vec.h>

struct s_Arg;

                                #ifndef DEF_s_Arg
                                #define DEF_s_Arg
struct s_Arg
{
    fu_VEC<int> i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int witharg_7JuQm897(const s_Arg& a, const int x)
{
    return a.i[(a.i.size() - 1)] * x;
}

static int mutargs_r8hNNXxt(fu_VEC<s_Arg>& args)
{
    s_Arg badref { args[0] };
    for (int i = 0; ; i++)
    {
        /*MOV*/ const int ret = witharg_7JuQm897(badref, (i * 4));
        if (ret)
            return /*NRVO*/ ret;

        args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 11 } } } } };
    };
}

int fu_MAIN()
{
    fu_VEC<s_Arg> args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 7 } } } } };
    return mutargs_r8hNNXxt(args) - 28;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(ref woot: i32[], x: i32, y: i32) {
            ref b = woot[y];
            ref a = woot[x]; // the 'shadow ref' below ...
            if (a == 1) {


                a += 1;
            }
            else {
                b += 1; // ... and this should ignore cond write above.
            }
        }

        fn main() {
            mut x = [ -1, +1 ];
            test(x, 0, 1);
            return x[1] - 2;
        }

-----
_0.fu @11:17:

[2m      |             }[0m
[2m      |             else {[0m
   11 |                 [31;1mb[0m += 1; // ... and this should ignore cond write above.
[2m      |             }[0m
[2m      |         }[0m

	Cannot access [31;1mb[0m, reference invalidated by write to [31;1mwoot[0m at 4:25:

[2m      |         fn test(ref woot: i32[], x: i32, y: i32) {[0m
[2m      |             ref b = woot[y];[0m
    4 |             ref a = woot[31;1m[[0mx]; // the 'shadow ref' below ...
[2m      |             if (a == 1) {[0m
[2m      | [0m

	At call to [34;1m
.mutref[0m
            

        Solving [35;1mfn[0m [34;1mtest_5ixJzMKt[0m

-----

        fn test(ref woot: i32[], x: i32, y: i32) {
            ref b = woot[y];
            ref a = woot[x]; // the 'shadow ref' below ...
            if (a == 1) {

                shadow ref a = woot[x]; // ... should relax 'ref a' above to a let ...

                a += 1;
            }
            else {
                b += 1; // ... and this should ignore cond write above.
            }
        }

        fn main() {
            mut x = [ -1, +1 ];
            test(x, 0, 1);
            return x[1] - 2;
        }

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static void test_5ixJzMKt(fu_VEC<int>& woot, const int x, const int y)
{
    int& b = woot.mutref(y);
    const int a = woot[x];
    if (a == 1)
    {
        int& a_1 = woot.mutref(x);
        a_1 += 1;
    }
    else
        b += 1;

}

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<2, int> { -1, +1 } };
    test_5ixJzMKt(x, 0, 1);
    return x[1] - 2;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(ref a: i32[], ref b: i32[]) {

            if (a[0] += 1) 
                a ~= 1;
            else
                b ~= 1;
        }

        fn main() {
            mut x = [ 1 ];
            test(x, x);
            return x.len - 2;
        }

-----
_0.fu @12:21:

[2m      |         fn main() {[0m
[2m      |             mut x = [ 1 ];[0m
   12 |             test(x, [31;1mx[0m);
[2m      |             return x.len - 2;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mtest_p5gMbQCn[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mx[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn test(ref a: i32[], ref b: i32[]) {

            if (a[0] == 1) 
                a ~= 1;
            else
                b ~= 1;
        }

        fn main() {
            mut x = [ 1 ];
            test(x, x);
            return x.len - 2;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static void test_p5gMbQCn(fu_VEC<int>& a, fu_VEC<int>& b)
{
    if (a[0] == 1)
        a += 1;
    else
        b += 1;

}

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_p5gMbQCn(x, x);
    return x.size() - 2;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        nocopy struct Woot {
            x: i32[];
            y: i32[];
        };

        fn test(ref w: Woot) {
            ref x = w.x;
            //*F
            ref y = w.x;
            /*/
            ref y = w.y;
            //*/
            y ~= y; // <- DONT RESOLVE BY COPY! ref can relax to let
            x ~= y;
        }

        fn main() {
            mut w: Woot;
            test(w);
            return w.x.len;
        }

-----
TODO: _0.fu @15:13:

[2m      |             //*/[0m
[2m      |             y ~= y; // <- DONT RESOLVE BY COPY! ref can relax to let[0m
   15 |             [31;1mx[0m ~= y;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mx[0m, reference invalidated by write to [31;1my[0m at 14:15:

[2m      |             ref y = w.y;[0m
[2m      |             //*/[0m
   14 |             y [31;1m~=[0m y; // <- DONT RESOLVE BY COPY! ref can relax to let
[2m      |             x ~= y;[0m
[2m      |         }[0m

	At call to [34;1m
<fu/vec/concat.h>
+=[0m
            

        Solving [35;1mfn[0m [34;1mtest_FtANIDl0[0m

-----

        nocopy struct Woot {
            x: i32[];
            y: i32[];
        };

        fn test(ref w0: Woot, ref w1: Woot) {
            ref x = w0.x;
            //*F
            ref y = w1.x;
            /*/
            ref y = w1.y;
            //*/
            y ~= y; // <- DONT RESOLVE BY COPY! ref can relax to let
            x ~= y;
        }

        fn main() {
            mut w: Woot;
            test(w, w);
            return w.x.len;
        }

-----
TODO: _0.fu @20:21:

[2m      |         fn main() {[0m
[2m      |             mut w: Woot;[0m
   20 |             test(w, [31;1mw[0m);
[2m      |             return w.x.len;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mtest_9bChD52X[0m: Arguments [31;1mw1[0m and [31;1mw0[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mw[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn indexIntoImplicit(j: i32, implicit strings: string[]) strings[j];

        fn selfRecurBeforeImplicitDep(x: i32)
        {
            // On second solve we're talking about a region, but the argnode is gone.
            fn T(i: i32) selfRecurBeforeImplicitDep(i / 2);
            if (x > 1) return T(x);
            return indexIntoImplicit(x);
        }

        fn main() {
            let implicit strings = [ "a", "b" ];
            return selfRecurBeforeImplicitDep(2) == "b" ? 0 : 1;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

static const fu_STR& T_2YIyPL6g(int, fu::view<fu_STR>);
static const fu_STR& selfRecurBeforeImplicitDep_pZ8wRcaF(int, fu::view<fu_STR>);

#ifndef FU_NO_FDEFs

static const fu_STR& T_2YIyPL6g(const int i, fu::view<fu_STR> strings)
{
    return selfRecurBeforeImplicitDep_pZ8wRcaF((i / 2), strings);
}

static const fu_STR& indexIntoImplicit_Ofyh4aHa(const int j, fu::view<fu_STR> strings)
{
    return strings[j];
}

static const fu_STR& selfRecurBeforeImplicitDep_pZ8wRcaF(const int x, fu::view<fu_STR> strings)
{
    if (x > 1)
        return T_2YIyPL6g(x, strings);

    return indexIntoImplicit_Ofyh4aHa(x, strings);
}

int fu_MAIN()
{
    fu_VEC<fu_STR> strings = fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "a"_fu, "b"_fu } };
    return ((selfRecurBeforeImplicitDep_pZ8wRcaF(2, strings) == "b"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----


        nocopy                 
        struct Type       { canon: string; };
        struct SolvedNode {  type: Type;   };

        fn solved(type: Type, implicit ref out: SolvedNode[]) {
            out.grow(out.len * 100 + 1);

            ref tail = out[out.len - 1];
            tail.type.canon = type.canon;
            return tail;
        }

        fn createMap(a: Type, b: Type): Type {
            return Type(a.canon ~ b.canon);
        }

        fn evalTypeAnnot(nodes: string[]): SolvedNode
        {
            // Each T() call should invalidate the results from previous T() calls -
            //  so this shouldn't compile if Type is nocopy.
            fn T(i: i32)
                evalTypeAnnot([ nodes[i] ]).type;

            if (nodes.len > 1)
                return solved(createMap(T(0), T(1))); // <<< HERE >>>

            return solved(Type(nodes[0]));
        }

        fn main() {
            let implicit mut out: SolvedNode[];
            let annot = evalTypeAnnot([ "a", "b" ]);
            return out.len == 10101 && annot.type.canon.len == 2 ? 0 : 1;
        }

-----
_0.fu @27:40:

[2m      | [0m
[2m      |             if (nodes.len > 1)[0m
   27 |                 return solved(createMap[31;1m([0mT(0), T(1))); // <<< HERE >>>
[2m      | [0m
[2m      |             return solved(Type(nodes[0]));[0m

	At call to [35;1mfn[0m [34;1mcreateMap_gSSzI3uP[0m, argument binding [31;1ma[0m (arg #0) at 27:42:

[2m      | [0m
[2m      |             if (nodes.len > 1)[0m
   27 |                 return solved(createMap(T[31;1m([0m0), T(1))); // <<< HERE >>>
[2m      | [0m
[2m      |             return solved(Type(nodes[0]));[0m

	... invalidated by subsequent write to [35;1marg[0m [34;1mout[0m upon evaluation of argument [31;1mb[0m (arg #1) at 27:48:

[2m      | [0m
[2m      |             if (nodes.len > 1)[0m
   27 |                 return solved(createMap(T(0), T[31;1m([0m1))); // <<< HERE >>>
[2m      | [0m
[2m      |             return solved(Type(nodes[0]));[0m

	At call to [34;1mT_3n4SAYFB[0m
            via [35;1mfn[0m [34;1mevalTypeAnnot_wjZjF8su[0m at 24:30:

[2m      |             //  so this shouldn't compile if Type is nocopy.[0m
[2m      |             fn T(i: i32)[0m
   24 |                 evalTypeAnnot[31;1m([0m[ nodes[i] ]).type;
[2m      | [0m
[2m      |             if (nodes.len > 1)[0m

            via [35;1mfn[0m [34;1mT_3n4SAYFB[0m at 27:42:

[2m      | [0m
[2m      |             if (nodes.len > 1)[0m
   27 |                 return solved(createMap(T[31;1m([0m0), T(1))); // <<< HERE >>>
[2m      | [0m
[2m      |             return solved(Type(nodes[0]));[0m

            recursively via [35;1mfn[0m [34;1mevalTypeAnnot_wjZjF8su[0m at 24:30:

[2m      |             //  so this shouldn't compile if Type is nocopy.[0m
[2m      |             fn T(i: i32)[0m
   24 |                 evalTypeAnnot[31;1m([0m[ nodes[i] ]).type;
[2m      | [0m
[2m      |             if (nodes.len > 1)[0m


        Solving [35;1mfn[0m [34;1mevalTypeAnnot_wjZjF8su[0m
                [35;1mfn[0m [34;1mmain[0m

-----


        struct Type       { canon: string; };
        struct SolvedNode {  type: Type;   };

        fn solved(type: Type, implicit ref out: SolvedNode[]) {
            out.grow(out.len * 100 + 1);

            ref tail = out[out.len - 1];
            tail.type.canon = type.canon;
            return tail;
        }

        fn createMap(a: Type, b: Type): Type {
            return Type(a.canon ~ b.canon);
        }

        fn evalTypeAnnot(nodes: string[]): SolvedNode
        {
            // Each T() call should invalidate the results from previous T() calls -
            //  so this shouldn't compile if Type is nocopy.
            fn T(i: i32)
                evalTypeAnnot([ nodes[i] ]).type;

            if (nodes.len > 1)
                return solved(createMap(T(0), T(1))); // <<< HERE >>>

            return solved(Type(nodes[0]));
        }

        fn main() {
            let implicit mut out: SolvedNode[];
            let annot = evalTypeAnnot([ "a", "b" ]);
            return out.len == 10101 && annot.type.canon.len == 2 ? 0 : 1;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_SolvedNode;
struct s_Type;

static s_SolvedNode& evalTypeAnnot_wjZjF8su(fu::view<fu_STR>, fu_VEC<s_SolvedNode>&);
static s_Type& T_3n4SAYFB(int, fu::view<fu_STR>, fu_VEC<s_SolvedNode>&);

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Type type;
    explicit operator bool() const noexcept
    {
        return false
            || type
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Type& T_3n4SAYFB(const int i, fu::view<fu_STR> nodes, fu_VEC<s_SolvedNode>& out)
{
    return evalTypeAnnot_wjZjF8su((fu::slate<1, fu_STR> { fu_STR(nodes[i]) }), out).type;
}

static s_Type createMap_3SKXBRXy(const s_Type& a, const s_Type& b)
{
    return s_Type { (a.canon + b.canon) };
}

static s_SolvedNode& solved_4Njqsjap(const s_Type& type, fu_VEC<s_SolvedNode>& out)
{
    out.grow(((out.size() * 100) + 1));
    s_SolvedNode& tail = out.mutref((out.size() - 1));
    tail.type.canon = type.canon;
    return tail;
}

static s_SolvedNode& evalTypeAnnot_wjZjF8su(fu::view<fu_STR> nodes, fu_VEC<s_SolvedNode>& out)
{
    if (nodes.size() > 1)
    {
        s_Type _0 {};
        s_Type _1 {};
        return (_1 = (_0 = s_Type(T_3n4SAYFB(0, nodes, out)), createMap_3SKXBRXy(static_cast<s_Type&&>(_0), T_3n4SAYFB(1, nodes, out))), solved_4Njqsjap(static_cast<s_Type&&>(_1), out));
    };
    return solved_4Njqsjap(s_Type { fu_STR(nodes[0]) }, out);
}

int fu_MAIN()
{
    fu_VEC<s_SolvedNode> out {};
    const s_SolvedNode& annot = evalTypeAnnot_wjZjF8su((fu::slate<2, fu_STR> { "a"_fu, "b"_fu }), out);
    return (((out.size() == 10101) && (annot.type.canon.size() == 2)) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        fn main() {
            mut x = 0;
            let s = ++x + ++x;
            return s - 3; // Not 4! one arg must invalidate
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int x = 0;
    int _0 {};
    const int s = (_0 = int(++x), (int(_0) + ++x));
    return s - 3;
}

#endif


int main() { return fu_MAIN(); }

-----


        nocopy                                    
        struct X { x: i32; }
        fn sum(a: X, b: X) a.x + b.x;

        fn incr(ref x: X) {
            x.x++;
            return x;
        }

        fn main() {
            mut x: X;
            return sum(x.incr, x.incr) - 3; // Not 4! one arg must invalidate
        }

-----
_0.fu @14:23:

[2m      |         fn main() {[0m
[2m      |             mut x: X;[0m
   14 |             return sum[31;1m([0mx.incr, x.incr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	At call to [35;1mfn[0m [34;1msum_gSSzI3uP[0m, argument binding [31;1ma[0m (arg #0) at 14:25:

[2m      |         fn main() {[0m
[2m      |             mut x: X;[0m
   14 |             return sum(x[31;1m.[0mincr, x.incr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	... invalidated by subsequent write to [35;1mvar[0m [34;1mx[0m upon evaluation of argument [31;1mb[0m (arg #1) at 14:33:

[2m      |         fn main() {[0m
[2m      |             mut x: X;[0m
   14 |             return sum(x.incr, x[31;1m.[0mincr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	At call to [34;1mincr_FtANIDl0[0m
            via [35;1m__native[0m [34;1mpostfix++[0m at 8:16:

[2m      | [0m
[2m      |         fn incr(ref x: X) {[0m
    8 |             x.x[31;1m++[0m;
[2m      |             return x;[0m
[2m      |         }[0m

            

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        struct X { x: i32; }
        fn sum(a: X, b: X) a.x + b.x;

        fn incr(ref x: X) {
            x.x++;
            return x;
        }

        fn main() {
            mut x: X;
            return sum(x.incr, x.incr) - 3; // Not 4! one arg must invalidate
        }

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_X& incr_4htgoDpn(s_X& x)
{
    x.x++;
    return x;
}

static int sum_3SKXBRXy(const s_X& a, const s_X& b)
{
    return a.x + b.x;
}

int fu_MAIN()
{
    s_X x {};
    s_X _0 {};
    return (_0 = s_X(incr_4htgoDpn(x)), sum_3SKXBRXy(s_X(_0), incr_4htgoDpn(x))) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----


        nocopy                                     
        struct X { x: i32; }
        struct Y { y: X;   }

        fn x(y: Y) y.y.x;
        fn sum(a, b) a.x + b.x;

        fn incr(ref x: X) {
            x.x++;
            return x;
        }

        fn incr(ref y: Y) {
            y.y.x++;
            return y;
        }

        fn main() {
            mut x: Y;
            ref y = x.y;
            return sum(y.incr, x.incr) - 3; // Not 4! one arg must invalidate
        }

-----
_0.fu @23:23:

[2m      |             mut x: Y;[0m
[2m      |             ref y = x.y;[0m
   23 |             return sum[31;1m([0my.incr, x.incr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	At call to [35;1mfn[0m [34;1msum_HBwvSEW6[0m, argument binding [31;1ma[0m (arg #0) at 23:25:

[2m      |             mut x: Y;[0m
[2m      |             ref y = x.y;[0m
   23 |             return sum(y[31;1m.[0mincr, x.incr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	... invalidated by subsequent write to [35;1mvar[0m [34;1my[0m upon evaluation of argument [31;1mb[0m (arg #1) at 23:33:

[2m      |             mut x: Y;[0m
[2m      |             ref y = x.y;[0m
   23 |             return sum(y.incr, x[31;1m.[0mincr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	At call to [34;1mincr_Pm1HJFkJ[0m
            via [35;1m__native[0m [34;1mpostfix++[0m at 16:18:

[2m      | [0m
[2m      |         fn incr(ref y: Y) {[0m
   16 |             y.y.x[31;1m++[0m;
[2m      |             return y;[0m
[2m      |         }[0m

            

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        struct X { x: i32; }
        struct Y { y: X;   }

        fn x(y: Y) y.y.x;
        fn sum(a, b) a.x + b.x;

        fn incr(ref x: X) {
            x.x++;
            return x;
        }

        fn incr(ref y: Y) {
            y.y.x++;
            return y;
        }

        fn main() {
            mut x: Y;
            ref y = x.y;
            return sum(y.incr, x.incr) - 3; // Not 4! one arg must invalidate
        }

-----

struct s_X;
struct s_Y;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Y
                                #define DEF_s_Y
struct s_Y
{
    s_X y;
    explicit operator bool() const noexcept
    {
        return false
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_X& incr_4htgoDpn(s_X& x)
{
    x.x++;
    return x;
}

static s_Y& incr_VUsRA1Mi(s_Y& y)
{
    y.y.x++;
    return y;
}

static int x_j48XboFY(const s_Y& y)
{
    return y.y.x;
}

inline static int sum_O5T6AP7f(const s_X& a, const s_Y& b)
{
    return a.x + x_j48XboFY(b);
}

int fu_MAIN()
{
    s_Y x {};
    s_X& y = x.y;
    s_X _0 {};
    return (_0 = s_X(incr_4htgoDpn(y)), sum_O5T6AP7f(s_X(_0), incr_VUsRA1Mi(x))) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----


        nocopy                                    
        struct X { x: i32; };

        fn incr(ref x: X) {
            x.x++;
            return x;
        }

        fn +=(a: X, b: X) {
            // Notice, this is not a real +=,
            //  just checking the order of eval here.
            return a.x + b.x;
        }

        fn test(ref x: X, ref y: X) {
            ref xy = y || x;
            return x.incr += xy.incr; // <- xy invalidated by x.incr
        }

        fn main() {
            mut x: X;
            mut y: X;
            return test(x, y) - 3;
        }

-----
_0.fu @19:27:

[2m      |         fn test(ref x: X, ref y: X) {[0m
[2m      |             ref xy = y || x;[0m
   19 |             return x.incr [31;1m+=[0m xy.incr; // <- xy invalidated by x.incr
[2m      |         }[0m
[2m      | [0m

	At call to [35;1mfn[0m [34;1m+=[0m, argument binding [31;1mb[0m (arg #1) at 19:32:

[2m      |         fn test(ref x: X, ref y: X) {[0m
[2m      |             ref xy = y || x;[0m
   19 |             return x.incr += xy[31;1m.[0mincr; // <- xy invalidated by x.incr
[2m      |         }[0m
[2m      | [0m

	... invalidated by subsequent write to [35;1mvar[0m [34;1mxy[0m upon evaluation of argument [31;1ma[0m (arg #0) at 19:21:

[2m      |         fn test(ref x: X, ref y: X) {[0m
[2m      |             ref xy = y || x;[0m
   19 |             return x[31;1m.[0mincr += xy.incr; // <- xy invalidated by x.incr
[2m      |         }[0m
[2m      | [0m

	At call to [34;1mincr_FtANIDl0[0m
            via [35;1m__native[0m [34;1mpostfix++[0m at 7:16:

[2m      | [0m
[2m      |         fn incr(ref x: X) {[0m
    7 |             x.x[31;1m++[0m;
[2m      |             return x;[0m
[2m      |         }[0m

            

        Solving [35;1mfn[0m [34;1mtest_9bChD52X[0m

-----


        struct X { x: i32; };

        fn incr(ref x: X) {
            x.x++;
            return x;
        }

        fn +=(a: X, b: X) {
            // Notice, this is not a real +=,
            //  just checking the order of eval here.
            return a.x + b.x;
        }

        fn test(ref x: X, ref y: X) {
            ref xy = y || x;
            return x.incr += xy.incr; // <- xy invalidated by x.incr
        }

        fn main() {
            mut x: X;
            mut y: X;
            return test(x, y) - 3;
        }

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_X& incr_4htgoDpn(s_X& x)
{
    x.x++;
    return x;
}

static int operator+=(const s_X& a, const s_X& b)
{
    return a.x + b.x;
}

static int test_e5IxizfA(s_X& x, s_X& y)
{
    s_X& xy = (y ? y : x);
    return (incr_4htgoDpn(x) += s_X(incr_4htgoDpn(xy)));
}

int fu_MAIN()
{
    s_X x {};
    s_X y {};
    return test_e5IxizfA(x, y) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----


        struct X { items: i32[]; };
        fn popfirst(mut arr: X[]) arr[0]; // mcom_BlockReturn after relax: arr[] adds 'static
        fn main() popfirst([ X() ]).items.len;

-----

#include <fu/vec.h>

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    fu_VEC<int> items;
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_X popfirst_hoDN8Lq5(fu_VEC<s_X>&& arr)
{
    return s_X(arr[0]);
}

int fu_MAIN()
{
    return popfirst_hoDN8Lq5(fu_VEC<s_X> { fu::slate<1, s_X> { s_X{} } }).items.size();
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        <alt>
        nocopy
        </alt>
        struct X { items: i32[]; };
        fn popfirst(mut arr: X[]) arr[0]; // mcom_BlockReturn after relax: arr[] adds 'static
        fn main() popfirst([ X() ]).items.len;

-----
TODO: _0.fu @6:38:

[2m      | [0m
[2m      |         struct X { items: i32[]; };[0m
    6 |         fn popfirst(mut arr: X[]) arr[31;1m[[0m0]; // mcom_BlockReturn after relax: arr[] adds 'static
[2m      |         fn main() popfirst([ X() ]).items.len;[0m
[2m      | [0m

	Needs an explicit STEAL or CLONE: X

        Solving [35;1mfn[0m [34;1mpopfirst_ywclbwCp[0m

-----

        struct AB { a: i32[][]; b: i32[][]; };

        fn problematic_moves(mut ab: AB) {
            ref ra = ab.a;
            return ra.len & 1 ? ra[0] : ab.b[0];
        }

        fn main() {
            mut ab = AB(
                [[ 0,  1,  2,  3,  4,  5,  6,  7,  8,  9]],
                [[10, 11, 12, 13, 14, 15, 16, 17, 18, 19]]);

            mut pick = ab.problematic_moves;
            return pick[9] - ab.a[0][9];
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_AB;

                                #ifndef DEF_s_AB
                                #define DEF_s_AB
struct s_AB
{
    fu_VEC<fu_VEC<int>> a;
    fu_VEC<fu_VEC<int>> b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<int> problematic_moves_vEF4Qiyl(s_AB&& ab)
{
    fu::view<fu_VEC<int>> ra = ab.a;
    return fu_VEC<int>(((ra.size() & 1) ? ra[0] : ab.b[0]));
}

int fu_MAIN()
{
    s_AB ab = s_AB { fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<10, int> { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } } } }, fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<10, int> { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 } } } } };
    fu_VEC<int> pick = problematic_moves_vEF4Qiyl(s_AB(ab));
    return pick[9] - ab.a[0][9];
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        nocopy struct SolvedNode {
            items: SolvedNode[];
        };

        fn test(mut a: SolvedNode, mut b: SolvedNode) {

            ref n = a.items ? a : b;

            return n;
        }

        fn main() test([], []).items.len;

-----

#include <fu/vec.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = delete;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode&) = delete;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_SolvedNode test_gSSzI3uP(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b)
{
    /*MOV*/ s_SolvedNode& n = (a.items ? a : b);
    return static_cast<s_SolvedNode&&>(n);
}

int fu_MAIN()
{
    return test_gSSzI3uP(s_SolvedNode{}, s_SolvedNode{}).items.size();
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve

-----

        nocopy struct SolvedNode {
            items: SolvedNode[];
        };

        fn test(mut a: SolvedNode, mut b: SolvedNode) {

            ref n = a || b;

            return n;
        }

        fn main() test([], []).items.len;

-----

#include <fu/vec.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = delete;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode&) = delete;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_SolvedNode test_gSSzI3uP(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b)
{
    /*MOV*/ s_SolvedNode& n = (a ? a : b);
    return static_cast<s_SolvedNode&&>(n);
}

int fu_MAIN()
{
    return test_gSSzI3uP(s_SolvedNode{}, s_SolvedNode{}).items.size();
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve

-----


        nocopy            
        struct SolvedNode { len: i32; }

        fn createBlock(mut last: SolvedNode) {
            let tail     = last || last;
            let unwrap   = tail || tail;
            last.len--;
            return unwrap;
        }

        fn main() {
            return createBlock([]).len;
        }

-----
_0.fu @10:20:

[2m      |             let unwrap   = tail || tail;[0m
[2m      |             last.len--;[0m
   10 |             return [31;1munwrap[0m;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1munwrap[0m, reference invalidated by write to [31;1mlast[0m at 9:21:

[2m      |             let tail     = last || last;[0m
[2m      |             let unwrap   = tail || tail;[0m
    9 |             last.len[31;1m--[0m;
[2m      |             return unwrap;[0m
[2m      |         }[0m

	At call to [34;1mpostfix--[0m
            

        Solving [35;1mfn[0m [34;1mcreateBlock_63UTQUTz[0m

-----


        struct SolvedNode { len: i32; }

        fn createBlock(mut last: SolvedNode) {
            let tail     = last || last;
            let unwrap   = tail || tail;
            last.len--;
            return unwrap;
        }

        fn main() {
            return createBlock([]).len;
        }

-----

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int len;
    explicit operator bool() const noexcept
    {
        return false
            || len
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_SolvedNode createBlock_vEF4Qiyl(s_SolvedNode&& last)
{
    const s_SolvedNode& tail = (last ? last : last);
    /*MOV*/ const s_SolvedNode unwrap { (tail ? tail : tail) };
    last.len--;
    return /*NRVO*/ unwrap;
}

int fu_MAIN()
{
    return createBlock_vEF4Qiyl(s_SolvedNode{}).len;
}

#endif


int main() { return fu_MAIN(); }

-----


        nocopy            
        struct SolvedNode { items: SolvedNode[] };

        fn popAndOr(ref node: SolvedNode) {
            let N = node.items.len;

            let pop = node.items[N - 1];
            if (N > 2) {
                node.items.pop();
            }
            else {
                let head = node.items[0];
                node = head;
            }

            return pop;
        }

        fn main() {
            mut a = SolvedNode([ SolvedNode, SolvedNode ]);
            let b = a.popAndOr();
            return a.items.len + b.items.len;
        }

-----
_0.fu @18:20:

[2m      |             }[0m
[2m      | [0m
   18 |             return [31;1mpop[0m;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mpop[0m, reference invalidated by write to [31;1mnode[0m at 15:22:

[2m      |             else {[0m
[2m      |                 let head = node.items[0];[0m
   15 |                 node [31;1m=[0m head;
[2m      |             }[0m
[2m      | [0m

	At call to [34;1m=[0m
            

        Solving [35;1mfn[0m [34;1mpopAndOr_FtANIDl0[0m

-----


        struct SolvedNode { items: SolvedNode[] };

        fn popAndOr(ref node: SolvedNode) {
            let N = node.items.len;

            let pop = node.items[N - 1];
            if (N > 2) {
                node.items.pop();
            }
            else {
                let head = node.items[0];
                node = head;
            }

            return pop;
        }

        fn main() {
            mut a = SolvedNode([ SolvedNode, SolvedNode ]);
            let b = a.popAndOr();
            return a.items.len + b.items.len;
        }

-----

#include <fu/vec.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_SolvedNode popAndOr_4htgoDpn(s_SolvedNode& node)
{
    const int N = node.items.size();
    /*MOV*/ s_SolvedNode pop { node.items[(N - 1)] };
    if (N > 2)
        node.items.pop();
    else
    {
        const s_SolvedNode& head = node.items[0];
        node = head;
    };
    return /*NRVO*/ pop;
}

int fu_MAIN()
{
    s_SolvedNode a = s_SolvedNode { fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode{} } } };
    s_SolvedNode b = popAndOr_4htgoDpn(a);
    return a.items.size() + b.items.size();
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----


        nocopy            
        struct Items {
            len: i32;
        }

        struct SolvedNode {
            items: Items;
        }

        struct Nodes {
            last: SolvedNode;
        }

        fn pop(ref n: Nodes) {
            n.last.items.len--;
        }

        fn createBlock(mut items: Nodes) {
            let tail = items.last;
            let unwrap = tail.items;
            items.pop();
            return unwrap;
        }

        fn main() {
            return createBlock(Nodes(SolvedNode([]))).len;
        }

-----
_0.fu @24:20:

[2m      |             let unwrap = tail.items;[0m
[2m      |             items.pop();[0m
   24 |             return [31;1munwrap[0m;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1munwrap[0m, reference invalidated by write to [31;1mitems[0m at 23:22:

[2m      |             let tail = items.last;[0m
[2m      |             let unwrap = tail.items;[0m
   23 |             items.pop[31;1m([0m);
[2m      |             return unwrap;[0m
[2m      |         }[0m

	At call to [34;1mpop_WK75GL7s[0m
            via [35;1m__native[0m [34;1mpostfix--[0m at 17:29:

[2m      | [0m
[2m      |         fn pop(ref n: Nodes) {[0m
   17 |             n.last.items.len[31;1m--[0m;
[2m      |         }[0m
[2m      | [0m

            

        Solving [35;1mfn[0m [34;1mcreateBlock_P2PdMZmw[0m

-----


        struct Items {
            len: i32;
        }

        struct SolvedNode {
            items: Items;
        }

        struct Nodes {
            last: SolvedNode;
        }

        fn pop(ref n: Nodes) {
            n.last.items.len--;
        }

        fn createBlock(mut items: Nodes) {
            let tail = items.last;
            let unwrap = tail.items;
            items.pop();
            return unwrap;
        }

        fn main() {
            return createBlock(Nodes(SolvedNode([]))).len;
        }

-----

struct s_Items;
struct s_Nodes;
struct s_SolvedNode;

                                #ifndef DEF_s_Items
                                #define DEF_s_Items
struct s_Items
{
    int len;
    explicit operator bool() const noexcept
    {
        return false
            || len
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Items items;
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Nodes
                                #define DEF_s_Nodes
struct s_Nodes
{
    s_SolvedNode last;
    explicit operator bool() const noexcept
    {
        return false
            || last
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void pop_jnnAabim(s_Nodes& n)
{
    n.last.items.len--;
}

static s_Items createBlock_qqfnq3DH(s_Nodes&& items)
{
    const s_SolvedNode& tail = items.last;
    /*MOV*/ const s_Items unwrap { tail.items };
    pop_jnnAabim(items);
    return /*NRVO*/ unwrap;
}

int fu_MAIN()
{
    return createBlock_qqfnq3DH(s_Nodes { s_SolvedNode { s_Items{} } }).len;
}

#endif


int main() { return fu_MAIN(); }

-----


        nocopy            
        struct SolvedNode {
            items: SolvedNode[];
        };

        // Reducing the thing below.
        fn createBlock(mut items: SolvedNode[]) {
            let tail = items[items.len - 1];
            let unwrap = tail.items;
            items.pop();
            return unwrap;
        }

        fn main() {
            return createBlock([ SolvedNode ]).len;
        }

-----
_0.fu @13:20:

[2m      |             let unwrap = tail.items;[0m
[2m      |             items.pop();[0m
   13 |             return [31;1munwrap[0m;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1munwrap[0m, reference invalidated by write to [31;1mitems[0m at 12:22:

[2m      |             let tail = items[items.len - 1];[0m
[2m      |             let unwrap = tail.items;[0m
   12 |             items.pop[31;1m([0m);
[2m      |             return unwrap;[0m
[2m      |         }[0m

	At call to [34;1m
.pop()[0m
            

        Solving [35;1mfn[0m [34;1mcreateBlock_ywclbwCp[0m

-----


        struct SolvedNode {
            items: SolvedNode[];
        };

        // Reducing the thing below.
        fn createBlock(mut items: SolvedNode[]) {
            let tail = items[items.len - 1];
            let unwrap = tail.items;
            items.pop();
            return unwrap;
        }

        fn main() {
            return createBlock([ SolvedNode ]).len;
        }

-----

#include <fu/vec.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<s_SolvedNode> createBlock_hoDN8Lq5(fu_VEC<s_SolvedNode>&& items)
{
    const s_SolvedNode& tail = items[(items.size() - 1)];
    /*MOV*/ fu_VEC<s_SolvedNode> unwrap { tail.items };
    items.pop();
    return /*NRVO*/ unwrap;
}

int fu_MAIN()
{
    return createBlock_hoDN8Lq5(fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode{} } }).size();
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----


        nocopy            
        struct SolvedNode {
            kind: string;
            items: SolvedNode[];
        };

        // Same as below but mut.
        fn createBlock(mut items: SolvedNode[]) {
            if (items.len) for (;;) {
                let tail = items[items.len - 1]; // const-indexed but generated mutref tail, must be F_RRET?
                if (tail.kind != "block")
                    break;

                let unwrap = tail.items;
                items.pop();
                return unwrap;
            }

            return [];
        }

        fn main() {
            return createBlock([]).len;
        }

-----
_0.fu @18:24:

[2m      |                 let unwrap = tail.items;[0m
[2m      |                 items.pop();[0m
   18 |                 return [31;1munwrap[0m;
[2m      |             }[0m
[2m      | [0m

	Cannot access [31;1munwrap[0m, reference invalidated by write to [31;1mitems[0m at 17:26:

[2m      | [0m
[2m      |                 let unwrap = tail.items;[0m
   17 |                 items.pop[31;1m([0m);
[2m      |                 return unwrap;[0m
[2m      |             }[0m

	At call to [34;1m
.pop()[0m
            

        Solving [35;1mfn[0m [34;1mcreateBlock_ywclbwCp[0m

-----


        struct SolvedNode {
            kind: string;
            items: SolvedNode[];
        };

        // Same as below but mut.
        fn createBlock(mut items: SolvedNode[]) {
            if (items.len) for (;;) {
                let tail = items[items.len - 1]; // const-indexed but generated mutref tail, must be F_RRET?
                if (tail.kind != "block")
                    break;

                let unwrap = tail.items;
                items.pop();
                return unwrap;
            }

            return [];
        }

        fn main() {
            return createBlock([]).len;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<s_SolvedNode> createBlock_hoDN8Lq5(fu_VEC<s_SolvedNode>&& items)
{
    if (items.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = items[(items.size() - 1)];
            if (tail.kind != "block"_fu)
                break;

            /*MOV*/ fu_VEC<s_SolvedNode> unwrap { tail.items };
            items.pop();
            return /*NRVO*/ unwrap;
        };
    };
    return fu_VEC<s_SolvedNode>{};
}

int fu_MAIN()
{
    return createBlock_hoDN8Lq5(fu_VEC<s_SolvedNode>{}).size();
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----


        nocopy            
        struct SolvedNode {
            kind: string;
            items: SolvedNode[];
        };

        // Same as above but ref.
        fn createBlock(ref items: SolvedNode[]) {
            if (items.len) for (;;) {
                let tail = items[items.len - 1];
                if (tail.kind != "block")
                    break;

                let unwrap = tail.items; // unwrap needs to copy here
                items.pop(); ////////////// <- nuked here, but ignored!
                return unwrap;
            }

            return [];
        }

        fn main() {
            mut items: SolvedNode[];
            return createBlock(items).len;
        }

-----
_0.fu @18:24:

[2m      |                 let unwrap = tail.items; // unwrap needs to copy here[0m
[2m      |                 items.pop(); ////////////// <- nuked here, but ignored![0m
   18 |                 return [31;1munwrap[0m;
[2m      |             }[0m
[2m      | [0m

	Cannot access [31;1munwrap[0m, reference invalidated by write to [31;1mitems[0m at 17:26:

[2m      | [0m
[2m      |                 let unwrap = tail.items; // unwrap needs to copy here[0m
   17 |                 items.pop[31;1m([0m); ////////////// <- nuked here, but ignored!
[2m      |                 return unwrap;[0m
[2m      |             }[0m

	At call to [34;1m
.pop()[0m
            

        Solving [35;1mfn[0m [34;1mcreateBlock_A3IkdOgM[0m

-----


        struct SolvedNode {
            kind: string;
            items: SolvedNode[];
        };

        // Same as above but ref.
        fn createBlock(ref items: SolvedNode[]) {
            if (items.len) for (;;) {
                let tail = items[items.len - 1];
                if (tail.kind != "block")
                    break;

                let unwrap = tail.items; // unwrap needs to copy here
                items.pop(); ////////////// <- nuked here, but ignored!
                return unwrap;
            }

            return [];
        }

        fn main() {
            mut items: SolvedNode[];
            return createBlock(items).len;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<s_SolvedNode> createBlock_r8hNNXxt(fu_VEC<s_SolvedNode>& items)
{
    if (items.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = items[(items.size() - 1)];
            if (tail.kind != "block"_fu)
                break;

            /*MOV*/ fu_VEC<s_SolvedNode> unwrap { tail.items };
            items.pop();
            return /*NRVO*/ unwrap;
        };
    };
    return fu_VEC<s_SolvedNode>{};
}

int fu_MAIN()
{
    fu_VEC<s_SolvedNode> items {};
    return createBlock_r8hNNXxt(items).size();
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(ref a: i32[]) = a.swap(0, 1);

        fn main() {
            mut nums = [1, 2];
            nums.test();
            return nums.len == 2 && nums[0] == 2 && nums[1] == 1
                 ? 0
                 : 1;
        }

-----

#include <fu/vec.h>
#include <fu/vec/view_swap.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void test_5UkPjt2z(fu::view_mut<int> a)
{
    fu::view_swap(a, 0, 1);
}

int fu_MAIN()
{
    fu_VEC<int> nums = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    test_5UkPjt2z(nums);
    return (((nums.size() == 2) && (nums[0] == 2) && (nums[1] == 1)) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn Swap(ref a: i32[], x: i32, y: i32)
            swap(a[x], a[y]);

        fn main() {
            mut a = [ 1, 2 ];
            a.Swap(0, 1);
            return a[0] - 2 == 0 && a[1] - 1 == 0 ? 0 : 1;
        }

-----
TODO: _0.fu @3:17:

[2m      | [0m
[2m      |         fn Swap(ref a: i32[], x: i32, y: i32)[0m
    3 |             swap[31;1m([0ma[x], a[y]);
[2m      | [0m
[2m      |         fn main() {[0m

	At call to [35;1m__native[0m [34;1m
no_AAR
<utility>
std::swap[0m, argument binding [31;1ma[0m (arg #0) at 3:19:

[2m      | [0m
[2m      |         fn Swap(ref a: i32[], x: i32, y: i32)[0m
    3 |             swap(a[31;1m[[0mx], a[y]);
[2m      | [0m
[2m      |         fn main() {[0m

	... invalidated by subsequent write to [35;1marg[0m [34;1ma[0m upon evaluation of argument [31;1mb[0m (arg #1) at 3:25:

[2m      | [0m
[2m      |         fn Swap(ref a: i32[], x: i32, y: i32)[0m
    3 |             swap(a[x], a[31;1m[[0my]);
[2m      | [0m
[2m      |         fn main() {[0m

	At call to [34;1m
.mutref[0m
            

        Solving [35;1mfn[0m [34;1mSwap_5ixJzMKt[0m

-----

        fn test(ref arg: i32[]) {
            let encloses_unchanged = arg;

            fn closure()
                for (mut i = 0; i < arg.len; i++)
                    arg[i] += encloses_unchanged[i];

            closure();
            if (arg.len & 1)
                closure();
        }

        fn main() {
            mut a = [ 3 ];
            test(a);
            return a[0] - 9;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void closure_y1jV3SX3(fu_VEC<int>& arg, fu::view<int> encloses_unchanged)
{
    for (int i = 0; i < arg.size(); i++)
        arg.mutref(i) += encloses_unchanged[i];

}

static void test_5UkPjt2z(fu_VEC<int>& arg)
{
    fu_VEC<int> encloses_unchanged { arg };
    closure_y1jV3SX3(arg, encloses_unchanged);
    if (arg.size() & 1)
        closure_y1jV3SX3(arg, encloses_unchanged);

}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 3 } };
    test_5UkPjt2z(a);
    return a[0] - 9;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        inline fn must_not_return_ref_or_view(ref x: i32[][]) {
            let y = x[100];
            x.shrink(y.len);
            return y;
        }

        fn main() {
            mut arr: i32[][];
            arr.grow(101);
            arr[100] = [ 7 ]
            return arr.must_not_return_ref_or_view()[0] - 7;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    // Hoisted:
    fu_VEC<int> y;

    fu_VEC<fu_VEC<int>> arr {};
    arr.grow(101);
    arr.mutref(100) = fu_VEC<int> { fu::slate<1, int> { 7 } };
    fu::view<int> BL_1_v {};
    return (__extension__ (
    {
        y =  { arr[100] };
        arr.shrink(y.size());
        BL_1_v = (y);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[0] - 7;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        struct HasVec { x: i32[] };
        inline fn last(x: i32[]) x[x.len - 1];


        fn will_return_value(ref x: HasVec) {
            let bck_will_cpy = x;

            let vec0 = bck_will_cpy.x;
            if (bck_will_cpy.x.len & 1)
                return vec0;

            x.x ~= x.x.len;
            let vec1 = bck_will_cpy.x;
            return vec1;
        }

        fn main() {
            mut x = HasVec([ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ]);
            return will_return_value(x).last/*9*/ - x.x.last/*10*/ + 1;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_HasVec;

                                #ifndef DEF_s_HasVec
                                #define DEF_s_HasVec
struct s_HasVec
{
    fu_VEC<int> x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<int> will_return_value_4htgoDpn(s_HasVec& x)
{
    /*MOV*/ s_HasVec bck_will_cpy { x };
    /*MOV*/ fu_VEC<int>& vec0 = bck_will_cpy.x;
    if (bck_will_cpy.x.size() & 1)
        return static_cast<fu_VEC<int>&&>(vec0);

    x.x += x.x.size();
    /*MOV*/ fu_VEC<int>& vec1 = bck_will_cpy.x;
    return static_cast<fu_VEC<int>&&>(vec1);
}

int fu_MAIN()
{
    // Hoisted:
    fu_VEC<int> x_1;

    s_HasVec x = s_HasVec { fu_VEC<int> { fu::slate<10, int> { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } } };
    int BL_1_v {};
    int _0 {};
    int BL_2_v {};
    return (_0 = (__extension__ (
    {
        x_1 = will_return_value_4htgoDpn(x);
        BL_1_v = (x_1[(x_1.size() - 1)]);
    (void)0;}), int(BL_1_v)), (int(_0) - (__extension__ (
    {
        fu::view<int> x_2 = x.x;
        BL_2_v = (x_2[(x_2.size() - 1)]);
    (void)0;}), int(BL_2_v)))) + 1;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        struct HasVec { x: i32[] };
        inline fn last(x: i32[]) x[x.len - 1];


        inline

        fn will_return_value(ref x: HasVec) {
            let bck_will_cpy = x;

            let vec0 = bck_will_cpy.x;
            if (bck_will_cpy.x.len & 1)
                return vec0;

            x.x ~= x.x.len;
            let vec1 = bck_will_cpy.x;
            return vec1;
        }

        fn main() {
            mut x = HasVec([ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ]);
            return will_return_value(x).last/*9*/ - x.x.last/*10*/ + 1;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_HasVec;

                                #ifndef DEF_s_HasVec
                                #define DEF_s_HasVec
struct s_HasVec
{
    fu_VEC<int> x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    // Hoisted:
    s_HasVec bck_will_cpy;

    s_HasVec x = s_HasVec { fu_VEC<int> { fu::slate<10, int> { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } } };
    int BL_1_v {};
    int _0 {};
    int BL_4_v {};
    return (_0 = (__extension__ (
    {
        fu::view<int> BL_2_v {};
        fu::view<int> x_1 = (__extension__ (
        { {
            bck_will_cpy =  { x };
            fu::view<int> vec0 = bck_will_cpy.x;
            if (bck_will_cpy.x.size() & 1)
                { BL_2_v = vec0; goto BL_2; };

            x.x += x.x.size();
            fu::view<int> vec1 = bck_will_cpy.x;
            BL_2_v = (vec1);
          } BL_2:;
        (void)0;}), static_cast<fu::view<int>&&>(BL_2_v));
        BL_1_v = (x_1[(x_1.size() - 1)]);
    (void)0;}), int(BL_1_v)), (int(_0) - (__extension__ (
    {
        fu::view<int> x_2 = x.x;
        BL_4_v = (x_2[(x_2.size() - 1)]);
    (void)0;}), int(BL_4_v)))) + 1;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn PASS_borrowCheck_incr_a_ret_b(ref a: i32, ref b: i32) {
            a++;        // we're done writing to a before
            return b;   //  EXTRA DRAMA: we dont cg const refs for primitives right now
        }

        fn main() {
            mut x = 5;
            PASS_borrowCheck_incr_a_ret_b(x, x);
            return x - 6;
        }

-----
TODO: _0.fu @9:46:

[2m      |         fn main() {[0m
[2m      |             mut x = 5;[0m
    9 |             PASS_borrowCheck_incr_a_ret_b(x, [31;1mx[0m);
[2m      |             return x - 6;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mPASS_borrowCheck_incr_a_ret_b_vnbprror[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mx[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn PASS_borrowCheck_reduct(ref a: i32, ref b: i32[])
        {
            // If this were (ref!b a, ref b):
            //
            // When a points into b:
            //  - a++ read ok, write ok
            //   - b read ok, write ok + invalidates a
            //    - a not usable from here on
            //
            // The point is we should be able to deduce this automatically,
            //  if nothing a-related is used after b gets used for the first time,
            //   then we're fine if b aliases a ...
            //
            // ... EXCEPT that's if b doesn't acceptTempCopies -
            //  meaning it's either F_IMPLICIT or F_REF -
            //   otherwise there's ambiguity.
            //
            a++;
            b ~= 10;
        }

        fn main() {
            mut arr = [ 9 ];
            PASS_borrowCheck_reduct(arr[0], arr);
            return arr[0] - arr[1];
        }

-----
TODO: _0.fu @25:45:

[2m      |         fn main() {[0m
[2m      |             mut arr = [ 9 ];[0m
   25 |             PASS_borrowCheck_reduct(arr[0], [31;1marr[0m);
[2m      |             return arr[0] - arr[1];[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mPASS_borrowCheck_reduct_ur7owel4[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1marr[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Node { id: i32; items?: Node[]; };

        fn traverse(node: Node, visit): bool {
            if !(visit(node))
                return false;

            for (mut i = 0; i < node.items.len; i++)
                if !(traverse(node.items[i], fn visit))
                    return false;

            return true;
        }

        fn PASS_borrowCheck(ref root: Node)
        {
            mut n: i32;
            fn count(id: i32) {
                traverse(root): |i|
                    if (i.id == id)
                        n++;
            }

            fn check(ref node: Node) {
                if (node.items)
                    for (mut i = 0; i < node.items.len; i++)
                        check(node.items[i]);
                else
                    count(node.id++);
            }

            check(root);
            return n;
        }

        fn main() {
            mut tree = Node(0, [ Node(2), Node(2) ]);
            return PASS_borrowCheck(tree) - 1;
        }

-----
TODO: _0.fu @32:18:

[2m      |             }[0m
[2m      | [0m
   32 |             check[31;1m([0mroot);
[2m      |             return n;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mcheck_RlfZxdFT[0m: Arguments [31;1mPASS_borrowCheck_4htgoDpn:root[0m and [31;1mnode[0m (args #1 and #0) both alias:

                [35;1marg[0m [34;1mroot[0m

        Solving [35;1mfn[0m [34;1mPASS_borrowCheck_4htgoDpn[0m

-----

        pub fn grow_if_oob(ref a: $T[], i: i32) {
            if (a.len <= i) a.grow(i + 1);
            return a[i];
        }

        fn grow_if_oob_to_len_from_self(ref arr: i32[], idx: i32)
            arr.grow_if_oob(arr[idx]); // i was F_REF for some reason

        fn main() {
            mut arr = [3];
            arr.grow_if_oob_to_len_from_self(0) = 2;

            mut sum = 0;
            for (mut i = 0; i < arr.len; i++) sum += arr[i];
            return sum - 5;
        }

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_grow_if_oob_ndkRofCB
                                #define DEFt_grow_if_oob_ndkRofCB
inline int& grow_if_oob_ndkRofCB(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

int& grow_if_oob_to_len_from_self_a85hag59(fu_VEC<int>& arr, const int idx)
{
    return grow_if_oob_ndkRofCB(arr, int(arr[idx]));
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 3 } };
    grow_if_oob_to_len_from_self_a85hag59(arr, 0) = 2;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 5;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct BINOP {
            P: Map(string, i32);
        };

        fn setupOperators(): BINOP
        {
            mut out: BINOP;

            fn binop(op: string)
                out.P[op] = 7;

            binop(",");

            return out;
        }

        shadow let BINOP = setupOperators();
        let P_COMMA = BINOP.P[","] || assert();

        fn main() P_COMMA - 7;

-----
TODO: _0.fu @2:9:

[2m      | [0m
    2 |         [31;1mstruct[0m BINOP {
[2m      |             P: Map(string, i32);[0m
[2m      |         };[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mtype[0m [34;1mBINOP[0m

-----

        // -no-lambda
        // This converted to a ref-returning
        // logical chain for some reason.
        let hex = true;
        let trail = "x";
        if (!(trail >= "0" && trail <= "9") &&
            !(hex && (trail >= "a" && trail <= "f"
                   || trail >= "A" && trail <= "F")))
        {
            return 0;
        }

        return 1;

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const bool hex = true;
    fu_STR trail = "x"_fu;
    if (!((trail >= "0"_fu) && (trail <= "9"_fu)) && !(hex && (((trail >= "a"_fu) && (trail <= "f"_fu)) || ((trail >= "A"_fu) && (trail <= "F"_fu)))))
        return 0;

    return 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Type     { i: i32; };
        struct Token    { i: i32; };
        struct ScopeIdx { i: i32; };

        struct SolvedNode
        {
            kind:       string;
            flags?:     i32;
            value?:     string;
            items?:     SolvedNode[];
            token:      Token;

            type:       Type;
            target?:    ScopeIdx;
        };

        let _here: Token;

        fn createDefaultInit(type: Type): SolvedNode
        {
            // Broken arg re-arrange.
            return SolvedNode(
                kind: "definit",
                token: _here,
                :type);
        }

        return createDefaultInit(Type()).target.i;

-----

#include <fu/str.h>
#include <fu/vec.h>

struct s_ScopeIdx;
struct s_SolvedNode;
struct s_Token;
struct s_Type;

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeIdx
                                #define DEF_s_ScopeIdx
struct s_ScopeIdx
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
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
    s_Token token;
    s_Type type;
    s_ScopeIdx target;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
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

#ifndef FU_NO_FDEFs

static s_SolvedNode createDefaultInit_XWRBb6eP(const s_Type& type, const s_Token& _here)
{
    return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token(_here), s_Type(type), s_ScopeIdx{} };
}

int fu_MAIN()
{
    const s_Token _here {};
    return createDefaultInit_XWRBb6eP(s_Type{}, _here).target.i;
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve

-----

        struct Type         { i: i32; };
        struct Scope        { i: i32; };
        struct Partial      { i: i32; };
        struct Template     { i: i32; };
        struct SolvedNode   { i: i32; };

        fn Scope_add(
            scope: &mut Scope,
            kind: string, id: string, type: Type,

            min: i32 = 0,
            max: i32 = 0,
            arg_n: string[]     = [],
            arg_t: Type[]       = [],
            arg_d: SolvedNode[] = [],
            template: Template  = [],
            partial: Partial    = []): i32
        {
            return scope.i
                 + kind.len + id.len + type.i
                 + min + max + arg_n.len + arg_t.len + arg_d.len
                 + template.i + partial.i;
        }

        mut _scope: Scope;
        let id: string;
        let t_template: Type;
        let min: i32;
        let max: i32;
        let arg_n: string[];
        let template: Template;

        return Scope_add(
            _scope,
            "", id, t_template,
            min, max, arg_n,
            :template);

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_Partial;
struct s_Scope;
struct s_SolvedNode;
struct s_Template;
struct s_Type;

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Partial
                                #define DEF_s_Partial
struct s_Partial
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int Scope_add_0SJqKggE(const s_Scope& scope, fu::view<char> kind, fu::view<char> id, const s_Type& type, const int min, const int max, fu::view<fu_STR> arg_n, fu::view<s_Type> arg_t, fu::view<s_SolvedNode> arg_d, const s_Template& tEmplate, const s_Partial& partial)
{
    return (((((((((scope.i + kind.size()) + id.size()) + type.i) + min) + max) + arg_n.size()) + arg_t.size()) + arg_d.size()) + tEmplate.i) + partial.i;
}

int fu_MAIN()
{
    const s_Scope _scope {};
    fu_STR id {};
    const s_Type t_template {};
    const int min {};
    const int max {};
    fu_VEC<fu_STR> arg_n {};
    const s_Template tEmplate {};
    return Scope_add_0SJqKggE(_scope, fu::view<char>{}, id, t_template, min, max, arg_n, fu::view<s_Type>{}, fu::view<s_SolvedNode>{}, tEmplate, s_Partial{});
}

#endif


int main() { return fu_MAIN(); }

-----

        let i = 0;
        let items = [ "" ];
        i == items.len - 1 || throw("what?");
        return i;

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    /*MOV*/ const int i = 0;
    fu_VEC<fu_STR> items = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR{} } };
    if (!(i == (items.size() - 1)))
        fu::fail("what?"_fu);

    return /*NRVO*/ i;
}

#endif


int main() { return fu_MAIN(); }

-----

        return false /* test */
             ? 0xffffff.i32 // what is this
             : 0 // madness
             ;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return (false ? int(0xffffffu) : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(id: i32) id;
        return test(/*id*/0); // <- bad parse

-----

#ifndef FU_NO_FDEFs

static int test_neXOK2KY(const int id)
{
    return id;
}

int fu_MAIN()
{
    return int(test_neXOK2KY(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        return 0b101.i32 - 5;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(0b101u) - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        return 0o101.i32 - 65;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(0101u) - 65;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn path_normalize(p: string): string {
            mut path = p.split("/");

            for (mut i = path.len; i --> 0; ) {
                let part: &string = path[i];
                if (part == "." || !part && i > 0 && i < path.len - 1)
                    path.splice(i, 1);
            }

            return path.join("/");
        }

        fn main() path_normalize("./hello///hey") == "hello/hey" ? 0 : 1;

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_split_pH29EELm
                                #define DEFt_split_pH29EELm
inline void split_pH29EELm(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_pH29EELm(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
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

static fu_STR path_normalize_vhnG1IeH(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_KclJlPSO(p, "/"_fu);
    for (int i = path.size(); i-- > 0; )
    {
        const fu_STR& part = path[i];
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    return join_hXY7eLHr(path, "/"_fu);
}

int fu_MAIN()
{
    return ((path_normalize_vhnG1IeH("./hello///hey"_fu) == "hello/hey"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn path_normalize(p: string): string {
            mut path = p.split("/");

            for (mut i = path.len; i --> 0; ) {
                let part = path[i];
                if (part == "." || !part && i > 0 && i < path.len - 1)
                    path.splice(i, 1);
            }

            for (mut i = 1; i < path.len; i++) {
                if (path[i] == "..")
                    path.splice(--i, 2);
            }

            return path.join("/");
        }

        fn path_join(a: string, b: string)
            path_normalize(a ~ "/" ~ b);

        fn main()
            path_join("hello/hey", "./../you//") == "hello/you/"
                ? 0 : 1;

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_split_Bn6yKpmN
                                #define DEFt_split_Bn6yKpmN
inline void split_Bn6yKpmN(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_Bn6yKpmN(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
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

static fu_STR path_normalize_vhnG1IeH(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_KclJlPSO(p, "/"_fu);
    for (int i = path.size(); i-- > 0; )
    {
        const fu_STR& part = path[i];
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    for (int i_1 = 1; i_1 < path.size(); i_1++)
    {
        if (path[i_1] == ".."_fu)
            path.splice(--i_1, 2);

    };
    return join_hXY7eLHr(path, "/"_fu);
}

static fu_STR path_join_Oh8CgYG9(fu::view<char> a, fu::view<char> b)
{
    return path_normalize_vhnG1IeH(((a + "/"_fu) + b));
}

int fu_MAIN()
{
    return ((path_join_Oh8CgYG9("hello/hey"_fu, "./../you//"_fu) == "hello/you/"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        pub struct Template { locals: ScopeMemo; }; // <- used ahead of the def, was missing q_trivial
        pub struct ScopeMemo { x: i32; }; // <- trivial, discovered on solve here after Template is done
        pub fn +(a: ScopeMemo, b: ScopeMemo) a.x + b.x; // <- used here after both structs are done

        pub fn main() {
            let a = Template(ScopeMemo(+3));
            let b = Template(ScopeMemo(-3));
            return a.locals + b.locals; // <- fails to match.
        }

-----

struct s_ScopeMemo;
struct s_Template;

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_ScopeMemo locals;
    explicit operator bool() const noexcept
    {
        return false
            || locals
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int operator+(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return a.x + b.x;
}

int fu_MAIN()
{
    const s_Template a = s_Template { s_ScopeMemo { +3 } };
    const s_Template b = s_Template { s_ScopeMemo { -3 } };
    return a.locals + b.locals;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn each(a: [$T], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        struct Node { kind: string; items: Node[]; flags: i32; };

        let F_PREDICATE = 2;

        fn parse(tokens: byte[]): Node {
            mut _idx = 0;

            fn parseStructDecl(flags! = 0): Node {
                mut items = parseBlockLike('}');

                :F_PREDICATE {
                    items.each: |item|
                        if (item.kind == "let")
                            if (item.flags & F_PREDICATE)
                                break :F_PREDICATE;

                    items.each: |item|
                        if (item.kind == "let")
                            item.flags |= F_PREDICATE;
                }

                return Node("struct", items, :flags);
            }

            fn parseBlockLike(endToken: byte): Node[] {
                mut items: Node[] = [];
                for (;;) {
                    let token = tokens[_idx++];
                    if (token == endToken)
                        break;

                    items ~= Node("let", [], flags: token == '+' && F_PREDICATE);
                }

                return items;
            }

            return parseStructDecl();
        }

        fn main() {
            let tokens = "+-}";
            let p = parse(tokens).items;
            return p.len - p[0].flags
                         + p[1].flags * 17;
        }

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Node;

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    fu_VEC<s_Node> items;
    int flags;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || items
            || flags
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
inline constexpr int F_PREDICATE = 2;
                                #endif

static fu_VEC<s_Node> parseBlockLike_HRDlIFpk(const char endToken, fu::view<char> tokens, int& _idx)
{
    /*MOV*/ fu_VEC<s_Node> items {};
    for (; ; )
    {
        const char token = tokens[_idx++];
        if (token == endToken)
            break;

        items += s_Node { "let"_fu, fu_VEC<s_Node>{}, int(((token == '+') ? F_PREDICATE : (*(const int*)fu::NIL))) };
    };
    return /*NRVO*/ items;
}

inline static void each_qByPQ5w1(fu_VEC<s_Node>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Node& item = a.mutref(i);
        if (item.kind == "let"_fu)
            item.flags |= F_PREDICATE;

    };
}

static s_Node parseStructDecl_sLHfCuTg(const int flags, fu::view<char> tokens, int& _idx)
{
    fu_VEC<s_Node> items = parseBlockLike_HRDlIFpk('}', tokens, _idx);

    { {

        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_Node& item = items[i];
                if ((item.kind == "let"_fu) && (item.flags & F_PREDICATE))
                    goto BL_1;

            };
        };
        each_qByPQ5w1(items);
      } BL_1:;
    };
    return s_Node { "struct"_fu, fu_VEC<s_Node>(items), int(flags) };
}

static s_Node parse_vhnG1IeH(fu::view<char> tokens)
{
    int _idx = 0;
    return parseStructDecl_sLHfCuTg(0, tokens, _idx);
}

int fu_MAIN()
{
    fu_STR tokens = "+-}"_fu;
    fu_VEC<s_Node> p = parse_vhnG1IeH(tokens).items;
    return (p.size() - p[0].flags) + (p[1].flags * 17);
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        pub struct MeshBuilder
        {
            verts?:     byte[];
            indices?:   byte[];
            vert_bytes: i32;
            num_verts?: i32;
        };

        pub fn alloc(
            using mb: &mut MeshBuilder,
            new_verts: i32,
            new_indices: i32)
        {
            verts.resize_junk((verts.len + new_verts) * vert_bytes);

            let index_bytes = 4;
            indices.resize_junk((indices.len + new_indices) * index_bytes);
        }

        pub fn setup_quads(
            using mb: &mut MeshBuilder, // <- the 'using' introduced more bindings,
            num_quads: i32)             // <-  advancing the target index number of this arg,
                : &mut [byte]           // <-   confusing the callsite lifetime of this view.
        {
            let b0 = verts.len;
            let v0 = num_verts;
            let i0 = indices.len;

            mut v1 = v0;

            alloc(num_quads * 4, num_quads * 6);

            let indices_i32: &mut [i32] =
                indices[i0, indices.len]
                    .view(i32);

            for (mut i = 0; i < indices_i32.len; i += 6)
            {
                indices_i32[i    ] = v1;
                indices_i32[i + 1] = v1 + 1;
                indices_i32[i + 2] = v1 + 2;

                indices_i32[i + 3] = v1;
                indices_i32[i + 4] = v1 + 2;
                indices_i32[i + 5] = v1 + 3;

                v1 += 4;
            }

            num_verts = v1;

            return verts[b0, verts.len];
        }

        let QUAD_VBO: f32[] =
        [
            -1, -1, 0,      0, 0, 1,    0, 0,
            +1, -1, 0,      0, 0, 1,    1, 0,
            +1, +1, 0,      0, 0, 1,    1, 1,
            -1, +1, 0,      0, 0, 1,    0, 1,
        ];

        pub fn main()
        {
            mut mb = MeshBuilder(
                vert_bytes: 4 * (3+3+2));

            mb.setup_quads(1).view(f32) .= QUAD_VBO;

            return mb.num_verts - 4;
        }

-----

#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

struct s_MeshBuilder;

                                #ifndef DEF_s_MeshBuilder
                                #define DEF_s_MeshBuilder
struct s_MeshBuilder
{
    fu_STR verts;
    fu_STR indices;
    int vert_bytes;
    int num_verts;
    explicit operator bool() const noexcept
    {
        return false
            || verts
            || indices
            || vert_bytes
            || num_verts
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

void alloc_nZiT4tOG(s_MeshBuilder& mb, const int new_verts, const int new_indices)
{
    mb.verts.resize<false>(((mb.verts.size() + new_verts) * mb.vert_bytes));
    const int index_bytes = 4;
    mb.indices.resize<false>(((mb.indices.size() + new_indices) * index_bytes));
}

fu::view_mut<char> setup_quads_n9NTIunl(s_MeshBuilder& mb, const int num_quads)
{
    const int b0 = mb.verts.size();
    const int v0 = mb.num_verts;
    const int i0 = mb.indices.size();
    int v1 = v0;
    alloc_nZiT4tOG(mb, (num_quads * 4), (num_quads * 6));
    fu::view_mut<int> indices_i32 = fu::view_of_mut(fu::get_view_mut(mb.indices, i0, mb.indices.size()), int{});
    for (int i = 0; i < indices_i32.size(); i += 6)
    {
        indices_i32.mutref(i) = v1;
        indices_i32.mutref((i + 1)) = (v1 + 1);
        indices_i32.mutref((i + 2)) = (v1 + 2);
        indices_i32.mutref((i + 3)) = v1;
        indices_i32.mutref((i + 4)) = (v1 + 2);
        indices_i32.mutref((i + 5)) = (v1 + 3);
        v1 += 4;
    };
    mb.num_verts = v1;
    return fu::get_view_mut(mb.verts, b0, mb.verts.size());
}

static const fu_VEC<float> QUAD_VBO fu_INIT_PRIORITY(1001) = fu_VEC<float> { fu::slate<32, float> { -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, +1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f } };

int fu_MAIN()
{
    s_MeshBuilder mb = s_MeshBuilder { fu_STR{}, fu_STR{}, (4 * ((3 + 3) + 2)), 0 };
    fu::view_assign(fu::view_of_mut(setup_quads_n9NTIunl(mb, 1), float{}), QUAD_VBO);
    return mb.num_verts - 4;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn target(implicit ref _target: i32) _target;

        // this suddenly reported that it doesn't see __solveStruct
        fn GET_mut(ref x: i32) x || target;

        // while i was trying to reproduce an ambig "o" fail here
        fn __solveStruct(mut arg: i32): i32 {
            if (arg) {
                ref o = GET_mut(arg);
                o++;
                checkRecursions(o, o);
            }
            return arg;
        }

        fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }

        fn main()
        {
            let implicit mut _target = 0;

            return __solveStruct(1) - 4;
        }

-----

#ifndef FU_NO_FDEFs

static int& target_K4OPjUNR(int& _target)
{
    return _target;
}

static int& GET_mut_K4OPjUNR(int& x, int& _target)
{
    return x ? x : target_K4OPjUNR(_target);
}

static void checkRecursions_eiJQ4WXt(int& o, const int incr, int& _target)
{
    GET_mut_K4OPjUNR(o, _target) += incr;
}

static int __solveStruct_pZ8wRcaF(/*MOV*/ int arg, int& _target)
{
    if (arg)
    {
        int& o = GET_mut_K4OPjUNR(arg, _target);
        o++;
        checkRecursions_eiJQ4WXt(o, int(o), _target);
    };
    return int(arg);
}

int fu_MAIN()
{
    int _target = 0;
    return __solveStruct_pZ8wRcaF(1, _target) - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main()
        {
            mut target = 0;
            fn GET_mut(ref x: i32) x || GET_mut(target += 1);
            return GET_mut(target) - 1;
        }

-----

static int& GET_mut_tSbBZlcD(int&, int&);

#ifndef FU_NO_FDEFs

static int& GET_mut_tSbBZlcD(int& x, int& target)
{
    int* _0;
    return x ? x : (_0 = &((target += 1)), GET_mut_tSbBZlcD(*_0, target));
}

int fu_MAIN()
{
    int target = 0;
    return GET_mut_tSbBZlcD(target, target) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn target(implicit ref _itarg: i32) _itarg;

        fn main()
        {
            let implicit mut _itarg = 0;
            fn GET_mut(ref x: i32) x || GET_mut(target += 1);
            return GET_mut(target) - 1;
        }

-----

static int& GET_mut_yWH8chvZ(int&, int&);

#ifndef FU_NO_FDEFs

static int& target_K4OPjUNR(int& _itarg)
{
    return _itarg;
}

static int& GET_mut_yWH8chvZ(int& x, int& _itarg)
{
    int* _0;
    return x ? x : (_0 = &((target_K4OPjUNR(_itarg) += 1)), GET_mut_yWH8chvZ(*_0, _itarg));
}

int fu_MAIN()
{
    int _itarg = 0;
    return GET_mut_yWH8chvZ(target_K4OPjUNR(_itarg), _itarg) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn target(implicit ref _itarg: i32) _itarg;
        fn GET_mut(ref x: i32) x || GET_mut(target += 1);

        fn main()
        {
            let implicit mut _itarg = 0;
            return GET_mut(target) - 1;
        }

-----

static int& GET_mut_K4OPjUNR(int&, int&);

#ifndef FU_NO_FDEFs

static int& target_K4OPjUNR(int& _itarg)
{
    return _itarg;
}

static int& GET_mut_K4OPjUNR(int& x, int& _itarg)
{
    int* _0;
    return x ? x : (_0 = &((target_K4OPjUNR(_itarg) += 1)), GET_mut_K4OPjUNR(*_0, _itarg));
}

int fu_MAIN()
{
    int _itarg = 0;
    return GET_mut_K4OPjUNR(target_K4OPjUNR(_itarg), _itarg) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn main()
        {
            mut target = 0;
            fn GET_mut(ref x: i32) x || GET_mut(++target);
            return GET_mut(target) - 1;
        }

-----

static int& GET_mut_tSbBZlcD(int&, int&);

#ifndef FU_NO_FDEFs

static int& GET_mut_tSbBZlcD(int& x, int& target)
{
    int* _0;
    return x ? x : (_0 = &(++target), GET_mut_tSbBZlcD(*_0, target));
}

int fu_MAIN()
{
    int target = 0;
    return GET_mut_tSbBZlcD(target, target) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn main()
        {
            mut target = 0;
            fn __solveStruct(mut arg: i32): i32 {
                ref o = GET_mut(arg); o += target;
                return target;
            }

            fn GET_mut(ref x: i32) x || (target = __solveStruct(target += 1));
            return __solveStruct(0) - 2;
        }

-----

static int& GET_mut_yWH8chvZ(int&, int&);
static int& __solveStruct_neXOK2KY(int, int&);

#ifndef FU_NO_FDEFs

static int& GET_mut_yWH8chvZ(int& x, int& target)
{
    int _0 {};
    return x ? x : (target = (_0 = int((target += 1)), __solveStruct_neXOK2KY(int(_0), target)));
}

static int& __solveStruct_neXOK2KY(int arg, int& target)
{
    int& o = GET_mut_yWH8chvZ(arg, target);
    o += int(target);
    return target;
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct_neXOK2KY(0, target) - 2;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) a || (a = B(incr(a)));
        fn B(ref b: i32) b || (b = A(incr(b)));
        fn main() { mut v = 0; return A(v) - 1; }

-----

static int& A_K4OPjUNR(int&);
static int& B_K4OPjUNR(int&);

#ifndef FU_NO_FDEFs

static int& incr_K4OPjUNR(int& a)
{
    return ++a;
}

static int& B_K4OPjUNR(int& b)
{
    return b ? b : (b = A_K4OPjUNR(incr_K4OPjUNR(b)));
}

static int& A_K4OPjUNR(int& a)
{
    return a ? a : (a = B_K4OPjUNR(incr_K4OPjUNR(a)));
}

int fu_MAIN()
{
    int v = 0;
    return A_K4OPjUNR(v) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// DEAD_call

-----

        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) { ref aa = a || (a = B(incr(a))); return aa; }
        fn B(ref b: i32) { ref bb = b || (b = A(incr(b))); return bb; }
        fn main() { mut v = 0; return A(v) - 1; }

-----

static int& A_K4OPjUNR(int&);
static int& B_K4OPjUNR(int&);

#ifndef FU_NO_FDEFs

static int& incr_K4OPjUNR(int& a)
{
    return ++a;
}

static int& B_K4OPjUNR(int& b)
{
    int& bb = (b ? b : (b = A_K4OPjUNR(incr_K4OPjUNR(b))));
    return bb;
}

static int& A_K4OPjUNR(int& a)
{
    int& aa = (a ? a : (a = B_K4OPjUNR(incr_K4OPjUNR(a))));
    return aa;
}

int fu_MAIN()
{
    int v = 0;
    return A_K4OPjUNR(v) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// DEAD_call

-----

        fn main()
        {
            fn each(cond, cons) cond && cons();
            fn arg(implicit ref __arg: i32) __arg;
            fn __solveStruct(x = 3) each(arg, || arg += x);
            let implicit mut __arg = 1;
            return __solveStruct - 4;
        }

-----

#ifndef FU_NO_FDEFs

static int& arg_yWH8chvZ(int& __arg)
{
    return __arg;
}

inline static int& each_Rx5ilncY(int& cond, int& __arg, const int x)
{
    return !cond ? cond : (arg_yWH8chvZ(__arg) += x);
}

static int& __solveStruct_A1oHZf5p(const int x, int& __arg)
{
    return each_Rx5ilncY(arg_yWH8chvZ(__arg), __arg, x);
}

int fu_MAIN()
{
    int __arg = 1;
    return __solveStruct_A1oHZf5p(3, __arg) - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            fn each(cond, cons)                     cond && cons();
            fn arg_incr_x(mut arg: i32)             each(arg, || arg);
            return arg_incr_x(+7) - 7;
        }

-----

#include <fu/default.h>

#ifndef FU_NO_FDEFs

inline static int each_jSaRKld1(const int cond, const int arg)
{
    return cond ? arg : (*(const int*)fu::NIL);
}

static int arg_incr_x_kvdihmBv(/*MOV*/ const int arg)
{
    return int(each_jSaRKld1(arg, arg));
}

int fu_MAIN()
{
    return arg_incr_x_kvdihmBv(+7) - 7;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn main() {
            fn each(cond, cons)                     cond && cons();
            fn arg_incr_x(mut arg: i32, x = 0)      each(arg, || arg += x);
            return arg_incr_x(+7, -11) + 4;
        }

-----

#include <fu/default.h>

#ifndef FU_NO_FDEFs

inline static int each_i7GYY8f2(const int cond, int& arg, const int x)
{
    return cond ? (arg += x) : (*(const int*)fu::NIL);
}

static int arg_incr_x_7FVEK3BH(/*MOV*/ int arg, const int x)
{
    return int(each_i7GYY8f2(arg, arg, x));
}

int fu_MAIN()
{
    return arg_incr_x_7FVEK3BH(+7, -11) + 4;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn main() {
            fn each(cond, cons)                     cond && cons();
            fn arg_incr_x(mut arg: i32, x = 0): i32 {
                each(arg, || arg += x);
                return arg;
            }
            return arg_incr_x(+7, -11) + 4;
        }

-----

#include <fu/default.h>

#ifndef FU_NO_FDEFs

inline static int each_Q3N99hX3(const int cond, int& arg, const int x)
{
    return cond ? (arg += x) : (*(const int*)fu::NIL);
}

static int arg_incr_x_7FVEK3BH(/*MOV*/ int arg, const int x)
{
    each_Q3N99hX3(arg, arg, x);
    return int(arg);
}

int fu_MAIN()
{
    return arg_incr_x_7FVEK3BH(+7, -11) + 4;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn main()
        {
            mut target = 0;

            fn each(cond, cons) cond && cons();

            fn GET_mut(ref x: i32) x || (target = __solveStruct(target));

            fn __solveStruct(mut arg: i32, x = 0): i32 {
                each(arg, || arg += x);
                if (arg) {
                    ref o = GET_mut(arg);
                    o++;
                    checkRecursions(o, o);
                }
                return arg;
            }

            fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }

            return __solveStruct(1) - 4;
        }

-----

#include <fu/default.h>

static int __solveStruct_2JI7Mt1B(int, int, int&);
static int& GET_mut_yWH8chvZ(int&, int&);

#ifndef FU_NO_FDEFs

inline static int each_c3ThC4qJ(const int cond, int& arg, const int x)
{
    return cond ? (arg += x) : (*(const int*)fu::NIL);
}

static int& GET_mut_yWH8chvZ(int& x, int& target)
{
    return x ? x : (target = __solveStruct_2JI7Mt1B(int(target), 0, target));
}

static void checkRecursions_A5i3taiD(int& o, const int incr, int& target)
{
    GET_mut_yWH8chvZ(o, target) += incr;
}

static int __solveStruct_2JI7Mt1B(/*MOV*/ int arg, const int x, int& target)
{
    each_c3ThC4qJ(arg, arg, x);
    if (arg)
    {
        int& o = GET_mut_yWH8chvZ(arg, target);
        o++;
        checkRecursions_A5i3taiD(o, int(o), target);
    };
    return int(arg);
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct_2JI7Mt1B(1, 0, target) - 4;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// DEAD_code
// DEAD_let
// RELAX_respec

-----

        fn main()
        {
            mut target = 0;

            // this suddenly reported that it doesn't see __solveStruct
            fn GET_mut(ref x) x || (target = __solveStruct(target));

            // while i was trying to reproduce an ambig "o" fail here
            fn __solveStruct(mut arg: i32): i32 {
                if (arg) {
                    ref o = GET_mut(arg);
                    o++;
                    checkRecursions(o, o);
                }
                return arg;
            }

            fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }

            return __solveStruct(1) - 4;
        }

-----

inline static int& GET_mut_jsEZSgBF(int&, int&);
static int __solveStruct_kvdihmBv(int, int&);

#ifndef FU_NO_FDEFs

inline static int& GET_mut_jsEZSgBF(int& x, int& target)
{
    return x ? x : (target = __solveStruct_kvdihmBv(int(target), target));
}

static void checkRecursions_grOYJaEV(int& o, const int incr, int& target)
{
    GET_mut_jsEZSgBF(o, target) += incr;
}

static int __solveStruct_kvdihmBv(/*MOV*/ int arg, int& target)
{
    if (arg)
    {
        int& o = GET_mut_jsEZSgBF(arg, target);
        o++;
        checkRecursions_grOYJaEV(o, int(o), target);
    };
    return int(arg);
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct_kvdihmBv(1, target) - 4;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        struct ValueType { modid: i32; };
        struct Type { using vtype: ValueType; };
        struct Target { modid: i32; index: i32; };
        struct Overload { name: string; id: string; };

        fn GET(target: Target): Overload =
            Overload(
                name: "N" ~ target.index,
                  id: "I" ~ target.index);

        fn main() {
            mut specs: Map(string, Target);

            fn setSpec(mangle: string) {
                ref t = specs[mangle] ||= Target;

                // This template should start expanding on GET(target).name,
                //  which should conflict with overload name.
                fn name(shadow target)
                    GET(target) <fail ambig>
                        .name;  <pass/>
                        .id;    </fail>

                return t.name;
            }

            return setSpec("hey").len - 2;
        }

-----
TODO: <fail> mismatch:

    Expected error keyword:
        [31;1mambig[0m from pattern <fail[31;1m ambig[0m>

    ... not present in error message:

_0.fu @13:13:

[2m      | [0m
[2m      |         fn main() {[0m
   13 |             [31;1mmut[0m specs: Map(string, Target);
[2m      | [0m
[2m      |             fn setSpec(mangle: string) {[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        pub struct ScopeSkip { start: i32; end: i32; };

        pub fn each(items: [$T], scope_skip: ScopeSkip[], fn, start = 0) {
            let END_DUMMY = ScopeSkip(start: items.len, end: items.len);

            mut i0 = start;
            for (mut i = 0; i < scope_skip.len + 1; i++) {
                let ss = i < scope_skip.len ? scope_skip[i] : END_DUMMY;
                if (ss.end <= i0)
                    continue;

                let i1 = ss.start;
                for (shadow mut i = i0; i < i1; i++)
                    fn(items[i]);

                i0 = ss.end;
            }
        }

        pub fn test(items?: i32[]) {
            mut sum = 0;
            let ss: ScopeSkip[];
            items.each(ss, |item| sum += item, start: sum);
            return sum;
        }

        pub fn main() test();

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_ScopeSkip;

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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_each_XkR9LgFH
                                #define DEFt_each_XkR9LgFH
inline void each_XkR9LgFH(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& sum)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const int item = items[i_1];
            sum += item;
        };
        i0 = ss.end;
    };
}
                                #endif

int test_WgWjr9S0(fu::view<int> items)
{
    /*MOV*/ int sum = 0;
    fu_VEC<s_ScopeSkip> ss {};
    each_XkR9LgFH(items, ss, sum, sum);
    return /*NRVO*/ sum;
}

int fu_MAIN()
{
    return test_WgWjr9S0(fu::view<int>{});
}

#endif


int main() { return fu_MAIN(); }

-----

        fn setupOperators(P_PREFIX_UNARY) // <- template
        {
            struct BINOP {
                PRECEDENCE:     Map(string, i32);
                RIGHT_TO_LEFT:  Map(i32,   bool);
            };

            mut out: BINOP; // <- no BINOP in scope
            mut precedence = P_PREFIX_UNARY;
            mut rightToLeft = false;

            fn binop(ops: string[]) {
                precedence++;
                out.RIGHT_TO_LEFT[precedence] = rightToLeft;
                for (mut i = 0; i < ops.len; i++)
                    out.PRECEDENCE[ops[i]] = precedence;
            }

            binop([ "|>" ]);

            //
            return out;
        }

        let BINOP = setupOperators(-1);

        fn main() {
            let precedence = BINOP.PRECEDENCE["|>"];
            return precedence;
        }

-----
TODO: _0.fu @4:13:

[2m      |         fn setupOperators(P_PREFIX_UNARY) // <- template[0m
[2m      |         {[0m
    4 |             [31;1mstruct[0m BINOP {
[2m      |                 PRECEDENCE:     Map(string, i32);[0m
[2m      |                 RIGHT_TO_LEFT:  Map(i32,   bool);[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mtype[0m [34;1mBINOP[0m
                [35;1mfn[0m [34;1msetupOperators_pZ8wRcaF[0m

-----

        fn each(a: [$T], fn, start!?: i32)
            for (mut i = start; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut sum = 0;
            let a = [ 1, 2, 3 ];
            a.each(|i| sum += i, start: sum);   // <- start inferred to ref i32, which couldnt definit
            return sum - 6;                     //     perhaps we can use the optionality to infer constness
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static void each_ruU8fhrV(fu::view<int> a, const int start, int& sum)
{
    for (int i = start; i < a.size(); i++)
    {
        const int i_1 = a[i];
        sum += i_1;
    };
}

int fu_MAIN()
{
    int sum = 0;
    fu_VEC<int> a = fu_VEC<int> { fu::slate<3, int> { 1, 2, 3 } };
    each_ruU8fhrV(a, sum, sum);
    return sum - 6;
}

#endif


int main() { return fu_MAIN(); }

-----


        novec // Abusing to test novec, unrelated to the test

        fn ScopeSkip_push(ref scope_skip: i32[]) {
            if (scope_skip) scope_skip[0]++;
            else            scope_skip ~= 1;
        }

        fn main() {
            mut scope_skip = [ 1 ];
            ScopeSkip_push(scope_skip);
            return scope_skip[0] - 2;
        }

-----
_0.fu @3:9:

[2m      | [0m
[2m      | [0m
    3 |         [31;1mnovec[0m // Abusing to test novec, unrelated to the test
[2m      | [0m
[2m      |         fn ScopeSkip_push(ref scope_skip: i32[]) {[0m

	[35;1mfn[0m [34;1mScopeSkip_push_5UkPjt2z[0m is not novec, argument [34;1mscope_skip[0m is [2i32]: mutref copy resize

-----


        fn ScopeSkip_push(ref scope_skip: i32[]) {
            if (scope_skip) scope_skip[0]++;
            else            scope_skip ~= 1;
        }

        fn main() {
            mut scope_skip = [ 1 ];
            ScopeSkip_push(scope_skip);
            return scope_skip[0] - 2;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static void ScopeSkip_push_5UkPjt2z(fu_VEC<int>& scope_skip)
{
    if (scope_skip)
        scope_skip.mutref(0)++;
    else
        scope_skip += 1;

}

int fu_MAIN()
{
    fu_VEC<int> scope_skip = fu_VEC<int> { fu::slate<1, int> { 1 } };
    ScopeSkip_push_5UkPjt2z(scope_skip);
    return scope_skip[0] - 2;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Module  { cpp:    string; };
        struct Context { module: Module; };     // Simplification of next test, no need to consider COW here

        fn snippet2cpp(cpp: string): string {
            let ctx = Context( Module(cpp) );
            {
                let module = ctx.module;        // This was const Module& =  ... which can't be moved from.
                if (module.cpp)
                    return module.cpp;          // EXPECT return static_cast<fu_STR&&>
            }

            return "";
        }

        fn main() snippet2cpp("1").len - 1;

-----

#include <fu/str.h>

struct s_Context;
struct s_Module;

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    fu_STR cpp;
    explicit operator bool() const noexcept
    {
        return false
            || cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    s_Module module;
    explicit operator bool() const noexcept
    {
        return false
            || module
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_STR snippet2cpp_vhnG1IeH(const fu_STR& cpp)
{
    /*MOV*/ s_Context ctx = s_Context { s_Module { fu_STR(cpp) } };

    {
        /*MOV*/ s_Module& module = ctx.module;
        if (module.cpp)
            return static_cast<fu_STR&&>(module.cpp);

    };
    return fu_STR{};
}

int fu_MAIN()
{
    return snippet2cpp_vhnG1IeH("1"_fu).size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        struct Module  { cpp:     string;   };
        struct Context { modules: Module[]; };  // Module[] is COW-capable -
                                                //  - either prove there's no COW,
        fn snippet2cpp(cpp: string): string {   //  - or don't attempt to move out the item.
            let ctx = Context([ Module(cpp) ]);
            for (mut i = 0; i < ctx.modules.len; i++)
            {
                let module = ctx.modules[i];    // TODO .unique(i)
                if (module.cpp)
                    return module.cpp;          // TODO return static_cast<fu_STR&&>
            }

            return "";
        }

        fn main() snippet2cpp("1").len - 1;

-----
;; TODO .unique(i)
;; TODO return static_cast<fu_STR&&>


#include <fu/str.h>
#include <fu/vec.h>

struct s_Context;
struct s_Module;

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    fu_STR cpp;
    explicit operator bool() const noexcept
    {
        return false
            || cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    explicit operator bool() const noexcept
    {
        return false
            || modules
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_STR snippet2cpp_vhnG1IeH(const fu_STR& cpp)
{
    s_Context ctx = s_Context { fu_VEC<s_Module> { fu::slate<1, s_Module> { s_Module { fu_STR(cpp) } } } };
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.cpp)
            return fu_STR(module.cpp);

    };
    return fu_STR{};
}

int fu_MAIN()
{
    return snippet2cpp_vhnG1IeH("1"_fu).size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn test(x: string) {
            // cg fail: fwd annots of the two fns where unconsting hey to "enable move",
            //          basically the decision was made in the wrong scope.
            let hey = "hey";
            fn inner(you: string) you && hey ~ you || outer("what#1");
            fn outer(arg: string) inner(arg && " " ~ arg) || inner("what#2");
            return outer(x);
        }

        fn main() test("you").len - 7;

-----

#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

static fu_STR inner_WZrbH7MG(const fu_STR&, fu::view<char>);
static fu_STR outer_nX7Qjguv(const fu_STR&, fu::view<char>);

#ifndef FU_NO_FDEFs

static fu_STR inner_WZrbH7MG(const fu_STR& you, fu::view<char> hey)
{
    fu_STR _0 {};
    return you && (_0 = (hey + you)) ? static_cast<fu_STR&&>(_0) : outer_nX7Qjguv("what#1"_fu, hey);
}

static fu_STR outer_nX7Qjguv(const fu_STR& arg, fu::view<char> hey)
{
    fu_STR _0 {};
    return (_0 = inner_WZrbH7MG((arg ? (" "_fu + arg) : fu_STR{}), hey)) ? static_cast<fu_STR&&>(_0) : inner_WZrbH7MG("what#2"_fu, hey);
}

static fu_STR test_vhnG1IeH(const fu_STR& x)
{
    fu_STR hey = "hey"_fu;
    return outer_nX7Qjguv(x, hey);
}

int fu_MAIN()
{
    return test_vhnG1IeH("you"_fu).size() - 7;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// DEAD_code

-----

        struct Target { modid!: i32; packed!: i32; };
        inline fn index(a: Target) a.packed;



        struct CurrentFn { using target: Target; };
        fn hello(c?: CurrentFn) c.index;
        fn main() hello;

-----

struct s_CurrentFn;
struct s_Target;

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int modid;
    int packed;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || target
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int hello_j48XboFY(const s_CurrentFn& c)
{
    const s_Target& a = c.target;
    return a.packed;
}

int fu_MAIN()
{
    return int(hello_j48XboFY(s_CurrentFn{}));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Target { modid!: i32; packed!: i32; };
        inline fn index(a: Target) a.packed;


-----

-----

        struct Target { modid!: i32; packed!: i32; };
        inline fn index(a: Target) a.packed;

        import _0;

        struct CurrentFn { using target: Target; };
        fn hello(c?: CurrentFn) c.index;
        fn main() hello;

-----

struct s_CurrentFn;
struct s_Target;

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int modid;
    int packed;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || target
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int hello_ZLttEDzA(const s_CurrentFn& c)
{
    const s_Target& a = c.target;
    return a.packed;
}

int fu_MAIN()
{
    return int(hello_ZLttEDzA(s_CurrentFn{}));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ID   { offset: i32;  };
        struct Data { items:  ID[]; };

        using fn Data(implicit all: Data[], nid: ID): Data {
            return all[nid.offset];
        }

        fn test(node: ID) {
            let init = node.items[0];
            return init.items.len;
        }

        fn main() {
            let implicit all =  [ Data([ ID(1)      ])
                                , Data([ ID, ID, ID ]) ];

            return 0.ID.test - 3;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_Data;
struct s_ID;

                                #ifndef DEF_s_ID
                                #define DEF_s_ID
struct s_ID
{
    int offset;
    explicit operator bool() const noexcept
    {
        return false
            || offset
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Data
                                #define DEF_s_Data
struct s_Data
{
    fu_VEC<s_ID> items;
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_Data& Data_hJSGOIxl(const s_ID& nid, fu::view<s_Data> all)
{
    return all[nid.offset];
}

static int test_vEF4Qiyl(const s_ID& node, fu::view<s_Data> all)
{
    const s_ID& init = Data_hJSGOIxl(node, all).items[0];
    return Data_hJSGOIxl(init, all).items.size();
}

int fu_MAIN()
{
    fu_VEC<s_Data> all = fu_VEC<s_Data> { fu::slate<2, s_Data> { s_Data { fu_VEC<s_ID> { fu::slate<1, s_ID> { s_ID { 1 } } } }, s_Data { fu_VEC<s_ID> { fu::slate<3, s_ID> { s_ID{}, s_ID{}, s_ID{} } } } } };
    return test_vEF4Qiyl(s_ID { 0 }, all) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Context
        {
            fuzzy: Map(string, string);
            files: string[];
        }

        fn resolveFile(
            implicit ctx: &mut Context,
            from: string, name: string): string
        {
            let path    = from ~ name;
            let cached  = ctx.fuzzy[path];
            if (cached)
                return cached == "" ? "" : cached;

            fn tryResolve(): string
            {
                let exists = file::size(path) >= 0;
                if (exists)
                    return path;

                return "";
            };

            let resolve = tryResolve();
            ctx.fuzzy[path] = resolve || "";
            return resolve;
        }

        pub fn resolveFile(
            implicit ctx: &mut Context,
            path: string): string
        {
            let fuzzy = path.find('');
            if (fuzzy > 0)
            {
                let from = path.slice(0, fuzzy);
                let name = path.slice(fuzzy + 1);
                if (from && name && !name.has(''))
                {
                    let res = resolveFile(:from, :name);
                    if (res)
                        return res;

                    // Tests have the files prepopulated,
                    //  we only pay the cost of lookup when about to fail compile.
                    let prepopulated = from ~ name;
                    if (ctx.files.has(prepopulated))
                        return prepopulated;
                }
            }

            return path;
        }

        fn main() {
            let implicit mut ctx: Context;
            return resolveFile("a").len - 1;
        }

-----
TODO: _0.fu @2:9:

[2m      | [0m
    2 |         [31;1mstruct[0m Context
[2m      |         {[0m
[2m      |             fuzzy: Map(string, string);[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mtype[0m [34;1mContext[0m

-----

        struct S { i: i32; };

        fn hello(ref s: S, w: i32) {
            infix fn |=(ref s: S, v: i32)
                s.i |= v << w;

            s |= 2;
        }

        fn main() {
            mut s = 1.S;
            s.hello(3);
            return s.i - 17;
        }

-----
_0.fu @6:17:

[2m      |         fn hello(ref s: S, w: i32) {[0m
[2m      |             infix fn |=(ref s: S, v: i32)[0m
    6 |                 [31;1ms[0m.i |= v << w;
[2m      | [0m
[2m      |             s |= 2;[0m

	Ambiguous callsite, matches multiple items in scope:

	[35;1marg[0m [34;1ms[0m from `|=` and 

	[35;1marg[0m [34;1ms[0m from `hello_n9NTIunl`, as seen from `|=`.

        Solving [35;1mfn[0m [34;1m|=[0m
                [35;1mfn[0m [34;1mhello_n9NTIunl[0m

-----

        struct S { i: i32; };

        fn hello(ref s: S, w: i32) {
            infix fn |=(shadow ref s: S, v: i32)
                s.i |= v << w;

            s |= 2;
        }

        fn main() {
            mut s = 1.S;
            s.hello(3);
            return s.i - 17;
        }

-----

struct s_S;

                                #ifndef DEF_s_S
                                #define DEF_s_S
struct s_S
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int& x7Cx3D(s_S& s, const int v, const int w)
{
    return (s.i |= (v << w));
}

static void hello_n9NTIunl(s_S& s, const int w)
{
    x7Cx3D(s, 2, w);
}

int fu_MAIN()
{
    s_S s = s_S { 1 };
    hello_n9NTIunl(s, 3);
    return s.i - 17;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn lex(src: string) {
            let end = src.len;
            mut idx = 0;

            fn err_str(idx1: i32) {
                while (idx < end && src[idx] == ' ') idx++;
                return src.slice(idx, idx1);
            }

            fn err(idx1_x2: i32) err_str(idx1_x2 /2);
            return err(end *2);
        }

        fn main() lex("    hello").len - 5;

-----

#include <fu/str.h>
#include <fu/vec/slice.h>

#ifndef FU_NO_FDEFs

static fu_STR err_str_Adpy1hUy(const int idx1, int& idx, const int end, const fu_STR& src)
{
    while ((idx < end) && (src[idx] == ' '))
        idx++;

    return fu::slice(src, idx, idx1);
}

static fu_STR err_GFXc0u8P(const int idx1_x2, int& idx, const int end, const fu_STR& src)
{
    return err_str_Adpy1hUy((idx1_x2 / 2), idx, end, src);
}

static fu_STR lex_vhnG1IeH(const fu_STR& src)
{
    const int end = src.size();
    int idx = 0;
    return err_GFXc0u8P((end * 2), idx, end, src);
}

int fu_MAIN()
{
    return lex_vhnG1IeH("    hello"_fu).size() - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn ZERO(implicit ref sum: i32, mut sources: string[]): void
        {
            // Fuzzing module splits.
            for (mut i = 0; i < sources.len; i++)
            {
                for (;;)
                {
                    ref src     = sources[i];

                    mut start0  = src.find("[split/]");
                    if (start0 < 0)
                        break;

                    let start00 = start0;
                    let start1  = start0 + 8;
                    while (start0 && src[start0 - 1] == ' ') start0--;

                    let moduleA = src.slice(0, start0);
                    let moduleB = src[start0, start00] ~ "import _" ~ i ~ ";" ~ src[start1, src.len];
                    let without = src[0, start0] ~ src[start1, src.len];

                    sources[i]  = without;
                    ZERO(:sources);

                    sources[i]  = moduleA;
                    sources.insert(i + 1, moduleB);
                }

                sum += sources[i].len;
            }
        }

        fn main() {
            let implicit mut sum: i32;

            ZERO( "AAAA|BB[split/]CC".split("|") );
            let expect = 4+2+2 + 4+2+2 + 10; // 10 = "import _0;"

            return sum - expect;
        }

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

void ZERO_8k2aBBbl(fu_VEC<fu_STR>&&, int&);

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

void ZERO_8k2aBBbl(fu_VEC<fu_STR>&& sources, int& sum)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i];
            int start0 = fu::lfind(src, "[split/]"_fu);
            if (start0 < 0)
                break;

            const int start00 = start0;
            const int start1 = (start0 + 8);
            while (start0 && (src[(start0 - 1)] == ' '))
                start0--;

            fu_STR moduleA = fu::slice(src, 0, start0);
            fu_STR moduleB = ((x7E((fu::get_view(src, start0, start00) + "import _"_fu), fu::i64dec(i)) + ";"_fu) + fu::get_view(src, start1, src.size()));
            fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
            sources.mutref(i) = without;
            ZERO_8k2aBBbl(fu_VEC<fu_STR>(sources), sum);
            sources.mutref(i) = moduleA;
            sources.insert((i + 1), fu_STR(moduleB));
        };
        sum += sources[i].size();
    };
}

                                #ifndef DEFt_split_FbJuAcQR
                                #define DEFt_split_FbJuAcQR
inline void split_FbJuAcQR(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_FbJuAcQR(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

int fu_MAIN()
{
    int sum {};
    ZERO_8k2aBBbl(split_KclJlPSO("AAAA|BB[split/]CC"_fu, "|"_fu), sum);
    const int expect = ((((((4 + 2) + 2) + 4) + 2) + 2) + 10);
    return sum - expect;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// NONTRIV_autocopy
// RELAX_respec

-----

        struct SolvedNode {
            bli: i32;
        };

        // --> [2] ... triggered the solve of this fn, ...
        fn SolvedNode(blah: string) {
            return SolvedNode(blah.len.NOT_PREPPED_YET);
        }

        // [1] During prep, this type annotation ...
        fn ARG_ANNOT_TRIGGERS_SOLVE(node: SolvedNode) {
            return node.bli + 2;
        }

        // --> --> [3] ... which couldnt yet see this fn (prep didnt reach here).
        fn NOT_PREPPED_YET(x: i32) {
            return x * 2;
        }

        fn main() {
            return ARG_ANNOT_TRIGGERS_SOLVE(SolvedNode("hello")) - (2*5+2);
        }

-----

#include <fu/str.h>
#include <fu/view.h>

struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int bli;
    explicit operator bool() const noexcept
    {
        return false
            || bli
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int NOT_PREPPED_YET_pZ8wRcaF(const int x)
{
    return x * 2;
}

static s_SolvedNode SolvedNode_vhnG1IeH(fu::view<char> blah)
{
    return s_SolvedNode { NOT_PREPPED_YET_pZ8wRcaF(blah.size()) };
}

static int ARG_ANNOT_TRIGGERS_SOLVE_vEF4Qiyl(const s_SolvedNode& node)
{
    return node.bli + 2;
}

int fu_MAIN()
{
    return ARG_ANNOT_TRIGGERS_SOLVE_vEF4Qiyl(SolvedNode_vhnG1IeH("hello"_fu)) - ((2 * 5) + 2);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct SolvedNode       { nodeidx: i32; };
        struct CurrentFn        { using out: SolvedNode; };

        struct Target           { index: i32; };
        struct SolvedNodeData   { target: Target; };
        struct Overload         { nodes: SolvedNodeData[]; };

        fn test(ref overloads: Overload[],
                ref _current_fn: CurrentFn)
        {
            using fn GET(target: Target) {
                let o = overloads[target.index];
                return o;
            }

            using fn SolvedNodeData(nid: SolvedNode) {
                let nodes = overloads[nid.nodeidx].nodes;
                return nodes[nid.nodeidx];
            }

            let current_fn  = _current_fn.target;               // <- this is a ref into overloads
            let debug_2     = current_fn && GET(current_fn);    // <- this is the perceived write to overloads
            return debug_2 && current_fn.index;                 // <- which invalidates this read
        }

        fn main() {
            mut _current_fn = CurrentFn(SolvedNode(0));
            mut overloads   = [ Overload([ SolvedNodeData(Target(0)) ]) ];

            return test(overloads, _current_fn);
        }

-----

#include <fu/default.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_CurrentFn;
struct s_Overload;
struct s_SolvedNode;
struct s_SolvedNodeData;
struct s_Target;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
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

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_SolvedNode out;
    explicit operator bool() const noexcept
    {
        return false
            || out
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
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

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_VEC<s_SolvedNodeData> nodes;
    explicit operator bool() const noexcept
    {
        return false
            || nodes
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_SolvedNodeData& SolvedNodeData_4URj7LvC(const s_SolvedNode& nid, fu::view<s_Overload> overloads)
{
    fu::view<s_SolvedNodeData> nodes = overloads[nid.nodeidx].nodes;
    return nodes[nid.nodeidx];
}

static const s_Overload& GET_9rvuV18M(const s_Target& target, fu::view<s_Overload> overloads)
{
    const s_Overload& o = overloads[target.index];
    return o;
}

static int test_ybpudXjU(fu::view<s_Overload> overloads, const s_CurrentFn& _current_fn)
{
    const s_Target& current_fn = SolvedNodeData_4URj7LvC(_current_fn.out, overloads).target;
    const s_Overload& debug_2 = (current_fn ? GET_9rvuV18M(current_fn, overloads) : (*(const s_Overload*)fu::NIL));
    return debug_2 ? current_fn.index : (*(const int*)fu::NIL);
}

int fu_MAIN()
{
    const s_CurrentFn _current_fn = s_CurrentFn { s_SolvedNode { 0 } };
    fu_VEC<s_Overload> overloads = fu_VEC<s_Overload> { fu::slate<1, s_Overload> { s_Overload { fu_VEC<s_SolvedNodeData> { fu::slate<1, s_SolvedNodeData> { s_SolvedNodeData { s_Target { 0 } } } } } } };
    return int(test_ybpudXjU(overloads, _current_fn));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct SolvedNode       { nodeidx: i32; };
        struct CurrentFn        { using out: SolvedNode; };

        struct Target           { index: i32; };
        struct SolvedNodeData   { target: Target; };
        struct Overload         { nodes: SolvedNodeData[]; };

        fn test(ref overloads: Overload[],
                ref _current_fn: CurrentFn)
        {
            using fn GET(target: Target) {
                if (target.index != 303) // Same as above, different setup.
                    return overloads[target.index];

                return []; // Also this fails to solve: cannot definit mutref
            }

            using fn SolvedNodeData(nid: SolvedNode) {
                return nid.nodeidx != 303 // Same as above, rewording as a logical.
                    && overloads[nid.nodeidx].nodes[nid.nodeidx];
            }

            let current_fn  = _current_fn.target;               // <- this is a ref into overloads
            let debug_2     = current_fn && GET(current_fn);    // <- this is the perceived write to overloads
            return debug_2 && current_fn.index;                 // <- which invalidates this read
        }

        fn main() {
            mut _current_fn = CurrentFn(SolvedNode(0));
            mut overloads   = [ Overload([ SolvedNodeData(Target(0)) ]) ];

            return test(overloads, _current_fn);
        }

-----

#include <fu/default.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_CurrentFn;
struct s_Overload;
struct s_SolvedNode;
struct s_SolvedNodeData;
struct s_Target;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
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

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_SolvedNode out;
    explicit operator bool() const noexcept
    {
        return false
            || out
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
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

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_VEC<s_SolvedNodeData> nodes;
    explicit operator bool() const noexcept
    {
        return false
            || nodes
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_SolvedNodeData& SolvedNodeData_4URj7LvC(const s_SolvedNode& nid, fu::view<s_Overload> overloads)
{
    return (nid.nodeidx != 303) ? overloads[nid.nodeidx].nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

static const s_Overload& GET_9rvuV18M(const s_Target& target, fu::view<s_Overload> overloads)
{
    if (target.index != 303)
        return overloads[target.index];

    return (*(const s_Overload*)fu::NIL);
}

static int test_ybpudXjU(fu::view<s_Overload> overloads, const s_CurrentFn& _current_fn)
{
    const s_Target& current_fn = SolvedNodeData_4URj7LvC(_current_fn.out, overloads).target;
    const s_Overload& debug_2 = (current_fn ? GET_9rvuV18M(current_fn, overloads) : (*(const s_Overload*)fu::NIL));
    return debug_2 ? current_fn.index : (*(const int*)fu::NIL);
}

int fu_MAIN()
{
    const s_CurrentFn _current_fn = s_CurrentFn { s_SolvedNode { 0 } };
    fu_VEC<s_Overload> overloads = fu_VEC<s_Overload> { fu::slate<1, s_Overload> { s_Overload { fu_VEC<s_SolvedNodeData> { fu::slate<1, s_SolvedNodeData> { s_SolvedNodeData { s_Target { 0 } } } } } } };
    return int(test_ybpudXjU(overloads, _current_fn));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Token {
            col: i32;
            line: i32;
            value: string;
        };

        fn parse(tokens: Token[]) {
            mut _idx = 0;
            mut _loc = 0;

            fn fail(mut reason = "") {
                let loc  = tokens[_loc];
                let here = tokens[_idx];
                if (!reason)
                    reason = "Unexpected '" ~ here.value ~ "'.";

                let l0 = loc.line;  let c0 = loc.col;
                let l1 = here.line; let c1 = here.col;

                let addr = l1 == l0
                    ? "@" ~ l1 ~ ":" ~ c1
                    : "@" ~ l0 ~ ":" ~ c0 ~ ".." ~ l1 ~ ":" ~ c1;

                return throw(addr ~ ":\n\t" ~ reason);
            }

            fn consume(value: [byte], err = "") {
                let token = tokens[_idx];
                if (token.value == value) {
                    _idx++;
                    return token;
                }

                return fail((err || "Expected") ~ " '" ~ value ~ "', got '" ~ token.value ~ "'.");
            }

            fn parseRoot() {
                let ret = consume("sof");
                _loc = _idx;
                return ret;
            }

            return parseRoot();
        }

        fn main() {
            return parse([ Token(1, 1, "sof") ]).value.len - 3;
        }

-----

#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Token;

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    int col;
    int line;
    fu_STR value;
    explicit operator bool() const noexcept
    {
        return false
            || col
            || line
            || value
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_EUsRUW2Z(fu_STR&& reason, fu::view<s_Token> tokens, const int _loc, const int _idx)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected '"_fu + here.value) + "'."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? x7E((x7E("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E((x7E((x7E((x7E("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    fu::fail(((addr + ":\n\t"_fu) + reason));
}

static const s_Token& consume_ENj1fIAT(fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, const int _loc)
{
    const s_Token& token = tokens[_idx];
    if (token.value == value)
    {
        _idx++;
        return token;
    };
    fail_EUsRUW2Z(((((((err ? fu_STR(err) : "Expected"_fu) + " '"_fu) + value) + "', got '"_fu) + token.value) + "'."_fu), tokens, _loc, _idx);
}

static const s_Token& parseRoot_YRVICTlM(fu::view<s_Token> tokens, int& _idx, int& _loc)
{
    const s_Token& ret = consume_ENj1fIAT("sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, _loc);
    _loc = _idx;
    return ret;
}

static const s_Token& parse_hoDN8Lq5(fu::view<s_Token> tokens)
{
    int _idx = 0;
    int _loc = 0;
    return parseRoot_YRVICTlM(tokens, _idx, _loc);
}

int fu_MAIN()
{
    return parse_hoDN8Lq5((fu::slate<1, s_Token> { s_Token { 1, 1, "sof"_fu } })).value.size() - 3;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn CallerNode(mut t?: i32, arr?: i32[])
        {
            for (mut i = 0; i < arr.len; i++) {
                return CallerNode(arr[i]);
                //     ^^^^^^^^^^
                // fn CallerNode: Arg #1, arr not assignable to host_arg:
                //      expect: []+252i32: ref copy resize
                //      actual: []+252i32: ref
            }

            return t;
        }

        fn main() = CallerNode();

-----

#include <fu/view.h>

static int CallerNode_QzWGLBJe(int, fu::view<int>);

#ifndef FU_NO_FDEFs

static int CallerNode_QzWGLBJe(/*MOV*/ const int t, fu::view<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        return CallerNode_QzWGLBJe(int(arr[i]), fu::view<int>{});

    return int(t);
}

int fu_MAIN()
{
    return CallerNode_QzWGLBJe(0, fu::view<int>{});
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        struct Target       { index: i32; };
        struct SolvedNode   { target: Target; args: SolvedNode[]; };

        fn CallerNode(
            mut target: Target,
            mut args: SolvedNode[] = [],
            reorder?: i32[],
            conversions?: Target[][]): SolvedNode
        {
            if (reorder) {
                mut args_out: SolvedNode[]; args_out.resize(reorder.len);
                for (mut i = 0; i < reorder.len; i++) {
                    let idx = reorder[i];
                    if (idx >= 0)
                        args_out[i] = args[idx];
                }

                args = args_out;
            }

            for (mut argIdx = 0; argIdx < conversions.len; argIdx++) {
                let conversion = conversions[argIdx];
                for (mut i = 0; i < conversion.len; i++) {
                    args[argIdx] = CallerNode(conversion[i]);
                    //             ^^^^^^^^^^
                    // fn CallerNode: Arg #2, reorder not assignable to host_arg:
                    //      expect: []+252i32: ref copy resize
                    //      actual: []+252i32: ref copy
                }
            }

            return SolvedNode(:target, :args);
        }

        fn main() {
            return CallerNode(Target(0)).target.index;
        }

-----

#include <fu/default.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_SolvedNode;
struct s_Target;

static s_SolvedNode CallerNode_DLS4cIy7(s_Target&&, fu_VEC<s_SolvedNode>&&, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>);

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
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

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Target target;
    fu_VEC<s_SolvedNode> args;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || target
            || args
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_SolvedNode CallerNode_DLS4cIy7(s_Target&& target, fu_VEC<s_SolvedNode>&& args, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions)
{
    if (reorder)
    {
        fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = args[idx];

        };
        args = args_out;
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        for (int i = 0; i < conversion.size(); i++)
            args.mutref(argIdx) = CallerNode_DLS4cIy7(s_Target(conversion[i]), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{});

    };
    return s_SolvedNode { s_Target(target), fu_VEC<s_SolvedNode>(args) };
}

int fu_MAIN()
{
    return CallerNode_DLS4cIy7(s_Target { 0 }, fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}).target.index;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        fn qSTACK(x: i32) {
            let rec = x & 1 && "rec ";
            let via = !rec && qSTACK(x / 2);
            return "\n" ~ rec ~ "at #" ~ x ~ via;
        }

        fn main() qSTACK(2).len - 2 - 4 - 8 - 2;

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

static fu_STR qSTACK_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR qSTACK_pZ8wRcaF(const int x)
{
    fu_STR rec = ((x & 1) ? "rec "_fu : fu_STR{});
    fu_STR via = (!rec ? qSTACK_pZ8wRcaF((x / 2)) : fu_STR{});
    return x7E((("\n"_fu + rec) + "at #"_fu), fu::i64dec(x)) + via;
}

int fu_MAIN()
{
    return (((qSTACK_pZ8wRcaF(2).size() - 2) - 4) - 8) - 2;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn path_relative(from: string, to: string): string {
            let min = from.len < to.len ? from.len : to.len;

            mut same = 0;
            for (mut i = 0; i < min; i++) {
                let a = from[i];
                let b = to[i];

                if (b != a)
                    break;

                if (b == '/')
                    same = i + 1;
            }

            mut res: string;
            for (mut i = same; i < from.len; i++)
                if (from[i] == '/')
                    res ~= "../";

            res ~= to.slice(same);
            return res;
        }

        fn main() {
            let from    = "/a/b/c";
            let to      = "/a/e/f";
            let rel     = path_relative(:from, :to);

            return rel == "../e/f" ? 0 : 1;
        }

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_STR path_relative_Oh8CgYG9(fu::view<char> from, const fu_STR& to)
{
    const int min = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min; i++)
    {
        const char a = from[i];
        const char b = to[i];
        if (b != a)
            break;

        if (b == '/')
            same = (i + 1);

    };
    /*MOV*/ fu_STR res {};
    for (int i_1 = same; i_1 < from.size(); i_1++)
    {
        if (from[i_1] == '/')
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return /*NRVO*/ res;
}

int fu_MAIN()
{
    fu_STR from = "/a/b/c"_fu;
    fu_STR to = "/a/e/f"_fu;
    fu_STR rel = path_relative_Oh8CgYG9(from, to);
    return ((rel == "../e/f"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn test(ref a: i32[]) {
            if ((a[0] + a[2]) & 1) {
                shadow ref a = a[0, 2];
                return a;
            }
            else {
                shadow ref a = a[2, 4];
                return a;
            }
        }

        inline fn sum(ref a: [i32]) {
            mut sum = 0;
            for (mut i = 0; i < a.len; i++) sum += a[i];
            for (mut i = 0; i < a.len; i++) a[i] = sum;
            return a;
        }

        fn main() {
            mut a = [ 1, 2, 3, 4 ];
            return sum(test(a))[0] - 7;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<4, int> { 1, 2, 3, 4 } };
    fu::view<int> BL_1_v {};
    return (__extension__ (
    {
        fu::view_mut<int> BL_2_v {};
        fu::view_mut<int> a_1 = (__extension__ (
        { {
            if ((a[0] + a[2]) & 1)
            {
                fu::view_mut<int> a_2 = fu::get_view_mut(a, 0, 2);
                { BL_2_v = a_2; goto BL_2; };
            }
            else
            {
                fu::view_mut<int> a_2 = fu::get_view_mut(a, 2, 4);
                { BL_2_v = a_2; goto BL_2; };
            };
          } BL_2:;
        (void)0;}), static_cast<fu::view_mut<int>&&>(BL_2_v));
        int sum = 0;
        for (int i = 0; i < a_1.size(); i++)
            sum += a_1[i];

        for (int i_1 = 0; i_1 < a_1.size(); i_1++)
            a_1.mutref(i_1) = sum;

        BL_1_v = (a_1);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[0] - 7;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code
// RELAX_respec

-----

        inline fn test(ref a: i32[], ref b: i32[]) {
            if ((a[0] + b[0]) & 1)
                return a;

            return b;
        }

        inline fn sum(ref a: i32[]) {
            mut sum = 0;
            for (mut i = 0; i < a.len; i++) sum += a[i];
            a.shrink(1);
            a[0] = sum;
            return a;
        }

        fn main() {
            mut a = [ 1, 2 ];
            mut b = [ 3, 4 ];
            return sum(test(a, b))[0] - 7;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<2, int> { 3, 4 } };
    fu::view<int> BL_1_v {};
    return (__extension__ (
    {
        fu_VEC<int>* BL_2_v;
        fu_VEC<int>& a_1 = (__extension__ (
        { {
            if ((a[0] + b[0]) & 1)
                { BL_2_v = &(a); goto BL_2; };

            BL_2_v = &(b);
          } BL_2:;
        (void)0;}), *BL_2_v);
        int sum = 0;
        for (int i = 0; i < a_1.size(); i++)
            sum += a_1[i];

        a_1.shrink(1);
        a_1.mutref(0) = sum;
        BL_1_v = (a_1);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[0] - 7;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        inline fn grow_if_oob(ref a: $T[], i: i32): &mut $T {
            if (a.len <= i)
                a.grow(i + 1);

            return a[i];
        }

        inline fn hey(ref arr: i32[], a: i32) {
            if (a & 1) {
                arr.grow_if_oob(a)++;

            }

            return arr;
        }

        fn main() {
            mut a = [ 1 ];
            return a[0] - hey(a, 1)[1];
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int _0 {};
    fu::view<int> BL_1_v {};
    return (_0 = int(a[0]), (int(_0) - (__extension__ (
    {
        const int a_1 = 1;
        if (a_1 & 1)
            ((void)void(), (void)void(), (void)((a.size() <= a_1) && (a.grow((a_1 + 1)), 0)), a.mutref(a_1))++;

        BL_1_v = (a);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[1]));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        inline fn grow_if_oob(ref a: $T[], i: i32): &mut $T {
            if (a.len <= i)
                a.grow(i + 1);

            return a[i];
        }

        inline fn hey(ref arr: i32[], a: i32) {
            if (a & 1) {
                arr.grow_if_oob(a)++;

                return arr[0, a + 1];

            }

            return arr;
        }

        fn main() {
            mut a = [ 1 ];
            return a[0] - hey(a, 1)[1];
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int _0 {};
    fu::view<int> BL_1_v {};
    return (_0 = int(a[0]), (int(_0) - (__extension__ (
    { {
        const int a_1 = 1;
        if (a_1 & 1)
        {
            ((void)void(), (void)void(), (void)((a.size() <= a_1) && (a.grow((a_1 + 1)), 0)), a.mutref(a_1))++;
            { BL_1_v = fu::get_view(a, 0, (a_1 + 1)); goto BL_1; };
        };
        BL_1_v = (a);
      } BL_1:;
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[1]));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn serializeType(type: string, debug: string)
            debug ~ ":" ~ type;

        fn mangleArguments(args: [$T]): string {
            mut mangle = "";
            for (mut i = 0; i < args.len; i++) {
                if (i) mangle ~= ",";
                mangle ~= serializeType(args[i], debug: "M");
            }
            return mangle;
        }

        fn trySpecialize(args: string[], ref args_mangled: string) {
            args_mangled ||= mangleArguments(args);
            return args_mangled.len;
        }

        fn main() {
            mut args_mangled: string;
            return trySpecialize([ "a", "b" ], args_mangled) - 7;
        }

-----

#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_STR serializeType_Oh8CgYG9(fu::view<char> type, fu::view<char> debug)
{
    return (debug + ":"_fu) + type;
}

inline static fu_STR mangleArguments_wjZjF8su(fu::view<fu_STR> args)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_Oh8CgYG9(args[i], "M"_fu);
    };
    return /*NRVO*/ mangle;
}

static int trySpecialize_6GSZADm6(fu::view<fu_STR> args, fu_STR& args_mangled)
{

    {
        if (!(args_mangled))
            args_mangled = mangleArguments_wjZjF8su(args);

    };
    return args_mangled.size();
}

int fu_MAIN()
{
    fu_STR args_mangled {};
    return trySpecialize_6GSZADm6((fu::slate<2, fu_STR> { "a"_fu, "b"_fu }), args_mangled) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        let EMIT_CPP = 1 << 0;
        let EMIT_OBJ = 1 << 1;
        let EMIT_BIN = 1 << 2;

        struct Cmd { self: string; options: i32 };

        inline fn unlessHasExt(str: string) {
            let idx = str.find('.');
            if (idx > 0)
                return [];

            return str;
        }

        fn parseOptions(argv: string[]) {
            mut idx = 0;
            fn next(): string {
                let i = idx++;
                if (i < argv.len) return argv[i];
                return "";
            }

            let self = next();
            if (argv.len == 1) // Exit 0 on no command, else we fail build-checks.
                return [];

            mut options: i32;
            mut val = next();
            while (val.len > 1 && val[0] == '-') {
                mut opt = val;
                if (opt[1] != '-') {
                    opt = [ opt[1] ];
                    val = '-' ~ val.slice(2);
                    if (val == "-")
                        val = next();
                }
                else
                    val = next();

                fn option(short: string, o: i32) {
                    if (opt == short) {
                        options |= o;
                        opt = "";
                    }
                }

                option("c", EMIT_CPP);
                option("o", EMIT_OBJ);
                option("b", EMIT_BIN);

                if (opt)
                    throw("Unknown option: '" ~ opt ~ "'.");
            }

            return Cmd(unlessHasExt(self), options);
        }

        fn main() = parseOptions([ "./hey", "-c", "-b" ]).options - (EMIT_CPP | EMIT_BIN);

-----

#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

struct s_Cmd;

                                #ifndef DEF_s_Cmd
                                #define DEF_s_Cmd
struct s_Cmd
{
    fu_STR self;
    int options;
    explicit operator bool() const noexcept
    {
        return false
            || self
            || options
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEF_EMIT_CPP
                                #define DEF_EMIT_CPP
inline constexpr int EMIT_CPP = (1 << 0);
                                #endif

                                #ifndef DEF_EMIT_OBJ
                                #define DEF_EMIT_OBJ
inline constexpr int EMIT_OBJ = (1 << 1);
                                #endif

                                #ifndef DEF_EMIT_BIN
                                #define DEF_EMIT_BIN
inline constexpr int EMIT_BIN = (1 << 2);
                                #endif

static const fu_STR& next_fyc32rLE(int& idx, fu::view<fu_STR> argv)
{
    const int i = idx++;
    if (i < argv.size())
        return argv[i];

    return (*(const fu_STR*)fu::NIL);
}

static void option_ft3bLtDd(fu::view<char> sHort, const int o, fu_STR& opt, int& options)
{
    if (opt == sHort)
    {
        options |= o;
        opt = fu_STR{};
    };
}

                                #ifndef DEFt_find_3yRdKyg4
                                #define DEFt_find_3yRdKyg4
inline int find_3yRdKyg4(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static s_Cmd parseOptions_wjZjF8su(fu::view<fu_STR> argv)
{
    int idx = 0;
    const fu_STR& self = next_fyc32rLE(idx, argv);
    if (argv.size() == 1)
        return s_Cmd{};

    int options {};
    fu_STR val { next_fyc32rLE(idx, argv) };
    while ((val.size() > 1) && (val[0] == '-'))
    {
        fu_STR opt { val };
        if (opt[1] != '-')
        {
            opt = fu_STR { fu::slate<1, char> { char(opt[1]) } };
            val = ('-' + fu::slice(val, 2));
            if (val == "-"_fu)
                val = next_fyc32rLE(idx, argv);

        }
        else
            val = next_fyc32rLE(idx, argv);

        option_ft3bLtDd("c"_fu, EMIT_CPP, opt, options);
        option_ft3bLtDd("o"_fu, EMIT_OBJ, opt, options);
        option_ft3bLtDd("b"_fu, EMIT_BIN, opt, options);
        if (opt)
            fu::fail((("Unknown option: '"_fu + opt) + "'."_fu));

    };
    const fu_STR* BL_8_v;
    return s_Cmd { fu_STR((__extension__ (
    { {
        const int idx_1 = find_3yRdKyg4(self, '.');
        if (idx_1 > 0)
            { BL_8_v = &((*(const fu_STR*)fu::NIL)); goto BL_8; };

        BL_8_v = &(self);
      } BL_8:;
    (void)0;}), *BL_8_v)), int(options) };
}

int fu_MAIN()
{
    return parseOptions_wjZjF8su((fu::slate<3, fu_STR> { "./hey"_fu, "-c"_fu, "-b"_fu })).options - (EMIT_CPP | EMIT_BIN);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn withPrefixed(b: byte, view: [byte], fn) {
            mut tmp: string;
            return fn(view.len > 1 ? view : tmp = b ~ view);
        }

        fn main() withPrefixed('a', "b"): |ab| return ab.len - 2;

-----

#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const char b = 'a';
    fu_STR view = "b"_fu;
    fu_STR tmp {};
    fu::view<char> ab = ((view.size() > 1) ? view : (tmp = (b + view)));
    return ab.size() - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn tryIntersect(left: [byte], right: [byte], withMatch) {
            let l =  left[0];
            let r = right[0];
            let lq = l > '0' && l < '8';
            let rq = r > '0' && r < '8';

            if (left[lq && 1, left.len] != right[rq && 1, right.len])
                return false;

            let ll = lq && l.i32 - '0'.i32;
            let rr = rq && r.i32 - '0'.i32;
            let qq = ll | rr;


            return withMatch(qq == ll ? left
                           : qq == rr ? right
                           : qq.byte ~ left[lq && 1, left.len],

                left?:  qq == ll,
                right?: qq == rr);
        }

        fn main() {
            tryIntersect("7a012345678900123456789001234567890"
                       , "5a012345678900123456789001234567890"): |m, left!|
            {
                return m == "7a012345678900123456789001234567890" && left ? 0 : 100;
            }

            return 101;
        }

-----

#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    { {
        fu_STR left = "7a012345678900123456789001234567890"_fu;
        fu_STR right = "5a012345678900123456789001234567890"_fu;
        const char l = left[0];
        const char r = right[0];
        const bool lq = ((l > '0') && (l < '8'));
        const bool rq = ((r > '0') && (r < '8'));
        if (fu::get_view(left, (lq ? 1 : int{}), left.size()) != fu::get_view(right, (rq ? 1 : int{}), right.size()))
            { /* TODO FIX UNUSED VAL false */; goto BL_1; };

        const int ll = (lq ? (int(fu::u8(l)) - int(fu::u8('0'))) : int{});
        const int rr = (rq ? (int(fu::u8(r)) - int(fu::u8('0'))) : int{});
        const int qq = (ll | rr);
        fu_STR m = ((qq == ll) ? fu_STR(left) : ((qq == rr) ? fu_STR(right) : (char(qq) + fu::get_view(left, (lq ? 1 : int{}), left.size()))));
        const bool left_1 = (qq == ll);
        return (((m == "7a012345678900123456789001234567890"_fu) && left_1) ? 0 : 100);
      } BL_1:;
    };
    return 101;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn tryIntersect(left: [byte], right: [byte], withMatch) {
            let l =  left[0];
            let r = right[0];
            let lq = l > '0' && l < '8';
            let rq = r > '0' && r < '8';

            if (left[lq && 1, left.len] != right[rq && 1, right.len])
                return false;

            let ll = lq && l.i32 - '0'.i32;
            let rr = rq && r.i32 - '0'.i32;
            let qq = ll | rr;


            mut tmp: string;
            return withMatch(qq == ll ? left
                           : qq == rr ? right
                           : tmp = (qq.byte ~ left[lq && 1, left.len]),

                left?:  qq == ll,
                right?: qq == rr);
        }

        fn main() {
            tryIntersect("7a012345678900123456789001234567890"
                       , "5a012345678900123456789001234567890"): |m, left!|
            {
                return m == "7a012345678900123456789001234567890" && left ? 0 : 100;
            }

            return 101;
        }

-----

#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    { {
        fu_STR left = "7a012345678900123456789001234567890"_fu;
        fu_STR right = "5a012345678900123456789001234567890"_fu;
        const char l = left[0];
        const char r = right[0];
        const bool lq = ((l > '0') && (l < '8'));
        const bool rq = ((r > '0') && (r < '8'));
        if (fu::get_view(left, (lq ? 1 : int{}), left.size()) != fu::get_view(right, (rq ? 1 : int{}), right.size()))
            { /* TODO FIX UNUSED VAL false */; goto BL_1; };

        const int ll = (lq ? (int(fu::u8(l)) - int(fu::u8('0'))) : int{});
        const int rr = (rq ? (int(fu::u8(r)) - int(fu::u8('0'))) : int{});
        const int qq = (ll | rr);
        fu_STR tmp {};
        fu::view<char> m = ((qq == ll) ? left : ((qq == rr) ? right : (tmp = (char(qq) + fu::get_view(left, (lq ? 1 : int{}), left.size())))));
        const bool left_1 = (qq == ll);
        return (((m == "7a012345678900123456789001234567890"_fu) && left_1) ? 0 : 100);
      } BL_1:;
    };
    return 101;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn tryIntersect(left: [byte], right: [byte], ifLeft, ifNotLeft) {
            let l =  left[0];
            let r = right[0];
            let lq = l > '0' && l < '8';
            let rq = r > '0' && r < '8';

            if (left[lq && 1, left.len] != right[rq && 1, right.len])
                return false;

            let ll = lq && l.i32 - '0'.i32;
            let rr = rq && r.i32 - '0'.i32;
            let qq = ll | rr;

            if (qq == ll)   ifLeft();
            else            ifNotLeft(qq == rr ? right : right[rq && 1, right.len]);

            return true;
        }

        fn TP_upsert(ref typeParams!: string, id!: string, canon: string) {
            let start = TP_get(:typeParams, :id);
            if (start < 0) {
                typeParams ~= id;
                typeParams ~= canon;
                typeParams ~= '	';
                return true;
            }

            let end = typeParams.find('	', :start);
            return tryIntersect(typeParams[start, end], canon,
                ifLeft: ||
                {
                    return true;
                },                  // <- Lint complained about the nested curlies here ...
                ifNotLeft: |inter|
                {
                    typeParams.splice(start, end - start, inter);
                    return true;
                }); // <-  ... and here.

            return false;
        }

        fn main() {
            mut typeParams = "$T 3hey	";
            return TP_upsert(:typeParams, "$T", "4hey")
                && typeParams == "$T 7hey	" ? 0 : 101;
        }

-----
TODO: _0.fu @35:18:

[2m      |                 {[0m
[2m      |                     return true;[0m
   35 |                 }[31;1m,[0m                  // <- Lint complained about the nested curlies here ...
[2m      |                 ifNotLeft: |inter|[0m
[2m      |                 {[0m

	Inconsistent indent at closing `}`: expected 12, got 16. Block starts on line 33.

-----

        let a = 7;
        let b = a && 3;
        return b - 3;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = 7;
    const int b = (a ? 3 : int{});
    return b - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct S { i: i32; }

        let a = S(0);
        let b = S(3);

        return a.i
            || (b || S(4)).i * 2 - (a || S(6)).i
            && throw("woot");

-----

#include <fu/never.h>
#include <fu/str.h>

struct s_S;

                                #ifndef DEF_s_S
                                #define DEF_s_S
struct s_S
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_S a = s_S { 0 };
    const s_S b = s_S { 3 };
    int _0 {};
    return a.i ? int(a.i) : (!(_0 = (((b ? s_S(b) : s_S { 4 }).i * 2) - (a ? s_S(a) : s_S { 6 }).i)) ? _0 : fu::fail("woot"_fu));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct TrueStory { kind: string; value: string; };

        mut specialized = TrueStory(kind: "fn", value: "val");

        specialized.kind == "fn" && specialized.value || throw("nope");

        let v: &mut string = specialized.kind == "fn"
                          && specialized.value
                          || throw("nope");
        v ~= "ue";

        return specialized.value == "value" ? 0 : 1;

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>

struct s_TrueStory;

                                #ifndef DEF_s_TrueStory
                                #define DEF_s_TrueStory
struct s_TrueStory
{
    fu_STR kind;
    fu_STR value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || value
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_TrueStory specialized = s_TrueStory { "fn"_fu, "val"_fu };
    if (!((specialized.kind == "fn"_fu) && specialized.value))
        fu::fail("nope"_fu);

    fu_STR& v = ((specialized.kind == "fn"_fu) && specialized.value ? specialized.value : fu::fail("nope"_fu));
    v += "ue"_fu;
    return ((specialized.value == "value"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Token {
            value: string;
        };

        fn consume(): Token {
            return Token("hey");
        };

        fn main(): i32 {
            let a = 3;
            let v = a && consume().value;
            return v.len - a;
        };

-----

#include <fu/str.h>

struct s_Token;

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    fu_STR value;
    explicit operator bool() const noexcept
    {
        return false
            || value
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Token consume_H9fhQUVP()
{
    return s_Token { "hey"_fu };
}

int fu_MAIN()
{
    const int a = 3;
    fu_STR v = (a ? consume_H9fhQUVP().value : fu_STR{});
    return v.size() - a;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ScopeIdx { raw: i32; };

        fn thing(x: i32) x;             
        mut _return_scope: ScopeIdx;

        fn hey(x: i32) {
            let scope0 = thing(x);
            _return_scope = scope0; //overload
            return _return_scope.raw;
        }

        return hey(0);

-----
_0.fu @12:27:

[2m      |         fn hey(x: i32) {[0m
[2m      |             let scope0 = thing(x);[0m
   12 |             _return_scope [31;1m=[0m scope0; //overload
[2m      |             return _return_scope.raw;[0m
[2m      |         }[0m

	Bad call to [34;1m=[0m: 

	[35;1mtemplate[0m [34;1m=[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mhey_TEVVqwQT[0m
                [35;1mfn[0m [34;1mmain[0m

-----

        struct ScopeIdx { raw: i32; };

        fn thing(x: i32) ScopeIdx(x);   
        mut _return_scope: ScopeIdx;

        fn hey(x: i32) {
            let scope0 = thing(x);
            _return_scope = scope0; //overload
            return _return_scope.raw;
        }

        return hey(0);

-----

struct s_ScopeIdx;

                                #ifndef DEF_s_ScopeIdx
                                #define DEF_s_ScopeIdx
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
                                #endif

#ifndef FU_NO_FDEFs

static s_ScopeIdx thing_A1oHZf5p(const int x)
{
    return s_ScopeIdx { int(x) };
}

static int& hey_TEVVqwQT(const int x, s_ScopeIdx& _return_scope)
{
    const s_ScopeIdx scope0 = thing_A1oHZf5p(x);
    _return_scope = scope0;
    return _return_scope.raw;
}

int fu_MAIN()
{
    /*MOV*/ s_ScopeIdx _return_scope {};
    return int(hey_TEVVqwQT(0, _return_scope));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn maybe_empty(N: i32) {
            mut res: string[];
            for (mut i = 0; i < N; i++) res ~= [ "world!" ]; // same as below but wrapped
            return res;
        }
        fn main() {
            mut arr = [ "Hello" ];
            for (mut i = 0; i < 2; i++) arr ~= maybe_empty(i); // will append empty
            return arr.join(" ") == "Hello world!" ? 0 : 1;
        }

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_VEC<fu_STR> maybe_empty_pZ8wRcaF(const int N)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    for (int i = 0; i < N; i++)
        res += (fu::slate<1, fu_STR> { "world!"_fu });

    return /*NRVO*/ res;
}

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
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

int fu_MAIN()
{
    fu_VEC<fu_STR> arr = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "Hello"_fu } };
    for (int i = 0; i < 2; i++)
        arr += maybe_empty_pZ8wRcaF(i);

    return ((join_hXY7eLHr(arr, " "_fu) == "Hello world!"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn maybe_empty(N: i32) {
            mut res: string[];
            for (mut i = 0; i < N; i++) res ~= "world!"; // cpp template issue here
            return res;
        }
        fn main() {
            mut arr = [ "Hello" ];
            for (mut i = 0; i < 2; i++) arr ~= maybe_empty(i); // will append empty
            return arr.join(" ") == "Hello world!" ? 0 : 1;
        }

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_VEC<fu_STR> maybe_empty_pZ8wRcaF(const int N)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    for (int i = 0; i < N; i++)
        res += "world!"_fu;

    return /*NRVO*/ res;
}

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
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

int fu_MAIN()
{
    fu_VEC<fu_STR> arr = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "Hello"_fu } };
    for (int i = 0; i < 2; i++)
        arr += maybe_empty_pZ8wRcaF(i);

    return ((join_hXY7eLHr(arr, " "_fu) == "Hello world!"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn main() {
            mut _info = "abc";

            pure fn fail(mut reason: string = "") {
                ref info = _info[0]; // <- notice the ref, has to relax away
                reason ~= info && info.i32;
                return reason;
            }

            return fail.len - 2; // 'a' is 97, "97".len is 2.
        }

-----

#include <fu/decstr.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7Ex3D_OaOrPOXm
                                #define DEFt_x7Ex3D_OaOrPOXm
inline fu_STR& x7Ex3D_OaOrPOXm(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu_STR fail_PdEGHMBt(/*MOV*/ fu_STR&& reason, fu::view<char> _info)
{
    const char info = _info[0];
    x7Ex3D_OaOrPOXm(reason, fu::i64dec((info ? int(fu::u8(info)) : int{})));
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_STR _info = "abc"_fu;
    return fail_PdEGHMBt(fu_STR{}, _info).size() - 2;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        let q_mutref = 1;
        pub let RELAX_mutref_only = q_mutref;
        pub fn what(relax_mask: i32) relax_mask -1;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline constexpr int q_mutref = 1;
                                #endif

                                #ifndef DEF_RELAX_mutref_only
                                #define DEF_RELAX_mutref_only
extern const int RELAX_mutref_only = q_mutref;
                                #endif

int what_pZ8wRcaF(const int relax_mask)
{
    return relax_mask - 1;
}

#endif

-----

        let q_mutref = 1;
        pub let RELAX_mutref_only = q_mutref;
        pub fn what(relax_mask: i32) relax_mask -1;

        import _0;
        fn main() what(RELAX_mutref_only);

-----

int what_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

                                #ifndef DEF_RELAX_mutref_only
                                #define DEF_RELAX_mutref_only
extern const int RELAX_mutref_only;
                                #endif

int fu_MAIN()
{
    return what_pZ8wRcaF(RELAX_mutref_only);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn pairs(a: Map($K, $V), fn) {
            let k = a.keys;
            let v = a.values;
            for (mut i = 0; i < k.len; i++)
                fn(k[i], v[i]);
        }

        fn main() {
            mut map: Map(i32, i32);
            map[1] = 2;
            map[3] = 4;

            mut sum = 0;
            map.pairs(|k, v| sum += k + v * 100);
            return sum - 604;
        }

-----
TODO: _0.fu @10:13:

[2m      | [0m
[2m      |         fn main() {[0m
   10 |             [31;1mmut[0m map: Map(i32, i32);
[2m      |             map[1] = 2;[0m
[2m      |             map[3] = 4;[0m

	Bad call to [34;1mMap[0m: [34;1mMap[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            try         { return 0; }
            catch (e)   { return e == "x=2: even!" ? 11 : 22; }
        }

-----

#include <fu/str.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{

    try
    {
        return 0;
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return ((e == "x=2: even!"_fu) ? 11 : 22);
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn fail(str: string)
            throw(str ~ "!");

        fn test(x: i32)
        {
            // We want to override fail but
            //  we want to call it within the override,
            //   so we can do this i guess?
            //
            shadow let fail = |mut str: string| {
                str = "x=" ~ x ~ ": " ~ str;
                fail(str);
            };

            return x & 1 || fail("even");
        }

        fn main() {
            try {
                return test(2);
            }
            catch (e) {

                shadow let e = "hello " ~ e;
                return e == "hello x=2: even!" ? 0 : 10;

            }
        }

-----

#include <fu/decstr.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_vhnG1IeH(fu::view<char> str)
{
    fu::fail((str + "!"_fu));
}

static int test_pZ8wRcaF(const int x)
{
    int _0 {};
    fu::never BL_1_v {};
    return (_0 = (x & 1)) ? _0 : (__extension__ (
    {
        fu_STR str = "even"_fu;
        str = ((x7E("x="_fu, fu::i64dec(x)) + ": "_fu) + str);
        fail_vhnG1IeH(str);
    (void)0;}), static_cast<fu::never&&>(BL_1_v));
}

int fu_MAIN()
{

    try
    {
        return test_pZ8wRcaF(2);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        fu_STR e_1 = ("hello "_fu + e);
        return ((e_1 == "hello x=2: even!"_fu) ? 0 : 10);
    }
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn fail(str: string)
            throw(str ~ "!");

        fn test(x: i32)
        {
            // We want to override fail but
            //  we want to call it within the override,
            //   so we can do this i guess?
            //
            shadow let fail = |mut str: string| {
                str = "x=" ~ x ~ ": " ~ str;
                fail(str);
            };

            return x & 1 || fail("even");
        }

        fn main() {
            try {
                return test(2);
            }
            catch (e) {

                return e == "x=2: even!" ? 0 : 10;

            }
        }

-----

#include <fu/decstr.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_vhnG1IeH(fu::view<char> str)
{
    fu::fail((str + "!"_fu));
}

static int test_pZ8wRcaF(const int x)
{
    int _0 {};
    fu::never BL_1_v {};
    return (_0 = (x & 1)) ? _0 : (__extension__ (
    {
        fu_STR str = "even"_fu;
        str = ((x7E("x="_fu, fu::i64dec(x)) + ": "_fu) + str);
        fail_vhnG1IeH(str);
    (void)0;}), static_cast<fu::never&&>(BL_1_v));
}

int fu_MAIN()
{

    try
    {
        return test_pZ8wRcaF(2);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return ((e == "x=2: even!"_fu) ? 0 : 10);
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn ARR_LAST(a: $T[])
            case ($a -> &mut $T[]): &mut $T a[a.len - 1];
            case ($a -> &    $T[]): &    $T a[a.len - 1];

        fn main()
        {
            let a = [1];
            mut b = [2];

            b.ARR_LAST += a.ARR_LAST;
            return b.ARR_LAST - 3;
        };

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int& ARR_LAST_5UkPjt2z(fu_VEC<int>& a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_WgWjr9S0(fu::view<int> a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 2 } };
    ARR_LAST_5UkPjt2z(b) += ARR_LAST_WgWjr9S0(a);
    return ARR_LAST_5UkPjt2z(b) - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn ARR_LAST(a: $T[])
            case ($a -> &mut $T[]): &mut $T a[a.len - 1];
            case ($a -> &    $T[]): &    $T a[a.len - 1];

        let a = [1];
        mut b = [2];

        b.ARR_LAST += a.ARR_LAST;
        return b.ARR_LAST - 3;

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int& ARR_LAST_LEpzfIpW(fu_VEC<int>& a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_fcQRruNz(fu::view<int> a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 2 } };
    ARR_LAST_LEpzfIpW(b) += ARR_LAST_fcQRruNz(a);
    return ARR_LAST_LEpzfIpW(b) - 3;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct S { i: i32; }
        fn test(mut x: S) x.i += 1;
        return S(-1).test;

-----

struct s_S;

                                #ifndef DEF_s_S
                                #define DEF_s_S
struct s_S
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_0V6irAvY(/*MOV*/ s_S&& x)
{
    return int((x.i += 1));
}

int fu_MAIN()
{
    return test_0V6irAvY(s_S { -1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ARR_LAST(a: $T[])
            a[a.len - 1];

        let a = [1];
        mut b = [2];

        b.ARR_LAST += a.ARR_LAST;
        return b.ARR_LAST - [3].ARR_LAST;

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int& ARR_LAST_LEpzfIpW(fu_VEC<int>& a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_fcQRruNz(fu::view<int> a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 2 } };
    ARR_LAST_LEpzfIpW(b) += ARR_LAST_fcQRruNz(a);
    return ARR_LAST_LEpzfIpW(b) - ARR_LAST_fcQRruNz((fu::slate<1, int> { 3 }));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct mat4 { i: i32; };
        struct RenderFrame { u_mat4_VP: mat4; };

        inline fn mat4_identity() mat4(1);

        fn test(output: &mut RenderFrame) {
            output.u_mat4_VP = mat4_identity;
        }

        fn main() {
            mut ret: RenderFrame;
            test(ret);
            return ret.u_mat4_VP.i - 1;
        }

-----

struct s_RenderFrame;
struct s_mat4;

                                #ifndef DEF_s_mat4
                                #define DEF_s_mat4
struct s_mat4
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RenderFrame
                                #define DEF_s_RenderFrame
struct s_RenderFrame
{
    s_mat4 u_mat4_VP;
    explicit operator bool() const noexcept
    {
        return false
            || u_mat4_VP
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void test_VUsRA1Mi(s_RenderFrame& output)
{
    output.u_mat4_VP = s_mat4 { 1 };
}

int fu_MAIN()
{
    s_RenderFrame ret {};
    test_VUsRA1Mi(ret);
    return ret.u_mat4_VP.i - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct ScopeSkip {
            start: i32;
            end:   i32;
        };

        pub fn search(skip: ScopeSkip = [])
            skip.end - skip.start;

        pub fn main()

            ScopeSkip(min: -1, max: +1)     
                .end - 1;

-----
_0.fu @12:22:

[2m      |         pub fn main()[0m
[2m      | [0m
   12 |             ScopeSkip[31;1m([0mmin: -1, max: +1)     
[2m      |                 .end - 1;[0m
[2m      | [0m

	Bad call to [34;1mScopeSkip[0m: 

	[35;1mtype[0m [34;1mScopeSkip[0m: Argument name mismatch [TODO REPORT]

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        pub struct ScopeSkip {
            start: i32;
            end:   i32;
        };

        pub fn search(skip: ScopeSkip = [])
            skip.end - skip.start;

        pub fn main()

            ScopeSkip(start: -1, end: +1)   
                .end - 1;

-----

struct s_ScopeSkip;

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

#ifndef FU_NO_FDEFs

int search_vEF4Qiyl(const s_ScopeSkip& skip)
{
    return skip.end - skip.start;
}

int fu_MAIN()
{
    return s_ScopeSkip { -1, +1 }.end - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec3 { x?: f32; y?: f32; z?: f32; };

        struct mat34 {
            mx: vec3; my: vec3; mz: vec3;
            mo: vec3;
        };

        inline fn mat34_identity()
            mat34(
                vec3(x: 1),
                vec3(y: 1),
                vec3(z: 1), vec3 /*point3*/);

        // What broke is this using reports a conflict,
        //  because 'determinant' got expanded within 'inverse',
        //   and there's another using mat34 there.
        //    Basically we totally don't want it to expand there.
        inline fn determinant(using _: mat34): f32
            - mz.x * my.y * mx.z + my.x * mz.y * mx.z + mz.x * mx.y * my.z
            - mx.x * mz.y * my.z - my.x * mx.y * mz.z + mx.x * my.y * mz.z;

        fn inverse(using mat: mat34): mat34
        {
            let idet = 1 / mat.determinant;

            let i_mx = vec3(
                idet * (- mz.y * my.z + my.y * mz.z),
                idet * (+ mz.y * mx.z - mx.y * mz.z),
                idet * (- my.y * mx.z + mx.y * my.z));

            let i_my = vec3(
                idet * (+ mz.x * my.z - my.x * mz.z),
                idet * (- mz.x * mx.z + mx.x * mz.z),
                idet * (+ my.x * mx.z - mx.x * my.z));

            let i_mz = vec3(
                idet * (- mz.x * my.y + my.x * mz.y),
                idet * (+ mz.x * mx.y - mx.x * mz.y),
                idet * (- my.x * mx.y + mx.x * my.y));

            return mat34(
                i_mx, i_my, i_mz,

                vec3( // point3
                      mo.x * -i_mx.x
                    + mo.y * -i_my.x
                    + mo.z * -i_mz.x,

                      mo.x * -i_mx.y
                    + mo.y * -i_my.y
                    + mo.z * -i_mz.y,

                      mo.x * -i_mx.z
                    + mo.y * -i_my.z
                    + mo.z * -i_mz.z));
        }

        fn main() i32 <|
            mat34_identity.inverse.determinant - 1;

-----

struct s_mat34;
struct s_vec3;

                                #ifndef DEF_s_vec3
                                #define DEF_s_vec3
struct s_vec3
{
    float x;
    float y;
    float z;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
            || z
        ;
    }
};
                                #endif

                                #ifndef DEF_s_mat34
                                #define DEF_s_mat34
struct s_mat34
{
    s_vec3 mx;
    s_vec3 my;
    s_vec3 mz;
    s_vec3 mo;
    explicit operator bool() const noexcept
    {
        return false
            || mx
            || my
            || mz
            || mo
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_mat34 inverse_j48XboFY(const s_mat34& mat)
{
    const float idet = (1.0f / ((void)void(), (((((((-mat.mz.x * mat.my.y) * mat.mx.z) + ((mat.my.x * mat.mz.y) * mat.mx.z)) + ((mat.mz.x * mat.mx.y) * mat.my.z)) - ((mat.mx.x * mat.mz.y) * mat.my.z)) - ((mat.my.x * mat.mx.y) * mat.mz.z)) + ((mat.mx.x * mat.my.y) * mat.mz.z))));
    const s_vec3 i_mx = s_vec3 { (idet * ((-mat.mz.y * mat.my.z) + (mat.my.y * mat.mz.z))), (idet * ((+mat.mz.y * mat.mx.z) - (mat.mx.y * mat.mz.z))), (idet * ((-mat.my.y * mat.mx.z) + (mat.mx.y * mat.my.z))) };
    const s_vec3 i_my = s_vec3 { (idet * ((+mat.mz.x * mat.my.z) - (mat.my.x * mat.mz.z))), (idet * ((-mat.mz.x * mat.mx.z) + (mat.mx.x * mat.mz.z))), (idet * ((+mat.my.x * mat.mx.z) - (mat.mx.x * mat.my.z))) };
    const s_vec3 i_mz = s_vec3 { (idet * ((-mat.mz.x * mat.my.y) + (mat.my.x * mat.mz.y))), (idet * ((+mat.mz.x * mat.mx.y) - (mat.mx.x * mat.mz.y))), (idet * ((-mat.my.x * mat.mx.y) + (mat.mx.x * mat.my.y))) };
    return s_mat34 { s_vec3(i_mx), s_vec3(i_my), s_vec3(i_mz), s_vec3 { (((mat.mo.x * -i_mx.x) + (mat.mo.y * -i_my.x)) + (mat.mo.z * -i_mz.x)), (((mat.mo.x * -i_mx.y) + (mat.mo.y * -i_my.y)) + (mat.mo.z * -i_mz.y)), (((mat.mo.x * -i_mx.z) + (mat.mo.y * -i_my.z)) + (mat.mo.z * -i_mz.z)) } };
}

int fu_MAIN()
{
    float BL_1_v {};
    return int(((__extension__ (
    {
        const s_mat34 _ = inverse_j48XboFY(s_mat34 { s_vec3 { 1.0f, 0.0f, 0.0f }, s_vec3 { 0.0f, 1.0f, 0.0f }, s_vec3 { 0.0f, 0.0f, 1.0f }, s_vec3{} });
        BL_1_v = ((((((((-_.mz.x * _.my.y) * _.mx.z) + ((_.my.x * _.mz.y) * _.mx.z)) + ((_.mz.x * _.mx.y) * _.my.z)) - ((_.mx.x * _.mz.y) * _.my.z)) - ((_.my.x * _.mx.y) * _.mz.z)) + ((_.mx.x * _.my.y) * _.mz.z)));
    (void)0;}), float(BL_1_v)) - 1.0f));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct TEA
        {
            v0: u32;
            v1: u32;
        }

        inline fn r4(using _: &mut TEA, sum: &mut u32)
        {
            mut delta: u32 = 0x9e3779b9;

            for (mut i = 0; i < 4; i++) {
                sum += delta;

                v0 += ((v1<<4) + 0xA341316C) ^ (v1 + sum) ^ ((v1>>5) + 0xC8013EA4);
                v1 += ((v0<<4) + 0xAD90777D) ^ (v0 + sum) ^ ((v0>>5) + 0x7E95761E);
            }
        }

        // Stack overflow solving this,
        //  argmax is +inf, and it just
        //   re-enters and re-enters.
        inline fn r4(tea: &mut TEA) {
            mut sum: u32; tea.r4(sum);
        }

        fn main() {
            mut tea: TEA;
            tea.r4();
            return (tea.v0 ^ tea.v0).i32;
        }

-----

struct s_TEA;

                                #ifndef DEF_s_TEA
                                #define DEF_s_TEA
struct s_TEA
{
    unsigned v0;
    unsigned v1;
    explicit operator bool() const noexcept
    {
        return false
            || v0
            || v1
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_TEA tea {};

    {
        unsigned sum {};

        {
            const unsigned delta = 0x9e3779b9u;
            for (int i = 0; i < 4; i++)
            {
                sum += delta;
                tea.v0 += ((((tea.v1 << 4u) + 0xa341316cu) ^ (tea.v1 + sum)) ^ ((tea.v1 >> 5u) + 0xc8013ea4u));
                tea.v1 += ((((tea.v0 << 4u) + 0xad90777du) ^ (tea.v0 + sum)) ^ ((tea.v0 >> 5u) + 0x7e95761eu));
            };
        };
    };
    return int((tea.v0 ^ tea.v0));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ScopeSkip {
            min: i32;
            max: i32;
        };

        fn main() {
            let a = 1;
            mut x: ScopeSkip; x = []; x = [ -2, 0 ]; // Inference fail.
            mut t: ScopeSkip; t = x.min && [ x.min, a ];
            return a + t.min + t.max;
        }

-----
TODO: _0.fu @9:41:

[2m      |         fn main() {[0m
[2m      |             let a = 1;[0m
    9 |             mut x: ScopeSkip; x = []; x [31;1m=[0m [ -2, 0 ]; // Inference fail.
[2m      |             mut t: ScopeSkip; t = x.min && [ x.min, a ];[0m
[2m      |             return a + t.min + t.max;[0m

	Bad call to [34;1m=[0m: 

	[35;1mtemplate[0m [34;1m=[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for [2i32]: copy resize

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        // Same as below, but avoids the $T call, which is also broken somehow.
        //  DONT DELETE ME after you fix the $T, its a great example of stupid codegen -
        //   we emit useless overloads for mutrefs when its clearly useless.

        fn rec_cases(a: $T)
        case ($T.is::primitive) {
            if (a)      return rec_cases(a / 2);
            else        return a;
        }
        default {
            if (a.i) {
                shadow mut a = a;
                a.i /= 2;
                return rec_cases(a);
            }
            else        return rec_cases(a.i);
        }

        struct X { i: i32; };
        fn main() X(1).rec_cases;

-----

struct s_X;

inline static int rec_cases_4htgoDpn(const s_X&);
inline static int rec_cases_pZ8wRcaF(int);

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int rec_cases_pZ8wRcaF(const int a)
{
    if (a)
        return rec_cases_pZ8wRcaF((a / 2));
    else
        return int(a);

}

inline static int rec_cases_K4OPjUNR(const int a)
{
    if (a)
        return rec_cases_pZ8wRcaF((a / 2));
    else
        return int(a);

}

inline static int rec_cases_4htgoDpn(const s_X& a)
{
    if (a.i)
    {
        s_X a_1 { a };
        a_1.i /= 2;
        return rec_cases_4htgoDpn(a_1);
    }
    else
        return rec_cases_K4OPjUNR(a.i);

}

inline static int rec_cases_vEF4Qiyl(const s_X& a)
{
    if (a.i)
    {
        s_X a_1 { a };
        a_1.i /= 2;
        return rec_cases_4htgoDpn(a_1);
    }
    else
        return rec_cases_pZ8wRcaF(a.i);

}

int fu_MAIN()
{
    return rec_cases_vEF4Qiyl(s_X { 1 });
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_code

-----

        fn rec_cases(a: $T)
        case ($T.is::primitive) {
            if (a)      return rec_cases(a / 2);
            else        return a;
        }
        default {
            if (a.i)    return rec_cases($T(i: a.i / 2));
            else        return rec_cases(a.i);
        }

        struct X { i: i32; };
        fn main() X(1).rec_cases;

-----

struct s_X;

inline static int rec_cases_pZ8wRcaF(int);
inline static int rec_cases_vEF4Qiyl(const s_X&);

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int rec_cases_pZ8wRcaF(const int a)
{
    if (a)
        return rec_cases_pZ8wRcaF((a / 2));
    else
        return int(a);

}

inline static int rec_cases_vEF4Qiyl(const s_X& a)
{
    if (a.i)
        return rec_cases_vEF4Qiyl(s_X { (a.i / 2) });
    else
        return rec_cases_pZ8wRcaF(a.i);

}

int fu_MAIN()
{
    return rec_cases_vEF4Qiyl(s_X { 1 });
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_code

-----

        struct X { i: i32; };
        type Y = X;
        fn main() Y(1).i / 2;

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_X { 1 }.i / 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Node {
            kind  ?: string;
            items ?: Node[];
            value ?: string;
        };

        fn astReplace(node: Node, mutate): Node {
            fn walk(shadow ref node: Node) {
                for (mut i = 0; i < node.items.len; i++)
                    walk(node.items[i]);

                mutate(node);
            }

            shadow mut node = node;
            walk(node);
            return node;
        }

        fn test(n: Node, a: string, b: string) {
            return astReplace(n, |ref item: Node| {
                if (item.value == a) {
                    if (item.items.len == 1 && item.kind == "call")
                        item.value = b;
                    else if (item.kind == "str")
                        item.value = b;
                }
            });
        }

        fn main() {
            let v0 = Node(kind: "str", value: "woot");
            let v1 = v0.test("woot", "who");
            return v1.value.len - 3;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

struct s_Node;

static void walk_k4jOkEOt(s_Node&, fu::view<char>, const fu_STR&);

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    fu_VEC<s_Node> items;
    fu_STR value;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || items
            || value
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void walk_k4jOkEOt(s_Node& node, fu::view<char> a, const fu_STR& b)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_k4jOkEOt(node.items.mutref(i), a, b);


    {
        if (node.value == a)
        {
            if ((node.items.size() == 1) && (node.kind == "call"_fu))
                node.value = b;
            else if (node.kind == "str"_fu)
                node.value = b;

        };
    };
}

inline static s_Node astReplace_ZFHu4fdV(const s_Node& node, fu::view<char> a, const fu_STR& b)
{
    /*MOV*/ s_Node node_1 { node };
    walk_k4jOkEOt(node_1, a, b);
    return /*NRVO*/ node_1;
}

static s_Node test_DeVobb1r(const s_Node& n, fu::view<char> a, const fu_STR& b)
{
    return astReplace_ZFHu4fdV(n, a, b);
}

int fu_MAIN()
{
    s_Node v0 = s_Node { "str"_fu, fu_VEC<s_Node>{}, "woot"_fu };
    s_Node v1 = test_DeVobb1r(v0, "woot"_fu, "who"_fu);
    return v1.value.size() - 3;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        struct SolvedNode {
            value: i32;
            items?: SolvedNode[];
        };

        fn visitNodes(_v: &mut $V, _n: SolvedNode) {

            fn traverse(v: &mut $V, n: SolvedNode) {
                v.visit(n);
                for (mut i = 0; i < n.items.len; i++)
                    traverse(v, n.items[i]);
            }

            traverse(_v, _n);
        };

        struct Visitor {
            sum: i32;
        };

        fn visit(using v: &mut Visitor, node: SolvedNode) {
            sum += node.value;
        };

        fn main(): i32 {
            let tree = SolvedNode(3,
                [ SolvedNode(5), SolvedNode(7) ]);



            mut myVisitor: Visitor;
            myVisitor.visitNodes(tree);
            return myVisitor.sum - 15;
        };

-----

#include <fu/vec.h>

struct s_SolvedNode;
struct s_Visitor;

static void traverse_cVjXdTlr(s_Visitor&, const s_SolvedNode&);

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int value;
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || value
            || items
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Visitor
                                #define DEF_s_Visitor
struct s_Visitor
{
    int sum;
    explicit operator bool() const noexcept
    {
        return false
            || sum
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void visit_Kqt2javv(s_Visitor& v, const s_SolvedNode& node)
{
    v.sum += node.value;
}

static void traverse_cVjXdTlr(s_Visitor& v, const s_SolvedNode& n)
{
    visit_Kqt2javv(v, n);
    for (int i = 0; i < n.items.size(); i++)
        traverse_cVjXdTlr(v, n.items[i]);

}

inline static void visitNodes_Kqt2javv(s_Visitor& _v, const s_SolvedNode& _n)
{
    traverse_cVjXdTlr(_v, _n);
}

int fu_MAIN()
{
    s_SolvedNode tree = s_SolvedNode { 3, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode { 5, fu_VEC<s_SolvedNode>{} }, s_SolvedNode { 7, fu_VEC<s_SolvedNode>{} } } } };
    s_Visitor myVisitor {};
    visitNodes_Kqt2javv(myVisitor, tree);
    return myVisitor.sum - 15;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// TYPE_recursion
// TYPE_resolve

-----

        struct SolvedNode {
            value: i32;
            items?: SolvedNode[];
        };

        fn visitNodes(_v: &mut $V, _n: SolvedNode) {

            fn traverse(v: &mut $V, n: SolvedNode) {
                v.visit(n);
                for (mut i = 0; i < n.items.len; i++)
                    traverse(v, n.items[i]);
            }

            traverse(_v, _n);
        };

        struct Visitor {
            sum: i32;
        };

        fn visit(using v: &mut Visitor, node: SolvedNode) {
            sum += node.value;
        };

        fn main(): i32 {
            let tree = SolvedNode(3,
                [ SolvedNode(5), SolvedNode(7) ]);


            // This is an aside, managed to lose the copy qual when working structs
            //  Initially noticed it because visitNodes tried to change its sighash
            mut cpy = tree; if (cpy) {} // <- but this fails cleanly when tree is nocopy


            mut myVisitor: Visitor;
            myVisitor.visitNodes(tree);
            return myVisitor.sum - 15;
        };

-----

#include <fu/vec.h>

struct s_SolvedNode;
struct s_Visitor;

static void traverse_cVjXdTlr(s_Visitor&, const s_SolvedNode&);

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int value;
    fu_VEC<s_SolvedNode> items;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || value
            || items
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Visitor
                                #define DEF_s_Visitor
struct s_Visitor
{
    int sum;
    explicit operator bool() const noexcept
    {
        return false
            || sum
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void visit_Kqt2javv(s_Visitor& v, const s_SolvedNode& node)
{
    v.sum += node.value;
}

static void traverse_cVjXdTlr(s_Visitor& v, const s_SolvedNode& n)
{
    visit_Kqt2javv(v, n);
    for (int i = 0; i < n.items.size(); i++)
        traverse_cVjXdTlr(v, n.items[i]);

}

inline static void visitNodes_Kqt2javv(s_Visitor& _v, const s_SolvedNode& _n)
{
    traverse_cVjXdTlr(_v, _n);
}

int fu_MAIN()
{
    s_SolvedNode tree = s_SolvedNode { 3, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode { 5, fu_VEC<s_SolvedNode>{} }, s_SolvedNode { 7, fu_VEC<s_SolvedNode>{} } } } };
    const s_SolvedNode& cpy = tree;
    if (cpy)
    {
    };
    s_Visitor myVisitor {};
    visitNodes_Kqt2javv(myVisitor, tree);
    return myVisitor.sum - 15;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// TYPE_recursion
// TYPE_resolve

-----

        return 0 > 1 ? throw("should type check") : 0;

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return ((0 > 1) ? fu::fail("should type check"_fu) : 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn throw_hey(): i32 {
            throw("hey");
            return 1;
        }

        fn main(): i32 {
            try {
                let _x = throw_hey();
                return _x || 7;
            }
            catch (err) {
                return err.len - 3;
            }
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never throw_hey_H9fhQUVP()
{
    fu::fail("hey"_fu);
}

int fu_MAIN()
{

    try
    {
        throw_hey_H9fhQUVP();
    }
    catch (const std::exception& o_0)
    {
        fu_STR err = fu_TO_STR(o_0.what());

        return err.size() - 3;
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code
// DEAD_let

-----

        fn throw_hey() {
            throw("hey");
        }

        fn main(): i32 {
            try {
                let _x = throw_hey();
                return _x || 7;
            }
            catch (err) {
                return err.len - 3;
            }
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never throw_hey_H9fhQUVP()
{
    fu::fail("hey"_fu);
}

int fu_MAIN()
{

    try
    {
        throw_hey_H9fhQUVP();
    }
    catch (const std::exception& o_0)
    {
        fu_STR err = fu_TO_STR(o_0.what());

        return err.size() - 3;
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code
// DEAD_let

-----

        fn throw_hey(): i32 {
            throw("hey");
            return 1;
        }

        fn main(): i32 {
            try {
                return throw_hey();
            }
            catch (e) {
                return e.len - 3;
            }

            return 11;
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never throw_hey_H9fhQUVP()
{
    fu::fail("hey"_fu);
}

int fu_MAIN()
{

    try
    {
        throw_hey_H9fhQUVP();
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return e.size() - 3;
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn main()
            cli_handle([ "hello", "you" ]);

        fn cli_handle(args: string[]): i32
        {
            mut idx = 0;

            fn next() {
                let i = idx++;
                if (i < args.len)
                    return args[i];

                return "";
            }

            // Router.
            return next().len - 5;
        }

-----

#include <fu/default.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static const fu_STR& next_y1jV3SX3(int& idx, fu::view<fu_STR> args)
{
    const int i = idx++;
    if (i < args.size())
        return args[i];

    return (*(const fu_STR*)fu::NIL);
}

static int cli_handle_wjZjF8su(fu::view<fu_STR> args)
{
    int idx = 0;
    return next_y1jV3SX3(idx, args).size() - 5;
}

int fu_MAIN()
{
    return cli_handle_wjZjF8su((fu::slate<2, fu_STR> { "hello"_fu, "you"_fu }));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test() {
            mut x = 5;
            return x;
        }

        fn main()
            test() - 5;

-----

#ifndef FU_NO_FDEFs

static int test_H9fhQUVP()
{
    /*MOV*/ const int x = 5;
    return /*NRVO*/ x;
}

int fu_MAIN()
{
    return test_H9fhQUVP() - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { i: i32; };

        fn test() {
            mut x = Test(5);
            return x;
        }

        fn main()
            test().i - 5;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Test test_H9fhQUVP()
{
    /*MOV*/ const s_Test x = s_Test { 5 };
    return /*NRVO*/ x;
}

int fu_MAIN()
{
    return test_H9fhQUVP().i - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a: i32; b: i32; };

        fn test() {
            mut x = Test(5, -5);
            return x;
        }

        fn main()
            test().a + test().b;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Test test_H9fhQUVP()
{
    /*MOV*/ const s_Test x = s_Test { 5, -5 };
    return /*NRVO*/ x;
}

int fu_MAIN()
{
    return test_H9fhQUVP().a + test_H9fhQUVP().b;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct X { x: i32; };
        fn ref2arg(x: X) = x;

        fn main() {
            let NOTREF = ref2arg(X(101));
            return NOTREF.x - 101;
        }

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_X& ref2arg_vEF4Qiyl(const s_X& x)
{
    return x;
}

int fu_MAIN()
{
    const s_X NOTREF { ref2arg_vEF4Qiyl(s_X { 101 }) };
    return NOTREF.x - 101;
}

#endif


int main() { return fu_MAIN(); }

-----


        nocopy 
        struct Copied { x: i32; };

        fn main() {
            let a = Copied(1);
            mut b = a;
            b.x++;
            return b.x - a.x * 2;
        }

-----
_0.fu @8:21:

[2m      |         fn main() {[0m
[2m      |             let a = Copied(1);[0m
    8 |             mut b = [31;1ma[0m;
[2m      |             b.x++;[0m
[2m      |             return b.x - a.x * 2;[0m

	Needs an explicit STEAL or CLONE: Copied

        Solving [35;1mfn[0m [34;1mmain[0m

-----


        struct Copied { x: i32; };

        fn main() {
            let a = Copied(1);
            mut b = a;
            b.x++;
            return b.x - a.x * 2;
        }

-----

struct s_Copied;

                                #ifndef DEF_s_Copied
                                #define DEF_s_Copied
struct s_Copied
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_Copied a = s_Copied { 1 };
    s_Copied b { a };
    b.x++;
    return b.x - (a.x * 2);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct XY { x: i32; y: i32; };
        fn ref2arg(v: XY) = v;

        fn main() {
            let a = XY(99, 2);
            let ref2a = ref2arg(a);
            return mem::ptr_eq(a, ref2a) ? 0 : 1;
        }

-----

-----

        nocopy struct NoCopy { i: i32; };
        fn retmutref(ref nc: NoCopy) nc;

        fn main() {
            mut nc: NoCopy;
            nc.retmutref.retmutref.i++;
            return nc.i - 1;
        }

-----

struct s_NoCopy;

                                #ifndef DEF_s_NoCopy
                                #define DEF_s_NoCopy
struct s_NoCopy
{
    int i;
    s_NoCopy(const s_NoCopy&) = delete;
    s_NoCopy(s_NoCopy&&) = default;
    s_NoCopy& operator=(const s_NoCopy&) = delete;
    s_NoCopy& operator=(s_NoCopy&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_NoCopy& retmutref_FtANIDl0(s_NoCopy& nc)
{
    return nc;
}

int fu_MAIN()
{
    s_NoCopy nc {};
    retmutref_FtANIDl0(retmutref_FtANIDl0(nc)).i++;
    return nc.i - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        nocopy struct NoCopy { i: i32; };
        fn mutrefself(ref nc: NoCopy) {
            nc.i++;
            return nc;
        }

        fn main() {
            mut nc: NoCopy;
            nc.mutrefself().mutrefself();
            return nc.i - 2;
        }

-----

struct s_NoCopy;

                                #ifndef DEF_s_NoCopy
                                #define DEF_s_NoCopy
struct s_NoCopy
{
    int i;
    s_NoCopy(const s_NoCopy&) = delete;
    s_NoCopy(s_NoCopy&&) = default;
    s_NoCopy& operator=(const s_NoCopy&) = delete;
    s_NoCopy& operator=(s_NoCopy&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_NoCopy& mutrefself_FtANIDl0(s_NoCopy& nc)
{
    nc.i++;
    return nc;
}

int fu_MAIN()
{
    s_NoCopy nc {};
    mutrefself_FtANIDl0(mutrefself_FtANIDl0(nc));
    return nc.i - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        nocopy struct NoCopy { i: i32; };

        fn      retarg(a: NoCopy) a;
        fn  retargs_if(a: NoCopy, b: NoCopy) a.i ? b : a;
        fn  retargs_or(a: NoCopy, b: NoCopy) a || b;
        fn retargs_and(a: NoCopy, b: NoCopy) a && b;

        fn main() {
            let a: NoCopy;
            let b: NoCopy;
            return retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i;
        }

-----

#include <fu/default.h>

struct s_NoCopy;

                                #ifndef DEF_s_NoCopy
                                #define DEF_s_NoCopy
struct s_NoCopy
{
    int i;
    s_NoCopy(const s_NoCopy&) = delete;
    s_NoCopy(s_NoCopy&&) = default;
    s_NoCopy& operator=(const s_NoCopy&) = delete;
    s_NoCopy& operator=(s_NoCopy&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_NoCopy& retargs_or_gSSzI3uP(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? a : b;
}

static const s_NoCopy& retargs_and_gSSzI3uP(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? b : (*(const s_NoCopy*)fu::NIL);
}

static const s_NoCopy& retargs_if_gSSzI3uP(const s_NoCopy& a, const s_NoCopy& b)
{
    return (a.i ? b : a);
}

static const s_NoCopy& retarg_63UTQUTz(const s_NoCopy& a)
{
    return a;
}

int fu_MAIN()
{
    /*MOV*/ const s_NoCopy a {};
    /*MOV*/ const s_NoCopy b {};
    return int(retarg_63UTQUTz(retargs_if_gSSzI3uP(a, retargs_and_gSSzI3uP(a, retargs_or_gSSzI3uP(a, b)))).i);
}

#endif


int main() { return fu_MAIN(); }

-----

        nocopy struct NoCopy { i: i32; };

        fn      retarg(a: NoCopy) a;
        fn  retargs_if(a: NoCopy, b: NoCopy) a.i ? b : a;
        fn  retargs_or(a: NoCopy, b: NoCopy) a || b;
        fn retargs_and(a: NoCopy, b: NoCopy) a && b;

        fn main() {
            let a: NoCopy;                      // <- b now temp

            return retarg(retargs_if(a, retargs_and(a, retargs_or(a, NoCopy)))).i;
        }

-----

#include <fu/default.h>

struct s_NoCopy;

                                #ifndef DEF_s_NoCopy
                                #define DEF_s_NoCopy
struct s_NoCopy
{
    int i;
    s_NoCopy(const s_NoCopy&) = delete;
    s_NoCopy(s_NoCopy&&) = default;
    s_NoCopy& operator=(const s_NoCopy&) = delete;
    s_NoCopy& operator=(s_NoCopy&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_NoCopy& retargs_or_gSSzI3uP(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? a : b;
}

static const s_NoCopy& retargs_and_gSSzI3uP(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? b : (*(const s_NoCopy*)fu::NIL);
}

static const s_NoCopy& retargs_if_gSSzI3uP(const s_NoCopy& a, const s_NoCopy& b)
{
    return (a.i ? b : a);
}

static const s_NoCopy& retarg_63UTQUTz(const s_NoCopy& a)
{
    return a;
}

int fu_MAIN()
{
    /*MOV*/ const s_NoCopy a {};
    return int(retarg_63UTQUTz(retargs_if_gSSzI3uP(a, retargs_and_gSSzI3uP(a, retargs_or_gSSzI3uP(a, s_NoCopy{})))).i);
}

#endif


int main() { return fu_MAIN(); }

-----

        nocopy struct NoCopy { i: i32; };

        fn      retarg(a) a;                    // <- now templates
        fn  retargs_if(a, b) a.i ? b : a;
        fn  retargs_or(a, b) a || b;
        fn retargs_and(a, b) a && b;

        fn main() {
            mut a: NoCopy;                      // <- now muts
            mut b: NoCopy;
            retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i++;
            return a.i + b.i - 1;
        }

-----

struct s_NoCopy;

                                #ifndef DEF_s_NoCopy
                                #define DEF_s_NoCopy
struct s_NoCopy
{
    int i;
    s_NoCopy(const s_NoCopy&) = delete;
    s_NoCopy(s_NoCopy&&) = default;
    s_NoCopy& operator=(const s_NoCopy&) = delete;
    s_NoCopy& operator=(s_NoCopy&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static s_NoCopy& retargs_or_9bChD52X(s_NoCopy& a, s_NoCopy& b)
{
    return a ? a : b;
}

inline static s_NoCopy& retargs_and_9bChD52X(s_NoCopy& a, s_NoCopy& b)
{
    return !a ? a : b;
}

inline static s_NoCopy& retargs_if_9bChD52X(s_NoCopy& a, s_NoCopy& b)
{
    return (a.i ? b : a);
}

inline static s_NoCopy& retarg_FtANIDl0(s_NoCopy& a)
{
    return a;
}

int fu_MAIN()
{
    s_NoCopy a {};
    s_NoCopy b {};
    retarg_FtANIDl0(retargs_if_9bChD52X(a, retargs_and_9bChD52X(a, retargs_or_9bChD52X(a, b)))).i++;
    return (a.i + b.i) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn as_blocks_after(x: i32) {
            mut zero = 0;
            if (x > 2) // a broken stmt emit lifted the loop out of the conditional
                for (mut i = 0; i < x; i++)
                    zero = i + i*zero;

            return zero;
        }

        fn main() 2.as_blocks_after;

-----

#ifndef FU_NO_FDEFs

static int as_blocks_after_pZ8wRcaF(const int x)
{
    /*MOV*/ int zero = 0;
    if (x > 2)
    {
        for (int i = 0; i < x; i++)
            zero = (i + (i * zero));

    };
    return /*NRVO*/ zero;
}

int fu_MAIN()
{
    return as_blocks_after_pZ8wRcaF(2);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Lifetime { woot: Lifetime[]; };

        // We could codegen this as a cpp template!
        //  We'd need to auto& all inner locals too.
        //
        fn Lifetime_test(x: Lifetime) {
            x.woot.len & 1 && throw("This is very important.");
            for (mut i = 0; i < x.woot.len; i++) Lifetime_test(x.woot[i]);
            return x;
        }

        fn Lifetime_fromBinding(x: i32) {
            mut woot: Lifetime[];
            for (mut i = 0; i < x; i++) woot[i] = Lifetime();

            // Or we can just add const_casts at such callsites,
            //  so that things end up working as if the call was inlined,
            //   which weakens the validation we get but is way cleaner.
            //
            // TODO: needs to track uniqueness for that to work.
            //
            return Lifetime_test(Lifetime(:woot));
        }

        fn main() 0.Lifetime_fromBinding.woot.len;

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>

struct s_Lifetime;

static const s_Lifetime& Lifetime_test_vEF4Qiyl(const s_Lifetime&);

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Lifetime> woot;
    s_Lifetime(const s_Lifetime&) = default;
    s_Lifetime(s_Lifetime&&) = default;
    s_Lifetime& operator=(s_Lifetime&&) = default;
    s_Lifetime& operator=(const s_Lifetime& selfrec) { return *this = s_Lifetime(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || woot
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_Lifetime& Lifetime_test_vEF4Qiyl(const s_Lifetime& x)
{
    if (x.woot.size() & 1)
        fu::fail("This is very important."_fu);

    for (int i = 0; i < x.woot.size(); i++)
        Lifetime_test_vEF4Qiyl(x.woot[i]);

    return x;
}

static s_Lifetime Lifetime_fromBinding_pZ8wRcaF(const int x)
{
    fu_VEC<s_Lifetime> woot {};
    for (int i = 0; i < x; i++)
        woot.mutref(i) = s_Lifetime{};

    return /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_vEF4Qiyl(s_Lifetime { fu_VEC<s_Lifetime>(woot) })));
}

int fu_MAIN()
{
    return Lifetime_fromBinding_pZ8wRcaF(0).woot.size();
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(x: i32) {                       // none of these need vecs
            let c = [10007];                    // TODO fu::slate<1, int> c
            let a = [7, 11];                    // TODO fu::slate<2, int> a
            let b = {                           // TODO fu::slate<1, int> b
                :BRK {                          // !NONTRIV_autocopy
                    if (x & 2) break :BRK c;
                    if (x & 1) break :BRK [ x ]; // a val
                    a; // a ref
                }
            };
            return a[0] - b[0] * a[1];
        }

        fn main() 1.test + 4;

-----
;; TODO fu::slate<1, int> c
;; TODO fu::slate<2, int> a
;; TODO fu::slate<1, int> b


#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(const int x)
{
    /*MOV*/ fu_VEC<int> c = fu_VEC<int> { fu::slate<1, int> { 10007 } };
    /*MOV*/ fu_VEC<int> a = fu_VEC<int> { fu::slate<2, int> { 7, 11 } };
    fu_VEC<int> BL_1_v {};
    fu_VEC<int> b = (__extension__ (
    { {
        if (x & 2)
            { BL_1_v = static_cast<fu_VEC<int>&&>(c); goto BL_1; };

        if (x & 1)
            { BL_1_v = fu_VEC<int> { fu::slate<1, int> { int(x) } }; goto BL_1; };

        BL_1_v = (static_cast<fu_VEC<int>&&>(a));
      } BL_1:;
    (void)0;}), static_cast<fu_VEC<int>&&>(BL_1_v));
    return a[0] - (b[0] * a[1]);
}

int fu_MAIN()
{
    return test_pZ8wRcaF(1) + 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { i: i32[]; };

        fn test(mut x: Test) {
            x.i[0] += x.i[1];
            return x;
        }

        fn main() {
            let s = Test([ 1, 2 ]);
            return test(s).i[0] - s.i[0] * 3;
        }

-----

#include <fu/vec.h>

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    fu_VEC<int> i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Test test_vEF4Qiyl(/*MOV*/ s_Test&& x)
{
    x.i.mutref(0) += int(x.i[1]);
    return static_cast<s_Test&&>(x);
}

int fu_MAIN()
{
    s_Test s = s_Test { fu_VEC<int> { fu::slate<2, int> { 1, 2 } } };
    return test_vEF4Qiyl(s_Test(s)).i[0] - (s.i[0] * 3);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        struct Test { i: i32[]; };

        fn test(mut x: Test): Test {
            x.i[0] += x.i[1];
            return x;
        }

        fn main() {
            let s = Test([ 1, 2 ]);
            return test(s).i[0] - s.i[0] * 3;
        }

-----

#include <fu/vec.h>

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    fu_VEC<int> i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Test test_vEF4Qiyl(/*MOV*/ s_Test&& x)
{
    x.i.mutref(0) += int(x.i[1]);
    return static_cast<s_Test&&>(x);
}

int fu_MAIN()
{
    s_Test s = s_Test { fu_VEC<int> { fu::slate<2, int> { 1, 2 } } };
    return test_vEF4Qiyl(s_Test(s)).i[0] - (s.i[0] * 3);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn compile_snippets(x0: string) x0.find('a') && throw("throw#1");
        fn ZERO(x1: string) x1.find('b') && throw("throw#2");

        fn FAIL(x2: string): string {                   // EXPECT fu::view<char> x2
            try {
                let ctx = compile_snippets(x2) && "hey";
                return ctx;
            }
            catch (e) {
                return ZERO(x2) && e;
            }
        }

        fn main() FAIL("a").len;

-----

#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_find_3yRdKyg4
                                #define DEFt_find_3yRdKyg4
inline int find_3yRdKyg4(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static int compile_snippets_vhnG1IeH(fu::view<char> x0)
{
    int _0 {};
    return !(_0 = find_3yRdKyg4(x0, 'a')) ? _0 : fu::fail("throw#1"_fu);
}

static int ZERO_vhnG1IeH(fu::view<char> x1)
{
    int _0 {};
    return !(_0 = find_3yRdKyg4(x1, 'b')) ? _0 : fu::fail("throw#2"_fu);
}

static fu_STR FAIL_vhnG1IeH(fu::view<char> x2)
{

    try
    {
    {
        /*MOV*/ fu_STR ctx = (compile_snippets_vhnG1IeH(x2) ? "hey"_fu : fu_STR{});
        return /*NRVO*/ ctx;
    }
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return fu_STR((ZERO_vhnG1IeH(x2) ? e : (*(const fu_STR*)fu::NIL)));
    }
;
}

int fu_MAIN()
{
    return FAIL_vhnG1IeH("a"_fu).size();
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code
// NONTRIV_autocopy

-----

        // The thing below but shorter:
        //  the '|| throw' introduces a bullshit lambda during codegen,
        //   which misreturns a dangling reference to its own frame.
        fn test(x: string) [x][0] || throw("nope!");
        fn main() "what".test.len - 4;

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_STR test_vhnG1IeH(const fu_STR& x)
{
    const fu_STR* _0;
    return fu_STR((*(_0 = &((fu::slate<1, fu_STR> { fu_STR(x) })[0])) ? *_0 : fu::fail("nope!"_fu)));
}

int fu_MAIN()
{
    return test_vhnG1IeH("what"_fu).size() - 4;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn only(s: $T[]) s.len == 1 ? s[0] : throw ("len != 1: " ~ s.len);

        struct Node       { kind: string; };
        struct SolvedNode { kind: string; };

        fn solveNodes(n: Node[]) {
            mut r: SolvedNode[];
            for (mut i = 0; i < n.len; i++) r ~= SolvedNode(n[i].kind);
            return r;
        }

        // the '|| throw' introduces a bullshit lambda during codegen,
        //  which misreturns a dangling reference to its own frame.
        fn solveDeclExpr(n: Node) solveNodes([ n ]).only || throw ("!only");

        fn main() solveDeclExpr(Node("a")).kind.len - 1;

-----

#include <fu/decstr.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Node;
struct s_SolvedNode;

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_VEC<s_SolvedNode> solveNodes_hoDN8Lq5(fu::view<s_Node> n)
{
    /*MOV*/ fu_VEC<s_SolvedNode> r {};
    for (int i = 0; i < n.size(); i++)
        r += s_SolvedNode { fu_STR(n[i].kind) };

    return /*NRVO*/ r;
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

inline static const s_SolvedNode& only_uG4SGfbL(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}

static s_SolvedNode solveDeclExpr_vEF4Qiyl(const s_Node& n)
{
    const s_SolvedNode* _0;
    return s_SolvedNode((*(_0 = &(only_uG4SGfbL(solveNodes_hoDN8Lq5((fu::slate<1, s_Node> { s_Node(n) }))))) ? *_0 : fu::fail("!only"_fu)));
}

int fu_MAIN()
{
    return solveDeclExpr_vEF4Qiyl(s_Node { "a"_fu }).kind.size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        pub fn test(x: i32): i32[] { // !NONTRIV_autocopy
            mut a = [ 4 ];
            mut b = [ 5 ];
            mut c = [ 6 ];

            for (mut i = 0; i < x; i++) {
                a.unshift(x);
                b.unshift(x);
                c.unshift(x);
            }

            inline fn which() {
                return :test x & 1 ? a : b;
            }

            if !(x & 2)
                return which();

            return c;
        }

        fn main() test(2)[2] + test(1)[1] - 2 * test(0)[0];

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

fu_VEC<int> test_pZ8wRcaF(const int x)
{
    /*MOV*/ fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 4 } };
    /*MOV*/ fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 5 } };
    /*MOV*/ fu_VEC<int> c = fu_VEC<int> { fu::slate<1, int> { 6 } };
    for (int i = 0; i < x; i++)
    {
        a.unshift(int(x));
        b.unshift(int(x));
        c.unshift(int(x));
    };
    if (!(x & 2))
        return static_cast<fu_VEC<int>&&>(((x & 1) ? a : b));

    return /*NRVO*/ c;
}

int fu_MAIN()
{
    return (test_pZ8wRcaF(2)[2] + test_pZ8wRcaF(1)[1]) - (2 * test_pZ8wRcaF(0)[0]);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn incr_x_to_1(ref x: i32) {
            x && throw("this reports return t_never");
            fn incr_x() { return x++; }
            incr_x();
        }
        fn main() {
            mut x = 0;
            incr_x_to_1(x);
            return x - 1;
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int incr_x_y1jV3SX3(int& x)
{
    return x++;
}

static void incr_x_to_1_K4OPjUNR(int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);

    incr_x_y1jV3SX3(x);
}

int fu_MAIN()
{
    int x = 0;
    incr_x_to_1_K4OPjUNR(x);
    return x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            mut x = 0;
            fn incr_x_to_1() {
                x && throw("this reports return t_never");
                fn incr_x() { return x++; }
                incr_x();
            }
            incr_x_to_1();
            return x - 1;
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int incr_x_y1jV3SX3(int& x)
{
    return x++;
}

static void incr_x_to_1_EJhRWC6k(int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);

    incr_x_y1jV3SX3(x);
}

int fu_MAIN()
{
    int x = 0;
    incr_x_to_1_EJhRWC6k(x);
    return x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn apply(fn, v) fn(v);
        fn main() {
            mut x = 0;
            fn scope_using(via: i32) {
                x && throw("this reports return t_never");
                // which messed up retcount for scope_using
                fn visit(item: i32) {
                    if (item) return item;
                    return x++;
                }
                apply(fn visit, via);
            }

            scope_using(x);
            return x - 1;
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int visit_A1oHZf5p(const int item, int& x)
{
    if (item)
        return int(item);

    return x++;
}

inline static int apply_u1Roysl3(const int v, int& x)
{
    return visit_A1oHZf5p(v, x);
}

static void scope_using_kvdihmBv(const int via, int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);

    apply_u1Roysl3(via, x);
}

int fu_MAIN()
{
    int x = 0;
    scope_using_kvdihmBv(x, x);
    return x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main()
            i32(PI * 2.0) - 6;

-----

#include <math.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int((M_PI * 2.0)) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main()
            i32(PI * 2 - 6);

-----

#include <math.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(((M_PI * 2.0) - 6.0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main()
            PI * 2 - 6 |> i32;

-----

#include <math.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(((M_PI * 2.0) - 6.0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main()
            i32 <| PI * 2 - 6;

-----

#include <math.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(((M_PI * 2.0) - 6.0));
}

#endif


int main() { return fu_MAIN(); }

-----

        let x: f32 = 1; fn main() 1 - x.i32;

-----

#ifndef FU_NO_FDEFs

static const float x = 1.0f;

int fu_MAIN()
{
    return 1 - int(x);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x: f32 = 1.0; fn main() 1 - x.i32;

-----

#ifndef FU_NO_FDEFs

static const float x = 1.0f;

int fu_MAIN()
{
    return 1 - int(x);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x: u8 = 1; fn main() 1 - x.i32;

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_x
                                #define DEF_x
inline constexpr fu::u8 x = fu::u8(1u);
                                #endif

int fu_MAIN()
{
    return 1 - int(unsigned(x));
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = 1.f32; fn main() 1 - x.i32;

-----

#ifndef FU_NO_FDEFs

static const float x = float(1);

int fu_MAIN()
{
    return 1 - int(x);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn gt0(x: f32) x > 0;
        fn main() gt0(1.f32) ? 0 : 1;

-----

#ifndef FU_NO_FDEFs

static bool gt0_5H5yfsfx(const float x)
{
    return x > 0.0f;
}

int fu_MAIN()
{
    return (gt0_5H5yfsfx(float(1)) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Hey { x: f32; };
        fn hey() Hey(1);
        fn main() hey.x.i32 - 1;

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    float x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Hey hey_H9fhQUVP()
{
    return s_Hey { 1.0f };
}

int fu_MAIN()
{
    return int(hey_H9fhQUVP().x) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec3 { x?: f32; y?: f32; z?: f32; };
        fn test(i: i32) vec3(x: (i - 2).f32, z: 1);
        fn main() {
            let v = test(1);
            return (v.x + v.z).i32;
        }

-----

struct s_vec3;

                                #ifndef DEF_s_vec3
                                #define DEF_s_vec3
struct s_vec3
{
    float x;
    float y;
    float z;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
            || z
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_vec3 test_pZ8wRcaF(const int i)
{
    return s_vec3 { float((i - 2)), 0.0f, 1.0f };
}

int fu_MAIN()
{
    const s_vec3 v = test_pZ8wRcaF(1);
    return int((v.x + v.z));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec3 { x?: f32; y?: f32; z?: f32; };
        fn test(f: f32) vec3(x: f, z: -1);
        fn main() {
            let v = test(-1);
            return (v.x - v.z).i32;
        }

-----

struct s_vec3;

                                #ifndef DEF_s_vec3
                                #define DEF_s_vec3
struct s_vec3
{
    float x;
    float y;
    float z;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
            || z
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_vec3 test_5H5yfsfx(const float f)
{
    return s_vec3 { float(f), 0.0f, -1.0f };
}

int fu_MAIN()
{
    const s_vec3 v = test_5H5yfsfx(-1.0f);
    return int((v.x - v.z));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn hey(i: f32) i.f32 + 0.5;
        fn main() hey(1).i32 - 1;

-----

#ifndef FU_NO_FDEFs

static float hey_5H5yfsfx(const float i)
{
    return float(i) + 0.5f;
}

int fu_MAIN()
{
    return int(hey_5H5yfsfx(1.0f)) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn lin2srgb(l: f32): f32
            l <= 0.0031308
                ? l * 12.92
                : 1.055 * pow(l, 1/2.4.f32) - 0.055;

        fn lin255(v: f32) u32 <|
            v.lin2srgb.max(0).min(1) * 255.99;

        fn main() i32 <|
            lin255(1) - 255;

-----

#include <algorithm>
#include <cmath>

#ifndef FU_NO_FDEFs

static float lin2srgb_5H5yfsfx(const float l)
{
    return ((l <= 0.0031308f) ? (l * 12.92f) : ((1.055f * std::pow(l, (1.0f / float(2.4)))) - 0.055f));
}

static unsigned lin255_5H5yfsfx(const float v)
{
    return unsigned((std::min(std::max(lin2srgb_5H5yfsfx(v), 0.0f), 1.0f) * 255.99f));
}

int fu_MAIN()
{
    return int((lin255_5H5yfsfx(1.0f) - 255u));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec3 { x?: f32; y?: f32; z?: f32; };

        inline fn /(a: f32, b: vec3)
            vec3(a / b.x, a / b.y, a / b.z);

        fn main() i32 <|
            (1/vec3(x: 1)).x - 1;

-----

struct s_vec3;

                                #ifndef DEF_s_vec3
                                #define DEF_s_vec3
struct s_vec3
{
    float x;
    float y;
    float z;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
            || z
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_vec3 BL_1_v {};
    return int(((__extension__ (
    {
        const float a = 1.0f;
        const s_vec3 b = s_vec3 { 1.0f, 0.0f, 0.0f };
        BL_1_v = (s_vec3 { (a / b.x), (a / b.y), (a / b.z) });
    (void)0;}), s_vec3(BL_1_v)).x - 1.0f));
}

#endif


int main() { return fu_MAIN(); }

-----

        let QUAD_DATA: f32[] =
        [
            -1, -1, 0,      0, 0, 1,    0, 0, 0,
            +1, +1, 0,      0, 0, 1,    1, 1, 0,
            -1, +1, 0,      0, 0, 1,    0, 1, 0,

            -1, -1, 0,      0, 0, 1,    0, 0, 0,
            +1, -1, 0,      0, 0, 1,    1, 0, 0,
            +1, +1, 0,      0, 0, 1,    1, 1, 0,
        ];

        fn main() QUAD_DATA.len - 6 * 9;

-----

#include <fu/init_priority.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<float> QUAD_DATA fu_INIT_PRIORITY(1001) = fu_VEC<float> { fu::slate<54, float> { -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, +1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f } };

int fu_MAIN()
{
    return QUAD_DATA.size() - (6 * 9);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: bool): u8 = a ? 1 : 0;

        fn main() test(false).i32;

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

static fu::u8 test_OSD8YZzw(const bool a)
{
    return (a ? fu::u8(1u) : fu::u8(0u));
}

int fu_MAIN()
{
    return int(unsigned(test_OSD8YZzw(false)));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: bool): u8 = a && 1;

        fn main() test(false).i32;

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

static fu::u8 test_OSD8YZzw(const bool a)
{
    return a ? fu::u8(1u) : fu::u8{};
}

int fu_MAIN()
{
    return int(unsigned(test_OSD8YZzw(false)));
}

#endif


int main() { return fu_MAIN(); }

-----

        pub let A_u8: u8 = 0x0;

        fn ATTRIB(type: u8, count: i32, srgb = false): u8
            = type & 0x3 | count.u8 << 2

            // TODO can't deep-retype the last cast unfortunately:
            //  we need another hint to drive typing here,
            //   perhaps monogenous signatures, or else.
            | (srgb && 0x80.u8);

        fn main() ATTRIB(A_u8, 4).i32 - 16;

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_A_u8
                                #define DEF_A_u8
inline constexpr fu::u8 A_u8 = fu::u8(0x0u);
                                #endif

static fu::u8 ATTRIB_STqgN7LE(const fu::u8 type, const int count, const bool srgb)
{
    return fu::u8((fu::u8((type & fu::u8(0x3u))) | fu::u8((fu::u8(unsigned(count)) << fu::u8(2u))))) | (srgb ? fu::u8(0x80u) : fu::u8{});
}

int fu_MAIN()
{
    return int(unsigned(ATTRIB_STqgN7LE(A_u8, 4, false))) - 16;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Geometry    { g: i32; };
        pub struct Texture     { t: i32; };
        pub struct RenderFrame { r: i32; };

        pub struct LogicFrame_in
        {
            lastLogic:  LogicFrame;
        };

        pub struct LogicFrame
        {
            DATA_fbx:   Geometry;
            TEX_A:      Texture;
            TEX_AO:     Texture;
            TEX_M:      Texture;
            TEX_N:      Texture;
            TEX_R:      Texture;
            HDR:        Texture;
        };

        pub struct RenderFrame_in
        {
            w:          i16;
            h:          i16;
            frame:      i32;

            mouseX:     f32;
            mouseY:     f32;
            mouseBtns:  i32;

            using logic:    LogicFrame;
            lastRender:     RenderFrame;
        };

        pub fn APP_renderFrame(using args: RenderFrame_in): RenderFrame
        {
            return RenderFrame(args.HDR.t);
        }

        fn main() 0;

-----

struct s_Geometry;
struct s_LogicFrame;
struct s_RenderFrame;
struct s_RenderFrame_in;
struct s_Texture;

                                #ifndef DEF_s_RenderFrame
                                #define DEF_s_RenderFrame
struct s_RenderFrame
{
    int r;
    explicit operator bool() const noexcept
    {
        return false
            || r
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Geometry
                                #define DEF_s_Geometry
struct s_Geometry
{
    int g;
    explicit operator bool() const noexcept
    {
        return false
            || g
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Texture
                                #define DEF_s_Texture
struct s_Texture
{
    int t;
    explicit operator bool() const noexcept
    {
        return false
            || t
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LogicFrame
                                #define DEF_s_LogicFrame
struct s_LogicFrame
{
    s_Geometry DATA_fbx;
    s_Texture TEX_A;
    s_Texture TEX_AO;
    s_Texture TEX_M;
    s_Texture TEX_N;
    s_Texture TEX_R;
    s_Texture HDR;
    explicit operator bool() const noexcept
    {
        return false
            || DATA_fbx
            || TEX_A
            || TEX_AO
            || TEX_M
            || TEX_N
            || TEX_R
            || HDR
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RenderFrame_in
                                #define DEF_s_RenderFrame_in
struct s_RenderFrame_in
{
    short w;
    short h;
    int frame;
    float mouseX;
    float mouseY;
    int mouseBtns;
    s_LogicFrame logic;
    s_RenderFrame lastRender;
    explicit operator bool() const noexcept
    {
        return false
            || w
            || h
            || frame
            || mouseX
            || mouseY
            || mouseBtns
            || logic
            || lastRender
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_RenderFrame APP_renderFrame_rISumwif(const s_RenderFrame_in& args)
{
    return s_RenderFrame { int(args.logic.HDR.t) };
}

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn leadingDigit(name: string) name[0].u8 - '0'.u8 < 10;
        fn main() "hello".leadingDigit.i32;

-----

#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static bool leadingDigit_vhnG1IeH(fu::view<char> name)
{
    return fu::u8((fu::u8(fu::u8(name[0])) - fu::u8(fu::u8('0')))) < fu::u8(10u);
}

int fu_MAIN()
{
    return int(leadingDigit_vhnG1IeH("hello"_fu));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() 1_000_000 - 1000000
               || 0xffff_ffff.i32 - 0xffffffff.i32
               || 123_456.789.i32 - 123456.789.i32;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int _0 {};
    return (_0 = (1000000 - 1000000)) ? _0 : (_0 = (int(0xffffffffu) - int(0xffffffffu))) ? _0 : (int(123456.789) - int(123456.789));
}

#endif


int main() { return fu_MAIN(); }

-----
                             // litfix through && /////
        fn test(a: u32, shadows: bool)      (a << 1) | (shadows && 1);
        fn main()                           1.test.i32 - 2;

-----
TODO: _0.fu @2:54:

[2m      |                              // litfix through && /////[0m
    2 |         fn test(a: u32, shadows: bool)      (a << 1) [31;1m|[0m (shadows && 1);
[2m      |         fn main()                           1.test.i32 - 2;[0m
[2m      | [0m

	Bad call to [34;1m|[0m: 

	[35;1mtemplate[0m [34;1m|[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mtest_7Ki5qr0b[0m

-----

        type Test = i32[];
        fn yo(t: Test) t[0] + t[1];
        fn main() yo([-1, +1]);

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int yo_WgWjr9S0(fu::view<int> t)
{
    return t[0] + t[1];
}

int fu_MAIN()
{
    return yo_WgWjr9S0((fu::slate<2, int> { -1, +1 }));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn if_first(a: $T[]) a && a[0];
        fn hello(a: i32[]) a.if_first;
        fn main() hello([ 3 ]) - 3;

-----

#include <fu/default.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

inline static int if_first_WgWjr9S0(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_WgWjr9S0(const fu_VEC<int>& a)
{
    return if_first_WgWjr9S0(a);
}

int fu_MAIN()
{
    return hello_WgWjr9S0(fu_VEC<int> { fu::slate<1, int> { 3 } }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn if_first(a: $T[]) a && a[0];
        type X = i32[];
        fn hello(a: X) a.if_first;
        fn main() hello([ 3 ]) - 3;

-----

#include <fu/default.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

inline static int if_first_WgWjr9S0(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_WgWjr9S0(const fu_VEC<int>& a)
{
    return if_first_WgWjr9S0(a);
}

int fu_MAIN()
{
    return hello_WgWjr9S0(fu_VEC<int> { fu::slate<1, int> { 3 } }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn if_first(a: $T[]) a && a[0];

        fn list(): i32[][] {
            return [[ 3 ]];
        }

        fn hello() list.if_first.if_first;
        fn main() hello - 3;

-----

#include <fu/default.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static fu_VEC<fu_VEC<int>> list_H9fhQUVP()
{
    return fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<1, int> { 3 } } } };
}

inline static const fu_VEC<int>& if_first_UhN1D3uw(const fu_VEC<fu_VEC<int>>& a)
{
    return a ? a[0] : (*(const fu_VEC<int>*)fu::NIL);
}

inline static int if_first_WgWjr9S0(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_H9fhQUVP()
{
    return int(if_first_WgWjr9S0(if_first_UhN1D3uw(list_H9fhQUVP())));
}

int fu_MAIN()
{
    return hello_H9fhQUVP() - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn if_first(a: $T[]) a && a[0];
        type X = i32[];

        fn list(): X[] {
            return [[ 3 ]];
        }

        fn hello() list.if_first.if_first;
        fn main() hello - 3;

-----

#include <fu/default.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static fu_VEC<fu_VEC<int>> list_H9fhQUVP()
{
    return fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<1, int> { 3 } } } };
}

inline static const fu_VEC<int>& if_first_UhN1D3uw(const fu_VEC<fu_VEC<int>>& a)
{
    return a ? a[0] : (*(const fu_VEC<int>*)fu::NIL);
}

inline static int if_first_WgWjr9S0(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_H9fhQUVP()
{
    return int(if_first_WgWjr9S0(if_first_UhN1D3uw(list_H9fhQUVP())));
}

int fu_MAIN()
{
    return hello_H9fhQUVP() - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        let arr = [1, 2];
        fn eq(a: i32[], b: i32[]) a == b;
        fn main() eq(arr, arr) ? 0 : 1;

-----

#include <fu/init_priority.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<int> arr fu_INIT_PRIORITY(1001) = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };

static bool eq_EYxE6zIF(fu::view<int> a, fu::view<int> b)
{
    return a == b;
}

int fu_MAIN()
{
    return (eq_EYxE6zIF(arr, arr) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let arr = [1, 2];
        fn eq(a: $T[], b: $T[]) a == b;
        fn main() eq(arr, arr) ? 0 : 1;

-----

#include <fu/init_priority.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<int> arr fu_INIT_PRIORITY(1001) = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };

inline static bool eq_EYxE6zIF(fu::view<int> a, fu::view<int> b)
{
    return a == b;
}

int fu_MAIN()
{
    return (eq_EYxE6zIF(arr, arr) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(hey: [i32])
            hey[0] + hey[1];

        fn main()
            test([-1, +1]);

        // EXPECT fu::slate<2, int> { -1, +1 }

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int test_OUM6L7aD(fu::view<int> hey)
{
    return hey[0] + hey[1];
}

int fu_MAIN()
{
    return test_OUM6L7aD((fu::slate<2, int> { -1, +1 }));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(hey: &mut [i32])
            hey[0] += hey[1];

        fn main() {
            mut hey = [-1, +1];
            return hey.test();
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int& test_IKJWiQLO(fu::view_mut<int> hey)
{
    return (hey.mutref(0) += int(hey[1]));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<2, int> { -1, +1 } };
    return int(test_IKJWiQLO(hey));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(i: i32) [ i, i + 1 ];
        fn main() test(0)[1] - 1;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static fu_VEC<int> test_pZ8wRcaF(const int i)
{
    return fu_VEC<int> { fu::slate<2, int> { int(i), (i + 1) } };
}

int fu_MAIN()
{
    return test_pZ8wRcaF(0)[1] - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(hey: byte[])
            hey.view(u32)[0];

        fn main() {
            mut hey: byte[] = [ byte(1), byte(1), byte(1), byte(1) ];
            return (hey.test - 0x1010101).i32;
        }

-----

#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static unsigned test_vhnG1IeH(fu::view<char> hey)
{
    return fu::view_of(hey, unsigned{})[0];
}

int fu_MAIN()
{
    fu_STR hey = fu_STR { fu::slate<4, char> { char(1), char(1), char(1), char(1) } };
    return int((test_vhnG1IeH(hey) - 0x1010101u));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(hey: [i32])
            hey[0] + hey[1];

        fn main() {
            let hey = [7, -1, +1];
            return test(hey[1, 3]);
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int test_OUM6L7aD(fu::view<int> hey)
{
    return hey[0] + hey[1];
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<3, int> { 7, -1, +1 } };
    return test_OUM6L7aD(fu::get_view(hey, 1, 3));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(hey: &mut [i32])
            hey[0] += hey[1];

        fn main() {
            mut hey = [7, -1, +1];
            return hey[1, 3].test();
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int& test_IKJWiQLO(fu::view_mut<int> hey)
{
    return (hey.mutref(0) += int(hey[1]));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<3, int> { 7, -1, +1 } };
    return int(test_IKJWiQLO(fu::get_view_mut(hey, 1, 3)));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(hey: &mut [i32])
            hey.= [2, -3];

        fn main() {
            mut hey = [1, 0, 0];
            test(hey[1, 3]);
            return hey[0] + hey[1] + hey[2];
        }

-----

#include <fu/vec.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void test_IKJWiQLO(fu::view_mut<int> hey)
{
    fu::view_assign(hey, (fu::slate<2, int> { 2, -3 }));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<3, int> { 1, 0, 0 } };
    test_IKJWiQLO(fu::get_view_mut(hey, 1, 3));
    return (hey[0] + hey[1]) + hey[2];
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Hey {
            i: i32;
        };

        fn test(out: &mut [Hey]) {
            out.view(u8) .= [ 1.u8, 1.u8, 1.u8, 1.u8 ];
        }

        fn main() {
            mut a = [ Hey ];
            a.test();
            return a[0].i - 16843009;
        }

-----

#include <fu/int.h>
#include <fu/vec.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void test_oJTMqfyq(fu::view_mut<s_Hey> out)
{
    fu::view_assign(fu::view_of_mut(out, fu::u8{}), (fu::slate<4, fu::u8> { fu::u8(unsigned(1)), fu::u8(unsigned(1)), fu::u8(unsigned(1)), fu::u8(unsigned(1)) }));
}

int fu_MAIN()
{
    fu_VEC<s_Hey> a = fu_VEC<s_Hey> { fu::slate<1, s_Hey> { s_Hey{} } };
    test_oJTMqfyq(a);
    return a[0].i - 16843009;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Hey {
            i: i32;
        };

        fn test(x: &mut [i32], y: [ Hey ])
            x .= y.view(i32);

        fn main() {
            mut a = [ 0 ];
            test(a, [ Hey(13) ]);
            return a[0] - 13;
        }

-----

#include <fu/vec.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void test_q9gmXRpO(fu::view_mut<int> x, fu::view<s_Hey> y)
{
    fu::view_assign(x, fu::view_of(y, int{}));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    test_q9gmXRpO(a, (fu::slate<1, s_Hey> { s_Hey { 13 } }));
    return a[0] - 13;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Hey {
            i: i32;
        };

        fn main() {
            mut a = [ 0 ];
            a .= [ Hey(13) ].view(i32);
            return a[0] - 13;
        }

-----

#include <fu/vec.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu::view_assign(a, fu::view_of((fu::slate<1, s_Hey> { s_Hey { 13 } }), int{}));
    return a[0] - 13;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(a: [byte], b?: [byte]) a == b;
        fn main() test("") ? 0 : 1;

        // EXPECT (fu::view<char>{}, fu::view<char>{})

-----

#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static bool test_26pD8BLL(fu::view<char> a, fu::view<char> b)
{
    return a == b;
}

int fu_MAIN()
{
    return (test_26pD8BLL(fu::view<char>{}, fu::view<char>{}) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        // When we spec find(), the second arg is a view, not an array, so the $T specs to a less than array:
        //  next thing that happens is that the first argument, which is $T[] specs to an array of views except they're not even refs for some reason.
        //   so then we try to use the spec but quals matching doesn't descend through the type cannon, so they mismatch with:
        //
        // First arg of find(), the $T[] to search:
        //
        // ACTUAL CANON: []+1028[]+28byte
        //                        ^^^^^^^ of bytes
        //                 ^^^^^^^ of arrays (resize + copy)
        //               ^^ view of
        //
        // EXPECT CANON: [][]+28byte
        //                   ^^^^^^^ of bytes
        //                 ^^ not a view (not a ref), nor an array - no resize/copy
        //               ^^ view of
        //
        let NOTES = [ "AAA", "BBB", "CCC" ];
        fn what(annot: string) NOTES.find(annot[1, annot.len]);
        fn main() what("!BBB") - 1;

-----

#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<fu_STR> NOTES fu_INIT_PRIORITY(1001) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "AAA"_fu, "BBB"_fu, "CCC"_fu } };

                                #ifndef DEFt_find_z1Y1RRvf
                                #define DEFt_find_z1Y1RRvf
inline int find_z1Y1RRvf(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static int what_vhnG1IeH(fu::view<char> annot)
{
    return find_z1Y1RRvf(NOTES, fu::get_view(annot, 1, annot.size()));
}

int fu_MAIN()
{
    return what_vhnG1IeH("!BBB"_fu) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Hey { i: i32; }

        fn main() {
            let a = 1;
            let r: Hey = a && [ a ];
            return r.i - 1;
        }

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = 1;
    const s_Hey r = (a ? s_Hey { int(a) } : s_Hey{});
    return r.i - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Hey { i: i32; }

        fn main() {
            let a: Hey[] = [ [ -1 ], [ +1 ] ];
            return a[0].i + a[1].i;
        }

-----

#include <fu/vec.h>

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<s_Hey> a = fu_VEC<s_Hey> { fu::slate<2, s_Hey> { s_Hey { -1 }, s_Hey { +1 } } };
    return a[0].i + a[1].i;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Hey { i: i32; }

        fn test(): Hey {
            return [ 0 ];
        }

        fn main() test.i;

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Hey test_H9fhQUVP()
{
    return s_Hey { 0 };
}

int fu_MAIN()
{
    return test_H9fhQUVP().i;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test {

            a: i32;  
            b: i32;
        };

        return Test(b: 1).a;

-----
_0.fu @11:20:

[2m      |         };[0m
[2m      | [0m
   11 |         return Test[31;1m([0mb: 1).a;
[2m      | [0m
[2m      | }[0m

	Bad call to [34;1mTest[0m: 

	[35;1mtype[0m [34;1mTest[0m: Wrong number of arguments: expects 2, got 1.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Test {

            a?: i32; 
            b: i32;
        };

        return Test(b: 1).a;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_Test { 0, 1 }.a;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test {
            b: i32;

            a: i32;  
        };

        return Test(1).a;

-----
_0.fu @11:20:

[2m      |         };[0m
[2m      | [0m
   11 |         return Test[31;1m([0m1).a;
[2m      | [0m
[2m      | }[0m

	Bad call to [34;1mTest[0m: 

	[35;1mtype[0m [34;1mTest[0m: Wrong number of arguments: expects 2, got 1.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Test {
            b: i32;

            a?: i32; 
        };

        return Test(1).a;

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int b;
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || b
            || a
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_Test { 1, 0 }.a;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Node {
            items?: Node[];
            stuff?: Node[];
        };

        fn rec_copy(ref a: Node) {
            // If implemented naively,
            //  by the time you copy stuff it's no longer there.
            a = a.items[0];
        }

        fn main() {
            mut a = Node(items: [ Node(stuff: [ Node ]) ]);
            rec_copy(a);
            return a.stuff.len - 1;
        }

-----

#include <fu/vec.h>

struct s_Node;

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_VEC<s_Node> items;
    fu_VEC<s_Node> stuff;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || items
            || stuff
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void rec_copy_4htgoDpn(s_Node& a)
{
    a = a.items[0];
}

int fu_MAIN()
{
    s_Node a = s_Node { fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node { fu_VEC<s_Node>{}, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node{} } } } } }, fu_VEC<s_Node>{} };
    rec_copy_4htgoDpn(a);
    return a.stuff.size() - 1;
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(a: i32, b!: i32 = 1) a + b;
        return test(-1);

-----

#ifndef FU_NO_FDEFs

static int test_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_Y2eLgl0W(-1, 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: i32, b!: i32 = 1) a + b;

        return test(-2, +2);    

-----
_0.fu @7:20:

[2m      |         fn test(a: i32, b!: i32 = 1) a + b;[0m
[2m      | [0m
    7 |         return test[31;1m([0m-2, +2);    
[2m      | [0m
[2m      | }[0m

	Bad call to [34;1mtest[0m: 

	[35;1mfn[0m [34;1mtest_Y2eLgl0W[0m: Argument must be :explicitly named [35;1marg[0m [34;1mb[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn test(a: i32, b!: i32 = 1) a + b;

        return test(-2, b: +2); 

-----

#ifndef FU_NO_FDEFs

static int test_Y2eLgl0W(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_Y2eLgl0W(-2, +2);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a: i32; b!: i32; };
        fn test(t: Test) t.a + t.b;

        return Test(-2, +2).test;    

-----
_0.fu @8:20:

[2m      |         fn test(t: Test) t.a + t.b;[0m
[2m      | [0m
    8 |         return Test[31;1m([0m-2, +2).test;    
[2m      | [0m
[2m      | }[0m

	Bad call to [34;1mTest[0m: 

	[35;1mtype[0m [34;1mTest[0m: Argument must be :explicitly named [35;1marg[0m [34;1mb[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Test { a: i32; b!: i32; };
        fn test(t: Test) t.a + t.b;

        return Test(-2, b: +2).test; 

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_DHkEjcEF(const s_Test& t)
{
    return t.a + t.b;
}

int fu_MAIN()
{
    return test_DHkEjcEF(s_Test { -2, +2 });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a?: i32; b!?: i32; };
        fn test(t: Test) t.a + t.b;

        return Test(-2, +2).test;    

-----
_0.fu @8:20:

[2m      |         fn test(t: Test) t.a + t.b;[0m
[2m      | [0m
    8 |         return Test[31;1m([0m-2, +2).test;    
[2m      | [0m
[2m      | }[0m

	Bad call to [34;1mTest[0m: 

	[35;1mtype[0m [34;1mTest[0m: Argument must be :explicitly named [35;1marg[0m [34;1mb[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct Test { a?: i32; b!?: i32; };
        fn test(t: Test) t.a + t.b;

        return Test(b: +2).test - 2; 

-----

struct s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
struct s_Test
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_DHkEjcEF(const s_Test& t)
{
    return t.a + t.b;
}

int fu_MAIN()
{
    return test_DHkEjcEF(s_Test { 0, +2 }) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        let _precedence = 0;
        fn parseExpression(p1 = _precedence, mode! = 0) p1 + mode;
        fn main() parseExpression();

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF__precedence
                                #define DEF__precedence
inline constexpr int _precedence = 0;
                                #endif

static int parseExpression_XFamX2JF(const int p1, const int mode)
{
    return p1 + mode;
}

int fu_MAIN()
{
    return parseExpression_XFamX2JF(_precedence, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn A(x!: i32 = 0) x;
        fn B(x: i32 = 0) A(:x);
        fn main() A + B;

-----

#ifndef FU_NO_FDEFs

static int A_pZ8wRcaF(const int x)
{
    return x;
}

static int B_pZ8wRcaF(const int x)
{
    return A_pZ8wRcaF(x);
}

int fu_MAIN()
{
    return A_pZ8wRcaF(0) + B_pZ8wRcaF(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn what(a = -1, b!: i32) a + b; // Trailing explicit args.
        fn main() what(b: +1);

-----

#ifndef FU_NO_FDEFs

static int what_XFamX2JF(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return what_XFamX2JF(-1, +1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn greet(with!greeting: string)     greeting.len;
        fn main()                           greet(with: "Hello!") - 6;

-----

#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int greet_vhnG1IeH(fu::view<char> greeting)
{
    return greeting.size();
}

int fu_MAIN()
{
    return greet_vhnG1IeH("Hello!"_fu) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn a0o0() 0;
        fn a1o0(a : i32) a;
        fn a2o1(a : i32, b?: i32) a + b;
        fn a2o2(a?: i32, b?: i32) a + b;
        fn main() a0o0(a?: 1, b?: 2) *      1   //      .
                + a1o0(a?: 1, b?: 2) *     10   //     10
                + a2o1(a?: 1, b?: 2) *    100   //    300
                + a2o2(a?: 1, b?: 2) *   1000   //   3000
                + a2o1(a : 1, 
                              c       
                               ?: 2) *  10000   //  30000
                + a2o1(a : 1)        * 100000   // 100000
                                // ----------------------
                                     - 133310;

-----
_0.fu @10:23:

[2m      |                 + a2o1(a?: 1, b?: 2) *    100   //    300[0m
[2m      |                 + a2o2(a?: 1, b?: 2) *   1000   //   3000[0m
   10 |                 + a2o1[31;1m([0ma : 1, 
[2m      |                               c       [0m
[2m      |                                ?: 2) *  10000   //  30000[0m

	Bad call to [34;1ma2o1[0m: 

	[35;1mfn[0m [34;1ma2o1_XFamX2JF[0m: Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn a0o0() 0;
        fn a1o0(a : i32) a;
        fn a2o1(a : i32, b?: i32) a + b;
        fn a2o2(a?: i32, b?: i32) a + b;
        fn main() a0o0(a?: 1, b?: 2) *      1   //      .
                + a1o0(a?: 1, b?: 2) *     10   //     10
                + a2o1(a?: 1, b?: 2) *    100   //    300
                + a2o2(a?: 1, b?: 2) *   1000   //   3000
                + a2o1(a : 1, 
                              b       
                               ?: 2) *  10000   //  30000
                + a2o1(a : 1)        * 100000   // 100000
                                // ----------------------
                                     - 133310;

-----

#ifndef FU_NO_FDEFs

static int a0o0_H9fhQUVP()
{
    return 0;
}

static int a1o0_pZ8wRcaF(const int a)
{
    return a;
}

static int a2o1_XFamX2JF(const int a, const int b)
{
    return a + b;
}

static int a2o2_XFamX2JF(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return ((((((a0o0_H9fhQUVP() * 1) + (a1o0_pZ8wRcaF(1) * 10)) + (a2o1_XFamX2JF(1, 2) * 100)) + (a2o2_XFamX2JF(1, 2) * 1000)) + (a2o1_XFamX2JF(1, 2) * 10000)) + (a2o1_XFamX2JF(1, 0) * 100000)) - 133310;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn reveach(items: [$T], fn)
            for (mut i = items.len; i --> 0; )
                fn(items[i], i?: i);

        pub fn main() {
            mut sum = 0;
            [1, 2, 3].reveach(|x   | sum += x          );
            [1, 2, 3].reveach(|x, i| sum += x * i * 100);
            return sum - 806;
        }

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_reveach_WxsMz19X
                                #define DEFt_reveach_WxsMz19X
inline void reveach_WxsMz19X(fu::view<int> items, int& sum)
{
    for (int i = items.size(); i-- > 0; )
    {
        const int x = items[i];
        sum += x;
    };
}
                                #endif

                                #ifndef DEFt_reveach_y3RnOgn3
                                #define DEFt_reveach_y3RnOgn3
inline void reveach_y3RnOgn3(fu::view<int> items, int& sum)
{
    for (int i = items.size(); i-- > 0; )
    {
        const int x = items[i];
        sum += ((x * i) * 100);
    };
}
                                #endif

int fu_MAIN()
{
    int sum = 0;
    reveach_WxsMz19X((fu::slate<3, int> { 1, 2, 3 }), sum);
    reveach_y3RnOgn3((fu::slate<3, int> { 1, 2, 3 }), sum);
    return sum - 806;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn noop() 0;
        pub fn woot(ref i: i32, fn) i += fn(i?: i += 1); // Will not add 1.

        fn main() {
            mut sum = 0;
            woot(sum, fn noop);
            return sum;
        }

-----

#ifndef FU_NO_FDEFs

int noop_H9fhQUVP()
{
    return 0;
}

                                #ifndef DEFt_woot_z4ga2Omi
                                #define DEFt_woot_z4ga2Omi
inline int& woot_z4ga2Omi(int& i)
{
    return (i += noop_H9fhQUVP());
}
                                #endif

int fu_MAIN()
{
    /*MOV*/ int sum = 0;
    woot_z4ga2Omi(sum);
    return /*NRVO*/ sum;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i8 = 
                128 ;

            return (ret - 100).i32 - 27;
        }

-----
_0.fu @4:17:

[2m      |         fn main() {[0m
[2m      |             let ret: i8 = [0m
    4 |                 [31;1m128[0m ;
[2m      | [0m
[2m      |             return (ret - 100).i32 - 27;[0m

	Type annotation does not match init expression `ret`: i8: copy=i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: i8 = 
                127 ;

            return (ret - 100).i32 - 27;
        }

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const fu::i8 ret = fu::i8(127);
    return int(fu::i8((ret - fu::i8(100)))) - 27;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i16 = 
                32768 ;

            return (ret - 32700).i32 - 67;
        }

-----
_0.fu @4:17:

[2m      |         fn main() {[0m
[2m      |             let ret: i16 = [0m
    4 |                 [31;1m32768[0m ;
[2m      | [0m
[2m      |             return (ret - 32700).i32 - 67;[0m

	Type annotation does not match init expression `ret`: i16: copy=i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: i16 = 
                32767 ;

            return (ret - 32700).i32 - 67;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const short ret = short(32767);
    return int(short((ret - short(32700)))) - 67;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i32 = 
                2147483648 ;

            return (ret - 2147483600).i32 - 47;
        }

-----
_0.fu @4:17:

[2m      |         fn main() {[0m
[2m      |             let ret: i32 = [0m
    4 |                 [31;1m2147483648[0m ;
[2m      | [0m
[2m      |             return (ret - 2147483600).i32 - 47;[0m

	Type annotation does not match init expression `ret`: i32: copy=i64: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: i32 = 
                2147483647 ;

            return (ret - 2147483600).i32 - 47;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int ret = 2147483647;
    return int((ret - 2147483600)) - 47;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() { // weird error, see the other two below
            let ret: i64 = 
                9223372036854775808 ;

            return (ret - 9223372036854775800).i32 - 7;
        }

-----
_0.fu @4:17:

[2m      |         fn main() { // weird error, see the other two below[0m
[2m      |             let ret: i64 = [0m
    4 |                 [31;1m9223372036854775808[0m ;
[2m      | [0m
[2m      |             return (ret - 9223372036854775800).i32 - 7;[0m

	Bad int literal.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() { // weird error, see the other two below
            let ret: i64 = 
                9223372036854775807 ;

            return (ret - 9223372036854775800).i32 - 7;
        }

-----

#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int64_t ret = 9223372036854775807ll;
    return int((ret - 9223372036854775800ll)) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i8 = 
                -129 ;

            return (ret + 100).i32 + 28;
        }

-----
_0.fu @4:18:

[2m      |         fn main() {[0m
[2m      |             let ret: i8 = [0m
    4 |                 -[31;1m129[0m ;
[2m      | [0m
[2m      |             return (ret + 100).i32 + 28;[0m

	Type annotation does not match init expression `ret`: i8: copy=i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: i8 = 
                -128 ;

            return (ret + 100).i32 + 28;
        }

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const fu::i8 ret = fu::i8(-128);
    return int(fu::i8((ret + fu::i8(100)))) + 28;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i16 = 
                -32769 ;

            return (ret + 32700).i32 + 68;
        }

-----
_0.fu @4:18:

[2m      |         fn main() {[0m
[2m      |             let ret: i16 = [0m
    4 |                 -[31;1m32769[0m ;
[2m      | [0m
[2m      |             return (ret + 32700).i32 + 68;[0m

	Type annotation does not match init expression `ret`: i16: copy=i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: i16 = 
                -32768 ;

            return (ret + 32700).i32 + 68;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const short ret = short(-32768);
    return int(short((ret + short(32700)))) + 68;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i32 = 
                -2147483649 ;

            return (ret + 2147483600).i32 + 48;
        }

-----
_0.fu @4:18:

[2m      |         fn main() {[0m
[2m      |             let ret: i32 = [0m
    4 |                 -[31;1m2147483649[0m ;
[2m      | [0m
[2m      |             return (ret + 2147483600).i32 + 48;[0m

	Type annotation does not match init expression `ret`: i32: copy=i64: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: i32 = 
                -2147483648 ;

            return (ret + 2147483600).i32 + 48;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int ret = -2147483648;
    return int((ret + 2147483600)) + 48;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() { // wording different from the ones above and below
            let ret: i64 = 
                -9223372036854775809 ;

            return (ret + 9223372036854775800).i32 + 8;
        }

-----
_0.fu @4:18:

[2m      |         fn main() { // wording different from the ones above and below[0m
[2m      |             let ret: i64 = [0m
    4 |                 -[31;1m9223372036854775809[0m ;
[2m      | [0m
[2m      |             return (ret + 9223372036854775800).i32 + 8;[0m

	Oversized signed int literal.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() { // wording different from the ones above and below
            let ret: i64 = 
                -9223372036854775808 ;

            return (ret + 9223372036854775800).i32 + 8;
        }

-----

#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int64_t ret = (-9223372036854775807-1);
    return int((ret + 9223372036854775800ll)) + 8;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: u8 = 
                256 ;

            return (ret - 0xff).i32;
        }

-----
_0.fu @4:17:

[2m      |         fn main() {[0m
[2m      |             let ret: u8 = [0m
    4 |                 [31;1m256[0m ;
[2m      | [0m
[2m      |             return (ret - 0xff).i32;[0m

	Type annotation does not match init expression `ret`: u8: copy=i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: u8 = 
                255 ;

            return (ret - 0xff).i32;
        }

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const fu::u8 ret = fu::u8(255u);
    return int(unsigned(fu::u8((ret - fu::u8(0xffu)))));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: u16 = 
                65536 ;

            return (ret - 0xffff).i32;
        }

-----
_0.fu @4:17:

[2m      |         fn main() {[0m
[2m      |             let ret: u16 = [0m
    4 |                 [31;1m65536[0m ;
[2m      | [0m
[2m      |             return (ret - 0xffff).i32;[0m

	Type annotation does not match init expression `ret`: u16: copy=i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: u16 = 
                65535 ;

            return (ret - 0xffff).i32;
        }

-----

#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const uint16_t ret = uint16_t(65535u);
    return int(unsigned(uint16_t((ret - uint16_t(0xffffu)))));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: u32 = 
                4294967296 ;

            return (ret - 0xffffffff).i32;
        }

-----
_0.fu @4:17:

[2m      |         fn main() {[0m
[2m      |             let ret: u32 = [0m
    4 |                 [31;1m4294967296[0m ;
[2m      | [0m
[2m      |             return (ret - 0xffffffff).i32;[0m

	Type annotation does not match init expression `ret`: u32: copy=i64: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            let ret: u32 = 
                4294967295 ;

            return (ret - 0xffffffff).i32;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const unsigned ret = 4294967295u;
    return int((ret - 0xffffffffu));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() { // this is the best of the weird ones
            let ret: u64 = 
                18446744073709551616 ;

            return (ret - 0xffffffffffffffff).i32;
        }

-----
_0.fu @4:17:

[2m      |         fn main() { // this is the best of the weird ones[0m
[2m      |             let ret: u64 = [0m
    4 |                 [31;1m18446744073709551616[0m ;
[2m      | [0m
[2m      |             return (ret - 0xffffffffffffffff).i32;[0m

	Integer literal overflows a u64.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() { // this is the best of the weird ones
            let ret: u64 = 
                18446744073709551615 ;

            return (ret - 0xffffffffffffffff).i32;
        }

-----

#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const uint64_t ret = 18446744073709551615ull;
    return int(unsigned((ret - 0xffffffffffffffffull)));
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn set_once(ref entry, bit: i32): bool
        {
            let mask = 1 << bit.u64;    // cg'd into '1u << uint64_t(bit)'
            if (entry & mask)           //  which doesnt work for some reason
                return false;

            entry |= mask;
            return true;
        }

        fn main() {
            mut entry: u64;
            let a = set_once(entry, 32);
            let b = set_once(entry, 32);
            return a && !b ? 0 : 101;
        }

-----

#include <cstdint>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_set_once_UqYRNBFj
                                #define DEFt_set_once_UqYRNBFj
inline bool set_once_UqYRNBFj(uint64_t& entry, const int bit)
{
    const uint64_t mask = (1ull << uint64_t(unsigned(bit)));
    if (entry & mask)
        return false;

    entry |= mask;
    return true;
}
                                #endif

int fu_MAIN()
{
    uint64_t entry {};
    const bool a = set_once_UqYRNBFj(entry, 32);
    const bool b = set_once_UqYRNBFj(entry, 32);
    return ((a && !b) ? 0 : 101);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn noop() {} // AUTOPUB

        fn hello() 3;

        import _0;
        fn main() 6 - hello * 2;

-----
_1.fu @3:23:

[2m      | [0m
[2m      |         import _0;[0m
    3 |         fn main() 6 - [31;1mhello[0m * 2;
[2m      | [0m

	Bad call to [34;1mhello[0m: [34;1mhello[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        pub fn noop() {} // AUTOPUB

        pub

        fn hello() 3;

-----

#ifndef FU_NO_FDEFs

void noop_H9fhQUVP()
{
}

int hello_H9fhQUVP()
{
    return 3;
}

#endif

-----

        pub fn noop() {} // AUTOPUB

        pub

        fn hello() 3;

        import _0;
        fn main() 6 - hello * 2;

-----

int hello_H9fhQUVP();

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 6 - (hello_H9fhQUVP() * 2);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Hey { i: i32; };

-----

-----

        pub struct Hey { i: i32; };

        fn main() 1._0::Hey.i - 1;

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return s_Hey { 1 }.i - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Hey { i: i32; };

-----

-----

        pub struct Hey { i: i32; };

        import _0;
        pub inline fn test(h: Hey) h.i + 2;

-----

-----

        pub struct Hey { i: i32; };

        import _0;
        pub inline fn test(h: Hey) h.i + 2;

        import _1;
        fn main() 1._0::Hey.test - 3;

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int BL_1_v {};
    return (__extension__ (
    {
        const s_Hey h = s_Hey { 1 };
        BL_1_v = ((h.i + 2));
    (void)0;}), int(BL_1_v)) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Hey { i: i32; };

-----

-----

        pub struct Hey { i: i32; };

        pub inline fn test(h: _0::Hey) h.i + 2;

-----

-----

        pub struct Hey { i: i32; };

        pub inline fn test(h: _0::Hey) h.i + 2;

        import _1;
        fn main() 1._0::Hey.test - 3;

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int BL_1_v {};
    return (__extension__ (
    {
        const s_Hey h = s_Hey { 1 };
        BL_1_v = ((h.i + 2));
    (void)0;}), int(BL_1_v)) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Hey { i: i32; };

-----

-----

        pub struct Hey { i: i32; };

        pub inline fn test(h: _0::Hey) h.i + 2;

-----

-----

        pub struct Hey { i: i32; };

        pub inline fn test(h: _0::Hey) h.i + 2;

        fn main() 1._0::Hey._1::test - 3;

-----

struct s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int BL_1_v {};
    return (__extension__ (
    {
        const s_Hey h = s_Hey { 1 };
        BL_1_v = ((h.i + 2));
    (void)0;}), int(BL_1_v)) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct You { i: i32; };

-----

-----

        pub struct You { i: i32; };

        pub struct Hey { using you: _0::You; };
        pub fn init3(): Hey = [ _0::You(3) ];

-----

struct s_Hey;
struct s_You;

                                #ifndef DEF_s_You
                                #define DEF_s_You
struct s_You
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    s_You you;
    explicit operator bool() const noexcept
    {
        return false
            || you
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_Hey init3_t0IXs7Dh()
{
    return s_Hey { s_You { 3 } };
}

#endif

-----

        pub struct You { i: i32; };

        pub struct Hey { using you: _0::You; };
        pub fn init3(): Hey = [ _0::You(3) ];

        pub inline fn test(using h = _1::init3) i + 7;

-----

-----

        pub struct You { i: i32; };

        pub struct Hey { using you: _0::You; };
        pub fn init3(): Hey = [ _0::You(3) ];

        pub inline fn test(using h = _1::init3) i + 7;

        fn main() _2::test - 10;

-----

struct s_Hey;
struct s_You;

s_Hey init3_t0IXs7Dh();

                                #ifndef DEF_s_You
                                #define DEF_s_You
struct s_You
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
struct s_Hey
{
    s_You you;
    explicit operator bool() const noexcept
    {
        return false
            || you
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int BL_1_v {};
    return (__extension__ (
    {
        const s_Hey h = init3_t0IXs7Dh();
        BL_1_v = ((h.you.i + 7));
    (void)0;}), int(BL_1_v)) - 10;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct vec3 {
            x?: f32;
            y?: f32;
            z?: f32;
        };

-----

-----

        pub struct vec3 {
            x?: f32;
            y?: f32;
            z?: f32;
        };

        import _0;

        pub struct mat34 {
            mx: vec3;
            my: vec3;
            mz: vec3;
            mo: vec3;
        };

        pub inline fn mat34_identity()
            mat34(
                vec3(x: 1),
                vec3(y: 1),
                vec3(z: 1), vec3 /*point3*/);

-----

-----

        pub struct vec3 {
            x?: f32;
            y?: f32;
            z?: f32;
        };

        import _0;

        pub struct mat34 {
            mx: vec3;
            my: vec3;
            mz: vec3;
            mo: vec3;
        };

        pub inline fn mat34_identity()
            mat34(
                vec3(x: 1),
                vec3(y: 1),
                vec3(z: 1), vec3 /*point3*/);

        pub struct mat4 {
            m0: f32; m1: f32; m2: f32; m3: f32;
            m4: f32; m5: f32; m6: f32; m7: f32;
            m8: f32; m9: f32; mA: f32; mB: f32;
            mC: f32; mD: f32; mE: f32; mF: f32;
        };

        pub inline fn mat4(using m: _1::mat34)
            mat4(
                mx.x, mx.y, mx.z, 0,
                my.x, my.y, my.z, 0,
                mz.x, mz.y, mz.z, 0,
                mo.x, mo.y, mo.z, 1);

        pub fn determinant(using _: mat4)
            + mC * m9 * m6 * m3 - m8 * mD * m6 * m3 - mC * m5 * mA * m3
            + m4 * mD * mA * m3 + m8 * m5 * mE * m3 - m4 * m9 * mE * m3
            - mC * m9 * m2 * m7 + m8 * mD * m2 * m7 + mC * m1 * mA * m7
            - m0 * mD * mA * m7 - m8 * m1 * mE * m7 + m0 * m9 * mE * m7
            + mC * m5 * m2 * mB - m4 * mD * m2 * mB - mC * m1 * m6 * mB
            + m0 * mD * m6 * mB + m4 * m1 * mE * mB - m0 * m5 * mE * mB
            - m8 * m5 * m2 * mF + m4 * m9 * m2 * mF + m8 * m1 * m6 * mF
            - m0 * m9 * m6 * mF - m4 * m1 * mA * mF + m0 * m5 * mA * mF;

-----

struct s_mat4;

                                #ifndef DEF_s_mat4
                                #define DEF_s_mat4
struct s_mat4
{
    float m0;
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    float m6;
    float m7;
    float m8;
    float m9;
    float mA;
    float mB;
    float mC;
    float mD;
    float mE;
    float mF;
    explicit operator bool() const noexcept
    {
        return false
            || m0
            || m1
            || m2
            || m3
            || m4
            || m5
            || m6
            || m7
            || m8
            || m9
            || mA
            || mB
            || mC
            || mD
            || mE
            || mF
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

float determinant_H3tQvZrE(const s_mat4& _)
{
    return (((((((((((((((((((((((((+_.mC * _.m9) * _.m6) * _.m3) - (((_.m8 * _.mD) * _.m6) * _.m3)) - (((_.mC * _.m5) * _.mA) * _.m3)) + (((_.m4 * _.mD) * _.mA) * _.m3)) + (((_.m8 * _.m5) * _.mE) * _.m3)) - (((_.m4 * _.m9) * _.mE) * _.m3)) - (((_.mC * _.m9) * _.m2) * _.m7)) + (((_.m8 * _.mD) * _.m2) * _.m7)) + (((_.mC * _.m1) * _.mA) * _.m7)) - (((_.m0 * _.mD) * _.mA) * _.m7)) - (((_.m8 * _.m1) * _.mE) * _.m7)) + (((_.m0 * _.m9) * _.mE) * _.m7)) + (((_.mC * _.m5) * _.m2) * _.mB)) - (((_.m4 * _.mD) * _.m2) * _.mB)) - (((_.mC * _.m1) * _.m6) * _.mB)) + (((_.m0 * _.mD) * _.m6) * _.mB)) + (((_.m4 * _.m1) * _.mE) * _.mB)) - (((_.m0 * _.m5) * _.mE) * _.mB)) - (((_.m8 * _.m5) * _.m2) * _.mF)) + (((_.m4 * _.m9) * _.m2) * _.mF)) + (((_.m8 * _.m1) * _.m6) * _.mF)) - (((_.m0 * _.m9) * _.m6) * _.mF)) - (((_.m4 * _.m1) * _.mA) * _.mF)) + (((_.m0 * _.m5) * _.mA) * _.mF);
}

#endif

-----

        pub struct vec3 {
            x?: f32;
            y?: f32;
            z?: f32;
        };

        import _0;

        pub struct mat34 {
            mx: vec3;
            my: vec3;
            mz: vec3;
            mo: vec3;
        };

        pub inline fn mat34_identity()
            mat34(
                vec3(x: 1),
                vec3(y: 1),
                vec3(z: 1), vec3 /*point3*/);

        pub struct mat4 {
            m0: f32; m1: f32; m2: f32; m3: f32;
            m4: f32; m5: f32; m6: f32; m7: f32;
            m8: f32; m9: f32; mA: f32; mB: f32;
            mC: f32; mD: f32; mE: f32; mF: f32;
        };

        pub inline fn mat4(using m: _1::mat34)
            mat4(
                mx.x, mx.y, mx.z, 0,
                my.x, my.y, my.z, 0,
                mz.x, mz.y, mz.z, 0,
                mo.x, mo.y, mo.z, 1);

        pub fn determinant(using _: mat4)
            + mC * m9 * m6 * m3 - m8 * mD * m6 * m3 - mC * m5 * mA * m3
            + m4 * mD * mA * m3 + m8 * m5 * mE * m3 - m4 * m9 * mE * m3
            - mC * m9 * m2 * m7 + m8 * mD * m2 * m7 + mC * m1 * mA * m7
            - m0 * mD * mA * m7 - m8 * m1 * mE * m7 + m0 * m9 * mE * m7
            + mC * m5 * m2 * mB - m4 * mD * m2 * mB - mC * m1 * m6 * mB
            + m0 * mD * m6 * mB + m4 * m1 * mE * mB - m0 * m5 * mE * mB
            - m8 * m5 * m2 * mF + m4 * m9 * m2 * mF + m8 * m1 * m6 * mF
            - m0 * m9 * m6 * mF - m4 * m1 * mA * mF + m0 * m5 * mA * mF;

        pub fn main()
        {
            let m34 = _1::mat34_identity;
            let m44 = _2::mat4(m34);

            return m44.determinant.i32 - 1;
        }

-----

struct s_mat34;
struct s_mat4;
struct s_vec3;

float determinant_H3tQvZrE(const s_mat4&);

                                #ifndef DEF_s_vec3
                                #define DEF_s_vec3
struct s_vec3
{
    float x;
    float y;
    float z;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
            || z
        ;
    }
};
                                #endif

                                #ifndef DEF_s_mat34
                                #define DEF_s_mat34
struct s_mat34
{
    s_vec3 mx;
    s_vec3 my;
    s_vec3 mz;
    s_vec3 mo;
    explicit operator bool() const noexcept
    {
        return false
            || mx
            || my
            || mz
            || mo
        ;
    }
};
                                #endif

                                #ifndef DEF_s_mat4
                                #define DEF_s_mat4
struct s_mat4
{
    float m0;
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    float m6;
    float m7;
    float m8;
    float m9;
    float mA;
    float mB;
    float mC;
    float mD;
    float mE;
    float mF;
    explicit operator bool() const noexcept
    {
        return false
            || m0
            || m1
            || m2
            || m3
            || m4
            || m5
            || m6
            || m7
            || m8
            || m9
            || mA
            || mB
            || mC
            || mD
            || mE
            || mF
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const s_mat34 m34 = s_mat34 { s_vec3 { 1.0f, 0.0f, 0.0f }, s_vec3 { 0.0f, 1.0f, 0.0f }, s_vec3 { 0.0f, 0.0f, 1.0f }, s_vec3{} };
    const s_mat4 m44 = ((void)void(), s_mat4 { float(m34.mx.x), float(m34.mx.y), float(m34.mx.z), 0.0f, float(m34.my.x), float(m34.my.y), float(m34.my.z), 0.0f, float(m34.mz.x), float(m34.mz.y), float(m34.mz.z), 0.0f, float(m34.mo.x), float(m34.mo.y), float(m34.mo.z), 1.0f });
    return int(determinant_H3tQvZrE(m44)) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        import vec3;

        fn main() vec3.maxc.i32;

-----

-----

        fn main() ::vec3.maxc.i32;

-----

-----

        pub fn _0(i: i32) i + 1;

-----

#ifndef FU_NO_FDEFs

int _0_pZ8wRcaF(const int i)
{
    return i + 1;
}

#endif

-----

        pub fn _0(i: i32) i + 1;

        fn main() (-1).::_0;

-----

int _0_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return _0_pZ8wRcaF(-1);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn add(ref to: $T[], item: $T) {
            for (mut i = 0; i < to.len; i++) {
                if (to[i] >= item) {
                    if (to[i] != item)
                        to.insert(i, item);

                    return;
                }
            }

            to.push(item);
        }

-----

-----

        pub fn add(ref to: $T[], item: $T) {
            for (mut i = 0; i < to.len; i++) {
                if (to[i] >= item) {
                    if (to[i] != item)
                        to.insert(i, item);

                    return;
                }
            }

            to.push(item);
        }

        fn main() {
            mut x = [1, 2, 3];
            x._0::add(3); if (x.len != 3) return 33;
            x._0::add(4); return x.len - x[3];
        }

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_add_a85hag59
                                #define DEFt_add_a85hag59
inline void add_a85hag59(fu_VEC<int>& to, const int item)
{
    for (int i = 0; i < to.size(); i++)
    {
        if ((to[i] >= item))
        {
            if (to[i] != item)
                to.insert(i, int(item));

            return;
        };
    };
    to.push(int(item));
}
                                #endif

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<3, int> { 1, 2, 3 } };
    add_a85hag59(x, 3);
    if (x.size() != 3)
        return 33;

    add_a85hag59(x, 4);
    return x.size() - x[3];
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        pub let pad0 = 0; pub let pad1 = 1; pub let pad2 = 2; pub let pad3 = 3; pub let pad4 = 4; pub let pad5 = 5; pub let pad6 = 6; pub let pad7 = 7; pub let pad8 = 8; pub let pad9 = 9;
        pub let PAD0 = 0; pub let PAD1 = 1; pub let PAD2 = 2; pub let PAD3 = 3; pub let PAD4 = 4; pub let PAD5 = 5; pub let PAD6 = 6; pub let PAD7 = 7; pub let PAD8 = 8; pub let PAD9 = 9;

        pub let A = "hello";
        pub let B = "world";

-----

#include <fu/init_priority.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_pad0
                                #define DEF_pad0
inline constexpr int pad0 = 0;
                                #endif

                                #ifndef DEF_pad1
                                #define DEF_pad1
inline constexpr int pad1 = 1;
                                #endif

                                #ifndef DEF_pad2
                                #define DEF_pad2
inline constexpr int pad2 = 2;
                                #endif

                                #ifndef DEF_pad3
                                #define DEF_pad3
inline constexpr int pad3 = 3;
                                #endif

                                #ifndef DEF_pad4
                                #define DEF_pad4
inline constexpr int pad4 = 4;
                                #endif

                                #ifndef DEF_pad5
                                #define DEF_pad5
inline constexpr int pad5 = 5;
                                #endif

                                #ifndef DEF_pad6
                                #define DEF_pad6
inline constexpr int pad6 = 6;
                                #endif

                                #ifndef DEF_pad7
                                #define DEF_pad7
inline constexpr int pad7 = 7;
                                #endif

                                #ifndef DEF_pad8
                                #define DEF_pad8
inline constexpr int pad8 = 8;
                                #endif

                                #ifndef DEF_pad9
                                #define DEF_pad9
inline constexpr int pad9 = 9;
                                #endif

                                #ifndef DEF_PAD0
                                #define DEF_PAD0
inline constexpr int PAD0 = 0;
                                #endif

                                #ifndef DEF_PAD1
                                #define DEF_PAD1
inline constexpr int PAD1 = 1;
                                #endif

                                #ifndef DEF_PAD2
                                #define DEF_PAD2
inline constexpr int PAD2 = 2;
                                #endif

                                #ifndef DEF_PAD3
                                #define DEF_PAD3
inline constexpr int PAD3 = 3;
                                #endif

                                #ifndef DEF_PAD4
                                #define DEF_PAD4
inline constexpr int PAD4 = 4;
                                #endif

                                #ifndef DEF_PAD5
                                #define DEF_PAD5
inline constexpr int PAD5 = 5;
                                #endif

                                #ifndef DEF_PAD6
                                #define DEF_PAD6
inline constexpr int PAD6 = 6;
                                #endif

                                #ifndef DEF_PAD7
                                #define DEF_PAD7
inline constexpr int PAD7 = 7;
                                #endif

                                #ifndef DEF_PAD8
                                #define DEF_PAD8
inline constexpr int PAD8 = 8;
                                #endif

                                #ifndef DEF_PAD9
                                #define DEF_PAD9
inline constexpr int PAD9 = 9;
                                #endif

                                #ifndef DEF_A
                                #define DEF_A
extern const fu_STR A fu_INIT_PRIORITY(1001) = "hello"_fu;
                                #endif

                                #ifndef DEF_B
                                #define DEF_B
extern const fu_STR B fu_INIT_PRIORITY(1001) = "world"_fu;
                                #endif

#endif

-----

        pub let pad0 = 0; pub let pad1 = 1; pub let pad2 = 2; pub let pad3 = 3; pub let pad4 = 4; pub let pad5 = 5; pub let pad6 = 6; pub let pad7 = 7; pub let pad8 = 8; pub let pad9 = 9;
        pub let PAD0 = 0; pub let PAD1 = 1; pub let PAD2 = 2; pub let PAD3 = 3; pub let PAD4 = 4; pub let PAD5 = 5; pub let PAD6 = 6; pub let PAD7 = 7; pub let PAD8 = 8; pub let PAD9 = 9;

        pub let A = "hello";
        pub let B = "world";

        import _0;
        fn test(i: i32) {
            let v = i & 1 ? A : B;
            return v.len;
        }

        fn main() 0.test - 1.test;

-----

#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_A
                                #define DEF_A
extern const fu_STR A;
                                #endif

                                #ifndef DEF_B
                                #define DEF_B
extern const fu_STR B;
                                #endif

static int test_0fY8Rqhx(const int i)
{
    fu::view<char> v = ((i & 1) ? A : B);
    return v.size();
}

int fu_MAIN()
{
    return test_0fY8Rqhx(0) - test_0fY8Rqhx(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn clone(a: $T)
        case ($T.is::copy) a;
        case ($T -> $T) {
            mut res: $T;
            for (fieldname i: $T) res.i = a.i.clone();
            return res;
        }

-----

-----

        pub fn clone(a: $T)
        case ($T.is::copy) a;
        case ($T -> $T) {
            mut res: $T;
            for (fieldname i: $T) res.i = a.i.clone();
            return res;
        }

        pub nocopy struct Scope { x: i32; };

        pub struct ModuleOutputs {
            deps: i32[];
            scope: Scope;
        };

        pub fn test(a: ModuleOutputs) {
            let b = a._0::clone();
            return a.deps.len - b.deps.len;
        }

        pub fn main() test(ModuleOutputs);

-----

#include <fu/vec.h>

struct s_ModuleOutputs;
struct s_Scope;

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    int x;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    s_Scope scope;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || scope
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_clone_WgWjr9S0
                                #define DEFt_clone_WgWjr9S0
inline const fu_VEC<int>& clone_WgWjr9S0(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_pZ8wRcaF
                                #define DEFt_clone_pZ8wRcaF
inline int clone_pZ8wRcaF(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_lJ11BpWl
                                #define DEFt_clone_lJ11BpWl
inline s_Scope clone_lJ11BpWl(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};
    res.x = clone_pZ8wRcaF(a.x);
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_6dUcq4xO
                                #define DEFt_clone_6dUcq4xO
inline s_ModuleOutputs clone_6dUcq4xO(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_WgWjr9S0(a.deps);
        res.scope = clone_lJ11BpWl(a.scope);
    };
    return /*NRVO*/ res;
}
                                #endif

int test_u8mUV4WW(const s_ModuleOutputs& a)
{
    s_ModuleOutputs b = clone_6dUcq4xO(a);
    return a.deps.size() - b.deps.size();
}

int fu_MAIN()
{
    return test_u8mUV4WW(s_ModuleOutputs{});
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        // a private fn
        fn createShader(src: string) = src;

        // inits a public let
        pub let GEOMETRY_PASS_TEST = createShader("source code");

-----

#include <fu/init_priority.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static const fu_STR& createShader_vhnG1IeH(const fu_STR& src)
{
    return src;
}

                                #ifndef DEF_GEOMETRY_PASS_TEST
                                #define DEF_GEOMETRY_PASS_TEST
extern const fu_STR GEOMETRY_PASS_TEST { createShader_vhnG1IeH("source code"_fu) };
                                #endif

#endif
// NONTRIV_autocopy

-----

        // a private fn
        fn createShader(src: string) = src;

        // inits a public let
        pub let GEOMETRY_PASS_TEST = createShader("source code");

        pub fn main() _0::GEOMETRY_PASS_TEST.len - 11;

-----

#include <fu/init_priority.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_GEOMETRY_PASS_TEST
                                #define DEF_GEOMETRY_PASS_TEST
extern const fu_STR GEOMETRY_PASS_TEST;
                                #endif

int fu_MAIN()
{
    return GEOMETRY_PASS_TEST.size() - 11;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct List {
            vals: string[];
        };

        fn add(using ref _: List, val: string)
            vals ~= val;

        fn [](using _: List, val: string) {
            mut count = 0;
            for (mut i = 0; i < vals.len; i++)
                if (vals[i] == val)
                    count++;

            return count;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_List;

                                #ifndef DEF_s_List
                                #define DEF_s_List
struct s_List
{
    fu_VEC<fu_STR> vals;
    explicit operator bool() const noexcept
    {
        return false
            || vals
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

fu_VEC<fu_STR>& add_yPKmgQLd(s_List& _, const fu_STR& val)
{
    return (_.vals += fu_STR(val));
}

int x5Bx5D_HsEYteCI(const s_List& _, fu::view<char> val)
{
    /*MOV*/ int count = 0;
    for (int i = 0; i < _.vals.size(); i++)
    {
        if (_.vals[i] == val)
            count++;

    };
    return /*NRVO*/ count;
}

#endif
// NONTRIV_autocopy

-----

        struct List {
            vals: string[];
        };

        fn add(using ref _: List, val: string)
            vals ~= val;

        fn [](using _: List, val: string) {
            mut count = 0;
            for (mut i = 0; i < vals.len; i++)
                if (vals[i] == val)
                    count++;

            return count;
        }

        fn main() {
            mut list: _0::List;
            for (mut i = 0; i < 3; i++)
                list.add(i & 1 ? "a" : "b");

            return list["b"] - 2;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_List;

fu_VEC<fu_STR>& add_yPKmgQLd(s_List&, const fu_STR&);
int x5Bx5D_HsEYteCI(const s_List&, fu::view<char>);

                                #ifndef DEF_s_List
                                #define DEF_s_List
struct s_List
{
    fu_VEC<fu_STR> vals;
    explicit operator bool() const noexcept
    {
        return false
            || vals
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_List list {};
    for (int i = 0; i < 3; i++)
        add_yPKmgQLd(list, ((i & 1) ? "a"_fu : "b"_fu));

    return x5Bx5D_HsEYteCI(list, "b"_fu) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Int { i: i32; };
        fn -(a: Int) Int(-a.i);
        fn +(a: Int, b: Int) Int(a.i + b.i);
        fn +=(ref a: Int, b: Int) { a.i += b.i; return a; };
        postfix fn ++(ref a: Int) { a.i++; };

-----

struct s_Int;

                                #ifndef DEF_s_Int
                                #define DEF_s_Int
struct s_Int
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_Int operator-(const s_Int& a)
{
    return s_Int { -a.i };
}

s_Int operator+(const s_Int& a, const s_Int& b)
{
    return s_Int { (a.i + b.i) };
}

s_Int& operator+=(s_Int& a, const s_Int& b)
{
    a.i += b.i;
    return a;
}

void operator++(s_Int& a, /*postfix*/int )
{
    a.i++;
}

#endif

-----

        struct Int { i: i32; };
        fn -(a: Int) Int(-a.i);
        fn +(a: Int, b: Int) Int(a.i + b.i);
        fn +=(ref a: Int, b: Int) { a.i += b.i; return a; };
        postfix fn ++(ref a: Int) { a.i++; };

        fn main() {
            mut x: _0::Int = [ 1 ];
            x += -(x + x);
            x++;
            return x.i;
        }

-----

struct s_Int;

s_Int operator+(const s_Int&, const s_Int&);
s_Int operator-(const s_Int&);
s_Int& operator+=(s_Int&, const s_Int&);
void operator++(s_Int&, /*postfix*/int );

                                #ifndef DEF_s_Int
                                #define DEF_s_Int
struct s_Int
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    /*MOV*/ s_Int x = s_Int { 1 };
    x += -(x + x);
    x++;
    return int(x.i);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn private(x)           x * 3;              // Scope_import is broken,
        pub fn public(y)        private(y) * 2;     //  doesnt always import privates.

        fn main()               1.public - 6;

-----

#ifndef FU_NO_FDEFs

inline static int private_pZ8wRcaF(const int x)
{
    return x * 3;
}

                                #ifndef DEFt_public_pZ8wRcaF
                                #define DEFt_public_pZ8wRcaF
inline int public_pZ8wRcaF(const int y)
{
    return private_pZ8wRcaF(y) * 2;
}
                                #endif

int fu_MAIN()
{
    return public_pZ8wRcaF(1) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn private(x)           x * 3;              // Scope_import is broken,
        pub fn public(y)        private(y) * 2;     //  doesnt always import privates.

-----

-----

        fn private(x)           x * 3;              // Scope_import is broken,
        pub fn public(y)        private(y) * 2;     //  doesnt always import privates.
        import _0;
        fn main()               1.public - 6;

-----

#ifndef FU_NO_FDEFs

inline static int private_pZ8wRcaF(const int x)
{
    return x * 3;
}

                                #ifndef DEFt_public_pZ8wRcaF
                                #define DEFt_public_pZ8wRcaF
inline int public_pZ8wRcaF(const int y)
{
    return private_pZ8wRcaF(y) * 2;
}
                                #endif

int fu_MAIN()
{
    return public_pZ8wRcaF(1) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn private(x: i32)      x * 3;              // cg fail:
        pub fn public(y)        private(y) * 2;     //  fn private hidden in first translation unit.

-----

#ifndef FU_NO_FDEFs

int private_pZ8wRcaF(const int x)
{
    return x * 3;
}

#endif

-----

        fn private(x: i32)      x * 3;              // cg fail:
        pub fn public(y)        private(y) * 2;     //  fn private hidden in first translation unit.

        fn main()               1._0::public - 6;

-----

int private_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_public_pZ8wRcaF
                                #define DEFt_public_pZ8wRcaF
inline int public_pZ8wRcaF(const int y)
{
    return private_pZ8wRcaF(y) * 2;
}
                                #endif

int fu_MAIN()
{
    return public_pZ8wRcaF(1) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        let OPTOKENS = "{}[]()!?~@#$%^&*/-+<=>,.;:|";   // nowadays problem is OPTOKENS cgs to static in first translation unit

        pub fn lex(src) // <- template
        {
            let end = src.len;
            mut idx = 0;

            while (idx < end) {
                let c = src[idx++];
                if (OPTOKENS.has(c)) // <- originally, no OPTOKENS in scope ...
                    return idx - 1;
            }

            return src.len;
        }

-----

#include <fu/init_priority.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_OPTOKENS
                                #define DEF_OPTOKENS
extern const fu_STR OPTOKENS fu_INIT_PRIORITY(1001) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;
                                #endif

#endif

-----

        let OPTOKENS = "{}[]()!?~@#$%^&*/-+<=>,.;:|";   // nowadays problem is OPTOKENS cgs to static in first translation unit

        pub fn lex(src) // <- template
        {
            let end = src.len;
            mut idx = 0;

            while (idx < end) {
                let c = src[idx++];
                if (OPTOKENS.has(c)) // <- originally, no OPTOKENS in scope ...
                    return idx - 1;
            }

            return src.len;
        }

        fn main() _0::lex("3 - 3") - 2; // <- from here

-----

#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_OPTOKENS
                                #define DEF_OPTOKENS
extern const fu_STR OPTOKENS;
                                #endif

                                #ifndef DEFt_has_3yRdKyg4
                                #define DEFt_has_3yRdKyg4
inline bool has_3yRdKyg4(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_lex_vhnG1IeH
                                #define DEFt_lex_vhnG1IeH
inline int lex_vhnG1IeH(fu::view<char> src)
{
    const int end = src.size();
    int idx = 0;
    while (idx < end)
    {
        const char c = src[idx++];
        if (has_3yRdKyg4(OPTOKENS, c))
            return idx - 1;

    };
    return src.size();
}
                                #endif

int fu_MAIN()
{
    return lex_vhnG1IeH("3 - 3"_fu) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn pubbed(a: i32) a * 2;

        fn not_pubbed(b: i32) b * 3;

        fn main() 1._0::pubbed._0::not_pubbed - 6;

-----
_1.fu @2:31:

[2m      | [0m
    2 |         fn main() 1._0::pubbed[31;1m.[0m_0::not_pubbed - 6;
[2m      | [0m

	Bad call to [34;1mnot_pubbed[0m: [34;1mnot_pubbed[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        pub fn pubbed(a: i32) a * 2;

        pub                          
        fn not_pubbed(b: i32) b * 3;

-----

#ifndef FU_NO_FDEFs

int pubbed_pZ8wRcaF(const int a)
{
    return a * 2;
}

int not_pubbed_pZ8wRcaF(const int b)
{
    return b * 3;
}

#endif

-----

        pub fn pubbed(a: i32) a * 2;

        pub                          
        fn not_pubbed(b: i32) b * 3;

        fn main() 1._0::pubbed._0::not_pubbed - 6;

-----

int not_pubbed_pZ8wRcaF(int);
int pubbed_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return not_pubbed_pZ8wRcaF(pubbed_pZ8wRcaF(1)) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        let SELF_TEST           = true;
        let NODEIDX_signbits    = SELF_TEST && 4;
        let NODEIDX_signmask    = (1 << NODEIDX_signbits) - 1;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_SELF_TEST
                                #define DEF_SELF_TEST
extern const bool SELF_TEST = true;
                                #endif

                                #ifndef DEF_NODEIDX_signbits
                                #define DEF_NODEIDX_signbits
extern const int NODEIDX_signbits = (SELF_TEST ? 4 : int{});
                                #endif

                                #ifndef DEF_NODEIDX_signmask
                                #define DEF_NODEIDX_signmask
extern const int NODEIDX_signmask = ((1 << NODEIDX_signbits) - 1);
                                #endif

#endif

-----

        let SELF_TEST           = true;
        let NODEIDX_signbits    = SELF_TEST && 4;
        let NODEIDX_signmask    = (1 << NODEIDX_signbits) - 1;

        fn main() _0::NODEIDX_signmask - 15;

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_NODEIDX_signmask
                                #define DEF_NODEIDX_signmask
extern const int NODEIDX_signmask;
                                #endif

int fu_MAIN()
{
    return NODEIDX_signmask - 15;
}

#endif


int main() { return fu_MAIN(); }

-----

        let a = 1;
        shadow let a = a + 1;
        return a - 2;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = 1;
    const int a_1 = (a + 1);
    return a_1 - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn outer() inner(); // <- this reset root-scope
        inline fn inner() {
            // <- so main::i was visible here
            for (mut i = 0; i < 10; i++) return i;
            return 1;
        }
        fn main() {
            for (mut i = 0; i < 10; i++) return outer();
            return 1;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    for (int i = 0; i < 10; i++)
    {
        for (/*MOV*/ int i_1 = 0; i_1 < 10; i_1++)
            return /*NRVO*/ i_1;

        return 1;
    };
    return 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Target { modid: i32; packed: u32; };

        pub fn index(t: Target) i32(t.packed & 0x7fffffff);

        pub fn local_eq(t: Target, index: i32, implicit modid: i32)
            modid - t.modid || index - t.index;

        fn main() {
            let implicit modid = 1;
            return local_eq(Target(1, 0x80000002), 7) - 5;
        }

-----

struct s_Target;

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int modid;
    unsigned packed;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || packed
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int index_vEF4Qiyl(const s_Target& t)
{
    return int((t.packed & 0x7fffffffu));
}

int local_eq_Z8rbbzqT(const s_Target& t, const int index, const int modid)
{
    int _0 {};
    return (_0 = (modid - t.modid)) ? _0 : (index - index_vEF4Qiyl(t));
}

int fu_MAIN()
{
    const int modid = 1;
    return local_eq_Z8rbbzqT(s_Target { 1, 0x80000002u }, 7, modid) - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct HasInt { i: i32; };

        fn test(s: HasInt): &i32 {
            let i = s.i;
            return i;
        }

        fn main() HasInt(-1).test + 1;

-----

struct s_HasInt;

                                #ifndef DEF_s_HasInt
                                #define DEF_s_HasInt
struct s_HasInt
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int test_vEF4Qiyl(const s_HasInt& s)
{
    const int i = s.i;
    return i;
}

int fu_MAIN()
{
    return test_vEF4Qiyl(s_HasInt { -1 }) + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(x: i32): &i32 = x;
        fn main() test(3) - 3;

-----

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(const int x)
{
    return x;
}

int fu_MAIN()
{
    return test_pZ8wRcaF(3) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(x: i32): &i32 {
            fn inner() x;
            return inner;
        }

        fn main() test(3) - 3;

-----

#ifndef FU_NO_FDEFs

static int inner_y1jV3SX3(const int x)
{
    return x;
}

static int test_pZ8wRcaF(const int x)
{
    return inner_y1jV3SX3(x);
}

int fu_MAIN()
{
    return test_pZ8wRcaF(3) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct I { v: i32; };

        fn test(x: I): &i32 {
            fn inner() x.v;
            return inner;
        }

        fn main() test(I(3)) - 3;

-----

struct s_I;

                                #ifndef DEF_s_I
                                #define DEF_s_I
struct s_I
{
    int v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int inner_V6uTIUa3(const s_I& x)
{
    return x.v;
}

static int test_vEF4Qiyl(const s_I& x)
{
    return inner_V6uTIUa3(x);
}

int fu_MAIN()
{
    return test_vEF4Qiyl(s_I { 3 }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct I { v: i32[]; };

        fn test(x: I): &i32 {
            fn inner() x.v[0];
            return inner;
        }

        fn main() test(I([3])) - 3;

-----

#include <fu/vec.h>

struct s_I;

                                #ifndef DEF_s_I
                                #define DEF_s_I
struct s_I
{
    fu_VEC<int> v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int inner_V6uTIUa3(const s_I& x)
{
    return x.v[0];
}

static int test_vEF4Qiyl(const s_I& x)
{
    return inner_V6uTIUa3(x);
}

int fu_MAIN()
{
    return test_vEF4Qiyl(s_I { fu_VEC<int> { fu::slate<1, int> { 3 } } }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct I { v: i32[]; };

        fn test(x: I): &i32 {
            fn inner() {
                let v = x.v;
                return v[0];
            }

            return inner;
        }

        fn main() test(I([3])) - 3;

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_I;

                                #ifndef DEF_s_I
                                #define DEF_s_I
struct s_I
{
    fu_VEC<int> v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int inner_V6uTIUa3(const s_I& x)
{
    fu::view<int> v = x.v;
    return v[0];
}

static int test_vEF4Qiyl(const s_I& x)
{
    return inner_V6uTIUa3(x);
}

int fu_MAIN()
{
    return test_vEF4Qiyl(s_I { fu_VEC<int> { fu::slate<1, int> { 3 } } }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn noReturn() throw ("ex");

        fn doesReturn(a: i32) {
            if (a > 0) return noReturn();
            return a;
        }

        fn main() doesReturn(-3) + 3;

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never noReturn_H9fhQUVP()
{
    fu::fail("ex"_fu);
}

static int doesReturn_pZ8wRcaF(const int a)
{
    if (a > 0)
        noReturn_H9fhQUVP();

    return a;
}

int fu_MAIN()
{
    return doesReturn_pZ8wRcaF(-3) + 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Context { modules: Module[]; };
        struct Module  { fname: i32; };

        fn test(implicit ctx: Context) {
            fn findModule(fname: i32): &Module {
                let modules = ctx.modules;
                for (mut i = 0; i < modules.len; i++) {
                    let module = modules[i];
                    if (module.fname == fname)
                        return module;
                }

                throw("Cannot locate: " ~ fname);
            }

            return findModule(0);
        }

        fn main() {
            let implicit ctx = Context([ Module ]);
            return test.fname;
        }

-----

#include <fu/decstr.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Context;
struct s_Module;

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    int fname;
    explicit operator bool() const noexcept
    {
        return false
            || fname
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    explicit operator bool() const noexcept
    {
        return false
            || modules
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Module& findModule_GFXc0u8P(const int fname, const s_Context& ctx)
{
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 0; i < modules.size(); i++)
    {
        const s_Module& module = modules[i];
        if (module.fname == fname)
            return module;

    };
    fu::fail(x7E("Cannot locate: "_fu, fu::i64dec(fname)));
}

static const s_Module& test_vEF4Qiyl(const s_Context& ctx)
{
    return findModule_GFXc0u8P(0, ctx);
}

int fu_MAIN()
{
    s_Context ctx = s_Context { fu_VEC<s_Module> { fu::slate<1, s_Module> { s_Module{} } } };
    return int(test_vEF4Qiyl(ctx).fname);
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn noReturn() throw ("ex");

        fn returnVoid(a: i32): void {
            if (a > 0) return noReturn();
        }

        fn main() {
            returnVoid(0);
            return 0;
        }

-----

#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never noReturn_H9fhQUVP()
{
    fu::fail("ex"_fu);
}

static void returnVoid_pZ8wRcaF(const int a)
{
    if (a > 0)
        noReturn_H9fhQUVP();

}

int fu_MAIN()
{
    returnVoid_pZ8wRcaF(0);
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn parseQualifierChain(mut i: i32): i32 {
            for (;;) {
                if !(i & 15) return i;
                i--;
            }
        }

        fn main() parseQualifierChain(15);

-----

#ifndef FU_NO_FDEFs

static int parseQualifierChain_pZ8wRcaF(/*MOV*/ int i)
{
    for (; ; )
    {
        if (!(i & 15))
            return int(i);

        i--;
    };
}

int fu_MAIN()
{
    return parseQualifierChain_pZ8wRcaF(15);
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        fn main()
        {
            mut sum = 0;
            fn compile(x: i32)
            {
                // 1. this throw contributed a 'never' ret_count.
                x || throw ("x=0");
                if (x & 1) compile(x + 1); // 2. then this recursion did something.
                sum += x; // <- also this must be a closure.
                // 3. finally no ret_actual but non-zero ret_count.
            }

            compile(2);
            return sum - 2;
        }

-----

#include <fu/never.h>
#include <fu/str.h>

static void compile_neXOK2KY(int, int&);

#ifndef FU_NO_FDEFs

static void compile_neXOK2KY(const int x, int& sum)
{
    if (!(x))
        fu::fail("x=0"_fu);

    if (x & 1)
        compile_neXOK2KY((x + 1), sum);

    sum += x;
}

int fu_MAIN()
{
    int sum = 0;
    compile_neXOK2KY(2, sum);
    return sum - 2;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn main()
        {
            mut sum = 0;
            fn getModule(fname: string) fname.len;
            fn compile(fname: string, via: string = "")
            {
                let module = getModule(fname) || throw ("import circle: '" ~ via ~ fname ~ "'.");
                if (module & 1) {
                    let fuzimports = fname.split("a");
                    for (mut i = 0; i < fuzimports.len; i++)
                        compile(
                            fname: fuzimports[i],
                              via: fname ~ " <- " ~ via);
                }

                sum += module;
            }

            compile("ab");
            return sum - 2;
        }

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

static void compile_uivQN3Px(const fu_STR&, fu::view<char>, int&);

#ifndef FU_NO_FDEFs

static int getModule_PdEGHMBt(fu::view<char> fname)
{
    return fname.size();
}

                                #ifndef DEFt_split_gISebC9w
                                #define DEFt_split_gISebC9w
inline void split_gISebC9w(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_gISebC9w(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static void compile_uivQN3Px(const fu_STR& fname, fu::view<char> via, int& sum)
{
    int _0 {};
    const int module = ((_0 = getModule_PdEGHMBt(fname)) ? _0 : fu::fail(((("import circle: '"_fu + via) + fname) + "'."_fu)));
    if (module & 1)
    {
        fu_VEC<fu_STR> fuzimports = split_KclJlPSO(fname, "a"_fu);
        for (int i = 0; i < fuzimports.size(); i++)
            compile_uivQN3Px(fuzimports[i], ((fname + " <- "_fu) + via), sum);

    };
    sum += module;
}

int fu_MAIN()
{
    int sum = 0;
    compile_uivQN3Px("ab"_fu, fu::view<char>{}, sum);
    return sum - 2;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// NONTRIV_autocopy

-----

        fn A(implicit _A: i32[]) _A;
        fn B(implicit _B:  u8[]) _B;

        fn AB(x: i32) A[x] - B[x].i32;
        fn BA(x: i32) B[x].i32 - A[x];

        fn cycleA_inner(x: i32)
            x & 1   ? either(x + 1) + AB(x)
                    : BA(x);

        fn cycleA_outer(x: i32)
            x & 1   ? cycleA_inner(x + 1) + AB(x)
                    : BA(x);

        fn cycleB_inner(x: i32)
            x & 2   ? either(x + 1) + BA(x)
                    : AB(x);

        fn cycleB_outer(x: i32)
            x & 2   ? cycleB_inner(x + 1) + BA(x)
                    : AB(x);

        fn either(x: i32)
            x & 4   ? cycleA_outer(x)
                    : cycleB_outer(x);

        fn main() {
            let implicit _A = [ 0,    1,    2    ];
            let implicit _B = [ 0.u8, 1.u8, 2.u8 ];

            return either(0);
        }

-----

#include <fu/int.h>
#include <fu/vec.h>

static int cycleA_inner_pZ8wRcaF(int, const fu_VEC<fu::u8>&, const fu_VEC<int>&);
static int cycleA_outer_pZ8wRcaF(int, const fu_VEC<fu::u8>&, const fu_VEC<int>&);
static int cycleB_inner_pZ8wRcaF(int, const fu_VEC<fu::u8>&, const fu_VEC<int>&);
static int cycleB_outer_pZ8wRcaF(int, const fu_VEC<fu::u8>&, const fu_VEC<int>&);
static int either_pZ8wRcaF(int, const fu_VEC<fu::u8>&, const fu_VEC<int>&);

#ifndef FU_NO_FDEFs

static const fu_VEC<int>& A_WgWjr9S0(const fu_VEC<int>& _A)
{
    return _A;
}

static const fu_VEC<fu::u8>& B_SHIrWlHd(const fu_VEC<fu::u8>& _B)
{
    return _B;
}

static int AB_pZ8wRcaF(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    return A_WgWjr9S0(_A)[x] - int(unsigned(B_SHIrWlHd(_B)[x]));
}

static int BA_pZ8wRcaF(const int x, const fu_VEC<fu::u8>& _B, const fu_VEC<int>& _A)
{
    return int(unsigned(B_SHIrWlHd(_B)[x])) - A_WgWjr9S0(_A)[x];
}

static int cycleA_inner_pZ8wRcaF(const int x, const fu_VEC<fu::u8>& _B, const fu_VEC<int>& _A)
{
    return ((x & 1) ? (either_pZ8wRcaF((x + 1), _B, _A) + AB_pZ8wRcaF(x, _A, _B)) : BA_pZ8wRcaF(x, _B, _A));
}

static int cycleA_outer_pZ8wRcaF(const int x, const fu_VEC<fu::u8>& _B, const fu_VEC<int>& _A)
{
    return ((x & 1) ? (cycleA_inner_pZ8wRcaF((x + 1), _B, _A) + AB_pZ8wRcaF(x, _A, _B)) : BA_pZ8wRcaF(x, _B, _A));
}

static int cycleB_inner_pZ8wRcaF(const int x, const fu_VEC<fu::u8>& _B, const fu_VEC<int>& _A)
{
    return ((x & 2) ? (either_pZ8wRcaF((x + 1), _B, _A) + BA_pZ8wRcaF(x, _B, _A)) : AB_pZ8wRcaF(x, _A, _B));
}

static int cycleB_outer_pZ8wRcaF(const int x, const fu_VEC<fu::u8>& _B, const fu_VEC<int>& _A)
{
    return ((x & 2) ? (cycleB_inner_pZ8wRcaF((x + 1), _B, _A) + BA_pZ8wRcaF(x, _B, _A)) : AB_pZ8wRcaF(x, _A, _B));
}

static int either_pZ8wRcaF(const int x, const fu_VEC<fu::u8>& _B, const fu_VEC<int>& _A)
{
    return ((x & 4) ? cycleA_outer_pZ8wRcaF(x, _B, _A) : cycleB_outer_pZ8wRcaF(x, _B, _A));
}

int fu_MAIN()
{
    fu_VEC<int> _A = fu_VEC<int> { fu::slate<3, int> { 0, 1, 2 } };
    fu_VEC<fu::u8> _B = fu_VEC<fu::u8> { fu::slate<3, fu::u8> { fu::u8(unsigned(0)), fu::u8(unsigned(1)), fu::u8(unsigned(2)) } };
    return either_pZ8wRcaF(0, _B, _A);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// DEAD_code
// DEAD_call

-----

        fn if0_ret101(x: i32) {
            if      (x > 2) return x * 2;
            else if (x > 1) return x + 1; // <- left branch seeded right with never
            return x + 101;
        }

        fn main() 0.if0_ret101 - 101;

-----

#ifndef FU_NO_FDEFs

static int if0_ret101_pZ8wRcaF(const int x)
{
    if (x > 2)
        return x * 2;
    else if (x > 1)
        return x + 1;

    return x + 101;
}

int fu_MAIN()
{
    return if0_ret101_pZ8wRcaF(0) - 101;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn hello(x: i32) {
            if (x & 1)
                return x * 2;


            x;            
        }

        fn main() 0.hello;

-----
_0.fu @2:9:

[2m      | [0m
    2 |         [31;1mfn[0m hello(x: i32) {
[2m      |             if (x & 1)[0m
[2m      |                 return x * 2;[0m

	Non-void returning fn missing a final return.

        Solving [35;1mfn[0m [34;1mhello_pZ8wRcaF[0m

-----

        fn hello(x: i32) {
            if (x & 1)
                return x * 2;


            return x;     
        }

        fn main() 0.hello;

-----

#ifndef FU_NO_FDEFs

static int hello_pZ8wRcaF(const int x)
{
    if (x & 1)
        return x * 2;

    return int(x);
}

int fu_MAIN()
{
    return hello_pZ8wRcaF(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn throws()         { throw("WHAT!");   }
        fn myfn(a = throws) { return a;         } // never in default argument position!
        fn main() {
            try             { return myfn();                }
            catch (e)       { return e == "WHAT!" ? 0 : 1;  }
        }

-----

#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never throws_H9fhQUVP()
{
    fu::fail("WHAT!"_fu);
}

int fu_MAIN()
{

    try
    {
        throws_H9fhQUVP();
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return ((e == "WHAT!"_fu) ? 0 : 1);
    }
;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code
// DEAD_call

-----

        struct X { i: i32; };

        fn         ++(using x: &mut X) ++i;
        postfix fn ++(using x: &mut X) i++;

        fn main() {
            mut x: X;
            let a = x++;
            let b = ++x;
            return a || b - 2;
        }

-----

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int operator++(s_X& x, /*postfix*/int )
{
    return x.i++;
}

static int& operator++(s_X& x)
{
    return ++x.i;
}

int fu_MAIN()
{
    s_X x {};
    const int a = x++;
    const int b = ++x;
    return a ? int(a) : (b - 2);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(s: $T) {
            mut sum = 0;
            for (fieldname i: $T) sum += s.i;
            return sum;
        }

        struct XY { x: i32; y: i32; };

        fn main() {
            let thing = XY(1, 2);
            let sum = test(thing);
            return sum - 3;
        }

-----

struct s_XY;

                                #ifndef DEF_s_XY
                                #define DEF_s_XY
struct s_XY
{
    int x;
    int y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int test_vEF4Qiyl(const s_XY& s)
{
    /*MOV*/ int sum = 0;

    {
        sum += s.x;
        sum += s.y;
    };
    return /*NRVO*/ sum;
}

int fu_MAIN()
{
    const s_XY thing = s_XY { 1, 2 };
    const int sum = test_vEF4Qiyl(thing);
    return sum - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ScopeSkip     { imports:     i32[]; implicits:     i32[]; }
        struct ScopeSkipMemo { imports_len: i32;   implicits_len: i32[]; }

        fn snap(ss: SS) {
            mut r: ScopeSkipMemo;       // imports wouldn't work -
            for (fieldname i: ss)       //  we need to know what to import much earlier.
                r.i::_len = ss.i.len;   //   <- which frees up this syntax

            return r;
        }

        fn check(v) {
            mut sum = 0; mut mul = 1;
            for (fieldname i: v) {
                sum += v.i * mul; mul *= 10;
            }

            return sum;
        }

        fn main() check(snap(ScopeSkip([ 1 ], [ 2, 2 ]))) - 21;

-----
TODO: i.fu`.
-----

        fn test() [] -> i32;
        fn main() test;

-----

#ifndef FU_NO_FDEFs

static int test_H9fhQUVP()
{
    return 0;
}

int fu_MAIN()
{
    return test_H9fhQUVP();
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            mut a = 1;
            mut b = 0;
            {
                defer a++;
                b = a;
            }
            return (b+1) - a;
        }

-----

#include <fu/defer.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int a = 1;
    int b = 0;

    {
        fu_DEFER(a++);
        b = a;
    };
    return (b + 1) - a;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            mut a = 1;
            mut b = 0;
            mut c = 0;
            {
                defer a++;
                defer c = a;
                b = a;
            }
            return (b*27) - (a*11 + c*5);
        }

-----

#include <fu/defer.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int a = 1;
    int b = 0;
    int c = 0;

    {
        fu_DEFER(a++);
        fu_DEFER(c = a);
        b = a;
    };
    return (b * 27) - ((a * 11) + (c * 5));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test_defer_if_errok(throw_err: bool) {
            mut x      = 1;
            mut if_err = 0;
            mut if_ok  = 0;
            try {
                defer x++;
                defer:err if_err += x;
                defer:ok  if_ok  += x;

                if (throw_err)
                    throw("len=5");

                x += 8; // 9 defer++ = 10
            }
            catch (e) {
                x += e.len; // 6 defer++ = 7
            }

            return x * 3 + if_err * 5 + if_ok * 7;
        }

        fn main()   (test_defer_if_errok(true)  - 7 *3 - 1*5 - 0*7)
            + 100 * (test_defer_if_errok(false) - 10*3 - 0*5 - 9*7);

-----

#include <fu/defer.h>
#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int test_defer_if_errok_OSD8YZzw(const bool throw_err)
{
    int x = 1;
    int if_err = 0;
    int if_ok = 0;

    try
    {
    {
        fu_DEFER(x++);
        fu_DEFER_IF_ERR(if_err += x);
        fu_DEFER_IF_OK(if_ok += x);
        if (throw_err)
            fu::fail("len=5"_fu);

        x += 8;
    }
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        x += e.size();
    }
;
    return ((x * 3) + (if_err * 5)) + (if_ok * 7);
}

int fu_MAIN()
{
    return (((test_defer_if_errok_OSD8YZzw(true) - (7 * 3)) - (1 * 5)) - (0 * 7)) + (100 * (((test_defer_if_errok_OSD8YZzw(false) - (10 * 3)) - (0 * 5)) - (9 * 7)));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sum_amulb(a: i32[], b: i32[], ref sum: i32)
            for (mut i = 0; i < a.len; i++)
                sum += a[i] * b[i];

        fn incrarr_by1(ref a: i32[])
            for (mut i = 0; i < a.len; i++)
                a[i] += 1;

        fn test(ref a: i32[], ref sum: i32) {
            let b = a;
            defer sum_amulb(:a, :b, :sum);


            defer incrarr_by1(:a);
            return a[0] - 1;

        }

        fn main() {
            mut a = [ 1 ];
            mut sum = 0;
            let ret = 100 * test(:a, :sum);
            return sum - 2 + ret;
        }

-----

#include <fu/defer.h>
#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void sum_amulb_7mUcNdrU(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static void incrarr_by1_5UkPjt2z(fu_VEC<int>& a)
{
    for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;

}

static int test_ndkRofCB(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_7mUcNdrU(a, b, sum));
    fu_DEFER(incrarr_by1_5UkPjt2z(a));
    return a[0] - 1;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_ndkRofCB(a, sum));
    return (sum - 2) + ret;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn sum_amulb(a: i32[], b: i32[], ref sum: i32)
            for (mut i = 0; i < a.len; i++)
                sum += a[i] * b[i];

        fn incrarr_by1(ref a: i32[])
            for (mut i = 0; i < a.len; i++)
                a[i] += 1;

        fn test(ref a: i32[], ref sum: i32) {
            let b = a;
            defer sum_amulb(:a, :b, :sum);


            incrarr_by1(:a);
            return a[0] - 2;

        }

        fn main() {
            mut a = [ 1 ];
            mut sum = 0;
            let ret = 100 * test(:a, :sum);
            return sum - 2 + ret;
        }

-----

#include <fu/defer.h>
#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void sum_amulb_7mUcNdrU(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static void incrarr_by1_5UkPjt2z(fu_VEC<int>& a)
{
    for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;

}

static int test_ndkRofCB(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_7mUcNdrU(a, b, sum));
    incrarr_by1_5UkPjt2z(a);
    return a[0] - 2;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_ndkRofCB(a, sum));
    return (sum - 2) + ret;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn sum_amulb(a: i32[], b: i32[], ref sum: i32)
            for (mut i = 0; i < a.len; i++)
                sum += a[i] * b[i];

        fn incrarr_by1(ref a: i32[])
            for (mut i = 0; i < a.len; i++)
                a[i] += 1;

        fn test(ref a: i32[], ref sum: i32) {
            let b = a;
            defer sum_amulb(:a, :b, :sum);


            defer for (mut i = 0; i < a.len; i++) a[i] += 1;
            return a[0] - 1;

        }

        fn main() {
            mut a = [ 1 ];
            mut sum = 0;
            let ret = 100 * test(:a, :sum);
            return sum - 2 + ret;
        }

-----

#include <fu/defer.h>
#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void sum_amulb_7mUcNdrU(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static int test_ndkRofCB(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_7mUcNdrU(a, b, sum));
    fu_DEFER(for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;);
    return a[0] - 1;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_ndkRofCB(a, sum));
    return (sum - 2) + ret;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn sum_amulb(a: i32[], b: i32[], ref sum: i32)
            for (mut i = 0; i < a.len; i++)
                sum += a[i] * b[i];

        fn incrarr_by1(ref a: i32[])
            for (mut i = 0; i < a.len; i++)
                a[i] += 1;

        fn test(ref a: i32[], ref sum: i32) {
            let b = a;
            defer sum_amulb(:a, :b, :sum);


            for (mut i = 0; i < a.len; i++) a[i] += 1;
            return a[0] - 2;

        }

        fn main() {
            mut a = [ 1 ];
            mut sum = 0;
            let ret = 100 * test(:a, :sum);
            return sum - 2 + ret;
        }

-----

#include <fu/defer.h>
#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void sum_amulb_7mUcNdrU(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static int test_ndkRofCB(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_7mUcNdrU(a, b, sum));
    for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;

    return a[0] - 2;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_ndkRofCB(a, sum));
    return (sum - 2) + ret;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        type Test = i8;
        fn main() 256.Test.i32;

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(fu::i8(256));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: $A, b: $B) b +   
            a;                      

        fn main() i8(-1).test(+1);

-----
_0.fu @2:33:

[2m      | [0m
    2 |         fn test(a: $A, b: $B) b [31;1m+[0m   
[2m      |             a;                      [0m
[2m      | [0m

	Bad call to [34;1m+[0m: 

	[35;1mtemplate[0m [34;1m+[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i8: copy

	[35;1mtemplate[0m [34;1m+[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mtest_0QtCZ4WW[0m
                [35;1mfn[0m [34;1mmain[0m

-----

        fn test(a: $A, b: $B) b +   
            $B(a);                  

        fn main() i8(-1).test(+1);

-----

#include <fu/int.h>

#ifndef FU_NO_FDEFs

inline static int test_0QtCZ4WW(const fu::i8 a, const int b)
{
    return b + int(a);
}

int fu_MAIN()
{
    return test_0QtCZ4WW(fu::i8(-1), +1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let x = { mut z = 0; z++; z };
        return x - 1;

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    // Hoisted:
    int z;

    int BL_1_v {};
    const int x = (__extension__ (
    {
        z = 0;
        z++;
        BL_1_v = (z);
    (void)0;}), int(BL_1_v));
    return x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul2(a) a*2;
        fn test(b, fn) fn(1 + fn(b));
        fn main() 14 - test(3, fn mul2);

-----

#ifndef FU_NO_FDEFs

inline static int mul2_pZ8wRcaF(const int a)
{
    return a * 2;
}

inline static int test_uL0F7Gqk(const int b)
{
    return mul2_pZ8wRcaF((1 + mul2_pZ8wRcaF(b)));
}

int fu_MAIN()
{
    return 14 - test_uL0F7Gqk(3);
}

#endif


int main() { return fu_MAIN(); }

-----

        let overloaded = 1;
        fn overloaded(a) a*2;
        fn test(b, fn) fn(fn + fn(b));
        fn main() 14 - test(3, fn overloaded);

-----

#ifndef FU_NO_FDEFs

                                #ifndef DEF_overloaded
                                #define DEF_overloaded
inline constexpr int overloaded = 1;
                                #endif

inline static int overloaded_pZ8wRcaF(const int a)
{
    return a * 2;
}

inline static int test_gSXWwYiq(const int b)
{
    return overloaded_pZ8wRcaF((overloaded + overloaded_pZ8wRcaF(b)));
}

int fu_MAIN()
{
    return 14 - test_gSXWwYiq(3);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn overloaded(a) a*2;
        fn test(b, fn) fn(fn + fn(b));
        fn main() {
            let overloaded = 1;
            return 14 - test(3, fn overloaded);
        }

-----

#ifndef FU_NO_FDEFs

inline static int overloaded_pZ8wRcaF(const int a)
{
    return a * 2;
}

inline static int test_VV25NSbU(const int b, const int overloaded)
{
    return overloaded_pZ8wRcaF((overloaded + overloaded_pZ8wRcaF(b)));
}

int fu_MAIN()
{
    const int overloaded = 1;
    return 14 - test_VV25NSbU(3, overloaded);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn map(items: $T[], fn) {
            mut result: fn(items[0])[];
            for (mut i = 0; i < items.len; i++)
                result.push(fn(items[i]));

            return result;
        }

        fn sqr(x) x*x;

        fn main() [2].map(fn sqr)[0] - 4;

        // EXPECT (fu::slate<1, int> { 2 })
        //  During the propagateType rework
        //   the 'mut result: fn(items[0])[]' type annot
        //    was found listed as a callsite for items,
        //     but wasn't reachable for relax.

-----

#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int sqr_pZ8wRcaF(const int x)
{
    return x * x;
}

inline static fu_VEC<int> map_zN7Fawkg(fu::view<int> items)
{
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < items.size(); i++)
        result.push(sqr_pZ8wRcaF(items[i]));

    return /*NRVO*/ result;
}

int fu_MAIN()
{
    return map_zN7Fawkg((fu::slate<1, int> { 2 }))[0] - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn reduce(items: $T[], fn, init?: $T) {
            mut result = init;
            for (mut i = 0; i < items.len; i++)
                result = fn(result, items[i]);

            return result;
        }

        fn main() [1, 2].reduce(|a, b| a + b) - 3;

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int reduce_uGJ0PQSU(fu::view<int> items, const int init)
{
    /*MOV*/ int result = init;
    for (int i = 0; i < items.size(); i++)
    {
        int BL_3_v {};
        result = (__extension__ (
        {
            const int b = items[i];
            BL_3_v = ((result + b));
        (void)0;}), int(BL_3_v));
    };
    return /*NRVO*/ result;
}

int fu_MAIN()
{
    return reduce_uGJ0PQSU((fu::slate<2, int> { 1, 2 }), 0) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn each(items: $T[], fn) {
            for (mut i = 0; i < items.len; i++) // <- one i
                fn(items[i]);
        }

        fn main() {
            mut i = 0;                  // <- another i, i got them to shadow each other
            [1, 2].each: |x| i += x;    //      in the everything-a-free-function
            return i - 3;               //      impl of closures
        }

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static void each_WxsMz19X(fu::view<int> items, int& i)
{
    for (int i_1 = 0; i_1 < items.size(); i_1++)
    {
        const int x = items[i_1];
        i += x;
    };
}

int fu_MAIN()
{
    int i = 0;
    each_WxsMz19X((fu::slate<2, int> { 1, 2 }), i);
    return i - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 2;

        fn FnDecl_update(parent_idx: i32) {
            fn each(fn) fn();
            each(|| makeDirty(:parent_idx));
        }

        fn makeDirty(parent_idx: i32): void {
            sum += parent_idx;
        }

        FnDecl_update(1);

        return sum - 3;

-----

#ifndef FU_NO_FDEFs

static void makeDirty_kvdihmBv(const int parent_idx, int& sum)
{
    sum += parent_idx;
}

inline static void each_DRPLrWm8(const int parent_idx, int& sum)
{
    makeDirty_kvdihmBv(parent_idx, sum);
}

static void FnDecl_update_neXOK2KY(const int parent_idx, int& sum)
{
    each_DRPLrWm8(parent_idx, sum);
}

int fu_MAIN()
{
    int sum = 2;
    FnDecl_update_neXOK2KY(1, sum);
    return sum - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a: A) B(a.a * 2);


        fn main() 1.A.b - 2;

-----

struct s_A;
struct s_B;

                                #ifndef DEF_s_A
                                #define DEF_s_A
struct s_A
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_B bananas_vEF4Qiyl(const s_A& a)
{
    return s_B { (a.a * 2) };
}

int fu_MAIN()
{
    return bananas_vEF4Qiyl(s_A { 1 }).b - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a: A) B(a.a * 2);


-----

struct s_A;
struct s_B;

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

                                #ifndef DEF_s_A
                                #define DEF_s_A
struct s_A
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_B bananas_vEF4Qiyl(const s_A& a)
{
    return s_B { (a.a * 2) };
}

#endif

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a: A) B(a.a * 2);

        import _0;
        fn main() 1.A.b - 2;

-----

struct s_A;
struct s_B;

s_B bananas_vEF4Qiyl(const s_A&);

                                #ifndef DEF_s_A
                                #define DEF_s_A
struct s_A
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return bananas_vEF4Qiyl(s_A { 1 }).b - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a) B(a.a * 2); // <- template


        fn main() 1.A.b - 2;

-----

struct s_A;
struct s_B;

                                #ifndef DEF_s_A
                                #define DEF_s_A
struct s_A
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static s_B bananas_vEF4Qiyl(const s_A& a)
{
    return s_B { (a.a * 2) };
}

int fu_MAIN()
{
    return bananas_vEF4Qiyl(s_A { 1 }).b - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a) B(a.a * 2); // <- template


-----

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a) B(a.a * 2); // <- template

        import _0;
        fn main() 1.A.b - 2;

-----

struct s_A;
struct s_B;

                                #ifndef DEF_s_A
                                #define DEF_s_A
struct s_A
{
    int a;
    explicit operator bool() const noexcept
    {
        return false
            || a
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_bananas_vEF4Qiyl
                                #define DEFt_bananas_vEF4Qiyl
inline s_B bananas_vEF4Qiyl(const s_A& a)
{
    return s_B { (a.a * 2) };
}
                                #endif

int fu_MAIN()
{
    return bananas_vEF4Qiyl(s_A { 1 }).b - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sqr(a: i32) a * a;
        fn woot(a.sqr) a + 1;
        fn main() 2.woot - 5;

-----

#ifndef FU_NO_FDEFs

static int sqr_pZ8wRcaF(const int a)
{
    return a * a;
}

inline static int woot_pZ8wRcaF(const int a)
{
    return a + 1;
}

int fu_MAIN()
{
    return woot_pZ8wRcaF(sqr_pZ8wRcaF(2)) - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A0 { a0: i32; };
        struct A1 { a1: i32; };
        struct B  { b:  i32; };

        fn a0(a1: A1) a1.a1 * 100;
        fn bananas(a) B(a.a0 * 2); // <- template
        fn woot(a.bananas: B) a.b; // <- check

        fn main() 1.A0.woot + 1.A1.woot - 202;

-----

struct s_A0;
struct s_A1;
struct s_B;

                                #ifndef DEF_s_A0
                                #define DEF_s_A0
struct s_A0
{
    int a0;
    explicit operator bool() const noexcept
    {
        return false
            || a0
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B
                                #define DEF_s_B
struct s_B
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

                                #ifndef DEF_s_A1
                                #define DEF_s_A1
struct s_A1
{
    int a1;
    explicit operator bool() const noexcept
    {
        return false
            || a1
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static s_B bananas_vEF4Qiyl(const s_A0& a)
{
    return s_B { (a.a0 * 2) };
}

static int woot_qqfnq3DH(const s_B& a)
{
    return a.b;
}

static int a0_j48XboFY(const s_A1& a1)
{
    return a1.a1 * 100;
}

inline static s_B bananas_j48XboFY(const s_A1& a)
{
    return s_B { (a0_j48XboFY(a) * 2) };
}

int fu_MAIN()
{
    return (woot_qqfnq3DH(bananas_vEF4Qiyl(s_A0 { 1 })) + woot_qqfnq3DH(bananas_j48XboFY(s_A1 { 1 }))) - 202;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A0 { a0: i32; };
        struct A1 { a1: i32; };
        struct B0 { b0: i32; };
        struct B1 { b1: i32; };
        struct C  { c:  i32; };

        fn bananas(using _: A0) B0(a0 * 2);
        fn bananas(using _: A1) B1(a1 * 3);
        using fn c0(using _: B0) C(c: b0 * 5);
        using fn c1(using _: B1) C(c: b1 * 7);
        fn woot(using a.bananas: C) c; // extra conversion

        fn main() 1.A0.woot + 1.A1.woot - 31;

-----

struct s_A0;
struct s_A1;
struct s_B0;
struct s_B1;
struct s_C;

                                #ifndef DEF_s_A0
                                #define DEF_s_A0
struct s_A0
{
    int a0;
    explicit operator bool() const noexcept
    {
        return false
            || a0
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B0
                                #define DEF_s_B0
struct s_B0
{
    int b0;
    explicit operator bool() const noexcept
    {
        return false
            || b0
        ;
    }
};
                                #endif

                                #ifndef DEF_s_C
                                #define DEF_s_C
struct s_C
{
    int c;
    explicit operator bool() const noexcept
    {
        return false
            || c
        ;
    }
};
                                #endif

                                #ifndef DEF_s_A1
                                #define DEF_s_A1
struct s_A1
{
    int a1;
    explicit operator bool() const noexcept
    {
        return false
            || a1
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B1
                                #define DEF_s_B1
struct s_B1
{
    int b1;
    explicit operator bool() const noexcept
    {
        return false
            || b1
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_B0 bananas_vEF4Qiyl(const s_A0& _)
{
    return s_B0 { (_.a0 * 2) };
}

static s_C c0_qqfnq3DH(const s_B0& _)
{
    return s_C { (_.b0 * 5) };
}

static int woot_R3aYVJht(const s_C& a)
{
    return a.c;
}

static s_B1 bananas_j48XboFY(const s_A1& _)
{
    return s_B1 { (_.a1 * 3) };
}

static s_C c1_23CZhQdz(const s_B1& _)
{
    return s_C { (_.b1 * 7) };
}

int fu_MAIN()
{
    return (woot_R3aYVJht(c0_qqfnq3DH(bananas_vEF4Qiyl(s_A0 { 1 }))) + woot_R3aYVJht(c1_23CZhQdz(bananas_j48XboFY(s_A1 { 1 })))) - 31;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A0 { a0: i32; };
        struct A1 { a1: i32; };
        struct B0 { b:  i32; };
        struct B1 { b:  i32; };

        fn bananas(a0: A0) B0(a0.a0 * 2);
        fn bananas(a1: A1) B1(a1.a1 * 3);
        fn woot(a.bananas) a.b; // <- template

        fn main() 1.A0.woot + 1.A1.woot - 5;

-----

struct s_A0;
struct s_A1;
struct s_B0;
struct s_B1;

                                #ifndef DEF_s_A0
                                #define DEF_s_A0
struct s_A0
{
    int a0;
    explicit operator bool() const noexcept
    {
        return false
            || a0
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B0
                                #define DEF_s_B0
struct s_B0
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

                                #ifndef DEF_s_A1
                                #define DEF_s_A1
struct s_A1
{
    int a1;
    explicit operator bool() const noexcept
    {
        return false
            || a1
        ;
    }
};
                                #endif

                                #ifndef DEF_s_B1
                                #define DEF_s_B1
struct s_B1
{
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_B0 bananas_vEF4Qiyl(const s_A0& a0)
{
    return s_B0 { (a0.a0 * 2) };
}

inline static int woot_qqfnq3DH(const s_B0& a)
{
    return a.b;
}

static s_B1 bananas_j48XboFY(const s_A1& a1)
{
    return s_B1 { (a1.a1 * 3) };
}

inline static int woot_23CZhQdz(const s_B1& a)
{
    return a.b;
}

int fu_MAIN()
{
    return (woot_qqfnq3DH(bananas_vEF4Qiyl(s_A0 { 1 })) + woot_23CZhQdz(bananas_j48XboFY(s_A1 { 1 }))) - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn times_implicit(x: i32, implicit y: i32) x * y;
        fn times7(x: i32) x * 7;

        fn woot(a.times_implicit, b: u32) a * b.i32;
        fn woot(a: i32, b.times7: i32) a * b;

        fn test0() 3.woot(2.i32);

        fn test1() {
            let implicit y = 7;
            return 3.woot(2.u32);
        }

        fn main() test0 + test1 * 1000 - 42042;

-----

#ifndef FU_NO_FDEFs

static int times7_pZ8wRcaF(const int x)
{
    return x * 7;
}

static int woot_XFamX2JF(const int a, const int b)
{
    return a * b;
}

static int test0_H9fhQUVP()
{
    return woot_XFamX2JF(3, times7_pZ8wRcaF(int(2)));
}

static int times_implicit_XFamX2JF(const int x, const int y)
{
    return x * y;
}

inline static int woot_89V2yghV(const int a, const unsigned b)
{
    return a * int(b);
}

static int test1_H9fhQUVP()
{
    const int y = 7;
    return woot_89V2yghV(times_implicit_XFamX2JF(3, y), unsigned(2));
}

int fu_MAIN()
{
    return (test0_H9fhQUVP() + (test1_H9fhQUVP() * 1000)) - 42042;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct X { str: string; };
        fn ~(a: X, b: X) X(a.str ~ b.str);          // currently: invalid operator~ cg
        inline fn ~(a: X, b.to_debug_str) a ~ b;    // currently: pointless blocks

        fn to_debug_str(a: i32) X("i" ~ a);

        fn main() {
            let hey = X("Hey! ") ~ 5;
            return hey.str == "Hey! i5" ? 0 : 1;
        }

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_X;

                                #ifndef DEF_s_X
                                #define DEF_s_X
struct s_X
{
    fu_STR str;
    explicit operator bool() const noexcept
    {
        return false
            || str
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static s_X to_debug_str_pZ8wRcaF(const int a)
{
    return s_X { x7E("i"_fu, fu::i64dec(a)) };
}

static s_X x7E(const s_X& a, const s_X& b)
{
    return s_X { (a.str + b.str) };
}

int fu_MAIN()
{
    s_X BL_1_v {};
    s_X hey = (__extension__ (
    {
        s_X a = s_X { "Hey! "_fu };
        s_X b = to_debug_str_pZ8wRcaF(5);
        BL_1_v = (x7E(a, b));
    (void)0;}), static_cast<s_X&&>(BL_1_v));
    return ((hey.str == "Hey! i5"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec32  { x: f32; };
        struct conv32 { v: f32; };

        using inline fn convert(v: i32): conv32 = [ v.f32 ]; // no litfix
        inline fn /(a: conv32, b: vec32) vec32(a.v / b.x);

        fn main() i32 <| (1/vec32(1)).x - 1;

-----

struct s_conv32;
struct s_vec32;

                                #ifndef DEF_s_vec32
                                #define DEF_s_vec32
struct s_vec32
{
    float x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_conv32
                                #define DEF_s_conv32
struct s_conv32
{
    float v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_vec32 BL_1_v {};
    return int(((__extension__ (
    {
        s_conv32 BL_2_v {};
        const s_conv32 a = (__extension__ (
        {
            const int v = 1;
            BL_2_v = (s_conv32 { float(v) });
        (void)0;}), s_conv32(BL_2_v));
        const s_vec32 b = s_vec32 { 1.0f };
        BL_1_v = (s_vec32 { (a.v / b.x) });
    (void)0;}), s_vec32(BL_1_v)).x - 1.0f));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec32  { x: f32; };
        struct conv32 { v: f32; };

        using inline fn convert(v: f32): conv32 = [ v ]; // litfix in a conv: i32 -> f32
        inline fn /(a: conv32, b: vec32) vec32(a.v / b.x);

        fn main() i32 <| (1/vec32(1)).x - 1;

-----

struct s_conv32;
struct s_vec32;

                                #ifndef DEF_s_vec32
                                #define DEF_s_vec32
struct s_vec32
{
    float x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_conv32
                                #define DEF_s_conv32
struct s_conv32
{
    float v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_vec32 BL_1_v {};
    return int(((__extension__ (
    {
        s_conv32 BL_2_v {};
        const s_conv32 a = (__extension__ (
        {
            const float v = 1.0f;
            BL_2_v = (s_conv32 { float(v) });
        (void)0;}), s_conv32(BL_2_v));
        const s_vec32 b = s_vec32 { 1.0f };
        BL_1_v = (s_vec32 { (a.v / b.x) });
    (void)0;}), s_vec32(BL_1_v)).x - 1.0f));
}

#endif


int main() { return fu_MAIN(); }

-----

        struct vec_u  { x: u32; };
        struct vec32  { x: f32; };
        struct vec64  { x: f64; };

        struct conv_u { v: u32; };
        struct conv32 { v: f32; };
        struct conv64 { v: f64; };

        using inline fn convert(v: u32): conv_u = [ v ]; // matchfail before
        using inline fn convert(v: f32): conv32 = [ v ];
        using inline fn convert(v: f64): conv64 = [ v ]; // matchfail after

        inline fn /(a: conv_u, b: vec_u) vec_u(a.v / b.x);
        inline fn /(a: conv32, b: vec32) vec32(a.v / b.x);
        inline fn /(a: conv64, b: vec64) vec64(a.v / b.x);

        fn main() i32 <| (1/vec32(1)).x - 1;

-----

struct s_conv32;
struct s_vec32;

                                #ifndef DEF_s_vec32
                                #define DEF_s_vec32
struct s_vec32
{
    float x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_conv32
                                #define DEF_s_conv32
struct s_conv32
{
    float v;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    s_vec32 BL_1_v {};
    return int(((__extension__ (
    {
        s_conv32 BL_2_v {};
        const s_conv32 a = (__extension__ (
        {
            const float v = 1.0f;
            BL_2_v = (s_conv32 { float(v) });
        (void)0;}), s_conv32(BL_2_v));
        const s_vec32 b = s_vec32 { 1.0f };
        BL_1_v = (s_vec32 { (a.v / b.x) });
    (void)0;}), s_vec32(BL_1_v)).x - 1.0f));
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Module       { modid: i32; };
        pub struct Target       { modid: i32; index: i32; };
        pub struct Type         { using vtype: ValueType; };
        pub struct ValueType    { modid: i32; canon: string; };
        pub struct Overload     { kind: string; locals?: Overload[]; };

        fn main() {
            using fn GET(target: Target, implicit overloads: Overload[]) {
                target.index > 0 || assert();
                if (target.modid < 0)
                    return overloads[-target.modid - 1].locals[target.index - 1];
                else
                    return overloads[target.index - 1];
            }

            fn try_GET(target: Target)
                target && GET(target);

            let implicit mut overloads: Overload[];
            overloads ~= Overload("What");
            return try_GET(Target(0, 1)).kind.len - 4;
        }

-----

#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Overload;
struct s_Target;

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_VEC<s_Overload> locals;
    s_Overload(const s_Overload&) = default;
    s_Overload(s_Overload&&) = default;
    s_Overload& operator=(s_Overload&&) = default;
    s_Overload& operator=(const s_Overload& selfrec) { return *this = s_Overload(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || locals
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

#ifndef FU_NO_FDEFs

static const s_Overload& GET_NC60W7h7(const s_Target& target, fu::view<s_Overload> overloads)
{
    if (!(target.index > 0))
        fu_ASSERT();

    if (target.modid < 0)
        return overloads[(-target.modid - 1)].locals[(target.index - 1)];
    else
        return overloads[(target.index - 1)];

}

static const s_Overload& try_GET_vvDdMeW1(const s_Target& target, fu::view<s_Overload> overloads)
{
    return target ? GET_NC60W7h7(target, overloads) : (*(const s_Overload*)fu::NIL);
}

int fu_MAIN()
{
    fu_VEC<s_Overload> overloads {};
    overloads += s_Overload { "What"_fu, fu_VEC<s_Overload>{} };
    return try_GET_vvDdMeW1(s_Target { 0, 1 }, overloads).kind.size() - 4;
}

#endif


int main() { return fu_MAIN(); }
// TYPE_recursion
// TYPE_resolve
// DEAD_code

-----

        struct RWEvent { rw_target!: i32 };
        struct ReadID  { id: i32 };

        fn main()
        {

            using   
            fn RWEvent(read: ReadID)    RWEvent(rw_target: read.id);

            fn rw_target(read: ReadID)  read.id;

            return ReadID(0).rw_target;
        }

-----
_0.fu @13:29:

[2m      |             fn rw_target(read: ReadID)  read.id;[0m
[2m      | [0m
   13 |             return ReadID(0)[31;1m.[0mrw_target;
[2m      |         }[0m
[2m      | [0m

	Ambiguous callsite, matches multiple items in scope:

	[35;1mfield[0m [34;1mrw_target[0m(
	    [34;1mthis[0m: RWEvent
	        via [35;1mfn[0m [34;1mRWEvent_brPmDjNp[0m) from global scope and 

	[35;1mfn[0m [34;1mrw_target_8KPP6Puv[0m(
	    [34;1mread[0m: ReadID: copy) from `main`, as seen from `main`.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct RWEvent { rw_target!: i32 };
        struct ReadID  { id: i32 };

        fn main()
        {

            fn RWEvent(read: ReadID)    RWEvent(rw_target: read.id);

            fn rw_target(read: ReadID)  read.id;

            return ReadID(0).rw_target;
        }

-----

struct s_ReadID;

                                #ifndef DEF_s_ReadID
                                #define DEF_s_ReadID
struct s_ReadID
{
    int id;
    explicit operator bool() const noexcept
    {
        return false
            || id
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int rw_target_8KPP6Puv(const s_ReadID& read)
{
    return read.id;
}

int fu_MAIN()
{
    return int(rw_target_8KPP6Puv(s_ReadID { 0 }));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn a_len(a: [$T]) a.len; // a conversion could navigate this here
        struct Test { using a: i32[]; };
        fn main() Test.a_len;

-----
TODO: _0.fu @4:23:

[2m      |         fn a_len(a: [$T]) a.len; // a conversion could navigate this here[0m
[2m      |         struct Test { using a: i32[]; };[0m
    4 |         fn main() Test[31;1m.[0ma_len;
[2m      | [0m

	Bad call to [34;1ma_len[0m: 

	[35;1mtemplate[0m [34;1ma_len[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for Test: copy

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        struct CodegenOutput { using src: string; };

        fn test(ref str: string, out: CodegenOutput) {
            str ~= out && "b";
            return str ~ out;
        }

        fn main() {
            mut str = "a";
            return str.test(CodegenOutput("what")).len - 6; // "abwhat".len;
        }

-----
TODO: _0.fu @6:24:

[2m      |         fn test(ref str: string, out: CodegenOutput) {[0m
[2m      |             str ~= out && "b";[0m
    6 |             return str [31;1m~[0m out;
[2m      |         }[0m
[2m      | [0m

	Bad call to [34;1m~[0m: 

	[35;1mtemplate[0m [34;1m~[0m: Cannot match argument [35;1marg[0m [34;1ma[0m autocall [34;1mstr[0m: 

		[35;1marg[0m [34;1mstr[0m: Wrong number of arguments: expects 0, got 1.

		[35;1mtemplate[0m [34;1mstr[0m: Could not specialize: No body pattern matched.

	[35;1mtemplate[0m [34;1m~[0m: Cannot match argument [35;1marg[0m [34;1mb[0m autocall [34;1mstr[0m: 

		[35;1marg[0m [34;1mstr[0m: Wrong number of arguments: expects 0, got 1.

		[35;1mtemplate[0m [34;1mstr[0m: Could not specialize: No body pattern matched.

	[35;1mtemplate[0m [34;1m
<fu/vec/concat_one.h>
+[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for CodegenOutput: copy

	[35;1mtemplate[0m [34;1m
<fu/vec/concat_one.h>
+[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for CodegenOutput: copy

	[35;1mtemplate[0m [34;1m
<fu/vec/concat.h>
+[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for CodegenOutput: copy

	[35;1mtemplate[0m [34;1m~[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mtest_DtPn6PLY[0m

-----

        fn varargs(a[]) a[0] + a[1];
        fn main() varargs(1, 2) - 3;

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int varargs_WgWjr9S0(fu::view<int> a)
{
    return a[0] + a[1];
}

int fu_MAIN()
{
    return varargs_WgWjr9S0((fu::slate<2, int> { 1, 2 })) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn to_debug_str(a: i32) a     * 2;
        fn to_debug_str(b: u32) b.i32 * 3;


        fn inspect(items.to_debug_str[]) // <- varargs!
        {
            mut a = 0;
            for (mut i = 0; i < items.len; i++)
                a += items[i];

            return a;
        }

        fn main() inspect(5.i32, 7.u32) - 31;

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int to_debug_str_pZ8wRcaF(const int a)
{
    return a * 2;
}

static int to_debug_str_x17wO2xD(const unsigned b)
{
    return int(b) * 3;
}

inline static int inspect_WgWjr9S0(fu::view<int> items)
{
    /*MOV*/ int a = 0;
    for (int i = 0; i < items.size(); i++)
        a += items[i];

    return /*NRVO*/ a;
}

int fu_MAIN()
{
    return inspect_WgWjr9S0((fu::slate<2, int> { to_debug_str_pZ8wRcaF(int(5)), to_debug_str_x17wO2xD(unsigned(7)) })) - 31;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn to_debug_str(a: i32) a     * 2;
        fn to_debug_str(b: u32) b.i32 * 3;


        inline

        fn inspect(items.to_debug_str[]) // <- varargs!
        {
            mut a = 0;
            for (mut i = 0; i < items.len; i++)
                a += items[i];

            return a;
        }

        fn main() inspect(5.i32, 7.u32) - 31;

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static int to_debug_str_pZ8wRcaF(const int a)
{
    return a * 2;
}

static int to_debug_str_x17wO2xD(const unsigned b)
{
    return int(b) * 3;
}

int fu_MAIN()
{
    // Hoisted:
    int a;

    int BL_1_v {};
    return (__extension__ (
    {
        fu_VEC<int> items = fu_VEC<int> { fu::slate<2, int> { to_debug_str_pZ8wRcaF(int(5)), to_debug_str_x17wO2xD(unsigned(7)) } };
        a = 0;
        for (int i = 0; i < items.size(); i++)
            a += items[i];

        BL_1_v = (a);
    (void)0;}), int(BL_1_v)) - 31;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn va(args[]: i32[]) {
            mut sum = 0;
            for (mut i = 0; i < args.len; i++) sum += args[i];
            return sum;
        }

        fn main() va(1, 2) - 3;

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int va_WgWjr9S0(fu::view<int> args)
{
    /*MOV*/ int sum = 0;
    for (int i = 0; i < args.size(); i++)
        sum += args[i];

    return /*NRVO*/ sum;
}

int fu_MAIN()
{
    return va_WgWjr9S0((fu::slate<2, int> { 1, 2 })) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn Stringy(i: i32) "i:" ~ i;

        inline fn Printy(x: string): string = x;
        inline fn Printy(x.Stringy): string = x;

        fn Println(parts.Printy[]) {
            mut total = 0;
            for (mut i = 0; i < parts.len; i++) total += parts[i].len;
            return total;
        }

        fn main() Println("str", 10) - 7; // 'stri:10'.len

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR Stringy_pZ8wRcaF(const int i)
{
    return x7E("i:"_fu, fu::i64dec(i));
}

inline static int Println_wjZjF8su(fu::view<fu_STR> parts)
{
    /*MOV*/ int total = 0;
    for (int i = 0; i < parts.size(); i++)
        total += parts[i].size();

    return /*NRVO*/ total;
}

int fu_MAIN()
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;

    const fu_STR* BL_1_v;
    const fu_STR* BL_2_v;
    return Println_wjZjF8su((fu::slate<2, fu_STR> { fu_STR((__extension__ (
    {
        x = "str"_fu;
        BL_1_v = &(x);
    (void)0;}), *BL_1_v)), fu_STR((__extension__ (
    {
        x_1 = Stringy_pZ8wRcaF(10);
        BL_2_v = &(x_1);
    (void)0;}), *BL_2_v)) })) - 7;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn Stringy(i: i32) "i:" ~ i;

        inline fn Printy(x: string): string = x;
        inline fn Printy(x.Stringy): string = x;

        fn Println(parts.Printy[]: [string]) {
            mut total = 0;
            for (mut i = 0; i < parts.len; i++) total += parts[i].len;
            return total;
        }

        fn main() Println("str", 10) - 7; // 'stri:10'.len

-----

#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR Stringy_pZ8wRcaF(const int i)
{
    return x7E("i:"_fu, fu::i64dec(i));
}

static int Println_3jgISaMj(fu::view<fu_STR> parts)
{
    /*MOV*/ int total = 0;
    for (int i = 0; i < parts.size(); i++)
        total += parts[i].size();

    return /*NRVO*/ total;
}

int fu_MAIN()
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;

    const fu_STR* BL_1_v;
    const fu_STR* BL_2_v;
    return Println_3jgISaMj((fu::slate<2, fu_STR> { fu_STR((__extension__ (
    {
        x = "str"_fu;
        BL_1_v = &(x);
    (void)0;}), *BL_1_v)), fu_STR((__extension__ (
    {
        x_1 = Stringy_pZ8wRcaF(10);
        BL_2_v = &(x_1);
    (void)0;}), *BL_2_v)) })) - 7;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----
 // inline fn empty retval on autocall
        inline fn concatable(a: bool)               a ? "yes" : "no";
        inline fn concat(a.concatable, b: string)   a.concatable ~ b;
        fn main()                                   concat(true, "!").len - 4;

-----
TODO: _0.fu @4:59:

[2m      |         inline fn concatable(a: bool)               a ? "yes" : "no";[0m
[2m      |         inline fn concat(a.concatable, b: string)   a.concatable ~ b;[0m
    4 |         fn main()                                   concat[31;1m([0mtrue, "!").len - 4;
[2m      | [0m

	COMPILER BUG:

	serializeType: Falsy type in: mangle.conv

-----
 // inline fn empty retval on autocall
        inline fn inl_print(a: byte)                a;
        fn inl_println(a.inl_print[]: [string])     a.len;
        fn main()                                   inl_println('a', 'b') - 2;

-----
TODO: _0.fu @4:64:

[2m      |         inline fn inl_print(a: byte)                a;[0m
[2m      |         fn inl_println(a.inl_print[]: [string])     a.len;[0m
    4 |         fn main()                                   inl_println[31;1m([0m'a', 'b') - 2;
[2m      | [0m

	COMPILER BUG:

	tryMatch: !actual

-----

        fn fn_v(fn, v) fn(v);
        struct XY { x: i32; y: i32; };  // fields weren't visible to addroffns
        fn main() {
            let v = XY(11, 13);
            return fn_v(.x, v) + fn_v(.y, v) - 24;
        }

-----

struct s_XY;

                                #ifndef DEF_s_XY
                                #define DEF_s_XY
struct s_XY
{
    int x;
    int y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int fn_v_cu2zlLQb(const s_XY& v)
{
    return v.x;
}

inline static int fn_v_6mr3okec(const s_XY& v)
{
    return v.y;
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_cu2zlLQb(v) + fn_v_6mr3okec(v)) - 24;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn fn_v(x, v) x(v);             // same but name conflict - x arg and .x field
        struct XY { x: i32; y: i32; };
        fn main() {
            let v = XY(11, 13);
            return fn_v(.x, v) + fn_v(.y, v) - 24;
        }

-----

struct s_XY;

                                #ifndef DEF_s_XY
                                #define DEF_s_XY
struct s_XY
{
    int x;
    int y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int fn_v_cu2zlLQb(const s_XY& v)
{
    return v.x;
}

inline static int fn_v_6mr3okec(const s_XY& v)
{
    return v.y;
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_cu2zlLQb(v) + fn_v_6mr3okec(v)) - 24;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn fn_w(x, y) x(y);             // same thing but
        fn fn_v(y, x) fn_w(fn y, x);    // extra nasty
        struct XY { x: i32; y: i32; };
        fn main() {
            let v = XY(11, 13);
            return fn_v(.x, v) + fn_v(.y, v) - 24;
        }

-----

struct s_XY;

                                #ifndef DEF_s_XY
                                #define DEF_s_XY
struct s_XY
{
    int x;
    int y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int fn_w_6mr3okec(const s_XY& y)
{
    return y.x;
}

inline static int fn_v_6mr3okec(const s_XY& x)
{
    return fn_w_6mr3okec(x);
}

inline static int fn_w_xzG87q0Z(const s_XY& y)
{
    return y.y;
}

inline static int fn_v_xzG87q0Z(const s_XY& x)
{
    return fn_w_xzG87q0Z(x);
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_6mr3okec(v) + fn_v_xzG87q0Z(v)) - 24;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn identity(x) x;
        fn main() {
            fn outer(depth1) {
                let sum = depth1; return identity(|| sum);
            }
            let sum = 0; return outer(sum);
        }

-----

#ifndef FU_NO_FDEFs

inline static int identity_ZbiCAtn7(const int depth1)
{
    return depth1;
}

inline static int outer_A1oHZf5p(const int depth1)
{
    return identity_ZbiCAtn7(depth1);
}

int fu_MAIN()
{
    /*MOV*/ const int sum = 0;
    return int(outer_A1oHZf5p(sum));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn identity(x) x;
        fn test(depth0) {
            fn outer(depth1) {
                let sum = depth1; inline fn lambda1() sum; return identity(fn lambda1);
            }
            let sum = depth0; inline fn lambda0() sum; return outer(fn lambda0);
        }
        fn main() test(0);

-----

#ifndef FU_NO_FDEFs

inline static int identity_MOb0dFXj(const int depth0)
{
    return depth0;
}

inline static int outer_TQyCXpJP(const int depth0)
{
    return identity_MOb0dFXj(depth0);
}

inline static int test_pZ8wRcaF(const int depth0)
{
    return outer_TQyCXpJP(depth0);
}

int fu_MAIN()
{
    return int(test_pZ8wRcaF(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(depth0) {
            fn identity(x) x;
            fn outer(depth1) {
                fn inner(depth2) {
                    let sum = depth2; inline fn lambda2() sum; return identity(fn lambda2);
                }
                let sum = depth1; inline fn lambda1() sum; return inner(fn lambda1);
            }
            let sum = depth0; inline fn lambda0() sum; return outer(fn lambda0);
        }
        fn main() test(0);

-----

#ifndef FU_NO_FDEFs

inline static int identity_Xlj5y7jR(const int depth0)
{
    return depth0;
}

inline static int inner_0euYz5ZJ(const int depth0)
{
    return identity_Xlj5y7jR(depth0);
}

inline static int outer_TQyCXpJP(const int depth0)
{
    return inner_0euYz5ZJ(depth0);
}

inline static int test_pZ8wRcaF(const int depth0)
{
    return outer_TQyCXpJP(depth0);
}

int fu_MAIN()
{
    return int(test_pZ8wRcaF(0));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(depth0)
        {
            fn first(depth1) {
                fn first_inner(depth2) {
                    let sum = depth0 + depth1 + depth2;
                    return sum;
                }

                let sum = depth0 + depth1;
                return first_inner(|| sum);
            }

            fn second(depth1) {
                fn second_inner(depth2) {
                    let sum = depth0 + depth1 + depth2;
                    return sum + first(|| sum);
                }

                let sum = depth0 + depth1;
                return second_inner(|| sum);
            }

            let sum = depth0 + depth0;
            return second(|| sum);
        }

        fn main() test(0);

-----

#ifndef FU_NO_FDEFs

inline static int first_inner_JPx0kbtu(const int depth0, const int sum, const int sum_1)
{
    /*MOV*/ const int sum_2 = ((depth0 + sum) + sum_1);
    return /*NRVO*/ sum_2;
}

inline static int first_FE8dDGkP(const int depth0, const int sum)
{
    const int sum_1 = (depth0 + sum);
    return first_inner_JPx0kbtu(depth0, sum, sum_1);
}

inline static int second_inner_rf4iUM78(const int depth0, const int sum, const int sum_1)
{
    const int sum_2 = ((depth0 + sum) + sum_1);
    return sum_2 + first_FE8dDGkP(depth0, sum_2);
}

inline static int second_0euYz5ZJ(const int depth0, const int sum)
{
    const int sum_1 = (depth0 + sum);
    return second_inner_rf4iUM78(depth0, sum, sum_1);
}

inline static int test_pZ8wRcaF(const int depth0)
{
    const int sum = (depth0 + depth0);
    return second_0euYz5ZJ(depth0, sum);
}

int fu_MAIN()
{
    return test_pZ8wRcaF(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn use_a(implicit a: i32) a * a;
        fn use_b(implicit b: i32) b * b;
        fn use_c(implicit c: i32) c * c;

        fn parseStuff(x: i32) {
            fn doStuff(y: i32) doSomething(y * y);
            return doStuff(x * x);
        }

        fn doSomething(x: i32) {
            fn doSomething_inner(y: i32) y * use_a * descend(y * y);
            return doSomething_inner(x * x);
        }

        fn descend(x: i32) { // <- x here
            fn descend_inner(y: i32)
                y & 1 ? parseStuff(y / 2) * parseStuff(x) // x not defined here?
                      : doSomethingElse(y * y) * use_c;

            return descend_inner(x * x);
        }

        fn doSomethingElse(x: i32) {
            fn doSomethingElse_inner(y: i32) y * use_b;
            return doSomethingElse_inner(x * x);
        }

        fn main() {
            let implicit a = 0;
            let implicit b = 0;
            let implicit c = 0;
            return parseStuff(0);
        }

-----

static int descend_pZ8wRcaF(int, int, int, int);
static int doSomething_pZ8wRcaF(int, int, int, int);
static int doStuff_tsR6R1Y0(int, int, int, int);
static int parseStuff_pZ8wRcaF(int, int, int, int);

#ifndef FU_NO_FDEFs

static int use_a_pZ8wRcaF(const int a)
{
    return a * a;
}

static int use_b_pZ8wRcaF(const int b)
{
    return b * b;
}

static int doSomethingElse_inner_PVFnsA3X(const int y, const int b)
{
    return y * use_b_pZ8wRcaF(b);
}

static int doSomethingElse_pZ8wRcaF(const int x, const int b)
{
    return doSomethingElse_inner_PVFnsA3X((x * x), b);
}

static int use_c_pZ8wRcaF(const int c)
{
    return c * c;
}

static int descend_inner_FIyGZD62(const int y, const int a, const int b, const int c, const int x)
{
    return ((y & 1) ? (parseStuff_pZ8wRcaF((y / 2), a, b, c) * parseStuff_pZ8wRcaF(x, a, b, c)) : (doSomethingElse_pZ8wRcaF((y * y), b) * use_c_pZ8wRcaF(c)));
}

static int descend_pZ8wRcaF(const int x, const int a, const int b, const int c)
{
    return descend_inner_FIyGZD62((x * x), a, b, c, x);
}

static int doSomething_inner_SR5imEB5(const int y, const int a, const int b, const int c)
{
    return (y * use_a_pZ8wRcaF(a)) * descend_pZ8wRcaF((y * y), a, b, c);
}

static int doSomething_pZ8wRcaF(const int x, const int a, const int b, const int c)
{
    return doSomething_inner_SR5imEB5((x * x), a, b, c);
}

static int doStuff_tsR6R1Y0(const int y, const int a, const int b, const int c)
{
    return doSomething_pZ8wRcaF((y * y), a, b, c);
}

static int parseStuff_pZ8wRcaF(const int x, const int a, const int b, const int c)
{
    return doStuff_tsR6R1Y0((x * x), a, b, c);
}

int fu_MAIN()
{
    const int a = 0;
    const int b = 0;
    const int c = 0;
    return parseStuff_pZ8wRcaF(0, a, b, c);
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen
// DEAD_code
// DEAD_call

-----

        fn sA(_: $T) struct { hey: $T; };

        fn fA(a: $T): sA($T) = [ a + 2 ];
        fn main() 1.fA.hey - 3;

-----

struct s_sA_pZ8wRcaF;

                                #ifndef DEF_s_sA_pZ8wRcaF
                                #define DEF_s_sA_pZ8wRcaF
struct s_sA_pZ8wRcaF
{
    int hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static s_sA_pZ8wRcaF fA_pZ8wRcaF(const int a)
{
    return s_sA_pZ8wRcaF { (a + 2) };
}

int fu_MAIN()
{
    return fA_pZ8wRcaF(1).hey - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sB(_: $T) struct { hey: $T; };

        fn fB(a: $T): sB($T) = [ a + 2 ];
        fn main() 1.fB.hey - 1.u32.fB.hey  ;

-----
_0.fu @5:28:

[2m      | [0m
[2m      |         fn fB(a: $T): sB($T) = [ a + 2 ];[0m
    5 |         fn main() 1.fB.hey [31;1m-[0m 1.u32.fB.hey  ;
[2m      | [0m

	Bad call to [34;1m-[0m: 

	[35;1mtemplate[0m [34;1m-[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for u32: copy

	[35;1mtemplate[0m [34;1m-[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn sB(_: $T) struct { hey: $T; };

        fn fB(a: $T): sB($T) = [ a + 2 ];
        fn main() 1.fB.hey - 1.u32.fB.hey  .i32  ;

-----

struct s_sB_pZ8wRcaF;
struct s_sB_x17wO2xD;

                                #ifndef DEF_s_sB_pZ8wRcaF
                                #define DEF_s_sB_pZ8wRcaF
struct s_sB_pZ8wRcaF
{
    int hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

                                #ifndef DEF_s_sB_x17wO2xD
                                #define DEF_s_sB_x17wO2xD
struct s_sB_x17wO2xD
{
    unsigned hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static s_sB_pZ8wRcaF fB_pZ8wRcaF(const int a)
{
    return s_sB_pZ8wRcaF { (a + 2) };
}

inline static s_sB_x17wO2xD fB_x17wO2xD(const unsigned a)
{
    return s_sB_x17wO2xD { (a + 2u) };
}

int fu_MAIN()
{
    return fB_pZ8wRcaF(1).hey - int(fB_x17wO2xD(unsigned(1)).hey);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sB(_: $T) struct { hey: $T; };

        // Prep for the thing below.
        fn test(x) x.hey - 1;

        // 'a' must be callable.
        type a = sB(i32);
        fn main() a(1).test;

-----

struct s_sB_pZ8wRcaF;

                                #ifndef DEF_s_sB_pZ8wRcaF
                                #define DEF_s_sB_pZ8wRcaF
struct s_sB_pZ8wRcaF
{
    int hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static int test_vEF4Qiyl(const s_sB_pZ8wRcaF& x)
{
    return x.hey - 1;
}

int fu_MAIN()
{
    return test_vEF4Qiyl(s_sB_pZ8wRcaF { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        fn setupOperators(i: i32) {
            struct BINOP { i: i32; };
            return BINOP(:i);
        }

        fn main() setupOperators(0).i;

-----

struct s_BINOP;

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_BINOP setupOperators_pZ8wRcaF(const int i)
{
    return s_BINOP { int(i) };
}

int fu_MAIN()
{
    return setupOperators_pZ8wRcaF(0).i;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sB(_: $T) struct { hey: $T; };

        fn setupOperators(i: i32) {
            struct BINOP { i: sB(i32); };
            mut s: sB(i32) = [ i ];
            return BINOP(s);
        }

        fn main() setupOperators(0).i.hey;

-----

struct s_BINOP;
struct s_sB_pZ8wRcaF;

                                #ifndef DEF_s_sB_pZ8wRcaF
                                #define DEF_s_sB_pZ8wRcaF
struct s_sB_pZ8wRcaF
{
    int hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    s_sB_pZ8wRcaF i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_BINOP setupOperators_pZ8wRcaF(const int i)
{
    const s_sB_pZ8wRcaF s = s_sB_pZ8wRcaF { int(i) };
    return s_BINOP { s_sB_pZ8wRcaF(s) };
}

int fu_MAIN()
{
    return setupOperators_pZ8wRcaF(0).i.hey;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn Hey = struct { i: i32 }; // fn Hey generated nonsense code
        fn get(s: Hey) s.i;

-----

struct s_Hey_H9fhQUVP;

                                #ifndef DEF_s_Hey_H9fhQUVP
                                #define DEF_s_Hey_H9fhQUVP
struct s_Hey_H9fhQUVP
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_Hey_H9fhQUVP Hey_H9fhQUVP()
{
    return s_Hey_H9fhQUVP{};
}

int get_vEF4Qiyl(const s_Hey_H9fhQUVP& s)
{
    return s.i;
}

#endif

-----

        fn Hey = struct { i: i32 }; // fn Hey generated nonsense code
        fn get(s: Hey) s.i;

        fn main() {
            mut s: _0::Hey();
            return s.get();
        }

-----

struct s_Hey_H9fhQUVP;

int get_vEF4Qiyl(const s_Hey_H9fhQUVP&);

                                #ifndef DEF_s_Hey_H9fhQUVP
                                #define DEF_s_Hey_H9fhQUVP
struct s_Hey_H9fhQUVP
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    /*MOV*/ const s_Hey_H9fhQUVP s {};
    return int(get_vEF4Qiyl(s));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn Hey(_: $T) = struct { i: $T };
        fn get(s) s.i;

-----

-----

        fn Hey(_: $T) = struct { i: $T };
        fn get(s) s.i;

        fn main() {
            mut s: _0::Hey(i32);
            return s.get(); // get(): wasn't visible, the struct didnt remember its template origin module.
        }

-----

struct s_Hey_pZ8wRcaF;

                                #ifndef DEF_s_Hey_pZ8wRcaF
                                #define DEF_s_Hey_pZ8wRcaF
struct s_Hey_pZ8wRcaF
{
    int i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_get_J8VwFbwg
                                #define DEFt_get_J8VwFbwg
inline int get_J8VwFbwg(const s_Hey_pZ8wRcaF& s)
{
    return s.i;
}
                                #endif

int fu_MAIN()
{
    /*MOV*/ const s_Hey_pZ8wRcaF s {};
    return int(get_J8VwFbwg(s));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn sB(_: $T) struct { hey: $T; };

        // Pattern & partial spec, how?
        fn test(x: sB($T)): $T = x.hey - 1;

        type a = sB(i32);
        fn main() a(1).test;

-----
TODO: _0.fu @5:9:

[2m      | [0m
[2m      |         // Pattern & partial spec, how?[0m
    5 |         [31;1mfn[0m test(x: sB($T)): $T = x.hey - 1;
[2m      | [0m
[2m      |         type a = sB(i32);[0m

	TODO: do the stuff

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn setupOperators(i: i32) {
            struct sB { hey: i32; }; // same as below
            struct BINOP { i: sB; }; //  but no templates
            return BINOP([ i ]);
        }

        fn main() setupOperators(0).i.hey;

-----
TODO: _0.fu @5:25:

[2m      |             struct sB { hey: i32; }; // same as below[0m
[2m      |             struct BINOP { i: sB; }; //  but no templates[0m
    5 |             return BINOP[31;1m([0m[ i ]);
[2m      |         }[0m
[2m      | [0m

	Bad call to [34;1mBINOP[0m: 

	[35;1mtype[0m [34;1mBINOP[0m: Argument [35;1marg[0m [34;1mi[0m expects sB: copy, got [2i32]: copy resize

        Solving [35;1mfn[0m [34;1msetupOperators_pZ8wRcaF[0m

-----

        fn setupOperators(i: i32) {
            fn sB(_: $T) struct { hey: $T; }; // same as above
            struct BINOP { i: sB(i32); };     //  but template
            return BINOP([ i ]);
        }

        fn main() setupOperators(0).i.hey;

-----
TODO: _0.fu @5:25:

[2m      |             fn sB(_: $T) struct { hey: $T; }; // same as above[0m
[2m      |             struct BINOP { i: sB(i32); };     //  but template[0m
    5 |             return BINOP[31;1m([0m[ i ]);
[2m      |         }[0m
[2m      | [0m

	Bad call to [34;1mBINOP[0m: 

	[35;1mtype[0m [34;1mBINOP[0m: Argument [35;1marg[0m [34;1mi[0m expects sB_TEVVqwQT: copy, got [2i32]: copy resize

        Solving [35;1mfn[0m [34;1msetupOperators_pZ8wRcaF[0m

-----

        fn test(x: i32) {
            :OUTER {
                :INNER {
                    if (x > 1) break :OUTER;
                    if (x > 0) break :INNER;
                    return 2;
                }
                return 1;
            }
            return 0;
        }

        fn main() 2.test * 11 + (1.test - 1) * 13 + (0.test - 2) * 17;

-----

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(const int x)
{

    { {

        { {
            if (x > 1)
                goto BL_1;

            if (x > 0)
                goto BL_2;

            return 2;
          } BL_2:;
        };
        return 1;
      } BL_1:;
    };
    return 0;
}

int fu_MAIN()
{
    return ((test_pZ8wRcaF(2) * 11) + ((test_pZ8wRcaF(1) - 1) * 13)) + ((test_pZ8wRcaF(0) - 2) * 17);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(x: i32) {
            return {
                :BLOCK {
                    if (x & 1) break :BLOCK 1;
                    if (x & 2) return 2;
                    3
                }
            };
        }

        fn main() 4.test - 5.test - 6.test; // 3-1-2

-----

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(const int x)
{
    int BL_1_v {};
    return (__extension__ (
    {
        if (x & 1)
            return 1;

        if (x & 2)
            return 2;

        BL_1_v = (3);
    (void)0;}), int(BL_1_v));
}

int fu_MAIN()
{
    return (test_pZ8wRcaF(4) - test_pZ8wRcaF(5)) - test_pZ8wRcaF(6);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: i32) {
            mut w = 3;
            :OUTER w += {
                :INNER {
                    if (a & 1)  break :INNER;
                    else        break :OUTER;
                };
                5
            };
            return w;
        }
        fn main() 0.test + 1.test - 11;

-----

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(const int a)
{
    /*MOV*/ int w = 3;

    { {
        int BL_2_v {};
        w += (__extension__ (
        {

            { {
                if (a & 1)
                    goto BL_3;
                else
                    goto BL_1;

              } BL_3:;
            };
            BL_2_v = (5);
        (void)0;}), int(BL_2_v));
      } BL_1:;
    };
    return /*NRVO*/ w;
}

int fu_MAIN()
{
    return (test_pZ8wRcaF(0) + test_pZ8wRcaF(1)) - 11;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn v(x: i32) {
            return {
                :BLOCK                          5000 + { // *2:
                    if (x == 9) continue :BLOCK 2000;    //   - here
                    if (x == 8) return           300;
                    if (x == 7) break :BLOCK      40;
                    else                           5;    //   - and here!
                };
            }; // -----------------------------------
        }
        fn main() 9.v + 8.v + 7.v + 6.v      - 12345;

-----

#include <fu/never.h>

#ifndef FU_NO_FDEFs

static int v_pZ8wRcaF(const int x)
{
    int BL_1_v {};
    return 5000 + (__extension__ (
    { {
        if (x == 9)
            { BL_1_v = 2000; goto BL_1; };

        if (x == 8)
            return 300;

        fu::never BL_4_v {};
        BL_1_v = (((x == 7) ? (__extension__ (
        {
            return 40;
        (void)0;}), static_cast<fu::never&&>(BL_4_v)) : 5));
      } BL_1:;
    (void)0;}), int(BL_1_v));
}

int fu_MAIN()
{
    return (((v_pZ8wRcaF(9) + v_pZ8wRcaF(8)) + v_pZ8wRcaF(7)) + v_pZ8wRcaF(6)) - 12345;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn test(x: i32[], y: i32[]) {
            let z = {
                :BLOCK {
                    mut w: i32[] = x;
                    if (y[0]) w ~= y;
                    if (w[0] != 17)
                        break :BLOCK w;
                    x;
                };
            };

            return z[0] + z[z.len - 1];
        }

        fn main() test([ 1 ], [ 2 ]) - 3;

-----

#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

int test_EYxE6zIF(const fu_VEC<int>& x, fu::view<int> y)
{
    // Hoisted:
    fu_VEC<int> w;

    fu::view<int> BL_1_v {};
    fu::view<int> z = (__extension__ (
    { {
        w =  { x };
        if (y[0])
            w += y;

        if (w[0] != 17)
            { BL_1_v = w; goto BL_1; };

        BL_1_v = (x);
      } BL_1:;
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v));
    return z[0] + z[(z.size() - 1)];
}

int fu_MAIN()
{
    return test_EYxE6zIF(fu_VEC<int> { fu::slate<1, int> { 1 } }, (fu::slate<1, int> { 2 })) - 3;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(mut x: i32) {
            {
                x++;
                :CANT_FLATTEN { // naive block flattening
                                //  can damage this label
                    if (x & 1) break :CANT_FLATTEN;
                    return x;
                }
            }
            return x * 2;
        }

        fn main() test(1) + test(2) - 8;

-----

#ifndef FU_NO_FDEFs

static int test_pZ8wRcaF(/*MOV*/ int x)
{

    { {
        x++;
        if (x & 1)
            goto BL_1;

        return int(x);
      } BL_1:;
    };
    return x * 2;
}

int fu_MAIN()
{
    return (test_pZ8wRcaF(1) + test_pZ8wRcaF(2)) - 8;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn each(arr, fn)
            for (mut i = 0; i < arr.len; i++)
                fn(arr[i]);

        fn some(arr, fn) {
            arr.each: |x| if (fn(x)) return x;

            return 0;
        }

        fn main() [ 1, 2, 3 ].some(|v| v & 1 == 0) - 2;

        // EXPECT (fu::slate<3, int> { 1, 2, 3 })

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

inline static int some_1I7FxThB(fu::view<int> arr)
{

    {
        for (int i = 0; i < arr.size(); i++)
        {
            const int x = arr[i];
            if (((void)void(), ((x & 1) == 0)))
                return int(x);

        };
    };
    return 0;
}

int fu_MAIN()
{
    return some_1I7FxThB((fu::slate<3, int> { 1, 2, 3 })) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn outer() {
            mut sum = 0;

            inline fn inner(v: i32) {
                for (mut i = 0; i < 10; i++) {
                    sum += v;
                    if (sum > 40)
                        return :outer sum;
                }

                return v * 2;
            }

            mut x = 1;
            for (;;) x = inner(x);
        }

        fn main() outer - 42; // extra points for style

-----

#ifndef FU_NO_FDEFs

static int outer_H9fhQUVP()
{
    /*MOV*/ int sum = 0;
    int x = 1;
    for (; ; )
    {
        int BL_3_v {};
        x = (__extension__ (
        {
            const int v = x;
            for (int i = 0; i < 10; i++)
            {
                sum += v;
                if (sum > 40)
                    return /*NRVO*/ sum;

            };
            BL_3_v = ((v * 2));
        (void)0;}), int(BL_3_v));
    };
}

int fu_MAIN()
{
    return outer_H9fhQUVP() - 42;
}

#endif


int main() { return fu_MAIN(); }
// DEAD_code

-----

        inline fn each(arr, fn)
            for (mut i = 0; i < arr.len; i++)
                fn(arr[i]);

        fn main() {
            mut sum = 0;
            :OUTER [1, 2, 3, 4].each(|x| {
                sum += x;
                for (mut i = 1; i--; ) // once
                    if (sum == 6) break :OUTER;
            });
            return sum - 6;
        }

        // !NONTRIV_autocopy

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;

    { {
        fu_VEC<int> arr = fu_VEC<int> { fu::slate<4, int> { 1, 2, 3, 4 } };
        for (int i = 0; i < arr.size(); i++)
        {
            const int x = arr[i];
            sum += x;
            for (int i_1 = 1; i_1--; )
            {
                if (sum == 6)
                    goto BL_1;

            };
        };
      } BL_1:;
    };
    return sum - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn hello(ref sum) {  //     when inlined into woot
            if (sum > 2) return;    //      the hello block now looks like an expr
            sum += 2;               // <-    with a diverging tail return here
        }

        fn woot(ref sum) hello(sum);

        fn main() {
            mut sum = -2;
            sum.woot();
            return sum;
        }

-----

#ifndef FU_NO_FDEFs

inline static void woot_K4OPjUNR(int& sum)
{
    if (sum > 2)
        return;

    sum += 2;
}

int fu_MAIN()
{
    /*MOV*/ int sum = -2;
    woot_K4OPjUNR(sum);
    return /*NRVO*/ sum;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn loop1d(i0, i1, fn)
            for (mut i = i0; i < i1; i++)
                fn(i);

        fn main() {
            mut x = 0;
            loop1d(0, 10, |i| { if (x += i) break; });
            return x - 1;
        }

-----

#ifndef FU_NO_FDEFs

inline static void loop1d_8IvFQ89x(const int i0, const int i1, int& x)
{
    for (int i = i0; i < i1; i++)
    {
        if ((x += i))
            return;

    };
}

int fu_MAIN()
{
    int x = 0;
    loop1d_8IvFQ89x(0, 10, x);
    return x - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn loop1d(i0, i1, fn)
            for (mut i = i0; i < i1; i++)
                fn(i);

        fn main() {
            mut x = 0;
            loop1d(0, 10, |i| { if (x += i) return x - 1; });
            return 101;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int x = 0;

    {
        const int i0 = 0;
        const int i1 = 10;
        for (int i = i0; i < i1; i++)
        {
            if ((x += i))
                return x - 1;

        };
    };
    return 101;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn loop2d(x0, x1, y0, y1, fn) {
            for (mut y = y0; y < y1; y++)
            for (mut x = x0; x < x1; x++) fn(x, y);
        }

        fn main() {
            mut sum = 0;
            loop2d( x0:  0, x1: 10,
                    y0: 10, y1: 12, |x, y|
            {
                if (y < 11) {
                    sum++;          // for (x: 0, 10) so 10 times
                    continue;       // <- inner loop
                }

                if (x == 1) break;  // <- outer loop
                sum += (x + 1) * y; // once: (0+1)*(y=11)
            });

            return sum - 21;
        }

-----

#ifndef FU_NO_FDEFs

inline static void loop2d_Qv5GvNrV(const int x0, const int x1, const int y0, const int y1, int& sum)
{
    for (int y = y0; y < y1; y++)
    {
        for (int x = x0; x < x1; x++)
        {
            if (y < 11)
            {
                sum++;
                continue;
            };
            if (x == 1)
                return;

            sum += ((x + 1) * y);
        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    loop2d_Qv5GvNrV(0, 10, 10, 12, sum);
    return sum - 21;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn loop1d(i0, i1, fn)
            for (mut i = i0; i < i1; i++)
                fn(i);

        fn loop2d(x0, x1, y0, y1, fn)
            loop1d(y0, y1, |y|
                loop1d(x0, x1, |x|
                    fn (x, y)));

        fn main() {
            mut sum = 0;
            loop2d( x0:  0, x1: 10,
                    y0: 10, y1: 12, |x, y|
            {
                if (y < 11) {
                    sum++;          // for (x: 0, 10) so 10 times
                    continue;       // <- inner loop
                }

                if (x == 1) break;  // <- outer loop
                sum += (x + 1) * y; // once: (0+1)*(y=11)
            });

            return sum - 21;
        }

-----

#ifndef FU_NO_FDEFs

inline static void loop2d_chAf8fpF(const int x0, const int x1, const int y0, const int y1, int& sum)
{
    for (int i = y0; i < y1; i++)
    {
        for (int i_1 = x0; i_1 < x1; i_1++)
        {
            if (i < 11)
            {
                sum++;
                continue;
            };
            if (i_1 == 1)
                return;

            sum += ((i_1 + 1) * i);
        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    loop2d_chAf8fpF(0, 10, 10, 12, sum);
    return sum - 21;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn next(implicit ref sum: i32, lifetime: [i32], locals_start: i32) {
            sum += lifetime.len;
            return lifetime[locals_start, lifetime.len];
        }

        fn Lifetime_each(lifetime: [i32], visit) {
            for (mut i = 0; i < lifetime.len; i++)
                visit(lifetime[i, lifetime.len]);
        }

        fn Lifetime_F_TODO_FIX_RRET(lifetime: [i32], locals_start: i32) {
            Lifetime_each(:lifetime, visit: |l| {
                if (l)
                    Lifetime_F_TODO_FIX_RRET(l.next(locals_start), locals_start);
            });
        }

        fn main() {
            let lifetime = [ 1, 2 ];
            let implicit mut sum = 0;
            Lifetime_F_TODO_FIX_RRET(lifetime, locals_start: 1);
            return sum - 4;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

inline static void Lifetime_each_rD2NUjEh(fu::view<int>, int, int&);
static void Lifetime_F_TODO_FIX_RRET_99KbzZWN(fu::view<int>, int, int&);

#ifndef FU_NO_FDEFs

static fu::view<int> next_fw35MiZj(fu::view<int> lifetime, const int locals_start, int& sum)
{
    sum += lifetime.size();
    return fu::get_view(lifetime, locals_start, lifetime.size());
}

inline static void Lifetime_each_rD2NUjEh(fu::view<int> lifetime, const int locals_start, int& sum)
{
    for (int i = 0; i < lifetime.size(); i++)
    {
        fu::view<int> l = fu::get_view(lifetime, i, lifetime.size());
        if (l)
        {
            fu::view<int> _0 {};
            (_0 = next_fw35MiZj(l, locals_start, sum), Lifetime_F_TODO_FIX_RRET_99KbzZWN(static_cast<fu::view<int>&&>(_0), locals_start, sum));
        };
    };
}

static void Lifetime_F_TODO_FIX_RRET_99KbzZWN(fu::view<int> lifetime, const int locals_start, int& sum)
{
    Lifetime_each_rD2NUjEh(lifetime, locals_start, sum);
}

int fu_MAIN()
{
    fu_VEC<int> lifetime = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    int sum = 0;
    Lifetime_F_TODO_FIX_RRET_99KbzZWN(lifetime, 1, sum);
    return sum - 4;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve

-----

        fn hello(a) a * a;          // EXPECT (const int a)
        fn main() {
            mut a = 3;
            let b = hello(a);
            return b - 9;
        }

-----

#ifndef FU_NO_FDEFs

inline static int hello_K4OPjUNR(const int a)
{
    return a * a;
}

int fu_MAIN()
{
    const int a = 3;
    const int b = hello_K4OPjUNR(a);
    return b - 9;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct AB { a: i32; b: i32; };
        fn sqr   (ref x: i32) x * x;
        fn outer (ref ab: AB) sqr(ab.a) + sqr(ab.b);        // EXPECT const s_AB&
        fn main() {
            mut ab = AB(3, 5);
            return ab.outer - 34;
        }

-----

struct s_AB;

                                #ifndef DEF_s_AB
                                #define DEF_s_AB
struct s_AB
{
    int a;
    int b;
    explicit operator bool() const noexcept
    {
        return false
            || a
            || b
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int sqr_K4OPjUNR(const int x)
{
    return x * x;
}

static int outer_4htgoDpn(const s_AB& ab)
{
    return sqr_K4OPjUNR(ab.a) + sqr_K4OPjUNR(ab.b);
}

int fu_MAIN()
{
    const s_AB ab = s_AB { 3, 5 };
    return outer_4htgoDpn(ab) - 34;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ascii_lower(a: string): string
        {
            let offset = 'a'.i32 - 'A'.i32;

            mut res = a;
            for (mut i = 0; i < res.len; i++)
            {
                let c = res[i];
                if (c >= 'A' && c <= 'Z')
                    res[i] = byte(c.i32 + offset);
            }

            return res;
        }



        fn main() "WORLD!".ascii_lower[2].i32 - 'r'.i32;

-----

#include <fu/int.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static fu_STR ascii_lower_vhnG1IeH(const fu_STR& a)
{
    const int offset = (int(fu::u8('a')) - int(fu::u8('A')));
    /*MOV*/ fu_STR res { a };
    for (int i = 0; i < res.size(); i++)
    {
        const char c = res[i];
        if ((c >= 'A') && (c <= 'Z'))
            res.mutref(i) = char((int(fu::u8(c)) + offset));

    };
    return /*NRVO*/ res;
}

int fu_MAIN()
{
    return int(fu::u8(ascii_lower_vhnG1IeH("WORLD!"_fu)[2])) - int(fu::u8('r'));
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn ascii_lower(a: string): string
        {
            let offset = 'a'.i32 - 'A'.i32;

            mut res = a;
            for (mut i = 0; i < res.len; i++)
            {
                let c = res[i];
                if (c >= 'A' && c <= 'Z')
                    res[i] = byte(c.i32 + offset);
            }

            return res;
        }


-----

#include <fu/int.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

fu_STR ascii_lower_vhnG1IeH(const fu_STR& a)
{
    const int offset = (int(fu::u8('a')) - int(fu::u8('A')));
    /*MOV*/ fu_STR res { a };
    for (int i = 0; i < res.size(); i++)
    {
        const char c = res[i];
        if ((c >= 'A') && (c <= 'Z'))
            res.mutref(i) = char((int(fu::u8(c)) + offset));

    };
    return /*NRVO*/ res;
}

#endif
// NONTRIV_autocopy
// RELAX_respec

-----

        fn ascii_lower(a: string): string
        {
            let offset = 'a'.i32 - 'A'.i32;

            mut res = a;
            for (mut i = 0; i < res.len; i++)
            {
                let c = res[i];
                if (c >= 'A' && c <= 'Z')
                    res[i] = byte(c.i32 + offset);
            }

            return res;
        }

        import _0;

        fn main() "WORLD!".ascii_lower[2].i32 - 'r'.i32;

-----

#include <fu/int.h>
#include <fu/str.h>

fu_STR ascii_lower_vhnG1IeH(const fu_STR&);

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(fu::u8(ascii_lower_vhnG1IeH("WORLD!"_fu)[2])) - int(fu::u8('r'));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            mut a = [[ 7 ]];
            return a[0][0] - 7;        // EXPECT a[0][0]
        }

-----

#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_VEC<fu_VEC<int>> a = fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<1, int> { 7 } } } };
    return a[0][0] - 7;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Overload     { args: Argument[]; };
        struct SolvedNode   { x: i32; };
        struct Argument     { default: SolvedNode; };

        pub fn test(overload: Overload, ref args: SolvedNode[])
        {
            let host_args = overload.args;          // EXPECT fu::view<s_Argument> host_args

            args.resize(host_args.len);             // .len didnt relax its arg
            for (mut i = 0; i < args.len; i++)
            {
                if (!args[i])
                {
                    let host_arg = host_args[i];
                    args[i] = host_arg.default;
                }
            }
        }

        fn main() {
            mut o: Overload;
            for (mut i = 0; i < 3; i++)
                o.args ~= Argument(default: SolvedNode(x: i));

            mut args: SolvedNode[];
            test(o, args);
            return args.len - args[args.len - 1].x - 1;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Argument;
struct s_Overload;
struct s_SolvedNode;

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int x;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    s_SolvedNode dEfault;
    explicit operator bool() const noexcept
    {
        return false
            || dEfault
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_VEC<s_Argument> args;
    explicit operator bool() const noexcept
    {
        return false
            || args
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

void test_4Njqsjap(const s_Overload& overload, fu_VEC<s_SolvedNode>& args)
{
    fu::view<s_Argument> host_args = overload.args;
    args.resize(host_args.size());
    for (int i = 0; i < args.size(); i++)
    {
        if (!args[i])
        {
            const s_Argument& host_arg = host_args[i];
            args.mutref(i) = host_arg.dEfault;
        };
    };
}

int fu_MAIN()
{
    s_Overload o {};
    for (int i = 0; i < 3; i++)
        o.args += s_Argument { s_SolvedNode { int(i) } };

    fu_VEC<s_SolvedNode> args {};
    test_4Njqsjap(o, args);
    return (args.size() - args[(args.size() - 1)].x) - 1;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct S { hey: i32[]; };

        fn m_and_c_cant_alias_001(ref m!: S, c!: S) {
            m.hey.clear();
            return c.hey; // noalias
        }

        fn test(ref mc: S) {
            return m_and_c_cant_alias_001(m:mc, c:mc);  // Can't return a ref into c!
        }                                               //  But can be made to work by creating an intermediate copyvar
                                                        //   and move-returning from there.
        fn main() {
            mut mc  = S([ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]);
            let hey = test(mc);
            return hey.len - 10;
        }

-----
TODO: _0.fu @10:51:

[2m      | [0m
[2m      |         fn test(ref mc: S) {[0m
   10 |             return m_and_c_cant_alias_001(m:mc, c:[31;1mmc[0m);  // Can't return a ref into c!
[2m      |         }                                               //  But can be made to work by creating an intermediate copyvar[0m
[2m      |                                                         //   and move-returning from there.[0m

	[35;1mfn[0m [34;1mm_and_c_cant_alias_001_YY9EfXWZ[0m: Arguments [31;1mc[0m and [31;1mm[0m (args #1 and #0) both alias:

                [35;1marg[0m [34;1mmc[0m

        Solving [35;1mfn[0m [34;1mtest_4htgoDpn[0m

-----

        // !!!! The m_and_c_cant_alias_001 test obsoletes this,
        // !!!!  this is just detects what we definitely don't want to see -
        // !!!!   returning a reference into a temporary copy.
        //
        struct S { hey: i32[]; };

        fn m_and_c_cant_alias_002(ref m: S, c: S) {
            m.hey.clear();
            return c.hey; // noalias
        }

        fn main() {
            mut mc  = S([ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]);

            let hey = m_and_c_cant_alias_002(mc, mc);

            return hey.len - 10;
        }

-----
_0.fu @16:50:

[2m      |             mut mc  = S([ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]);[0m
[2m      | [0m
   16 |             let hey = m_and_c_cant_alias_002(mc, [31;1mmc[0m);
[2m      | [0m
[2m      |             return hey.len - 10;[0m

	[35;1mfn[0m [34;1mm_and_c_cant_alias_002_YY9EfXWZ[0m: Arguments [31;1mc[0m and [31;1mm[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mmc[0m

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        // !!!! The m_and_c_cant_alias_001 test obsoletes this,
        // !!!!  this is just detects what we definitely don't want to see -
        // !!!!   returning a reference into a temporary copy.
        //
        struct S { hey: i32[]; };

        fn m_and_c_cant_alias_002(ref m: S, c: S) {
            m.hey.clear();
            return c.hey; // noalias
        }

        fn main() {
            mut mc  = S([ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]);

            mut bc  = mc;
            let hey = m_and_c_cant_alias_002(mc, bc);

            return hey.len - 10;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_S;

                                #ifndef DEF_s_S
                                #define DEF_s_S
struct s_S
{
    fu_VEC<int> hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const fu_VEC<int>& m_and_c_cant_alias_002_YY9EfXWZ(s_S& m, const s_S& c)
{
    m.hey.clear();
    return c.hey;
}

int fu_MAIN()
{
    s_S mc = s_S { fu_VEC<int> { fu::slate<10, int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } } };
    s_S bc { mc };
    fu::view<int> hey = m_and_c_cant_alias_002_YY9EfXWZ(mc, bc);
    return hey.size() - 10;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy

-----

        fn grow_if_oob(a: &mut $T[], i: i32): &mut $T {
            if (a.len <= i)
                a.grow(i + 1);

            return a[i];
        }

        struct BitSet { _data: u8[]; }

        fn add_once(using _: &mut BitSet, idx: i32): bool {
            let no_neg = idx < 0 ? -1 : 0;
            let bucket = idx / 8 | no_neg;
            let bit    = idx % 8;
            let mask   = 1 << bit.u8;

            ref entry = _data.grow_if_oob(bucket);
            if !(entry & mask) {
                entry |= mask;
                return true;
            }

            // Already there.
            return false;
        }

        type BitSet2D = BitSet[];

        fn add_once(ref bs: BitSet2D, i: i32, j: i32): bool {
            return bs
                .grow_if_oob(i)
                .add_once(j);
        }

        fn main() {
            mut bs: BitSet2D;
            bs.add_once(9, 9);
            return bs.len + 1000 * bs[9]._data.len - 2010;
        }

-----

#include <fu/int.h>
#include <fu/vec.h>

struct s_BitSet;

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

#ifndef FU_NO_FDEFs

inline static s_BitSet& grow_if_oob_PZx0frs1(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}

inline static fu::u8& grow_if_oob_sC6WGmTA(fu_VEC<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}

static bool add_once_n9NTIunl(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    fu::u8& entry = grow_if_oob_sC6WGmTA(_._data, bucket);
    if (!fu::u8((entry & mask)))
    {
        entry |= mask;
        return true;
    };
    return false;
}

static bool add_once_pAPjFVuh(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_n9NTIunl(grow_if_oob_PZx0frs1(bs, i), j);
}

int fu_MAIN()
{
    fu_VEC<s_BitSet> bs {};
    add_once_pAPjFVuh(bs, 9, 9);
    return (bs.size() + (1000 * bs[9]._data.size())) - 2010;
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        fn test(mut _precedence = 0)
        {
            fn parseExpression(p1?: i32): i32 {
                if !(_precedence = p1)
                    return parseExpressionHead();

                return _precedence;
            }

            fn parseExpressionHead()
                parseExpression(_precedence * 101 + 1);

            return parseExpression();
        }

        fn main() = test() - 1;

-----

static int parseExpressionHead_hpa9AihZ(int&);
static int parseExpression_kvdihmBv(int, int&);

#ifndef FU_NO_FDEFs

static int parseExpressionHead_hpa9AihZ(int& _precedence)
{
    return parseExpression_kvdihmBv(((_precedence * 101) + 1), _precedence);
}

static int parseExpression_kvdihmBv(const int p1, int& _precedence)
{
    if (!(_precedence = p1))
        return parseExpressionHead_hpa9AihZ(_precedence);

    return int(_precedence);
}

static int test_pZ8wRcaF(int _precedence)
{
    return parseExpression_kvdihmBv(0, _precedence);
}

int fu_MAIN()
{
    return test_pZ8wRcaF(0) - 1;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_reopen

-----

        struct Overload {
            is_var?: bool;
            lifetime?: i32[];
        }

        fn GET(implicit overloads: Overload[], idx: i32) {
            return overloads[idx];
        }

        // Uncommenting the inline passes this,
        //  this is shit, we can't leave this like this.
        //
        // inline
        fn Lifetime_each(mut lifetime: i32[], visit) {
            for (mut i = 0; i < lifetime.len; i++) {
                let r = lifetime[i];
                let o = GET(r);
                visit(:o, i?: i, lifetime?: lifetime);
            }
        }

        fn Lifetime_ascend(mut lifetime: i32[], visit) {
            Lifetime_each(:lifetime, visit: |o, shadow lifetime| {
                visit(o);
                lifetime ~= o.lifetime; // set::add
            });
        }

        fn Lifetime_allowsMutrefReturn(lifetime: i32[]): bool {
            Lifetime_ascend(:lifetime, visit: |o| {
                if (o.is_var)
                    return false; // ERR: propagateType(jump): h.ret_actual not available.
            });

            return true;
        }

        fn main() {
            let implicit overloads = [
                Overload,
                Overload(lifetime: [ 0 ]),
                Overload(lifetime: [ 1 ], is_var: true),
                Overload(lifetime: [ 1 ]),
                Overload(lifetime: [ 2 ]), /* the isvar */
                Overload(lifetime: [ 3 ]), /* the non-isvar */
            ];

            let expect_false = Lifetime_allowsMutrefReturn([ 4 ]);
            let expect_true  = Lifetime_allowsMutrefReturn([ 5 ]);

            if (expect_false) return 20;
            if (!expect_true) return 10;
            return 0;
        }

-----

#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Overload;

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    bool is_var;
    fu_VEC<int> lifetime;
    explicit operator bool() const noexcept
    {
        return false
            || is_var
            || lifetime
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const s_Overload& GET_5Gx7Bzrp(const int idx, fu::view<s_Overload> overloads)
{
    return overloads[idx];
}

static bool Lifetime_allowsMutrefReturn_WgWjr9S0(const fu_VEC<int>& lifetime, fu::view<s_Overload> overloads)
{

    {
        const fu_VEC<int>& lifetime_1 = lifetime;

        {
            fu_VEC<int> lifetime_2 { lifetime_1 };
            for (int i = 0; i < lifetime_2.size(); i++)
            {
                const int r = lifetime_2[i];
                const s_Overload& o = GET_5Gx7Bzrp(r, overloads);

                {
                    if (o.is_var)
                        return false;

                };
                lifetime_2 += o.lifetime;
            };
        };
    };
    return true;
}

int fu_MAIN()
{
    fu_VEC<s_Overload> overloads = fu_VEC<s_Overload> { fu::slate<6, s_Overload> { s_Overload{}, s_Overload { bool{}, fu_VEC<int> { fu::slate<1, int> { 0 } } }, s_Overload { true, fu_VEC<int> { fu::slate<1, int> { 1 } } }, s_Overload { bool{}, fu_VEC<int> { fu::slate<1, int> { 1 } } }, s_Overload { bool{}, fu_VEC<int> { fu::slate<1, int> { 2 } } }, s_Overload { bool{}, fu_VEC<int> { fu::slate<1, int> { 3 } } } } };
    const bool expect_false = Lifetime_allowsMutrefReturn_WgWjr9S0(fu_VEC<int> { fu::slate<1, int> { 4 } }, overloads);
    const bool expect_true = Lifetime_allowsMutrefReturn_WgWjr9S0(fu_VEC<int> { fu::slate<1, int> { 5 } }, overloads);
    if (expect_false)
        return 20;

    if (!expect_true)
        return 10;

    return 0;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        struct Overload { items: string[]; };

        // This is a bit borderline -
        //  the problem here is that a: $T[] doesn't relax to a: [$T] (not during prep) -
        //   so we don't match at all. Still, that's what's written -
        //    perhaps regular fns are what doesn't behave correctly,
        //     since their relax can create ambiguity?
        //
        fn last(a: $T[])                    a[a.len - 1];
        fn arg_lets(overload: Overload)     overload.items[0, overload.items.len - 2];
        fn test(overload: Overload)         overload.arg_lets.last.len;
        fn main()                           Overload([ "hello", "cruel", "world!" ]).test - 5;

-----
TODO: _0.fu @12:62:

[2m      |         fn last(a: $T[])                    a[a.len - 1];[0m
[2m      |         fn arg_lets(overload: Overload)     overload.items[0, overload.items.len - 2];[0m
   12 |         fn test(overload: Overload)         overload.arg_lets[31;1m.[0mlast.len;
[2m      |         fn main()                           Overload([ "hello", "cruel", "world!" ]).test - 5;[0m
[2m      | [0m

	Bad call to [34;1mlast[0m: 

	[35;1mtemplate[0m [34;1mlast[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for [6[2byte]]

        Solving [35;1mfn[0m [34;1mtest_vEF4Qiyl[0m

-----

        struct Helpers      { index: i32; };
        struct HelpersData  { mask!: i16; };

        let HM_Function     = 1.i16 << 3;
        let HM_Struct       = 1.i16 << 5;

        using inline fn GET(h: Helpers, implicit ref _helpers_data: HelpersData[]): HelpersData
            _helpers_data[h.index];
                                                            //////////////////
        fn isFnOrType(h: Helpers): bool                     // EXPECT fu::view
            !!(h.mask & (HM_Function | HM_Struct));         //////////////////

        fn main() {
            let implicit mut _helpers_data = [ HelpersData(mask: 0) ];
            return Helpers(0).isFnOrType.i32;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_Helpers;
struct s_HelpersData;

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
{
    short mask;
    explicit operator bool() const noexcept
    {
        return false
            || mask
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
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

#ifndef FU_NO_FDEFs

static const short HM_Function = short((short(1) << short(3)));

static const short HM_Struct = short((short(1) << short(5)));

static bool isFnOrType_vEF4Qiyl(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    const s_HelpersData* BL_1_v;
    return !!short(((__extension__ (
    {
        fu::view<s_HelpersData> _helpers_data_1 = _helpers_data;
        BL_1_v = &(_helpers_data_1[h.index]);
    (void)0;}), *BL_1_v).mask & short((HM_Function | HM_Struct))));
}

int fu_MAIN()
{
    fu_VEC<s_HelpersData> _helpers_data = fu_VEC<s_HelpersData> { fu::slate<1, s_HelpersData> { s_HelpersData { short(0) } } };
    return int(isFnOrType_vEF4Qiyl(s_Helpers { 0 }, _helpers_data));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        struct Helpers      { index: i32; };
        struct HelpersData  { mask!: i16; };

        let HM_Function     = 1.i16 << 3;
        let HM_Struct       = 1.i16 << 5;

        fn main() {
            let implicit mut _helpers_data = [ HelpersData(mask: 0) ];

            using inline fn GET(h: Helpers): HelpersData
                _helpers_data[h.index];
                                                            //////////////////
            fn isFnOrType(h: Helpers): bool                 // EXPECT fu::view
                !!(h.mask & (HM_Function | HM_Struct));     //////////////////

            return Helpers(0).isFnOrType.i32;
        }

-----

#include <fu/vec.h>
#include <fu/view.h>

struct s_Helpers;
struct s_HelpersData;

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
{
    short mask;
    explicit operator bool() const noexcept
    {
        return false
            || mask
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
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

#ifndef FU_NO_FDEFs

static const short HM_Function = short((short(1) << short(3)));

static const short HM_Struct = short((short(1) << short(5)));

static bool isFnOrType_XWRBb6eP(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!short((((void)void(), _helpers_data[h.index]).mask & short((HM_Function | HM_Struct))));
}

int fu_MAIN()
{
    fu_VEC<s_HelpersData> _helpers_data = fu_VEC<s_HelpersData> { fu::slate<1, s_HelpersData> { s_HelpersData { short(0) } } };
    return int(isFnOrType_XWRBb6eP(s_Helpers { 0 }, _helpers_data));
}

#endif


int main() { return fu_MAIN(); }
// RELAX_respec

-----

        pub fn ref(dest, item: $T, extras) {
            for (mut i = 0; i < dest.len; i++) {
                if (dest[i] >= item) {
                    if (dest[i] != item) {
                        dest.insert(i, item);
                        extras.insert(i, []);
                    }
                    return extras[i];
                }
            }

            dest.push(item);
            extras.push([]);
            return extras[extras.len - 1];
        }

-----

-----

        pub fn ref(dest, item: $T, extras) {
            for (mut i = 0; i < dest.len; i++) {
                if (dest[i] >= item) {
                    if (dest[i] != item) {
                        dest.insert(i, item);
                        extras.insert(i, []);
                    }
                    return extras[i];
                }
            }

            dest.push(item);
            extras.push([]);
            return extras[extras.len - 1];
        }

        fn Map(lax k: $K, lax v: $V) struct {
            keys: $K[];
            vals: $V[];
        };

        fn ref(using ref _, key)
            _0::ref(
                || keys, key,
                || vals);

-----

-----

        pub fn ref(dest, item: $T, extras) {
            for (mut i = 0; i < dest.len; i++) {
                if (dest[i] >= item) {
                    if (dest[i] != item) {
                        dest.insert(i, item);
                        extras.insert(i, []);
                    }
                    return extras[i];
                }
            }

            dest.push(item);
            extras.push([]);
            return extras[extras.len - 1];
        }

        fn Map(lax k: $K, lax v: $V) struct {
            keys: $K[];
            vals: $V[];
        };

        fn ref(using ref _, key)
            _0::ref(
                || keys, key,
                || vals);

        fn main() {
            mut _map: _1::Map(string, string);

            fn upsert(k: string, v: string) _map._1::ref(k) = v;
            upsert("hello", "world");

            // Relaxer failed here while I was trying to get rid of F_REFs from specTypes.
            fn check(k: string) _map._1::ref(k) == "world" ? 0 : 1;
            return check("hello");
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>

struct s_Map_QPBA7C9p;

                                #ifndef DEF_s_Map_QPBA7C9p
                                #define DEF_s_Map_QPBA7C9p
struct s_Map_QPBA7C9p
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

                                #ifndef DEFt_ref_HCMUBaA1
                                #define DEFt_ref_HCMUBaA1
inline fu_STR& ref_HCMUBaA1(const fu_STR& item, s_Map_QPBA7C9p& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, fu_STR{});
            };
            return _.vals.mutref(i);
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(fu_STR{});
    return _.vals.mutref((_.vals.size() - 1));
}
                                #endif

                                #ifndef DEFt_ref_AlgeoCrk
                                #define DEFt_ref_AlgeoCrk
inline fu_STR& ref_AlgeoCrk(s_Map_QPBA7C9p& _, const fu_STR& key)
{
    return ref_HCMUBaA1(key, _);
}
                                #endif

static fu_STR& upsert_8Mvw5aEq(const fu_STR& k, const fu_STR& v, s_Map_QPBA7C9p& _map)
{
    return (ref_AlgeoCrk(_map, k) = v);
}

                                #ifndef DEFt_ref_qCMPEoJ9
                                #define DEFt_ref_qCMPEoJ9
inline fu_STR& ref_qCMPEoJ9(const fu_STR& item, s_Map_QPBA7C9p& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, fu_STR{});
            };
            return _.vals.mutref(i);
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(fu_STR{});
    return _.vals.mutref((_.vals.size() - 1));
}
                                #endif

                                #ifndef DEFt_ref_wR1kY2zs
                                #define DEFt_ref_wR1kY2zs
inline fu_STR& ref_wR1kY2zs(s_Map_QPBA7C9p& _, const fu_STR& key)
{
    return ref_qCMPEoJ9(key, _);
}
                                #endif

static int check_Mgs1mCGN(const fu_STR& k, s_Map_QPBA7C9p& _map)
{
    return ((ref_wR1kY2zs(_map, k) == "world"_fu) ? 0 : 1);
}

int fu_MAIN()
{
    s_Map_QPBA7C9p _map {};
    upsert_8Mvw5aEq("hello"_fu, "world"_fu, _map);
    return check_Mgs1mCGN("hello"_fu, _map);
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn useless_ref_lambda(ref sources: string[]) {
            fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck
            return src[1, src.len] ~ src[0, 1];
        }
        fn main() {
            mut sources = [ "ab" ];
            return useless_ref_lambda(sources) == "ba" ? 0 : 1;
        }

-----
TODO: _0.fu @4:36:

[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
[2m      |             fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck[0m
    4 |             return src[1, src.len] [31;1m~[0m src[0, 1];
[2m      |         }[0m
[2m      |         fn main() {[0m

	At call to [35;1m__native[0m [34;1m
<fu/vec/concat.h>
+[0m, argument binding [31;1ma[0m (arg #0) at 4:23:

[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
[2m      |             fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck[0m
    4 |             return src[31;1m[[0m1, src.len] ~ src[0, 1];
[2m      |         }[0m
[2m      |         fn main() {[0m

	... invalidated by subsequent write to [35;1marg[0m [34;1msources[0m upon evaluation of argument [31;1mb[0m (arg #1) at 4:38:

[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
[2m      |             fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck[0m
    4 |             return src[1, src.len] ~ [31;1msrc[0m[0, 1];
[2m      |         }[0m
[2m      |         fn main() {[0m

	At call to [34;1msrc_y1jV3SX3[0m
            via [35;1m__native[0m [34;1m
.mutref[0m at 3:29:

[2m      | [0m
[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
    3 |             fn src = sources[31;1m[[0msources.len / 2]; // didn't relax the ref, failed bck
[2m      |             return src[1, src.len] ~ src[0, 1];[0m
[2m      |         }[0m

            

        Solving [35;1mfn[0m [34;1museless_ref_lambda_Dod1I2ou[0m

-----

        struct Node { items: Node[]; };

        pure fn rec_useless_ref(ref n: Node) {
            mut ret = n.items.len;
            for (mut i = 0; i < n.items.len; i++)
                ret += rec_useless_ref(n.items[i]);

            return ret;
        }

        fn main() {
            mut tree = Node([ Node(), Node() ]);
            return rec_useless_ref(tree) - 2;
        }

-----
TODO: _0.fu @4:9:

[2m      |         struct Node { items: Node[]; };[0m
[2m      | [0m
    4 |         [31;1mpure[0m fn rec_useless_ref(ref n: Node) {
[2m      |             mut ret = n.items.len;[0m
[2m      |             for (mut i = 0; i < n.items.len; i++)[0m

	[35;1mfn[0m [34;1mrec_useless_ref_4htgoDpn[0m is not pure, writes to argument [34;1mn[0m:

            via [35;1m__native[0m [34;1m
.mutref[0m at 7:47:

[2m      |             mut ret = n.items.len;[0m
[2m      |             for (mut i = 0; i < n.items.len; i++)[0m
    7 |                 ret += rec_useless_ref(n.items[31;1m[[0mi]);
[2m      | [0m
[2m      |             return ret;[0m

            

-----

        fn each(y)
            y & 1   ? y
                    : y / 2 + each(y / 2);

-----

-----

        fn each(y)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

-----

-----

        fn each(y)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

        fn main() {
            let a = _0::each(100);
            let b = _1::each(8);

            return a+b - 107;
        }

-----

inline int each_0fY8Rqhx(int);
inline int each_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_each_pZ8wRcaF
                                #define DEFt_each_pZ8wRcaF
inline int each_pZ8wRcaF(const int y)
{
    return ((y & 1) ? int(y) : ((y / 2) + each_pZ8wRcaF((y / 2))));
}
                                #endif

                                #ifndef DEFt_each_0fY8Rqhx
                                #define DEFt_each_0fY8Rqhx
inline int each_0fY8Rqhx(const int y)
{
    return ((y & 1) ? (y / 2) : ((y / 2) + each_0fY8Rqhx((y / 2))));
}
                                #endif

int fu_MAIN()
{
    const int a = each_pZ8wRcaF(100);
    const int b = each_0fY8Rqhx(8);
    return (a + b) - 107;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y)
            y & 1   ? y
                    : y / 2 + each(y / 2);

-----

-----

        fn each(y)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

-----

int each_0fY8Rqhx(int);

#ifndef FU_NO_FDEFs

int each_0fY8Rqhx(const int y)
{
    return ((y & 1) ? (y / 2) : ((y / 2) + each_0fY8Rqhx((y / 2))));
}

#endif
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

        fn main() {
            let a = _0::each(100);
            let b = _1::each(8);

            return a+b - 107;
        }

-----

inline int each_pZ8wRcaF(int);
int each_0fY8Rqhx(int);

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_each_pZ8wRcaF
                                #define DEFt_each_pZ8wRcaF
inline int each_pZ8wRcaF(const int y)
{
    return ((y & 1) ? int(y) : ((y / 2) + each_pZ8wRcaF((y / 2))));
}
                                #endif

int fu_MAIN()
{
    const int a = each_pZ8wRcaF(100);
    const int b = each_0fY8Rqhx(8);
    return (a + b) - 107;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y: i32)
            y & 1   ? y
                    : y / 2 + each(y / 2);

-----

int each_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

int each_pZ8wRcaF(const int y)
{
    return ((y & 1) ? int(y) : ((y / 2) + each_pZ8wRcaF((y / 2))));
}

#endif
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y: i32)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

-----

-----

        fn each(y: i32)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

        fn main() {
            let a = _0::each(100);
            let b = _1::each(8);

            return a+b - 107;
        }

-----

inline int each_0fY8Rqhx(int);
int each_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_each_0fY8Rqhx
                                #define DEFt_each_0fY8Rqhx
inline int each_0fY8Rqhx(const int y)
{
    return ((y & 1) ? (y / 2) : ((y / 2) + each_0fY8Rqhx((y / 2))));
}
                                #endif

int fu_MAIN()
{
    const int a = each_pZ8wRcaF(100);
    const int b = each_0fY8Rqhx(8);
    return (a + b) - 107;
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y: i32)
            y & 1   ? y
                    : y / 2 + each(y / 2);

-----

int each_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

int each_pZ8wRcaF(const int y)
{
    return ((y & 1) ? int(y) : ((y / 2) + each_pZ8wRcaF((y / 2))));
}

#endif
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y: i32)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

-----

int each_0fY8Rqhx(int);

#ifndef FU_NO_FDEFs

int each_0fY8Rqhx(const int y)
{
    return ((y & 1) ? (y / 2) : ((y / 2) + each_0fY8Rqhx((y / 2))));
}

#endif
// FN_recursion
// FN_resolve
// DEAD_call

-----

        fn each(y: i32)
            y & 1   ? y
                    : y / 2 + each(y / 2);

        fn each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + each(y / 2);

        fn main() {
            let a = _0::each(100);
            let b = _1::each(8);

            return a+b - 107;
        }

-----

int each_0fY8Rqhx(int);
int each_pZ8wRcaF(int);

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int a = each_pZ8wRcaF(100);
    const int b = each_0fY8Rqhx(8);
    return (a + b) - 107;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn find(keys: $T[], item: $T) {
            for (mut i = 0; i < keys.len; i++) {
                if (keys[i] >= item) {
                    if (keys[i] != item)
                        return -1;

                    return i;
                }
            }

            return -1;
        }

-----

-----

        fn find(keys: $T[], item: $T) {
            for (mut i = 0; i < keys.len; i++) {
                if (keys[i] >= item) {
                    if (keys[i] != item)
                        return -1;

                    return i;
                }
            }

            return -1;
        }

        fn Set(_: $K) struct { keys: $K[]; };

        fn has(using _, key)
            _0::find(keys, key) >= 0;

-----

-----

        fn find(keys: $T[], item: $T) {
            for (mut i = 0; i < keys.len; i++) {
                if (keys[i] >= item) {
                    if (keys[i] != item)
                        return -1;

                    return i;
                }
            }

            return -1;
        }

        fn Set(_: $K) struct { keys: $K[]; };

        fn has(using _, key)
            _0::find(keys, key) >= 0;

        fn use_Set(a: string) {
            mut set: _1::Set(string);
            set.keys ~= a;
            return set._1::has(a);
        }

        fn dont_use_Set(a: string, b: string) {
            mut keys: string[];
            keys ~= b;
            keys ~= a;
            return keys.find(a);
        }

        fn main() {
            if (!use_Set("a"))
                return -1;

            return dont_use_Set("a", "b") - 1;
        }

-----

#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Set_3ulRSvih;

                                #ifndef DEF_s_Set_3ulRSvih
                                #define DEF_s_Set_3ulRSvih
struct s_Set_3ulRSvih
{
    fu_VEC<fu_STR> keys;
    explicit operator bool() const noexcept
    {
        return false
            || keys
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_find_Q2MTHl4g
                                #define DEFt_find_Q2MTHl4g
inline int find_Q2MTHl4g(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_AlgeoCrk
                                #define DEFt_has_AlgeoCrk
inline bool has_AlgeoCrk(const s_Set_3ulRSvih& _, const fu_STR& key)
{
    return (find_Q2MTHl4g(_.keys, key) >= 0);
}
                                #endif

static bool use_Set_IP5OBi1b(const fu_STR& a)
{
    s_Set_3ulRSvih set {};
    set.keys += fu_STR(a);
    return has_AlgeoCrk(set, a);
}

                                #ifndef DEFt_find_hXY7eLHr
                                #define DEFt_find_hXY7eLHr
inline int find_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static int dont_use_Set_0J6gzkiF(const fu_STR& a, const fu_STR& b)
{
    fu_VEC<fu_STR> keys {};
    keys += fu_STR(b);
    keys += fu_STR(a);
    return find_hXY7eLHr(keys, a);
}

int fu_MAIN()
{
    if (!use_Set_IP5OBi1b("a"_fu))
        return -1;

    return dont_use_Set_0J6gzkiF("a"_fu, "b"_fu) - 1;
}

#endif


int main() { return fu_MAIN(); }
// NONTRIV_autocopy
// RELAX_respec

-----

        fn test(tokens: i32[]) {
            mut lidx = 0;
            mut sum  = 0;

            fn token(idx: i32, col!: i32)       = sum += idx * col;
            fn token(idx: i32)                  = token(:idx, col: lidx - idx);

            for (mut i = 0; i < tokens.len; i++)
                token(tokens[i]);

            return sum;
        }

        fn main() [ 1 ].test + 1;

-----

#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int& token_7FVEK3BH(const int idx, const int col, int& sum)
{
    return (sum += (idx * col));
}

static int& token_A1oHZf5p(const int idx, const int lidx, int& sum)
{
    return token_7FVEK3BH(idx, (lidx - idx), sum);
}

static int test_WgWjr9S0(fu::view<int> tokens)
{
    const int lidx = 0;
    /*MOV*/ int sum = 0;
    for (int i = 0; i < tokens.size(); i++)
        token_A1oHZf5p(tokens[i], lidx, sum);

    return /*NRVO*/ sum;
}

int fu_MAIN()
{
    return test_WgWjr9S0((fu::slate<1, int> { 1 })) + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sum_each(a, b, each)     a.each + b.each;

        fn hello(x) {
            if (x & 1) {
                fn each(y) y    ? y * each(y - 1)
                                : 100;

                return sum_each(x, x, fn each);
            }
            else {
                fn each(y) y    ? y * each(y - 1)
                                : 10000;

                return sum_each(x, x, fn each);
            }
        }

-----

-----

        fn sum_each(a, b, each)     a.each + b.each;

        fn hello(x) {
            if (x & 1) {
                fn each(y) y    ? y * each(y - 1)
                                : 100;

                return sum_each(x, x, fn each);
            }
            else {
                fn each(y) y    ? y * each(y - 1)
                                : 10000;

                return sum_each(x, x, fn each);
            }
        }

        fn each(y) y & 1    ? y
                            : y / 2 + each(y / 2);

        fn main() _0::hello(1) - 2 * each(100)
                + _0::hello(2) - 2 * each(20000);

-----

inline static int each_0fY8Rqhx(int);
inline static int each_fWKGrlo5(int);
inline static int each_iCj6OANt(int);

#ifndef FU_NO_FDEFs

inline static int each_fWKGrlo5(const int y)
{
    return (y ? (y * each_fWKGrlo5((y - 1))) : 100);
}

                                #ifndef DEFt_sum_each_aod1QA00
                                #define DEFt_sum_each_aod1QA00
inline int sum_each_aod1QA00(const int a, const int b)
{
    return each_fWKGrlo5(a) + each_fWKGrlo5(b);
}
                                #endif

inline static int each_iCj6OANt(const int y)
{
    return (y ? (y * each_iCj6OANt((y - 1))) : 10000);
}

                                #ifndef DEFt_sum_each_p4PUelEu
                                #define DEFt_sum_each_p4PUelEu
inline int sum_each_p4PUelEu(const int a, const int b)
{
    return each_iCj6OANt(a) + each_iCj6OANt(b);
}
                                #endif

                                #ifndef DEFt_hello_pZ8wRcaF
                                #define DEFt_hello_pZ8wRcaF
inline int hello_pZ8wRcaF(const int x)
{
    if (x & 1)
    {
        return sum_each_aod1QA00(x, x);
    }
    else
    {
        return sum_each_p4PUelEu(x, x);
    };
}
                                #endif

inline static int each_0fY8Rqhx(const int y)
{
    return ((y & 1) ? int(y) : ((y / 2) + each_0fY8Rqhx((y / 2))));
}

int fu_MAIN()
{
    return ((hello_pZ8wRcaF(1) - (2 * each_0fY8Rqhx(100))) + hello_pZ8wRcaF(2)) - (2 * each_0fY8Rqhx(20000));
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_code
// DEAD_call

-----

        fn sum_each(a, b)       // Same as above,
            a.each + b.each;    //  but we don't explicitly pass the fn each in.

        fn hello(x) {
            if (x & 1) {
                fn each(a) a    ? a * each(a - 1)   // These get ignored?
                                : 100;              //  sum_each goes and selects the one from _1.

                return sum_each(x, x);
            }
            else {
                fn each(b) b    ? b * each(b - 1)
                                : 10000;

                return sum_each(x, x);
            }
        }

        fn each(c) c & 1    ? c
                            : c / 2 + each(c / 2);

        fn main() _0::hello(1) - 2 * each(100)
                + _0::hello(2) - 2 * each(20000);

-----
TODO: Exit code: 65024
Failing testcase:


        fn sum_each(a, b)       // Same as above,
            a.each + b.each;    //  but we don't explicitly pass the fn each in.

        fn hello(x) {
            if (x & 1) {
                fn each(a) a    ? a * each(a - 1)   // These get ignored?
                                : 100;              //  sum_each goes and selects the one from _1.

                return sum_each(x, x);
            }
            else {
                fn each(b) b    ? b * each(b - 1)
                                : 10000;

                return sum_each(x, x);
            }
        }

        fn each(c) c & 1    ? c
                            : c / 2 + each(c / 2);

        fn main() _0::hello(1) - 2 * each(100)
                + _0::hello(2) - 2 * each(20000);

Sources:

inline static int each_0fY8Rqhx(int);

#ifndef FU_NO_FDEFs

inline static int each_0fY8Rqhx(const int c)
{
    return ((c & 1) ? int(c) : ((c / 2) + each_0fY8Rqhx((c / 2))));
}

                                #ifndef DEFt_sum_each_XFamX2JF
                                #define DEFt_sum_each_XFamX2JF
inline int sum_each_XFamX2JF(const int a, const int b)
{
    return each_0fY8Rqhx(a) + each_0fY8Rqhx(b);
}
                                #endif

                                #ifndef DEFt_hello_pZ8wRcaF
                                #define DEFt_hello_pZ8wRcaF
inline int hello_pZ8wRcaF(const int x)
{
    if (x & 1)
    {
        return sum_each_XFamX2JF(x, x);
    }
    else
    {
        return sum_each_XFamX2JF(x, x);
    };
}
                                #endif

int fu_MAIN()
{
    return ((hello_pZ8wRcaF(1) - (2 * each_0fY8Rqhx(100))) + hello_pZ8wRcaF(2)) - (2 * each_0fY8Rqhx(20000));
}

#endif


int main() { return fu_MAIN(); }
// FN_recursion
// FN_resolve
// DEAD_code
// DEAD_call

-----

        fn a        = "aaa";
        fn shorter  = "bb";
        fn greater  = "aac";

        return a <> shorter == +1
            && a <> greater == -1 ? 0 : 101;

-----

#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static fu_STR a_EJhRWC6k()
{
    return "aaa"_fu;
}

static fu_STR shorter_y1jV3SX3()
{
    return "bb"_fu;
}

                                #ifndef DEFt_x3Cx3E_gcxVH86X
                                #define DEFt_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_hkY7hbvG
                                #define DEFt_x3Cx3E_hkY7hbvG
inline int x3Cx3E_hkY7hbvG(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_KclJlPSO
                                #define DEFt_x3Cx3E_KclJlPSO
inline int x3Cx3E_KclJlPSO(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hkY7hbvG(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

static fu_STR greater_hpa9AihZ()
{
    return "aac"_fu;
}

int fu_MAIN()
{
    return (((x3Cx3E_KclJlPSO(a_EJhRWC6k(), shorter_y1jV3SX3()) == +1) && (x3Cx3E_KclJlPSO(a_EJhRWC6k(), greater_hpa9AihZ()) == -1)) ? 0 : 101);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn apply(num: i32, func: fn (i32): i32) = func(num);
        fn main()                               = apply([1], |i| i - 1);

-----
TODO: _0.fu @2:42:

[2m      | [0m
    2 |         fn apply(num: i32, func: fn (i32)[31;1m:[0m i32) = func(num);
[2m      |         fn main()                               = apply([1], |i| i - 1);[0m
[2m      | [0m

	Expected `,`, got `:`.

-----

        fn desc(a: i32, b: i32) b < a;

        fn main() {
            mut vals = [ 1, 2 ];
            vals.sort(fn desc);
            return vals[0] - 2;
        }

-----
TODO:  @171:1:

[2m      | fn sort(ref a: [$T]): void __native("<fu/vec/sort.h>", "fu::sort");[0m
[2m      | [0m
  171 | [31;1mfn[0m sort(ref a: [$T], less): void __native("<fu/vec/sort.h>", "fu::sort");
[2m      | [0m
[2m      | [0m

	Variable declarations without type annotations must be initialized: `less`.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            mut vals = [ 1, 2 ];
            vals.sort(|a: i32, b: i32| b < a);
            return vals[0] - 2;
        }

-----
TODO:  @171:1:

[2m      | fn sort(ref a: [$T]): void __native("<fu/vec/sort.h>", "fu::sort");[0m
[2m      | [0m
  171 | [31;1mfn[0m sort(ref a: [$T], less): void __native("<fu/vec/sort.h>", "fu::sort");
[2m      | [0m
[2m      | [0m

	Variable declarations without type annotations must be initialized: `less`.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn main() {
            mut vals = [ 1, 2 ];
            vals.sort(|a, b| b < a);
            return vals[0] - 2;
        }

-----
TODO:  @171:1:

[2m      | fn sort(ref a: [$T]): void __native("<fu/vec/sort.h>", "fu::sort");[0m
[2m      | [0m
  171 | [31;1mfn[0m sort(ref a: [$T], less): void __native("<fu/vec/sort.h>", "fu::sort");
[2m      | [0m
[2m      | [0m

	Variable declarations without type annotations must be initialized: `less`.

        Solving [35;1mfn[0m [34;1mmain[0m

-----

        fn test(ref vals: i32[], xor: i32)
            vals.sort(
                |a: i32, b: i32|
                    a^xor < b^xor);

        fn main() {
            mut vals = [ 1, 2 ];
            vals.test(xor: 3); // xor:3 descs 1 and 2.
            return vals[0] - 2;
        }

-----
TODO:  @171:1:

[2m      | fn sort(ref a: [$T]): void __native("<fu/vec/sort.h>", "fu::sort");[0m
[2m      | [0m
  171 | [31;1mfn[0m sort(ref a: [$T], less): void __native("<fu/vec/sort.h>", "fu::sort");
[2m      | [0m
[2m      | [0m

	Variable declarations without type annotations must be initialized: `less`.

        Solving [35;1mfn[0m [34;1mtest_a85hag59[0m

-----

        fn test(ref aa: i32[], bb: i32[])
            for (ref a, b in aa, bb) a += b;
        /*
            Technically the same as:
            for (aa, bb, |ref a, b| a += b);
        */

        fn main() {
            mut aa = [ 1, 2, 3 ];
            test(aa, [ 10, 20, 30 ]);
            return aa[1] - 22;
        }

-----
TODO: _0.fu @3:23:

[2m      | [0m
[2m      |         fn test(ref aa: i32[], bb: i32[])[0m
    3 |             for (ref a[31;1m,[0m b in aa, bb) a += b;
[2m      |         /*[0m
[2m      |             Technically the same as:[0m

	Missing semicollon before `,`.

-----

        primitive s32: i32;

        fn main() {
            let i: s32 = 0;
            <fail return type annot>
            return i;        <pass/>
            return i.i32;    </fail>
        }

-----
TODO: <fail> mismatch:

    Expected error keyword:
        [31;1mreturn[0m from pattern <fail[31;1m return type annot[0m>

    ... not present in error message:

_0.fu @2:9:

[2m      | [0m
    2 |         [31;1mprimitive[0m s32: i32;
[2m      | [0m
[2m      |         fn main() {[0m

	TODO: primdecl

-----

        enum E { None };

        fn main() {
            let e = None;
            <fail return type annot>
            return e;        <pass/>
            return e.i32;    </fail>
        }

-----
TODO: <fail> mismatch:

    Expected error keyword:
        [31;1mreturn[0m from pattern <fail[31;1m return type annot[0m>

    ... not present in error message:

_0.fu @2:9:

[2m      | [0m
    2 |         [31;1menum[0m E { None };
[2m      | [0m
[2m      |         fn main() {[0m

	TODO: primdecl

-----
