
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

static int sum(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return sum(1, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sum(a: i32, b: i32)
            a + b;

        return sum(1, -1);

-----

#ifndef FU_NO_FDEFs

static int sum(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return sum(1, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sign(a: i32)
            a > 0 ? 1 : a < 0 ? -1 : 0;

        return sign(7) + sign(-3) + sign(0);

-----

#ifndef FU_NO_FDEFs

static int sign(const int a)
{
    return ((a > 0) ? 1 : ((a < 0) ? -1 : 0));
}

int fu_MAIN()
{
    return (sign(7) + sign(-3)) + sign(0);
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

static int sign(const int a)
{
    if (a > 0)
        return 1;

    return -2;
}

int fu_MAIN()
{
    return (sign(10) * 2) + sign(-5);
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

static int sign(const int a)
{
    if (a > 0)
        return 1;
    else
        return -2;

}

int fu_MAIN()
{
    return (sign(10) * 2) + sign(-5);
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

static int decr(int& num)
{
    return num--;
}

int fu_MAIN()
{
    int res = 0;
    decr(res);
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

static int decr(int& num)
{
    return num--;
}

int fu_MAIN()
{
    int res = 0;
    decr(res);
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

static int decr(int& res_0)
{
    return res_0--;
}

int fu_MAIN()
{
    int res = 0;
    decr(res);
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

static void decr(int& num)
{
    num--;
}

int fu_MAIN()
{
    int res = 0;
    decr(res);
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

        /*
        let sum = 0;
        /*/
        mut sum = 0;
        //*/
        while (sum < 15)
            sum++; //ERR ++ overload

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

        fn named(a: i32, b: i32)
            a - b * 2;

        return named(b: 3, 6);

-----

#ifndef FU_NO_FDEFs

static int named(const int a, const int b)
{
    return a - (b * 2);
}

int fu_MAIN()
{
    return named(6, 3);
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

static int named(const int a, const int b)
{
    return a - (b * 2);
}

static int other(const int a, const int b)
{
    return named(a, b);
}

int fu_MAIN()
{
    return other(6, 3);
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

static int size(const s_Range& r)
{
    return r.max - r.min;
}

int fu_MAIN()
{
    return size(s_Range { 14, 21 }) - 7;
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

        /*
        let r =
        /*/
        mut r =
        //*/
        Range(1, 2);

        r.min++; //ERR ++ overload
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

static int size(const s_Range& r)
{
    return r.r_max - r.r_min;
}

int fu_MAIN()
{
    return size(s_Range { 14, 21 }) - 7;
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

static int test(const s_X& x, const int b)
{
    return x.a + b;
}

static int hey(const s_X& x)
{
    return test(x, -1);
}

int fu_MAIN()
{
    return hey(s_X { 1 });
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

static int dist(const s_Player& p, const s_Player& other)
{
    return p.pos.x - other.pos.x;
}

int fu_MAIN()
{
    const s_Player a = s_Player { s_Pos { 10 } };
    const s_Player b = s_Player { s_Pos { 4 } };
    return dist(a, b) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { x: i32; y: i32; };
        struct B { x: i32; z: i32; };
        fn test(using a: A, using b: B)
            /*
            x + z;
            /*/
            y + z;
            //*/

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

static int test(const s_A& a, const s_B& b)
{
    return a.y + b.z;
}

int fu_MAIN()
{
    return test(s_A { 1, 1 }, s_B { -1, -1 });
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

static int test(const s_CurrentFn& f)
{
    return f.parent_idx - f.RoR.ret_count;
}

int fu_MAIN()
{
    return test(s_CurrentFn { 1, s_CurrentFn_ResetOnResolve { 1 } });
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
        fn main() 0.hey;

-----

#ifndef FU_NO_FDEFs

inline static int hey_U3Pf(const int a)
{
    return a * a;
}

int fu_MAIN()
{
    return hey_U3Pf(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn div3by(a: $T) 3 / a;
        return div3by(2) - 1;

-----

#ifndef FU_NO_FDEFs

inline static int div3by_U3Pf(const int a)
{
    return 3 / a;
}

int fu_MAIN()
{
    return div3by_U3Pf(2) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn div3by(a) 3 / a;
        return div3by(2) - 1;

-----

#ifndef FU_NO_FDEFs

inline static int div3by_U3Pf(const int a)
{
    return 3 / a;
}

int fu_MAIN()
{
    return div3by_U3Pf(2) - 1;
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

inline static s_v1 add3_EtsH(const s_v1& a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return add3_EtsH(s_v1 { 2 }, 3).x - 5;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul_ab_init(a: $T, b = 0) a*b;
        fn main() mul_ab_init(1);

-----

#ifndef FU_NO_FDEFs

inline static int mul_ab_init_8E8n(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_init_8E8n(1, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul_ab_annot_init(a: $T, b: $T = 0) a*b;
        fn main() mul_ab_annot_init(1);

-----

#ifndef FU_NO_FDEFs

inline static int mul_ab_annot_init_8E8n(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_annot_init_8E8n(1, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn mul_ab_opt(a: $T, b?: $T) a*b;
        fn main() mul_ab_opt(1);

-----

#ifndef FU_NO_FDEFs

inline static int mul_ab_opt_8E8n(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_opt_8E8n(1, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ab(a, b) a + b*2;
        fn main() ab(b: 1, a: -2);

-----

#ifndef FU_NO_FDEFs

inline static int ab_8E8n(const int a, const int b)
{
    return a + (b * 2);
}

int fu_MAIN()
{
    return ab_8E8n(-2, 1);
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

inline static int add_s_vy_tq1P(const s_yi32& v, const int s)
{
    return s + v.y;
}

int fu_MAIN()
{
    return add_s_vy_tq1P(s_yi32 { 1 }, -1);
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

inline static int add_s_vx_DYIm(const int s, const s_xi32& v)
{
    return s + v.x;
}

int fu_MAIN()
{
    return add_s_vx_DYIm(-1, s_xi32 { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ab(a, b = 0, c = 0) a + b*2 + c*3;
        fn main() ab(3, c: -1);

-----

#ifndef FU_NO_FDEFs

inline static int ab_AFZy(const int a, const int b, const int c)
{
    return (a + (b * 2)) + (c * 3);
}

int fu_MAIN()
{
    return ab_AFZy(3, 0, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn ab(a, b = -1) a + b*2;
        fn main() ab(3.0, -1.5).i32;

-----

#ifndef FU_NO_FDEFs

inline static double ab_F2FO(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_F2FO(3.0, -1.5));
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

inline static double ab_F2FO(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_F2FO(3.0, NEG_ONE_FIVE));
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

inline static double ab_F2FO(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_F2FO(TWO, -1.0));
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion
        fn self_rec_template(x: $T): $T
            x > 0 ? self_rec_template(x / 2 - 5) : x;

        fn main()
            self_rec_template(7) + 2;

-----

#ifndef FU_NO_FDEFs

inline static int self_rec_template_U3Pf(const int x)
{
    return ((x > 0) ? self_rec_template_U3Pf(((x / 2) - 5)) : int(x));
}

int fu_MAIN()
{
    return self_rec_template_U3Pf(7) + 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion
        fn ab_rec(a: $T): $T = a ? ba_rec(a - 2) : -100;
        fn ba_rec(a: $T): $T = a ? ab_rec(a - 7) : -200;
        fn main() ab_rec(11) + 200;

-----

inline static int ab_rec_U3Pf(int);

#ifndef FU_NO_FDEFs

inline static int ba_rec_U3Pf(const int a)
{
    return (a ? ab_rec_U3Pf((a - 7)) : -200);
}

inline static int ab_rec_U3Pf(const int a)
{
    return (a ? ba_rec_U3Pf((a - 2)) : -100);
}

int fu_MAIN()
{
    return ab_rec_U3Pf(11) + 200;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let a = 1;
            fn add1(b) a + b;
            return 2.add1 - 3;
        }

-----

#ifndef FU_NO_FDEFs

inline static int add1_U3Pf(int a_0, const int b)
{
    return a_0 + b;
}

int fu_MAIN()
{
    const int a = 1;
    return add1_U3Pf(a, 2) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn map(a: [$T], fn) {
            mut res: fn($T)[];
            res.grow_junk(a.len);
            for (mut i = 0; i < a.len; i++) res[i] = fn(a[i]);
            return res;
        }

        pub fn clone(a: $T)
        case ($T -> @copy) a;
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

                                #ifndef DEFt_clone_U3Pf
                                #define DEFt_clone_U3Pf
inline int clone_U3Pf(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_DXfV
                                #define DEFt_clone_DXfV
inline s_Scope clone_DXfV(const s_Scope& a)
{
    s_Scope res {};
    res.x = clone_U3Pf(a.x);
    return res;
}
                                #endif

                                #ifndef DEFt_map_hF5c
                                #define DEFt_map_hF5c
inline fu_VEC<s_Scope> map_hF5c(const fu_VEC<s_Scope>& a, int)
{
    fu_VEC<s_Scope> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_DXfV(a[i]);

    return res;
}
                                #endif

                                #ifndef DEFt_clone_gQjd
                                #define DEFt_clone_gQjd
inline fu_VEC<s_Scope> clone_gQjd(const fu_VEC<s_Scope>& a)
{
    return map_hF5c(a, 0);
}
                                #endif

                                #ifndef DEFt_clone_Z4mx
                                #define DEFt_clone_Z4mx
inline s_ModuleOutputs clone_Z4mx(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};
    res.deps = clone_gQjd(a.deps);
    return res;
}
                                #endif

int test(const s_ModuleOutputs& a)
{
    s_ModuleOutputs b = clone_Z4mx(a);
    return a.deps.size() - b.deps.size();
}

int fu_MAIN()
{
    return test(s_ModuleOutputs{});
}

#endif


int main() { return fu_MAIN(); }

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

static int hey(const s_X& x)
{
    const int b = -1;
    return x.a + b;
}

int fu_MAIN()
{
    return hey(s_X { 1 });
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

inline static int add_uxa_b_template_Dx7L(const s_X& x, const int b)
{
    return x.a + b;
}

static int hey(const s_X& x)
{
    return add_uxa_b_template_Dx7L(x, -1);
}

int fu_MAIN()
{
    return hey(s_X { 1 });
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

static const int dont_leak_me = 1;

                                #ifndef DEFt_identity_U3Pf
                                #define DEFt_identity_U3Pf
inline int identity_U3Pf(const int dont_leak_me)
{
    return dont_leak_me;
}
                                #endif

int fu_MAIN()
{
    return identity_U3Pf((dont_leak_me * 2)) - 2;
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

static const int sTatic = 1;

static const int arg = 7;

inline static int template_U3Pf(const int arg)
{
    return sTatic + arg;
}

static const int result = template_U3Pf((arg / -4));

int fu_MAIN()
{
    return int(result);
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

inline static int template_U3Pf(int sTatic_0, const int arg)
{
    return sTatic_0 + arg;
}

int fu_MAIN()
{
    const int sTatic = 1;
    const int arg = 7;
    return template_U3Pf(sTatic, (arg / -4));
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion
        fn inner(i: i32): i32
            i > 0 ? outer(i - 1) : 0;

        fn outer(i: i32): i32
            2 * inner(i);

        return outer(1);

-----

static int outer(int);

#ifndef FU_NO_FDEFs

static int inner(const int i)
{
    return ((i > 0) ? outer((i - 1)) : 0);
}

static int outer(const int i)
{
    return 2 * inner(i);
}

int fu_MAIN()
{
    return outer(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
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

static int outer(int, int, int, int);

#ifndef FU_NO_FDEFs

static int inner(int one_0, int zero_0, int two_0, const int i)
{
    return ((i > zero_0) ? outer(one_0, zero_0, two_0, (i - one_0)) : int(zero_0));
}

static int outer(int one_0, int zero_0, int two_0, const int i)
{
    return two_0 * inner(one_0, zero_0, two_0, i);
}

static int test(const int one)
{
    const int zero = (one - 1);
    const int two = (one * 2);
    return outer(one, zero, two, one) + ((two - one) * 17);
}

int fu_MAIN()
{
    return test(1) - 17;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn inner(i: i32): i32
            outer(i - 1);

        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        let implicit x = 7;
        return outer(1) - 7;

-----

static int outer(int, int);

#ifndef FU_NO_FDEFs

static int inner(const int i, const int x)
{
    return outer((i - 1), x);
}

static int outer(const int i, const int x)
{
    return ((i > 0) ? inner(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn inner_noret(i: i32)
            outer_noret(i - 1);

        fn outer_noret(implicit x: i32, i: i32)
            i > 0   ? inner_noret(i)
                    : x + i;

        let implicit x = 7;
        return outer_noret(1) - 7;

-----

static int outer_noret(int, int);

#ifndef FU_NO_FDEFs

static int inner_noret(const int i, const int x)
{
    return outer_noret((i - 1), x);
}

static int outer_noret(const int i, const int x)
{
    return ((i > 0) ? inner_noret(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_noret(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        inline fn inner_inl(i: i32): i32
            outer_inl(i - 1);

        /*TODO inline tailrec*/
        fn outer_inl(implicit x: i32, i: i32): i32
            i > 0   ? inner_inl(i)
                    : x + i;

        let implicit x = 7;
        return outer_inl(1) - 7;

-----

#ifndef FU_NO_FDEFs

static int outer_inl(const int i, const int x)
{
    return ((i > 0) ? outer_inl((i - 1), x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_inl(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn inner_templ(i): i32
            outer_templ(i - 1);

        fn outer_templ(implicit x: i32, i): i32
            i > 0   ? inner_templ(i)
                    : x + i;

        let implicit x = 7;
        return outer_templ(1) - 7;

-----

inline static int outer_templ_8E8n(int, int);

#ifndef FU_NO_FDEFs

inline static int inner_templ_U3Pf(const int i, const int x)
{
    return outer_templ_8E8n((i - 1), x);
}

inline static int outer_templ_8E8n(const int i, const int x)
{
    return ((i > 0) ? inner_templ_U3Pf(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_templ_8E8n(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn inner_templ_noret(i)
            outer_templ_noret(i - 1);

        fn outer_templ_noret(implicit x: i32, i)
            i > 0   ? inner_templ_noret(i)
                    : x + i;

        let implicit x = 7;
        return outer_templ_noret(1) - 7;

-----

inline static int outer_templ_noret_8E8n(int, int);

#ifndef FU_NO_FDEFs

inline static int inner_templ_noret_U3Pf(const int i, const int x)
{
    return outer_templ_noret_8E8n((i - 1), x);
}

inline static int outer_templ_noret_8E8n(const int i, const int x)
{
    return ((i > 0) ? inner_templ_noret_U3Pf(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer_templ_noret_8E8n(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn outer(i: i32): i32
            i > 0   ? inner(i)
                    : 2 * i;

        fn inner(implicit x: i32, i: i32): i32
            outer(i - 2 * x);

        let implicit x = 3;
        return outer(6);

-----

static int outer(int, int);

#ifndef FU_NO_FDEFs

static int inner(const int i, const int x)
{
    return outer((i - (2 * x)), x);
}

static int outer(const int i, const int x)
{
    return ((i > 0) ? inner(i, x) : (2 * i));
}

int fu_MAIN()
{
    const int x = 3;
    return outer(6, x);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        inline fn outer_inl(i: i32): i32
            i > 0   ? inner_inl(i)
                    : 2 * i;

        /*TODO inline tailrec*/
        fn inner_inl(implicit x: i32, i: i32): i32
            outer_inl(i - 2 * x);

        let implicit x = 3;
        return outer_inl(6);

-----

#ifndef FU_NO_FDEFs

static int inner_inl(const int i, const int x)
{
    const int i_1 = (i - (2 * x));
    return ((i_1 > 0) ? inner_inl(i_1, x) : (2 * i_1));
}

int fu_MAIN()
{
    const int x = 3;
    const int i = 6;
    return ((i > 0) ? inner_inl(i, x) : (2 * i));
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn outer_templ(i): i32
            i > 0   ? inner_templ(i)
                    : 2 * i;

        fn inner_templ(implicit x: i32, i): i32
            outer_templ(i - 2 * x);

        let implicit x = 3;
        return outer_templ(6);

-----

inline static int outer_templ_U3Pf(int, int);

#ifndef FU_NO_FDEFs

inline static int inner_templ_8E8n(const int i, const int x)
{
    return outer_templ_U3Pf((i - (2 * x)), x);
}

inline static int outer_templ_U3Pf(const int i, const int x)
{
    return ((i > 0) ? inner_templ_8E8n(i, x) : (2 * i));
}

int fu_MAIN()
{
    const int x = 3;
    return outer_templ_U3Pf(6, x);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        fn inner(i: i32): i32
            outer(i - 1);

        let implicit x = 7;
        return outer(1) - 7;

-----

static int outer(int, int);

#ifndef FU_NO_FDEFs

static int inner(const int i, const int x)
{
    return outer((i - 1), x);
}

static int outer(const int i, const int x)
{
    return ((i > 0) ? inner(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
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

static int outer(int, int);

#ifndef FU_NO_FDEFs

static int noret(const int i, const int x)
{
    return outer(i, x);
}

inline static int template_U3Pf(const int i, const int x)
{
    return ((i & 1) ? outer(i, x) : noret(i, x));
}

static int inner(const int i, const int x)
{
    return template_U3Pf((i - 1), x);
}

static int outer(const int i, const int x)
{
    return ((i > 0) ? inner(i, x) : (x + i));
}

int fu_MAIN()
{
    const int x = 7;
    return outer(1, x) - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve FN_reopen
        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_1(call_self = false): i32
            = !call_self ? returns_x : calls_self_1 * 2;

        let implicit x = 7;
        return calls_self_1(true) - 14;

-----

#ifndef FU_NO_FDEFs

static int returns_x(const int x)
{
    return int(x);
}

static int calls_self_1(const bool call_self, const int x)
{
    return (!call_self ? returns_x(x) : (calls_self_1(false, x) * 2));
}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_1(true, x) - 14;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve FN_reopen
        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_2(call_self = false): i32
            = call_self ? calls_self_2 * 3 : returns_x;

        let implicit x = 7;
        return calls_self_2(true) - 21;

-----

#ifndef FU_NO_FDEFs

static int returns_x(const int x)
{
    return int(x);
}

static int calls_self_2(const bool call_self, const int x)
{
    return (call_self ? (calls_self_2(false, x) * 3) : returns_x(x));
}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_2(true, x) - 21;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve FN_reopen
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

static int calls_self_3(bool, int);

#ifndef FU_NO_FDEFs

static int do_call_self(int add_0, const int mul, const int x)
{
    return (calls_self_3(false, x) * mul) + add_0;
}

static int returns_x(const int x)
{
    return int(x);
}

static int calls_self_3(const bool call_self, const int x)
{
    const int add = 1;
    return (call_self ? do_call_self(add, 4, x) : returns_x(x));
}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_3(true, x) - 29;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve FN_reopen
        fn noret_x(implicit x: i32) x;

        fn templ_calls_self_2(call_self): i32
            = call_self ? templ_calls_self_2(false) * 3 : noret_x;

        fn main() {
            let implicit x = 7;
            return templ_calls_self_2(true) - 21;
        }

-----

#ifndef FU_NO_FDEFs

static int noret_x(const int x)
{
    return x;
}

inline static int templ_calls_self_2_1zaR(const bool call_self, const int x)
{
    return (call_self ? (templ_calls_self_2_1zaR(false, x) * 3) : int(noret_x(x)));
}

int fu_MAIN()
{
    const int x = 7;
    return templ_calls_self_2_1zaR(true, x) - 21;
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

static int size(const s_Range& r)
{
    return r.max - r.min;
}

static int test(const s_Range& r)
{
    return size(r);
}

int fu_MAIN()
{
    const s_Range r = s_Range { 14, 21 };
    return test(r) - 7;
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

static int size(const s_Range& r)
{
    return r.max - r.min;
}

static int inner(const s_Range& r)
{
    return size(r);
}

static int outer(const s_Range& r)
{
    return inner(r);
}

int fu_MAIN()
{
    const s_Range r = s_Range { 14, 21 };
    return outer(r) - 7;
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

static int sibling1(int c_0, const int z)
{
    return z + c_0;
}

static int depth2(int b_0, int c_0, int x_0, const int y)
{
    return sibling1(c_0, ((x_0 + y) + b_0));
}

static int depth1(int a_0, int b_0, int c_0, const int x)
{
    return depth2(b_0, c_0, x, (x + a_0));
}

int fu_MAIN()
{
    const int a = 1;
    const int b = 2;
    const int c = 3;
    return depth1(a, b, c, 0) - 6;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion
        fn goto0(x): i32 = x ? goto0(x / 2) : 0;
        fn main() goto0(1);

-----

#ifndef FU_NO_FDEFs

inline static int goto0_U3Pf(const int x)
{
    return (x ? goto0_U3Pf((x / 2)) : 0);
}

int fu_MAIN()
{
    return goto0_U3Pf(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve
        fn goto0(x) x ? goto0(x / 2) : 0;
        fn main() goto0(1);

-----

#ifndef FU_NO_FDEFs

inline static int goto0_U3Pf(const int x)
{
    return (x ? goto0_U3Pf((x / 2)) : 0);
}

int fu_MAIN()
{
    return goto0_U3Pf(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve
        fn goto0(x) x ? goto0(x / 2) : x; // ideally same as above
        fn main() goto0(1);

-----

#ifndef FU_NO_FDEFs

inline static int goto0_U3Pf(const int x)
{
    return (x ? goto0_U3Pf((x / 2)) : int(x));
}

int fu_MAIN()
{
    return goto0_U3Pf(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve
        fn goto0(x) x && goto0(x / 2); // ideally same as above [again]
        fn main() goto0(1);

-----

#ifndef FU_NO_FDEFs

inline static int goto0_U3Pf(const int x)
{
    return x ? goto0_U3Pf((x / 2)) : int{};
}

int fu_MAIN()
{
    return goto0_U3Pf(1);
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

static int& impl(int& _impl)
{
    return _impl;
}

static int& arg_or_impl(int& arg, int& _impl)
{
    return arg ? arg : impl(_impl);
}

int fu_MAIN()
{
    int _impl {};
    int arg {};
    int& ref = arg_or_impl(arg, _impl);
    return arg - ref;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve
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

#ifndef FU_NO_FDEFs

static fu_VEC<int>& hello(fu_VEC<int>& a, fu_VEC<int>& b, const int x)
{
    if (x == 0)
        return a;

    if (x == 1)
        return b;

    return hello(b, a, (x / 17));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<3> { 1, 2, 3 } };
    fu_VEC<int> b = fu_VEC<int> { fu_VEC<int>::INIT<3> { 4, 5, 6 } };
    hello(a, b, 397).mutref(1) *= 5;
    return b.mutref(1) - 25;
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

static int test(int x_0)
{
    return x_0;
}

int fu_MAIN()
{
    const int x = 1;
    return test(x) - 1;
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

#ifndef FU_NO_FDEFs

static int test(const fu_VEC<int>& view)
{
    int sum = 0;
    for (int i = 0; i < view.size(); i++)
        sum += view[i];

    return sum - 15;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
    arr.push(5);
    return test(arr);
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

#ifndef FU_NO_FDEFs

static int test(const fu_VEC<int>& view)
{
    int sum = 0;
    for (int i = 0; i < view.size(); i++)
        sum += view[i];

    return sum - 15;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu_VEC<int>::INIT<4> { 1, 2, 3, 4 } };
    arr.push(5);
    return test(arr);
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
    fu_VEC<int> arr = fu_VEC<int> { fu_VEC<int>::INIT<1> { -5 } };
    arr.push(x);
    return arr.mutref(0) + arr.mutref(1);
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.push(5);
        if ((arr0[1] + arr0[4] - arr0[5]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.push(5);
        if ((arr1[1] + arr1[4] - arr1[5]) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.push(5);
        if (((arr0.mutref(1) + arr0.mutref(4)) - arr0.mutref(5)) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.push(5);
        if (((arr1.mutref(1) + arr1.mutref(4)) - arr1.mutref(5)) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.push(5);
        if (((arr2.mutref(1) + arr2.mutref(4)) - arr2.mutref(5)) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.insert(5, 5);
        if ((arr0[1] + arr0[4] - arr0[5]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.insert(5, 5);
        if ((arr1[1] + arr1[4] - arr1[5]) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.insert(5, 5);
        if (((arr0.mutref(1) + arr0.mutref(4)) - arr0.mutref(5)) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.insert(5, 5);
        if (((arr1.mutref(1) + arr1.mutref(4)) - arr1.mutref(5)) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.insert(5, 5);
        if (((arr2.mutref(1) + arr2.mutref(4)) - arr2.mutref(5)) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.pop();
        if ((arr0[1] + arr0[3] - arr0.len) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.pop();
        if ((arr1[1] + arr1[3] - arr1.len) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.pop();
        if (((arr0.mutref(1) + arr0.mutref(3)) - arr0.size()) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.pop();
        if (((arr1.mutref(1) + arr1.mutref(3)) - arr1.size()) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.pop();
        if (((arr2.mutref(1) + arr2.mutref(3)) - arr2.size()) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.splice(4, 1);
        if ((arr0[1] + arr0[3] - arr0.len) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.splice(4, 1);
        if ((arr1[1] + arr1[3] - arr1.len) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.splice(4, 1);
        if (((arr0.mutref(1) + arr0.mutref(3)) - arr0.size()) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.splice(4, 1);
        if (((arr1.mutref(1) + arr1.mutref(3)) - arr1.size()) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.splice(4, 1);
        if (((arr2.mutref(1) + arr2.mutref(3)) - arr2.size()) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.unshift(5);
        if ((arr0[2] + arr0[5] - arr0[0]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.unshift(5);
        if ((arr1[2] + arr1[5] - arr1[0]) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.unshift(5);
        if (((arr0.mutref(2) + arr0.mutref(5)) - arr0.mutref(0)) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.unshift(5);
        if (((arr1.mutref(2) + arr1.mutref(5)) - arr1.mutref(0)) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.unshift(5);
        if (((arr2.mutref(2) + arr2.mutref(5)) - arr2.mutref(0)) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.insert(0, 5);
        if ((arr0[2] + arr0[5] - arr0[0]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.insert(0, 5);
        if ((arr1[2] + arr1[5] - arr1[0]) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.insert(0, 5);
        if (((arr0.mutref(2) + arr0.mutref(5)) - arr0.mutref(0)) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.insert(0, 5);
        if (((arr1.mutref(2) + arr1.mutref(5)) - arr1.mutref(0)) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.insert(0, 5);
        if (((arr2.mutref(2) + arr2.mutref(5)) - arr2.mutref(0)) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.shift();
        if ((arr0[0] + arr0[2] - arr0[3]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.shift();
        if ((arr1[0] + arr1[2] - arr1[3]) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.shift();
        if (((arr0.mutref(0) + arr0.mutref(2)) - arr0.mutref(3)) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.shift();
        if (((arr1.mutref(0) + arr1.mutref(2)) - arr1.mutref(3)) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.shift();
        if (((arr2.mutref(0) + arr2.mutref(2)) - arr2.mutref(3)) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,4];
        arr0.insert(1, 5);
        if ((arr0[2] + arr0[5] - arr0[1]) != 0) return 13;
    }

    mut orig = [0,1,2,3,4];

    {
        mut arr1 = CLONE(orig);
        arr1.insert(1, 5);
        if ((arr1[2] + arr1[5] - arr1[1]) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };
        arr0.insert(1, 5);
        if (((arr0.mutref(2) + arr0.mutref(5)) - arr0.mutref(1)) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 4 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.insert(1, 5);
        if (((arr1.mutref(2) + arr1.mutref(5)) - arr1.mutref(1)) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.insert(1, 5);
        if (((arr2.mutref(2) + arr2.mutref(5)) - arr2.mutref(1)) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----


    {
        mut arr0 = [0,1,2,3,100];
        arr0.splice(1, 3);
        if ((arr0.len + arr0[0] + arr0[1] - 102) != 0) return 13;
    }

    mut orig = [0,1,2,3,100];

    {
        mut arr1 = CLONE(orig);
        arr1.splice(1, 3);
        if ((arr1.len + arr1[0] + arr1[1] - 102) != 0) return 17;
    }

    {
        mut arr2 = STEAL(orig);
        if (orig.len) return 19;
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
        fu_VEC<int> arr0 = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 100 } };
        arr0.splice(1, 3);
        if ((((arr0.size() + arr0.mutref(0)) + arr0.mutref(1)) - 102) != 0)
            return 13;

    };
    fu_VEC<int> orig = fu_VEC<int> { fu_VEC<int>::INIT<5> { 0, 1, 2, 3, 100 } };

    {
        fu_VEC<int> arr1 = fu_VEC<int>(orig);
        arr1.splice(1, 3);
        if ((((arr1.size() + arr1.mutref(0)) + arr1.mutref(1)) - 102) != 0)
            return 17;

    };

    {
        fu_VEC<int> arr2 = static_cast<fu_VEC<int>&&>(orig);
        if (orig.size())
            return 19;

        arr2.splice(1, 3);
        if ((((arr2.size() + arr2.mutref(0)) + arr2.mutref(1)) - 102) != 0)
            return 23;

    };
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----

        let OPERATORS = [ "+", "-", "*", "/" ];

        fn main()
            OPERATORS[2] == "*" ? 0 : 1;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<fu_STR> OPERATORS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "+"_fu, "-"_fu, "*"_fu, "/"_fu } };

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
    x.push(s_X { fu_VEC<s_Y> { fu_VEC<s_Y>::INIT<1> { s_Y { true } } } });
    return (x.size() + (x.mutref(0).y.size() * 2)) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct SelfRec { x: SelfRec[]; }; //! TYPE_recursion TYPE_resolve
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
    return s_SelfRec { fu_VEC<s_SelfRec> { fu_VEC<s_SelfRec>::INIT<1> { s_SelfRec{} } } }.x.size() - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ABRec { x: BARec[]; }; //! TYPE_recursion TYPE_reopen
        struct BARec { x: ABRec[]; }; //! TYPE_recursion TYPE_reopen
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
    return s_ABRec { fu_VEC<s_BARec> { fu_VEC<s_BARec>::INIT<1> { s_BARec{} } } }.x.size() - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ABRec { x: BARec[]; y: ABBARec[]; }; //! TYPE_recursion TYPE_reopen
        struct BARec { x: ABRec[]; y: ABBARec[]; }; //! TYPE_recursion TYPE_reopen
        struct ABBARec { x: ABRec[]; y: BARec[]; }; //! TYPE_recursion TYPE_reopen
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
    return s_ABRec { fu_VEC<s_BARec> { fu_VEC<s_BARec>::INIT<1> { s_BARec{} } }, fu_VEC<s_ABBARec> { fu_VEC<s_ABBARec>::INIT<1> { s_ABBARec{} } } }.x.size() - 1;
}

#endif


int main() { return fu_MAIN(); }

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
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<6> { 7, 1, 5, 3, 99, -13 } };
    fu::sort(a);
    return ((a.mutref(0) + a.mutref(1)) + a.mutref(3)) + a.mutref(4);
}

#endif


int main() { return fu_MAIN(); }

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
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<4> { 0, 1, 2, 3 } };
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
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<4> { 0, 1, 2, 3 } };
    fu_VEC<int> b = fu::slice(a, 1);
    return b.size() - b[2];
}

#endif


int main() { return fu_MAIN(); }

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
             ? str.len - 11
             : 171;

-----
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR str = ("hello "_fu + "world"_fu);
    return (fu::lmatch(str, "hel"_fu) ? (str.size() - 11) : 171);
}

#endif


int main() { return fu_MAIN(); }

-----

        let str = "a" ~ 1710010;

        return str == "a1710010"
             ? 0 : 101;

-----
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_str.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR str = ("a"_fu + 1710010);
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
        cpy += str[i];

    return (cpy.size() - 11) + ((cpy == str) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        return "hello world".find("world")
             - 2 * [1, 7, 13, 14, 19].find(14);

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/find.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return fu::lfind("hello world"_fu, "world"_fu, 0) - (2 * fu::lfind(fu_VEC<int> { fu_VEC<int>::INIT<5> { 1, 7, 13, 14, 19 } }, 14, 0));
}

#endif


int main() { return fu_MAIN(); }

-----

        return ("hello world".has("world") ? 1 : 0)
             + ([1, 14, 96, 2].has(14)     ? 2 : 0)
             - 3;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/find.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return ((fu::has("hello world"_fu, "world"_fu) ? 1 : 0) + (fu::has(fu_VEC<int> { fu_VEC<int>::INIT<4> { 1, 14, 96, 2 } }, 14) ? 2 : 0)) - 3;
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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/join.h>
#include <fu/vec/split.h>

#ifndef FU_NO_FDEFs

static int test(const fu_STR& item)
{
    return ((item == fu::join(fu::split(item, " "_fu), " "_fu)) ? 0 : item.size());
}

int fu_MAIN()
{
    fu_VEC<fu_STR> tests = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<9> { fu_STR{}, " "_fu, "  "_fu, "hey you duders"_fu, " hey you duders"_fu, "hey you duders "_fu, "  hey you duders "_fu, "  hey you  duders "_fu, "  hey you  duders  "_fu } };
    int sum = 0;
    for (int i = 0; i < tests.size(); i++)
        sum += test(tests[i]);

    return sum;
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
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/slice.h>

#ifndef FU_NO_FDEFs

static const fu_STR strA = "0123456789abcdef0123456789ABCDEF"_fu;

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
#include <fu/map.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_MAP<fu_STR, int> x {};
    (x.upsert("hello"_fu) = 1);
    (x.upsert("world"_fu) = 2);
    return (x.mutref("hello"_fu) - x.mutref("world"_fu)) + 1;
}

#endif


int main() { return fu_MAIN(); }

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
#include <cstdint>
#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static fu_STR pop(const fu_STR& b_0, int& offset_0)
{
    fu_STR a {};
    while (offset_0 < b_0.size())
    {
        const std::byte c = b_0[offset_0++];
        if (c == std::byte(' '))
            break;

        a += c;
    };
    return a;
}

int fu_MAIN()
{
    fu_MAP<fu_STR, int> x {};
    (x.upsert("hello"_fu) = 1);
    (x.upsert("world"_fu) = 2);
    fu_STR b = "hello world"_fu;
    int offset = 0;
    return (x.mutref(pop(b, offset)) - x.mutref(pop(b, offset))) + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test() - 3;

-----

#ifndef FU_NO_FDEFs

static int test(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test(1, 2) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test(b: -1);

-----

#ifndef FU_NO_FDEFs

static int test(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test(1, -1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test(-2);

-----

#ifndef FU_NO_FDEFs

static int test(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test(-2, 2);
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
    const s_Test t = s_Test { 1, 0 };
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

static s_Test hey()
{
    return s_Test{};
}

int fu_MAIN()
{
    return hey().x;
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

static s_Test hey(const int y)
{
    return (y ? s_Test { 1 } : s_Test{});
}

int fu_MAIN()
{
    return hey(0).x;
}

#endif


int main() { return fu_MAIN(); }

-----

        /*
        fn test(a = "hello") a.len; //ERR assign
        /*/
        fn test(a = 0) a + 1;
        //*/
        fn main() test(-1);

-----

#ifndef FU_NO_FDEFs

static int test(const int a)
{
    return a + 1;
}

int fu_MAIN()
{
    return test(-1);
}

#endif


int main() { return fu_MAIN(); }

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
    const fu_STR& s = fu::Default<fu_STR>::value;
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
    fu_VEC<int> s = fu_VEC<int> { fu_VEC<int>::INIT<1> { 4 } };
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
    fu_VEC<int> s = fu_VEC<int> { fu_VEC<int>::INIT<1> { 4 } };
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
        outer: for (mut y = 1; y < 10; y++)
        {
            sum += y * 10; // 10, 20
            for (mut x = 1; x < 10; x++)
            {
                sum += x; // 1, 1, 2
                if (y == 1) continue :outer;
                if (x == 2) break    :outer;
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
                goto L_00;

            if (x == 2)
                goto L_outer;

        };
      } L_00:;
    } L_outer:;

    return sum - 34;
}

#endif


int main() { return fu_MAIN(); }

-----

        mut sum = 0;
        outer: for (mut x = 0;; x++) {
            for (mut y = 0; y < x; y++) {
                if (y & 1 && !(x & 1))
                    continue :outer;

                sum += x;
            }

            sum += x * 1000 + 100;
            if (x > 1)
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
                goto L_00;

            sum += x;
        };
        sum += ((x * 1000) + 100);
        if (x > 1)
            break;

      } L_00:;
    };
    return sum - 4312;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { x: i32; }
        fn test(t: &mut Test) t.x++;
        mut t = Test();
        /*
        t.test; //ERR orphan
        /*/
        t.test();
        //*/

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

static int test(s_Test& t)
{
    return t.x++;
}

int fu_MAIN()
{
    s_Test t = s_Test{};
    test(t);
    return t.x - 1;
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

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    const fu_STR& w = (x ? x : y);
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
#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    const fu_STR& w = (x ? y : fu::Default<fu_STR>::value);
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

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    const fu_STR& w = (3 && x ? x : y);
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

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu_VEC<int> arr {};
    const fu_STR& w = (arr && x ? x : y);
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

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu_VEC<int> arr {};
    const fu_STR& w = (arr && x ? x : y ? y : fu::fail("Nope."_fu));
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

static int what(const int a)
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
    return (what(1) - what(2)) + 1;
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
#include <fu/default.h>
#include <fu/vec.h>
#include <fu/vec/concat_one.h>

#ifndef FU_NO_FDEFs

static fu_VEC<int> gen(const int len)
{
    fu_VEC<int> res {};
    for (int i = 0; i < len; i++)
        res += i;

    return res;
}

static int test(const int len)
{
    fu_VEC<int> x = fu_VEC<int> { fu_VEC<int>::INIT<2> { -5, +5 } };
    const fu_VEC<int>& y = (gen(len) ? x : fu::Default<fu_VEC<int>>::value);
    return int(x[(y.size() / 2)]);
}

int fu_MAIN()
{
    return test(0) + test(1);
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
    int* _0;
    (*(_0 = &(i)) ? *_0 : *_0 = 11);
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
    int* _0;
    (*(_0 = &(i)) ? *_0 : *_0 = 11);
    return i - 11;
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
#include <fu/map.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static fu_STR f(int& g_0)
{
    g_0++;
    return "cruel world"_fu;
}

int fu_MAIN()
{
    fu_MAP<fu_STR, fu_STR> m {};
    int g = 0;
    (m.upsert("hello"_fu) = "world"_fu);
    fu_STR* _0;
    (*(_0 = &(m.upsert("hello"_fu))) ? *_0 : *_0 = f(g));
    return g;
}

#endif


int main() { return fu_MAIN(); }

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
#include <fu/map.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static fu_STR f(int& g_0)
{
    g_0++;
    return "cruel world"_fu;
}

int fu_MAIN()
{
    fu_MAP<fu_STR, fu_STR> m {};
    int g = 0;
    (m.upsert("_not_hello_"_fu) = "world"_fu);
    fu_STR* _0;
    (*(_0 = &(m.upsert("hello"_fu))) ? *_0 : *_0 = f(g));
    return g - 1;
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

-----

        {
        /*
        {
            return 0; //ERR block
        }
        /*/
            {
                return 0;
            }
        }
        //*/

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }

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

-----

        {
            return 0; //ERR block
        /*
       }
        /*/
        }
        //*/

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }

-----

        {
            return 0; //ERR block
        /*
         }
        /*/
        }
        //*/

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 0;
}

#endif


int main() { return fu_MAIN(); }

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
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>

struct s_BINOP;

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    fu_MAP<fu_STR, int> P;
    explicit operator bool() const noexcept
    {
        return false
            || P
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static int& binop(s_BINOP& out_0, const fu_STR& op)
{
    return (out_0.P.upsert(op) = 7);
}

static s_BINOP setupOperators()
{
    s_BINOP out {};
    binop(out, ","_fu);
    return out;
}

static const s_BINOP BINOP = setupOperators();

static const int P_COMMA { []() -> int {
    int _0 {};
    return ((_0 = BINOP.P[","_fu]) ? _0 : fu_ASSERT());
}() };

int fu_MAIN()
{
    return P_COMMA - 7;
}

#endif


int main() { return fu_MAIN(); }

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
            items?:     SolvedNode[]; //! TYPE_recursion TYPE_resolve
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

static s_SolvedNode createDefaultInit(const s_Token& _here_0, const s_Type& type)
{
    return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token(_here_0), s_Type(type), s_ScopeIdx{} };
}

int fu_MAIN()
{
    const s_Token _here {};
    return createDefaultInit(_here, s_Type{}).target.i;
}

#endif


int main() { return fu_MAIN(); }

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

static int Scope_add(s_Scope& scope, const fu_STR& kind, const fu_STR& id, const s_Type& type, const int min, const int max, const fu_VEC<fu_STR>& arg_n, const fu_VEC<s_Type>& arg_t, const fu_VEC<s_SolvedNode>& arg_d, const s_Template& tEmplate, const s_Partial& partial)
{
    return (((((((((scope.i + kind.size()) + id.size()) + type.i) + min) + max) + arg_n.size()) + arg_t.size()) + arg_d.size()) + tEmplate.i) + partial.i;
}

int fu_MAIN()
{
    s_Scope _scope {};
    fu_STR id {};
    const s_Type t_template {};
    const int min {};
    const int max {};
    fu_VEC<fu_STR> arg_n {};
    const s_Template tEmplate {};
    return Scope_add(_scope, fu_STR{}, id, t_template, min, max, arg_n, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, tEmplate, s_Partial{});
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
    const int i = 0;
    fu_VEC<fu_STR> items = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR{} } };
    if (!(i == (items.size() - 1)))
        fu::fail("what?"_fu);

    return i;
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

static int test(const int id)
{
    return id;
}

int fu_MAIN()
{
    return int(test(0));
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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/join.h>
#include <fu/vec/split.h>

#ifndef FU_NO_FDEFs

static fu_STR path_normalize(const fu_STR& p)
{
    fu_VEC<fu_STR> path = fu::split(p, "/"_fu);
    for (int i = path.size(); i-- > 0; )
    {
        fu_STR part { path[i] };
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    for (int i = 1; i < path.size(); i++)
    {
        if (path.mutref(i) == ".."_fu)
            path.splice(--i, 2);

    };
    return fu::join(path, "/"_fu);
}

static fu_STR path_join(const fu_STR& a, const fu_STR& b)
{
    return path_normalize(((a + "/"_fu) + b));
}

int fu_MAIN()
{
    return ((path_join("hello/hey"_fu, "./../you//"_fu) == "hello/you/"_fu) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

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

            alloc(num_quads * 4, num_quads * 6);

            mut v1 = v0;

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
#include <cstdint>
#include <fu/str.h>
#include <fu/vec.h>
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

void alloc(s_MeshBuilder& mb, const int new_verts, const int new_indices)
{
    mb.verts.resize<false>(((mb.verts.size() + new_verts) * mb.vert_bytes));
    const int index_bytes = 4;
    mb.indices.resize<false>(((mb.indices.size() + new_indices) * index_bytes));
}

fu::view_mut<std::byte> setup_quads(s_MeshBuilder& mb, const int num_quads)
{
    const int b0 = mb.verts.size();
    const int v0 = mb.num_verts;
    const int i0 = mb.indices.size();
    alloc(mb, (num_quads * 4), (num_quads * 6));
    int v1 = v0;
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

static const fu_VEC<float> QUAD_VBO = fu_VEC<float> { fu_VEC<float>::INIT<32> { -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, +1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, -1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f } };

int fu_MAIN()
{
    s_MeshBuilder mb = s_MeshBuilder { fu_STR{}, fu_STR{}, (4 * ((3 + 3) + 2)), 0 };
    fu::view_assign(fu::view_of_mut(setup_quads(mb, 1), float{}), QUAD_VBO);
    return mb.num_verts - 4;
}

#endif


int main() { return fu_MAIN(); }

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

static int& target(int& _target)
{
    return _target;
}

static int& GET_mut(int& x, int& _target)
{
    return x ? x : target(_target);
}

static void checkRecursions(int& o, const int incr, int& _target)
{
    GET_mut(o, _target) += incr;
}

static int __solveStruct(int arg, int& _target)
{
    if (arg)
    {
        int& o = GET_mut(arg, _target);
        o++;
        checkRecursions(o, o, _target);
    };
    return int(arg);
}

int fu_MAIN()
{
    int _target = 0;
    return __solveStruct(1, _target) - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve FN_reopen
        fn main()
        {
            mut target = 0;
            fn GET_mut(ref x: i32) x || GET_mut(target += 1);
            return GET_mut(target) - 1;
        }

-----

#ifndef FU_NO_FDEFs

static int& GET_mut(int& target_0, int& x)
{
    return x ? x : GET_mut(target_0, (target_0 += 1));
}

int fu_MAIN()
{
    int target = 0;
    return GET_mut(target, target) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve FN_reopen
        fn main()
        {
            mut target = 0;
            fn GET_mut(ref x: i32) x || GET_mut(++target);
            return GET_mut(target) - 1;
        }

-----

#ifndef FU_NO_FDEFs

static int& GET_mut(int& target_0, int& x)
{
    return x ? x : GET_mut(target_0, ++target_0);
}

int fu_MAIN()
{
    int target = 0;
    return GET_mut(target, target) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
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

static int __solveStruct(int&, int);

#ifndef FU_NO_FDEFs

static int& GET_mut(int& target_0, int& x)
{
    return x ? x : (target_0 = __solveStruct(target_0, int((target_0 += 1))));
}

static int __solveStruct(int& target_0, int arg)
{
    int& o = GET_mut(target_0, arg);
    o += target_0;
    return int(target_0);
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct(target, 0) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve DEAD_call
        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) a || /*
                              a = A(incr(a))    /*/         // Lint should complain here,
                             (a = A(incr(a))); //*/         //  this was an honest mistake.
        fn main() { mut v = 0; return A(v) - 1; }

-----

#ifndef FU_NO_FDEFs

static int& incr(int& a)
{
    return ++a;
}

static int& A(int& a)
{
    return a ? a : (a = A(incr(a)));
}

int fu_MAIN()
{
    int v = 0;
    return A(v) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen DEAD_call
        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) a || (a = B(incr(a)));
        fn B(ref b: i32) b || (b = A(incr(b)));
        fn main() { mut v = 0; return A(v) - 1; }

-----

static int& A(int&);

#ifndef FU_NO_FDEFs

static int& incr(int& a)
{
    return ++a;
}

static int& B(int& b)
{
    return b ? b : (b = A(incr(b)));
}

static int& A(int& a)
{
    return a ? a : (a = B(incr(a)));
}

int fu_MAIN()
{
    int v = 0;
    return A(v) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen DEAD_call
        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) { ref aa = a || (a = B(incr(a))); return aa; }
        fn B(ref b: i32) { ref bb = b || (b = A(incr(b))); return bb; }
        fn main() { mut v = 0; return A(v) - 1; }

-----

static int& A(int&);

#ifndef FU_NO_FDEFs

static int& incr(int& a)
{
    return ++a;
}

static int& B(int& b)
{
    int& bb = (b ? b : (b = A(incr(b))));
    return bb;
}

static int& A(int& a)
{
    int& aa = (a ? a : (a = B(incr(a))));
    return aa;
}

int fu_MAIN()
{
    int v = 0;
    return A(v) - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen DEAD_let DEAD_code
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

static int __solveStruct(int&, int, int);

#ifndef FU_NO_FDEFs

inline static int& each_0sBg(int& arg_0, int x_0, int& cond, int)
{
    return !cond ? cond : (arg_0 += x_0);
}

static int& GET_mut(int& target_0, int& x)
{
    return x ? x : (target_0 = __solveStruct(target_0, int(target_0), 0));
}

static void checkRecursions(int& target_0, int& o, const int incr)
{
    GET_mut(target_0, o) += incr;
}

static int __solveStruct(int& target_0, int arg, const int x)
{
    each_0sBg(arg, x, arg, 0);
    if (arg)
    {
        int& o = GET_mut(target_0, arg);
        o++;
        checkRecursions(target_0, o, o);
    };
    return int(arg);
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct(target, 1, 0) - 4;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
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

static int __solveStruct(int&, int);

#ifndef FU_NO_FDEFs

inline static int& GET_mut_cBw5(int& target_0, int& x)
{
    return x ? x : (target_0 = __solveStruct(target_0, int(target_0)));
}

static void checkRecursions(int& target_0, int& o, const int incr)
{
    GET_mut_cBw5(target_0, o) += incr;
}

static int __solveStruct(int& target_0, int arg)
{
    if (arg)
    {
        int& o = GET_mut_cBw5(target_0, arg);
        o++;
        checkRecursions(target_0, o, o);
    };
    return int(arg);
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct(target, 1) - 4;
}

#endif


int main() { return fu_MAIN(); }

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
                    GET(target) /*
                        .name; /*/ .id; //*/

                return t.name;
            }

            return setSpec("hey").len - 2;
        }

-----
#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec/concat_str.h>

struct s_Overload;
struct s_Target;

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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR name;
    fu_STR id;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || id
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static s_Overload GET(const s_Target& target)
{
    return s_Overload { ("N"_fu + target.index), ("I"_fu + target.index) };
}

inline static fu_STR name_zs0j(s_Target& target)
{
    return GET(target).id;
}

static fu_STR setSpec(fu_MAP<fu_STR, s_Target>& specs_0, const fu_STR& mangle)
{
    s_Target* _0;
    s_Target& t = (*(_0 = &(specs_0.upsert(mangle))) ? *_0 : *_0 = s_Target{});
    return name_zs0j(t);
}

int fu_MAIN()
{
    fu_MAP<fu_STR, s_Target> specs {};
    return setSpec(specs, "hey"_fu).size() - 2;
}

#endif


int main() { return fu_MAIN(); }

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

                                #ifndef DEFt_each_sJgb
                                #define DEFt_each_sJgb
inline void each_sJgb(int& sum_0, const fu_VEC<int>& items, const fu_VEC<s_ScopeSkip>& scope_skip, int, const int start)
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
            sum_0 += item;
        };
        i0 = ss.end;
    };
}
                                #endif

int test(const fu_VEC<int>& items)
{
    int sum = 0;
    fu_VEC<s_ScopeSkip> ss {};
    each_sJgb(sum, items, ss, 0, sum);
    return sum;
}

int fu_MAIN()
{
    return test(fu_VEC<int>{});
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
#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec.h>

struct s_BINOP;

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    fu_MAP<fu_STR, int> PRECEDENCE;
    fu_MAP<int, bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE
            || RIGHT_TO_LEFT
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static void binop(s_BINOP& out_0, int& precedence_0, bool& rightToLeft_0, const fu_VEC<fu_STR>& ops)
{
    precedence_0++;
    (out_0.RIGHT_TO_LEFT.upsert(precedence_0) = bool(rightToLeft_0));
    for (int i = 0; i < ops.size(); i++)
        (out_0.PRECEDENCE.upsert(ops[i]) = int(precedence_0));

}

inline static s_BINOP setupOperators_U3Pf(const int P_PREFIX_UNARY)
{
    s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "|>"_fu } });
    return out;
}

static const s_BINOP BINOP = setupOperators_U3Pf(-1);

int fu_MAIN()
{
    const int precedence = BINOP.PRECEDENCE["|>"_fu];
    return int(precedence);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn each(a: [$T], fn, start?!: i32)
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

#ifndef FU_NO_FDEFs

inline static void each_hTsr(int& sum_0, const fu_VEC<int>& a, int, const int start)
{
    for (int i = start; i < a.size(); i++)
    {
        const int i_1 = a[i];
        sum_0 += i_1;
    };
}

int fu_MAIN()
{
    int sum = 0;
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<3> { 1, 2, 3 } };
    each_hTsr(sum, a, 0, sum);
    return sum - 6;
}

#endif


int main() { return fu_MAIN(); }

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

static void ScopeSkip_push(fu_VEC<int>& scope_skip)
{
    if (scope_skip)
        scope_skip.mutref(0)++;
    else
        scope_skip += 1;

}

int fu_MAIN()
{
    fu_VEC<int> scope_skip = fu_VEC<int> { fu_VEC<int>::INIT<1> { 1 } };
    ScopeSkip_push(scope_skip);
    return scope_skip.mutref(0) - 2;
}

#endif


int main() { return fu_MAIN(); }

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

static fu_STR snippet2cpp(const fu_STR& cpp)
{
    s_Context ctx = s_Context { s_Module { fu_STR(cpp) } };

    {
        s_Module& module = ctx.module;
        if (module.cpp)
            return static_cast<fu_STR&&>(module.cpp);

    };
    return fu_STR{};
}

int fu_MAIN()
{
    return snippet2cpp("1"_fu).size() - 1;
}

#endif


int main() { return fu_MAIN(); }

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

static fu_STR snippet2cpp(const fu_STR& cpp)
{
    s_Context ctx = s_Context { fu_VEC<s_Module> { fu_VEC<s_Module>::INIT<1> { s_Module { fu_STR(cpp) } } } };
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
    return snippet2cpp("1"_fu).size() - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! DEAD_code, TODO FIX no dead code here really, noticed before reopen.
        //  Perhaps we want to "undo" these markers somehow?
        //   Or have them per scope entry and discard?

        fn test(x: string) {
            // cg fail: fwd annots of the two fns where unconsting hey to "enable move",
            //          basically the decision was made in the wrong scope.
            let hey = "hey";
            fn inner(you: string) you && hey ~ you || outer("what#1");
            fn outer(arg: string) inner(arg && " " ~ arg) || inner("what#2");
            return outer(x); //! FN_recursion FN_reopen
        }

        fn main() test("you").len - 7;

-----
#include <fu/str.h>
#include <fu/vec/concat.h>

static fu_STR outer(const fu_STR&, const fu_STR&);

#ifndef FU_NO_FDEFs

static fu_STR inner(const fu_STR& hey_0, const fu_STR& you)
{
    fu_STR _0 {};
    return you && (_0 = (hey_0 + you)) ? static_cast<fu_STR&&>(_0) : outer(hey_0, "what#1"_fu);
}

static fu_STR outer(const fu_STR& hey_0, const fu_STR& arg)
{
    fu_STR _0 {};
    return (_0 = inner(hey_0, (arg ? (" "_fu + arg) : fu_STR{}))) ? static_cast<fu_STR&&>(_0) : inner(hey_0, "what#2"_fu);
}

static fu_STR test(const fu_STR& x)
{
    fu_STR hey = "hey"_fu;
    return outer(hey, x);
}

int fu_MAIN()
{
    return test("you"_fu).size() - 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Target { modid!: i32; packed!: i32; };
        pub inline fn index(a: Target) a.packed;

        //////////////////////////////////////////////////////////////////
        // TODO module autosplit, we need to generate import variations //
        //////////////////////////////////////////////////////////////////

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

static int hello(const s_CurrentFn& c)
{
    const s_Target& a = c.target;
    return a.packed;
}

int fu_MAIN()
{
    return int(hello(s_CurrentFn{}));
}

#endif


int main() { return fu_MAIN(); }

-----

        pub struct Target { modid!: i32; packed!: i32; };
        pub inline fn index(a: Target) a.packed;

-----

-----

        pub struct Target { modid!: i32; packed!: i32; };
        pub inline fn index(a: Target) a.packed;

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

static int hello(const s_CurrentFn& c)
{
    const s_Target& a = c.target;
    return a.packed;
}

int fu_MAIN()
{
    return int(hello(s_CurrentFn{}));
}

#endif


int main() { return fu_MAIN(); }

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

static s_Token consume()
{
    return s_Token { "hey"_fu };
}

int fu_MAIN()
{
    const int a = 3;
    fu_STR v = (a ? consume().value : fu_STR{});
    return v.size() - a;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct ScopeIdx { raw: i32; };
        /*
        fn thing(x: i32) x;
        /*/
        fn thing(x: i32) ScopeIdx(x);
        //*/
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

static s_ScopeIdx thing(const int x)
{
    return s_ScopeIdx { int(x) };
}

static int& hey(s_ScopeIdx& _return_scope_0, const int x)
{
    const s_ScopeIdx scope0 = thing(x);
    _return_scope_0 = scope0;
    return _return_scope_0.raw;
}

int fu_MAIN()
{
    s_ScopeIdx _return_scope {};
    return int(hey(_return_scope, 0));
}

#endif


int main() { return fu_MAIN(); }

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

#ifndef FU_NO_FDEFs

inline static int& ARR_LAST_mrln(fu_VEC<int>& a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_I28a(const fu_VEC<int>& a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<1> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu_VEC<int>::INIT<1> { 2 } };
    ARR_LAST_mrln(b) += ARR_LAST_I28a(a);
    return ARR_LAST_mrln(b) - 3;
}

#endif


int main() { return fu_MAIN(); }

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

#ifndef FU_NO_FDEFs

inline static int& ARR_LAST_mrln(fu_VEC<int>& a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_I28a(const fu_VEC<int>& a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<1> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu_VEC<int>::INIT<1> { 2 } };
    ARR_LAST_mrln(b) += ARR_LAST_I28a(a);
    return ARR_LAST_mrln(b) - 3;
}

#endif


int main() { return fu_MAIN(); }

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

static int test(s_S&& x)
{
    return int((x.i += 1));
}

int fu_MAIN()
{
    return test(s_S { -1 });
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

#ifndef FU_NO_FDEFs

inline static int& ARR_LAST_mrln(fu_VEC<int>& a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_I28a(const fu_VEC<int>& a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<1> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu_VEC<int>::INIT<1> { 2 } };
    ARR_LAST_mrln(b) += ARR_LAST_I28a(a);
    return ARR_LAST_mrln(b) - ARR_LAST_I28a(fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } });
}

#endif


int main() { return fu_MAIN(); }

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

static void test(s_RenderFrame& output)
{
    output.u_mat4_VP = s_mat4 { 1 };
}

int fu_MAIN()
{
    s_RenderFrame ret {};
    test(ret);
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
            /*
            ScopeSkip(min: -1, max: +1)
            /*/
            ScopeSkip(start: -1, end: +1)
            //*/
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

int search(const s_ScopeSkip& skip)
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

static s_mat34 inverse(const s_mat34& mat)
{
    const float idet = (1.0f / (((((((-mat.mz.x * mat.my.y) * mat.mx.z) + ((mat.my.x * mat.mz.y) * mat.mx.z)) + ((mat.mz.x * mat.mx.y) * mat.my.z)) - ((mat.mx.x * mat.mz.y) * mat.my.z)) - ((mat.my.x * mat.mx.y) * mat.mz.z)) + ((mat.mx.x * mat.my.y) * mat.mz.z)));
    const s_vec3 i_mx = s_vec3 { (idet * ((-mat.mz.y * mat.my.z) + (mat.my.y * mat.mz.z))), (idet * ((+mat.mz.y * mat.mx.z) - (mat.mx.y * mat.mz.z))), (idet * ((-mat.my.y * mat.mx.z) + (mat.mx.y * mat.my.z))) };
    const s_vec3 i_my = s_vec3 { (idet * ((+mat.mz.x * mat.my.z) - (mat.my.x * mat.mz.z))), (idet * ((-mat.mz.x * mat.mx.z) + (mat.mx.x * mat.mz.z))), (idet * ((+mat.my.x * mat.mx.z) - (mat.mx.x * mat.my.z))) };
    const s_vec3 i_mz = s_vec3 { (idet * ((-mat.mz.x * mat.my.y) + (mat.my.x * mat.mz.y))), (idet * ((+mat.mz.x * mat.mx.y) - (mat.mx.x * mat.mz.y))), (idet * ((-mat.my.x * mat.mx.y) + (mat.mx.x * mat.my.y))) };
    return s_mat34 { s_vec3(i_mx), s_vec3(i_my), s_vec3(i_mz), s_vec3 { (((mat.mo.x * -i_mx.x) + (mat.mo.y * -i_my.x)) + (mat.mo.z * -i_mz.x)), (((mat.mo.x * -i_mx.y) + (mat.mo.y * -i_my.y)) + (mat.mo.z * -i_mz.y)), (((mat.mo.x * -i_mx.z) + (mat.mo.y * -i_my.z)) + (mat.mo.z * -i_mz.z)) } };
}

int fu_MAIN()
{
    float _0 {};
    return int(((__extension__ (
    {
        const s_mat34 _ = inverse(s_mat34 { s_vec3 { 1.0f, 0.0f, 0.0f }, s_vec3 { 0.0f, 1.0f, 0.0f }, s_vec3 { 0.0f, 0.0f, 1.0f }, s_vec3{} });
        _0 = ((((((((-_.mz.x * _.my.y) * _.mx.z) + ((_.my.x * _.mz.y) * _.mx.z)) + ((_.mz.x * _.mx.y) * _.my.z)) - ((_.mx.x * _.mz.y) * _.my.z)) - ((_.my.x * _.mx.y) * _.mz.z)) + ((_.mx.x * _.my.y) * _.mz.z)));
    }), float(_0)) - 1.0f));
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
#include <cstdint>

struct s_TEA;

                                #ifndef DEF_s_TEA
                                #define DEF_s_TEA
struct s_TEA
{
    uint32_t v0;
    uint32_t v1;
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
        uint32_t sum {};
        uint32_t delta = 0x9e3779b9u;
        for (int i = 0; i < 4; i++)
        {
            sum += delta;
            tea.v0 += ((((tea.v1 << 4u) + 0xa341316cu) ^ (tea.v1 + sum)) ^ ((tea.v1 >> 5u) + 0xc8013ea4u));
            tea.v1 += ((((tea.v0 << 4u) + 0xad90777du) ^ (tea.v0 + sum)) ^ ((tea.v0 >> 5u) + 0x7e95761eu));
        };
    };
    return int((tea.v0 ^ tea.v0));
}

#endif


int main() { return fu_MAIN(); }

-----

        // Same as below, but avoids the $T call, which is also broken somehow.
        //  DONT DELETE ME after you fix the $T, its a great example of stupid codegen -
        //   we emit useless overloads for mutrefs when its clearly useless.

        //! FN_recursion FN_resolve
        fn rec_cases(a: $T)
        case ($T -> @primitive) {
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

inline static int rec_cases_U3Pf(const int a)
{
    if (a)
        return rec_cases_U3Pf((a / 2));
    else
        return int(a);

}

inline static int rec_cases_cBw5(int& a)
{
    if (a)
        return rec_cases_U3Pf((a / 2));
    else
        return int(a);

}

inline static int rec_cases_JcCf(s_X& a)
{
    if (a.i)
    {
        s_X a_1 { a };
        a_1.i /= 2;
        return rec_cases_JcCf(a_1);
    }
    else
        return rec_cases_cBw5(a.i);

}

inline static int rec_cases_UmdU(const s_X& a)
{
    if (a.i)
    {
        s_X a_1 { a };
        a_1.i /= 2;
        return rec_cases_JcCf(a_1);
    }
    else
        return rec_cases_U3Pf(a.i);

}

int fu_MAIN()
{
    return rec_cases_UmdU(s_X { 1 });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct SolvedNode {
            value: i32;
            items?: SolvedNode[]; //! TYPE_recursion TYPE_resolve
        };

        fn visitNodes(_v: &mut $V, _n: SolvedNode) {

            fn traverse(v: &mut $V, n: SolvedNode) {
                v.visit(n);
                for (mut i = 0; i < n.items.len; i++)
                    traverse(v, n.items[i]); //! FN_recursion FN_resolve
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
            // Initially noticed it because visitNodes tried to change its sighash
            mut cpy = tree; if (cpy) {} // <- but this fails cleanly when tree is nocopy

            mut myVisitor: Visitor;
            myVisitor.visitNodes(tree);
            return myVisitor.sum - 15;
        };


-----
#include <fu/vec.h>

struct s_SolvedNode;
struct s_Visitor;

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

static void visit(s_Visitor& v, const s_SolvedNode& node)
{
    v.sum += node.value;
}

static void traverse(s_Visitor& v, const s_SolvedNode& n)
{
    visit(v, n);
    for (int i = 0; i < n.items.size(); i++)
        traverse(v, n.items[i]);

}

inline static void visitNodes_7vqN(s_Visitor& _v, const s_SolvedNode& _n)
{
    traverse(_v, _n);
}

int fu_MAIN()
{
    s_SolvedNode tree = s_SolvedNode { 3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { s_SolvedNode { 5, fu_VEC<s_SolvedNode>{} }, s_SolvedNode { 7, fu_VEC<s_SolvedNode>{} } } } };
    s_SolvedNode cpy { tree };
    if (cpy)
    {
    };
    s_Visitor myVisitor {};
    visitNodes_7vqN(myVisitor, tree);
    return myVisitor.sum - 15;
}

#endif


int main() { return fu_MAIN(); }

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
            return 1; //! DEAD_code
        }

        fn main(): i32 {
            let x = throw_hey()
                catch err
                    return err.len - 3;

            return x || 7;
        }

-----
#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static int throw_hey()
{
    fu::fail("hey"_fu);
}

int fu_MAIN()
{
    int x = {};
    try
    {
        x = throw_hey();
    }
    catch (const std::exception& o_0)
    {
        fu_STR err = fu_TO_STR(o_0.what());

        return err.size() - 3;
    }
;
    return x ? int(x) : 7;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn throw_hey() {
            throw("hey");
        }

        fn main(): i32 {
            let x = throw_hey() //! DEAD_code
                catch err
                    return err.len - 3;

            return x || 7;
        }

-----
#include <fu/never.h>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

[[noreturn]] static fu::never throw_hey()
{
    fu::fail("hey"_fu);
}

int fu_MAIN()
{

    try
    {
        throw_hey();
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

-----

        fn throw_hey(): i32 {
            throw("hey");
            return 1; //! DEAD_code
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

static int throw_hey()
{
    fu::fail("hey"_fu);
}

int fu_MAIN()
{

    try
    {
        return throw_hey();
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
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static const fu_STR& next(const fu_VEC<fu_STR>& args_0, int& idx_0)
{
    const int i = idx_0++;
    if (i < args_0.size())
        return args_0[i];

    return fu::Default<fu_STR>::value;
}

static int cli_handle(const fu_VEC<fu_STR>& args)
{
    int idx = 0;
    return next(args, idx).size() - 5;
}

int fu_MAIN()
{
    return cli_handle(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "hello"_fu, "you"_fu } });
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

static int test()
{
    int x = 5;
    return x;
}

int fu_MAIN()
{
    return test() - 5;
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

static s_Test test()
{
    s_Test x = s_Test { 5 };
    return x;
}

int fu_MAIN()
{
    return test().i - 5;
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

static s_Test test()
{
    s_Test x = s_Test { 5, -5 };
    return x;
}

int fu_MAIN()
{
    return test().a + test().b;
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

static const s_X& ref2arg(const s_X& x)
{
    return x;
}

int fu_MAIN()
{
    const s_X NOTREF { ref2arg(s_X { 101 }) };
    return NOTREF.x - 101;
}

#endif


int main() { return fu_MAIN(); }

-----

        /*
        nocopy
        /*/
        //*/
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

static s_NoCopy& retmutref(s_NoCopy& nc)
{
    return nc;
}

int fu_MAIN()
{
    s_NoCopy nc {};
    retmutref(retmutref(nc)).i++;
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

static s_NoCopy& mutrefself(s_NoCopy& nc)
{
    nc.i++;
    return nc;
}

int fu_MAIN()
{
    s_NoCopy nc {};
    mutrefself(mutrefself(nc));
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

static const s_NoCopy& retarg(const s_NoCopy& a)
{
    return a;
}

static const s_NoCopy& retargs_if(const s_NoCopy& a, const s_NoCopy& b)
{
    return (a.i ? b : a);
}

static const s_NoCopy& retargs_and(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? b : fu::Default<s_NoCopy>::value;
}

static const s_NoCopy& retargs_or(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? a : b;
}

int fu_MAIN()
{
    const s_NoCopy a {};
    const s_NoCopy b {};
    return int(retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i);
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

static const s_NoCopy& retarg(const s_NoCopy& a)
{
    return a;
}

static const s_NoCopy& retargs_if(const s_NoCopy& a, const s_NoCopy& b)
{
    return (a.i ? b : a);
}

static const s_NoCopy& retargs_and(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? b : fu::Default<s_NoCopy>::value;
}

static const s_NoCopy& retargs_or(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? a : b;
}

int fu_MAIN()
{
    const s_NoCopy a {};
    return int(retarg(retargs_if(a, retargs_and(a, retargs_or(a, s_NoCopy{})))).i);
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

inline static s_NoCopy& retarg_Z6XS(s_NoCopy& a)
{
    return a;
}

inline static s_NoCopy& retargs_if_kyhe(s_NoCopy& a, s_NoCopy& b)
{
    return (a.i ? b : a);
}

inline static s_NoCopy& retargs_and_kyhe(s_NoCopy& a, s_NoCopy& b)
{
    return !a ? a : b;
}

inline static s_NoCopy& retargs_or_kyhe(s_NoCopy& a, s_NoCopy& b)
{
    return a ? a : b;
}

int fu_MAIN()
{
    s_NoCopy a {};
    s_NoCopy b {};
    retarg_Z6XS(retargs_if_kyhe(a, retargs_and_kyhe(a, retargs_or_kyhe(a, b)))).i++;
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

static int as_blocks_after(const int x)
{
    int zero = 0;
    if (x > 2)
    {
        for (int i = 0; i < x; i++)
            zero = (i + (i * zero));

    };
    return zero;
}

int fu_MAIN()
{
    return as_blocks_after(2);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(x: i32) {
            let c = [10007];
            let a = [7, 11];
            let b = {
                BRK: {
                    if (x & 2) break :BRK c;
                    if (x & 1) break :BRK [ x ]; // a val
                    a; // a ref
                }
            };
            return a[0] - b[0] * a[1];
        }

        fn main() 1.test + 4;

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static int test(const int x)
{
    fu_VEC<int> c = fu_VEC<int> { fu_VEC<int>::INIT<1> { 10007 } };
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<2> { 7, 11 } };
    fu_VEC<int> L_00_v {};
    fu_VEC<int> b = (__extension__ (
    { {
        const fu_VEC<int>* _0;
        L_00_v = (fu_VEC<int>((__extension__ (
        {
            if (x & 2)
                { L_00_v = fu_VEC<int>(c); goto L_00; };

            if (x & 1)
                { L_00_v = fu_VEC<int> { fu_VEC<int>::INIT<1> { int(x) } }; goto L_00; };

            _0 = &(a);
        }), *_0)));
      } L_00:;
    }), static_cast<fu_VEC<int>&&>(L_00_v));
    return a[0] - (b[0] * a[1]);
}

int fu_MAIN()
{
    return test(1) + 4;
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

static s_Test test(s_Test&& x)
{
    x.i.mutref(0) += x.i.mutref(1);
    return static_cast<s_Test&&>(x);
}

int fu_MAIN()
{
    s_Test s = s_Test { fu_VEC<int> { fu_VEC<int>::INIT<2> { 1, 2 } } };
    return test(s_Test(s)).i[0] - (s.i[0] * 3);
}

#endif


int main() { return fu_MAIN(); }

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

static s_Test test(s_Test&& x)
{
    x.i.mutref(0) += x.i.mutref(1);
    return static_cast<s_Test&&>(x);
}

int fu_MAIN()
{
    s_Test s = s_Test { fu_VEC<int> { fu_VEC<int>::INIT<2> { 1, 2 } } };
    return test(s_Test(s)).i[0] - (s.i[0] * 3);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn compile_snippets(x: string) x.find('a') && throw("throw#1");
        fn ZERO(x: string) x.find('b') && throw("throw#2");

        fn FAIL(x: string): string {
            let ctx = compile_snippets(x) && "hey"
                catch e return ZERO(x) && e;

            return ctx;
        }

        fn main() FAIL("a").len;

-----
#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/find.h>

#ifndef FU_NO_FDEFs

static int compile_snippets(const fu_STR& x)
{
    int _0 {};
    return !(_0 = fu::lfind(x, std::byte('a'), 0)) ? _0 : fu::fail("throw#1"_fu);
}

static int ZERO(const fu_STR& x)
{
    int _0 {};
    return !(_0 = fu::lfind(x, std::byte('b'), 0)) ? _0 : fu::fail("throw#2"_fu);
}

static fu_STR FAIL(const fu_STR& x)
{
    fu_STR ctx = {};
    try
    {
        ctx = (compile_snippets(x) ? "hey"_fu : fu_STR{});
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return fu_STR((ZERO(x) ? e : fu::Default<fu_STR>::value));
    }
;
    return ctx;
}

int fu_MAIN()
{
    return FAIL("a"_fu).size();
}

#endif


int main() { return fu_MAIN(); }

-----

        // The thing below but shorter:
        //  the '|| throw' introduces a bullshit lambda during codegen,
        //   which misreturns a dangling reference to its own frame.
        fn test(x: string) [x][0] || throw("nope!");
        fn main() "what".test.len - 4;

-----
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static fu_STR test(const fu_STR& x)
{
    const fu_STR* _0;
    return fu_STR((*(_0 = &(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(x) } }[0])) ? *_0 : fu::fail("nope!"_fu)));
}

int fu_MAIN()
{
    return test("what"_fu).size() - 4;
}

#endif


int main() { return fu_MAIN(); }

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
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>

struct s_Node;
struct s_SolvedNode;

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

#ifndef FU_NO_FDEFs

inline static const s_SolvedNode& only_S5gz(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}

static fu_VEC<s_SolvedNode> solveNodes(const fu_VEC<s_Node>& n)
{
    fu_VEC<s_SolvedNode> r {};
    for (int i = 0; i < n.size(); i++)
        r += s_SolvedNode { fu_STR(n[i].kind) };

    return r;
}

static s_SolvedNode solveDeclExpr(const s_Node& n)
{
    const s_SolvedNode* _0;
    return s_SolvedNode((*(_0 = &(only_S5gz(solveNodes(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(n) } })))) ? *_0 : fu::fail("!only"_fu)));
}

int fu_MAIN()
{
    return solveDeclExpr(s_Node { "a"_fu }).kind.size() - 1;
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

static int incr_x(int& x_0)
{
    return x_0++;
}

static void incr_x_to_1(int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);

    incr_x(x);
}

int fu_MAIN()
{
    int x = 0;
    incr_x_to_1(x);
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

static int incr_x(int& x_0)
{
    return x_0++;
}

static void incr_x_to_1(int& x_0)
{
    if (x_0)
        fu::fail("this reports return t_never"_fu);

    incr_x(x_0);
}

int fu_MAIN()
{
    int x = 0;
    incr_x_to_1(x);
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

static int visit(int& x_0, const int item)
{
    if (item)
        return int(item);

    return x_0++;
}

inline static int apply_Gmz5(int& x_0, int, const int v)
{
    return visit(x_0, v);
}

static void scope_using(int& x_0, const int via)
{
    if (x_0)
        fu::fail("this reports return t_never"_fu);

    apply_Gmz5(x_0, 0, via);
}

int fu_MAIN()
{
    int x = 0;
    scope_using(x, x);
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
#include <cstdint>

#ifndef FU_NO_FDEFs

static const uint8_t x = uint8_t(1u);

int fu_MAIN()
{
    return 1 - int(x);
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

static bool gt0(const float x)
{
    return x > 0.0f;
}

int fu_MAIN()
{
    return (gt0(float(1)) ? 0 : 1);
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

static s_Hey hey()
{
    return s_Hey { 1.0f };
}

int fu_MAIN()
{
    return int(hey().x) - 1;
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

static s_vec3 test(const int i)
{
    return s_vec3 { float((i - 2)), 0.0f, 1.0f };
}

int fu_MAIN()
{
    const s_vec3 v = test(1);
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

static s_vec3 test(const float f)
{
    return s_vec3 { float(f), 0.0f, -1.0f };
}

int fu_MAIN()
{
    const s_vec3 v = test(-1.0f);
    return int((v.x - v.z));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn hey(i: f32) i.f32 + 0.5;
        fn main() hey(1).i32 - 1;

-----

#ifndef FU_NO_FDEFs

static float hey(const float i)
{
    return float(i) + 0.5f;
}

int fu_MAIN()
{
    return int(hey(1.0f)) - 1;
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
#include <cstdint>

#ifndef FU_NO_FDEFs

static float lin2srgb(const float l)
{
    return ((l <= 0.0031308f) ? (l * 12.92f) : ((1.055f * std::pow(l, (1.0f / float(2.4)))) - 0.055f));
}

static uint32_t lin255(const float v)
{
    return uint32_t((std::min(std::max(lin2srgb(v), 0.0f), 1.0f) * 255.99f));
}

int fu_MAIN()
{
    return int((lin255(1.0f) - 255u));
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
    s_vec3 _0 {};
    return int(((__extension__ (
    {
        const float a = 1.0f;
        const s_vec3 b = s_vec3 { 1.0f, 0.0f, 0.0f };
        _0 = (s_vec3 { (a / b.x), (a / b.y), (a / b.z) });
    }), s_vec3(_0)).x - 1.0f));
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
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<float> QUAD_DATA = fu_VEC<float> { fu_VEC<float>::INIT<54> { -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, +1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f } };

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
#include <cstdint>

#ifndef FU_NO_FDEFs

static uint8_t test(const bool a)
{
    return (a ? uint8_t(1u) : uint8_t(0u));
}

int fu_MAIN()
{
    return int(test(false));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: bool): u8 = a && 1;

        fn main() test(false).i32;

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

static uint8_t test(const bool a)
{
    return a ? uint8_t(1u) : uint8_t{};
}

int fu_MAIN()
{
    return int(test(false));
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
#include <cstdint>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_A_u8
                                #define DEF_A_u8
inline const uint8_t A_u8 = uint8_t(0x0u);
                                #endif

static uint8_t ATTRIB(const uint8_t type, const int count, const bool srgb)
{
    return ((type & uint8_t(0x3u)) | (uint8_t(count) << uint8_t(2u))) | (srgb ? uint8_t(0x80u) : uint8_t{});
}

int fu_MAIN()
{
    return int(ATTRIB(A_u8, 4, false)) - 16;
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

s_RenderFrame APP_renderFrame(const s_RenderFrame_in& args)
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
#include <cstdint>
#include <fu/str.h>

#ifndef FU_NO_FDEFs

static bool leadingDigit(const fu_STR& name)
{
    return (uint8_t(name[0]) - uint8_t(std::byte('0'))) < uint8_t(10u);
}

int fu_MAIN()
{
    return int(leadingDigit("hello"_fu));
}

#endif


int main() { return fu_MAIN(); }

-----

        type Test = i32[];
        fn yo(t: Test) t[0] + t[1];
        fn main() yo([-1, +1]);

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static int yo(const fu_VEC<int>& t)
{
    return t[0] + t[1];
}

int fu_MAIN()
{
    return yo(fu_VEC<int> { fu_VEC<int>::INIT<2> { -1, +1 } });
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

inline static int if_first_I28a(const fu_VEC<int>& a)
{
    return a ? a[0] : fu::Default<int>::value;
}

static int hello(const fu_VEC<int>& a)
{
    return if_first_I28a(a);
}

int fu_MAIN()
{
    return hello(fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } }) - 3;
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

inline static int if_first_I28a(const fu_VEC<int>& a)
{
    return a ? a[0] : fu::Default<int>::value;
}

static int hello(const fu_VEC<int>& a)
{
    return if_first_I28a(a);
}

int fu_MAIN()
{
    return hello(fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } }) - 3;
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

inline static int if_first_I28a(const fu_VEC<int>& a)
{
    return a ? a[0] : fu::Default<int>::value;
}

inline static const fu_VEC<int>& if_first_ggNI(const fu_VEC<fu_VEC<int>>& a)
{
    return a ? a[0] : fu::Default<fu_VEC<int>>::value;
}

static fu_VEC<fu_VEC<int>> list()
{
    return fu_VEC<fu_VEC<int>> { fu_VEC<fu_VEC<int>>::INIT<1> { fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } } } };
}

static int hello()
{
    return int(if_first_I28a(if_first_ggNI(list())));
}

int fu_MAIN()
{
    return hello() - 3;
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

inline static int if_first_I28a(const fu_VEC<int>& a)
{
    return a ? a[0] : fu::Default<int>::value;
}

inline static const fu_VEC<int>& if_first_ggNI(const fu_VEC<fu_VEC<int>>& a)
{
    return a ? a[0] : fu::Default<fu_VEC<int>>::value;
}

static fu_VEC<fu_VEC<int>> list()
{
    return fu_VEC<fu_VEC<int>> { fu_VEC<fu_VEC<int>>::INIT<1> { fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } } } };
}

static int hello()
{
    return int(if_first_I28a(if_first_ggNI(list())));
}

int fu_MAIN()
{
    return hello() - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        let arr = [1, 2];
        fn eq(a: i32[], b: i32[]) a == b;
        fn main() eq(arr, arr) ? 0 : 1;

-----
#include <fu/vec.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<int> arr = fu_VEC<int> { fu_VEC<int>::INIT<2> { 1, 2 } };

static bool eq(const fu_VEC<int>& a, const fu_VEC<int>& b)
{
    return a == b;
}

int fu_MAIN()
{
    return (eq(arr, arr) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        let arr = [1, 2];
        fn eq(a: $T[], b: $T[]) a == b;
        fn main() eq(arr, arr) ? 0 : 1;

-----
#include <fu/vec.h>
#include <fu/vec/cmp.h>

#ifndef FU_NO_FDEFs

static const fu_VEC<int> arr = fu_VEC<int> { fu_VEC<int>::INIT<2> { 1, 2 } };

inline static bool eq_hoNZ(const fu_VEC<int>& a, const fu_VEC<int>& b)
{
    return a == b;
}

int fu_MAIN()
{
    return (eq_hoNZ(arr, arr) ? 0 : 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(hey: [i32])
            hey[0] + hey[1];

        fn main()
            test([-1, +1]);

-----
#include <fu/vec.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static int test(fu::view<int> hey)
{
    return hey[0] + hey[1];
}

int fu_MAIN()
{
    return test(fu_VEC<int> { fu_VEC<int>::INIT<2> { -1, +1 } });
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

static int& test(fu::view_mut<int> hey)
{
    return (hey.mutref(0) += hey.mutref(1));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu_VEC<int>::INIT<2> { -1, +1 } };
    return int(test(hey));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(i: i32) [ i, i + 1 ];
        fn main() test(0)[1] - 1;

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

static fu_VEC<int> test(const int i)
{
    return fu_VEC<int> { fu_VEC<int>::INIT<2> { int(i), (i + 1) } };
}

int fu_MAIN()
{
    return test(0)[1] - 1;
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
#include <cstddef>
#include <cstdint>
#include <fu/str.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static uint32_t test(const fu_STR& hey)
{
    return fu::view_of(hey, uint32_t{})[0];
}

int fu_MAIN()
{
    fu_STR hey = fu_STR { fu_STR::INIT<4> { std::byte(1), std::byte(1), std::byte(1), std::byte(1) } };
    return int((test(hey) - 0x1010101u));
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

static int test(fu::view<int> hey)
{
    return hey[0] + hey[1];
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu_VEC<int>::INIT<3> { 7, -1, +1 } };
    return test(fu::get_view(hey, 1, 3));
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

static int& test(fu::view_mut<int> hey)
{
    return (hey.mutref(0) += hey.mutref(1));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu_VEC<int>::INIT<3> { 7, -1, +1 } };
    return int(test(fu::get_view_mut(hey, 1, 3)));
}

#endif


int main() { return fu_MAIN(); }

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
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static void test(fu::view_mut<int> hey)
{
    fu::view_assign(hey, fu_VEC<int> { fu_VEC<int>::INIT<2> { 2, -3 } });
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu_VEC<int>::INIT<3> { 1, 0, 0 } };
    test(fu::get_view_mut(hey, 1, 3));
    return (hey.mutref(0) + hey.mutref(1)) + hey.mutref(2);
}

#endif


int main() { return fu_MAIN(); }

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
#include <cstdint>
#include <fu/vec.h>
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

static void test(fu::view_mut<s_Hey> out)
{
    fu::view_assign(fu::view_of_mut(out, uint8_t{}), fu_VEC<uint8_t> { fu_VEC<uint8_t>::INIT<4> { uint8_t(1), uint8_t(1), uint8_t(1), uint8_t(1) } });
}

int fu_MAIN()
{
    fu_VEC<s_Hey> a = fu_VEC<s_Hey> { fu_VEC<s_Hey>::INIT<1> { s_Hey{} } };
    test(a);
    return a.mutref(0).i - 16843009;
}

#endif


int main() { return fu_MAIN(); }

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

static void test(fu::view_mut<int> x, fu::view<s_Hey> y)
{
    fu::view_assign(x, fu::view_of(y, int{}));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<1> { 0 } };
    test(a, fu_VEC<s_Hey> { fu_VEC<s_Hey>::INIT<1> { s_Hey { 13 } } });
    return a.mutref(0) - 13;
}

#endif


int main() { return fu_MAIN(); }

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
    fu_VEC<int> a = fu_VEC<int> { fu_VEC<int>::INIT<1> { 0 } };
    fu::view_assign(a, fu::view_of(fu_VEC<s_Hey> { fu_VEC<s_Hey>::INIT<1> { s_Hey { 13 } } }, int{}));
    return a.mutref(0) - 13;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: [byte], b?: [byte]) a == b;
        fn main() test("") ? 0 : 1;

-----
#include <cstdint>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

static bool test(fu::view<std::byte> a, fu::view<std::byte> b)
{
    return a == b;
}

int fu_MAIN()
{
    return (test(fu_STR{}, fu::view<std::byte>{}) ? 0 : 1);
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
    fu_VEC<s_Hey> a = fu_VEC<s_Hey> { fu_VEC<s_Hey>::INIT<2> { s_Hey { -1 }, s_Hey { +1 } } };
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

static s_Hey test()
{
    return s_Hey { 0 };
}

int fu_MAIN()
{
    return test().i;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test {
        /*
            a: i32;
        /*/
            a?: i32;
        //*/
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
        /*
            a: i32;
        /*/
            a?: i32;
        //*/
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
            items?: Node[]; //! TYPE_recursion TYPE_resolve
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

static void rec_copy(s_Node& a)
{
    a = a.items[0];
}

int fu_MAIN()
{
    s_Node a = s_Node { fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node { fu_VEC<s_Node>{}, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node{} } } } } }, fu_VEC<s_Node>{} };
    rec_copy(a);
    return a.stuff.size() - 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: i32, b!: i32 = 1) a + b;
        return test(-1);

-----

#ifndef FU_NO_FDEFs

static int test(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test(-1, 1);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: i32, b!: i32 = 1) a + b;
        /*
        return test(-2, +2);
        /*/
        return test(-2, b: +2);
        //*/

-----

#ifndef FU_NO_FDEFs

static int test(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test(-2, +2);
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a: i32; b!: i32; };
        fn test(t: Test) t.a + t.b;
        /*
        return Test(-2, +2).test;
        /*/
        return Test(-2, b: +2).test;
        //*/

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

static int test(const s_Test& t)
{
    return t.a + t.b;
}

int fu_MAIN()
{
    return test(s_Test { -2, +2 });
}

#endif


int main() { return fu_MAIN(); }

-----

        struct Test { a?: i32; b?!: i32; };
        fn test(t: Test) t.a + t.b;
        /*
        return Test(-2, +2).test;
        /*/
        return Test(b: +2).test - 2;
        //*/

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

static int test(const s_Test& t)
{
    return t.a + t.b;
}

int fu_MAIN()
{
    return test(s_Test { 0, +2 }) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        let _precedence = 0;
        fn parseExpression(p1 = _precedence, mode! = 0) p1 + mode;
        fn main() parseExpression();

-----

#ifndef FU_NO_FDEFs

static const int _precedence = 0;

static int parseExpression(const int p1, const int mode)
{
    return p1 + mode;
}

int fu_MAIN()
{
    return parseExpression(_precedence, 0);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn A(x!: i32 = 0) x;
        fn B(x: i32 = 0) A(:x);
        fn main() A + B;

-----

#ifndef FU_NO_FDEFs

static int A(const int x)
{
    return x;
}

static int B(const int x)
{
    return A(x);
}

int fu_MAIN()
{
    return A(0) + B(0);
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
                + a2o1(a : 1, /*
                              c
                              /*/
                              b
                              //*/
                               ?: 2) *  10000   //  30000
                + a2o1(a : 1)        * 100000   // 100000
                                // ----------------------
                                     - 133310;

-----

#ifndef FU_NO_FDEFs

static int a0o0()
{
    return 0;
}

static int a1o0(const int a)
{
    return a;
}

static int a2o1(const int a, const int b)
{
    return a + b;
}

static int a2o2(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return ((((((a0o0() * 1) + (a1o0(1) * 10)) + (a2o1(1, 2) * 100)) + (a2o2(1, 2) * 1000)) + (a2o1(1, 2) * 10000)) + (a2o1(1, 0) * 100000)) - 133310;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i8 =
            /*
            128
            /*/
            127
            //*/
            ;

            return (ret - 100).i32 - 27;
        }

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int8_t ret = int8_t(127);
    return int((ret - int8_t(100))) - 27;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i16 =
            /*
            32768
            /*/
            32767
            //*/
            ;

            return (ret - 32700).i32 - 67;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const short ret = short(32767);
    return int((ret - short(32700))) - 67;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i32 =
            /*
            2147483648
            /*/
            2147483647
            //*/
            ;

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

        fn main() {
            let ret: i64 =
            /*
            9223372036854775808
            /*/
            9223372036854775807
            //*/
            ;

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
            /*
            -129
            /*/
            -128
            //*/
            ;

            return (ret + 100).i32 + 28;
        }

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const int8_t ret = int8_t(-128);
    return int((ret + int8_t(100))) + 28;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i16 =
            /*
            -32769
            /*/
            -32768
            //*/
            ;

            return (ret + 32700).i32 + 68;
        }

-----

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const short ret = short(-32768);
    return int((ret + short(32700))) + 68;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: i32 =
            /*
            -2147483649
            /*/
            -2147483648
            //*/
            ;

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

        fn main() {
            let ret: i64 =
            /*
            -9223372036854775809
            /*/
            -9223372036854775808
            //*/
            ;

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
            /*
            256
            /*/
            255
            //*/
            ;

            return (ret - 0xff).i32;
        }

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const uint8_t ret = uint8_t(255u);
    return int((ret - uint8_t(0xffu)));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: u16 =
            /*
            65536
            /*/
            65535
            //*/
            ;

            return (ret - 0xffff).i32;
        }

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const uint16_t ret = uint16_t(65535u);
    return int((ret - uint16_t(0xffffu)));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: u32 =
            /*
            4294967296
            /*/
            4294967295
            //*/
            ;

            return (ret - 0xffffffff).i32;
        }

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const uint32_t ret = 4294967295u;
    return int((ret - 0xffffffffu));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn main() {
            let ret: u64 =
            /*
            18446744073709551616
            /*/
            18446744073709551615
            //*/
            ;

            return (ret - 0xffffffffffffffff).i32;
        }

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    const uint64_t ret = 18446744073709551615ull;
    return int((ret - 0xffffffffffffffffull));
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

                                #ifndef DEFt_set_once_4KmR
                                #define DEFt_set_once_4KmR
inline bool set_once_4KmR(uint64_t& entry, const int bit)
{
    const uint64_t mask = (1ull << uint64_t(bit));
    if (entry & mask)
        return false;

    entry |= mask;
    return true;
}
                                #endif

int fu_MAIN()
{
    uint64_t entry {};
    const bool a = set_once_4KmR(entry, 32);
    const bool b = set_once_4KmR(entry, 32);
    return ((a && !b) ? 0 : 101);
}

#endif


int main() { return fu_MAIN(); }

-----

        /*
        /*/
        pub
        //*/
        fn hello() 3;

-----

#ifndef FU_NO_FDEFs

int hello()
{
    return 3;
}

#endif

-----

        /*
        /*/
        pub
        //*/
        fn hello() 3;

        import _0;
        fn main() 6 - hello * 2;

-----

int hello();

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return 6 - (hello() * 2);
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
    int _0 {};
    return (__extension__ (
    {
        const s_Hey h = s_Hey { 1 };
        _0 = ((h.i + 2));
    }), int(_0)) - 3;
}

#endif


int main() { return fu_MAIN(); }

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
    int _0 {};
    return (__extension__ (
    {
        const s_Hey h = s_Hey { 1 };
        _0 = ((h.i + 2));
    }), int(_0)) - 3;
}

#endif


int main() { return fu_MAIN(); }

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
    int _0 {};
    return (__extension__ (
    {
        const s_Hey h = s_Hey { 1 };
        _0 = ((h.i + 2));
    }), int(_0)) - 3;
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

s_Hey init3()
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

s_Hey init3();

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
    int _0 {};
    return (__extension__ (
    {
        const s_Hey h = init3();
        _0 = ((h.you.i + 7));
    }), int(_0)) - 10;
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

float determinant(const s_mat4& _)
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

float determinant(const s_mat4&);

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
    const s_mat4 m44 = s_mat4 { float(m34.mx.x), float(m34.mx.y), float(m34.mx.z), 0.0f, float(m34.my.x), float(m34.my.y), float(m34.my.z), 0.0f, float(m34.mz.x), float(m34.mz.y), float(m34.mz.z), 0.0f, float(m34.mo.x), float(m34.mo.y), float(m34.mo.z), 1.0f };
    return int(determinant(m44)) - 1;
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

int _0(const int i)
{
    return i + 1;
}

#endif

-----

        pub fn _0(i: i32) i + 1;

        fn main() (-1).::_0;

-----

int _0(int);

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return _0(-1);
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

                                #ifndef DEFt_add_7gVc
                                #define DEFt_add_7gVc
inline void add_7gVc(fu_VEC<int>& to, const int item)
{
    for (int i = 0; i < to.size(); i++)
    {
        if ((to.mutref(i) >= item))
        {
            if (to.mutref(i) != item)
                to.insert(i, item);

            return;
        };
    };
    to.push(item);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu_VEC<int>::INIT<3> { 1, 2, 3 } };
    add_7gVc(x, 3);
    if (x.size() != 3)
        return 33;

    add_7gVc(x, 4);
    return x.size() - x.mutref(3);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub let pad0 = 0; pub let pad1 = 1; pub let pad2 = 2; pub let pad3 = 3; pub let pad4 = 4; pub let pad5 = 5; pub let pad6 = 6; pub let pad7 = 7; pub let pad8 = 8; pub let pad9 = 9;
        pub let PAD0 = 0; pub let PAD1 = 1; pub let PAD2 = 2; pub let PAD3 = 3; pub let PAD4 = 4; pub let PAD5 = 5; pub let PAD6 = 6; pub let PAD7 = 7; pub let PAD8 = 8; pub let PAD9 = 9;

        pub let A = "hello";
        pub let B = "world";

-----
#include <fu/str.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_pad0
                                #define DEF_pad0
inline const int pad0 = 0;
                                #endif

                                #ifndef DEF_pad1
                                #define DEF_pad1
inline const int pad1 = 1;
                                #endif

                                #ifndef DEF_pad2
                                #define DEF_pad2
inline const int pad2 = 2;
                                #endif

                                #ifndef DEF_pad3
                                #define DEF_pad3
inline const int pad3 = 3;
                                #endif

                                #ifndef DEF_pad4
                                #define DEF_pad4
inline const int pad4 = 4;
                                #endif

                                #ifndef DEF_pad5
                                #define DEF_pad5
inline const int pad5 = 5;
                                #endif

                                #ifndef DEF_pad6
                                #define DEF_pad6
inline const int pad6 = 6;
                                #endif

                                #ifndef DEF_pad7
                                #define DEF_pad7
inline const int pad7 = 7;
                                #endif

                                #ifndef DEF_pad8
                                #define DEF_pad8
inline const int pad8 = 8;
                                #endif

                                #ifndef DEF_pad9
                                #define DEF_pad9
inline const int pad9 = 9;
                                #endif

                                #ifndef DEF_PAD0
                                #define DEF_PAD0
inline const int PAD0 = 0;
                                #endif

                                #ifndef DEF_PAD1
                                #define DEF_PAD1
inline const int PAD1 = 1;
                                #endif

                                #ifndef DEF_PAD2
                                #define DEF_PAD2
inline const int PAD2 = 2;
                                #endif

                                #ifndef DEF_PAD3
                                #define DEF_PAD3
inline const int PAD3 = 3;
                                #endif

                                #ifndef DEF_PAD4
                                #define DEF_PAD4
inline const int PAD4 = 4;
                                #endif

                                #ifndef DEF_PAD5
                                #define DEF_PAD5
inline const int PAD5 = 5;
                                #endif

                                #ifndef DEF_PAD6
                                #define DEF_PAD6
inline const int PAD6 = 6;
                                #endif

                                #ifndef DEF_PAD7
                                #define DEF_PAD7
inline const int PAD7 = 7;
                                #endif

                                #ifndef DEF_PAD8
                                #define DEF_PAD8
inline const int PAD8 = 8;
                                #endif

                                #ifndef DEF_PAD9
                                #define DEF_PAD9
inline const int PAD9 = 9;
                                #endif

                                #ifndef DEF_A
                                #define DEF_A
inline const fu_STR A = "hello"_fu;
                                #endif

                                #ifndef DEF_B
                                #define DEF_B
inline const fu_STR B = "world"_fu;
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
#include <fu/str.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_A
                                #define DEF_A
inline const fu_STR A = "hello"_fu;
                                #endif

                                #ifndef DEF_B
                                #define DEF_B
inline const fu_STR B = "world"_fu;
                                #endif

static int test(const int i)
{
    const fu_STR& v = ((i & 1) ? A : B);
    return v.size();
}

int fu_MAIN()
{
    return test(0) - test(1);
}

#endif


int main() { return fu_MAIN(); }

-----

        pub fn clone(a: $T)
        case ($T -> @copy) a;
        case ($T -> $T) {
            mut res: $T;
            for (fieldname i: $T) res.i = a.i.clone();
            return res;
        }

-----

-----

        pub fn clone(a: $T)
        case ($T -> @copy) a;
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

                                #ifndef DEFt_clone_I28a
                                #define DEFt_clone_I28a
inline const fu_VEC<int>& clone_I28a(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_U3Pf
                                #define DEFt_clone_U3Pf
inline int clone_U3Pf(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_zycA
                                #define DEFt_clone_zycA
inline s_Scope clone_zycA(const s_Scope& a)
{
    s_Scope res {};
    res.x = clone_U3Pf(a.x);
    return res;
}
                                #endif

                                #ifndef DEFt_clone_kdfs
                                #define DEFt_clone_kdfs
inline s_ModuleOutputs clone_kdfs(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_I28a(a.deps);
        res.scope = clone_zycA(a.scope);
    };
    return res;
}
                                #endif

int test(const s_ModuleOutputs& a)
{
    s_ModuleOutputs b = clone_kdfs(a);
    return a.deps.size() - b.deps.size();
}

int fu_MAIN()
{
    return test(s_ModuleOutputs{});
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
        for (int i_1 = 0; i_1 < 10; i_1++)
            return i_1;

        return 1;
    };
    return 1;
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

static int test(const s_HasInt& s)
{
    const int i = s.i;
    return i;
}

int fu_MAIN()
{
    return test(s_HasInt { -1 }) + 1;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(implicit x: i32): &i32 = x;
        fn main() test(3) - 3;

-----

#ifndef FU_NO_FDEFs

static int test(const int x)
{
    return x;
}

int fu_MAIN()
{
    return test(3) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(implicit x: i32): &i32 {
            fn inner() x;
            return inner;
        }

        fn main() test(3) - 3;

-----

#ifndef FU_NO_FDEFs

static int inner(int x_0)
{
    return x_0;
}

static int test(const int x)
{
    return inner(x);
}

int fu_MAIN()
{
    return test(3) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct I { v: i32; };

        fn test(implicit x: I): &i32 {
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

static int inner(const s_I& x_0)
{
    return x_0.v;
}

static int test(const s_I& x)
{
    return inner(x);
}

int fu_MAIN()
{
    return test(s_I { 3 }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct I { v: i32[]; };

        fn test(implicit x: I): &i32 {
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

static int inner(const s_I& x_0)
{
    return x_0.v[0];
}

static int test(const s_I& x)
{
    return inner(x);
}

int fu_MAIN()
{
    return test(s_I { fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } } }) - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct I { v: i32[]; };

        fn test(implicit x: I): &i32 {
            fn inner() {
                let v = x.v;
                return v[0];
            }

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

static int inner(const s_I& x_0)
{
    const fu_VEC<int>& v = x_0.v;
    return v[0];
}

static int test(const s_I& x)
{
    return inner(x);
}

int fu_MAIN()
{
    return test(s_I { fu_VEC<int> { fu_VEC<int>::INIT<1> { 3 } } }) - 3;
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

[[noreturn]] static fu::never noReturn()
{
    fu::fail("ex"_fu);
}

static int doesReturn(const int a)
{
    if (a > 0)
        noReturn();

    return a;
}

int fu_MAIN()
{
    return doesReturn(-3) + 3;
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
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat_str.h>

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

static const s_Module& findModule(const s_Context& ctx_0, const int fname)
{
    const fu_VEC<s_Module>& modules = ctx_0.modules;
    for (int i = 0; i < modules.size(); i++)
    {
        const s_Module& module = modules[i];
        if (module.fname == fname)
            return module;

    };
    fu::fail(("Cannot locate: "_fu + fname));
}

static const s_Module& test(const s_Context& ctx)
{
    return findModule(ctx, 0);
}

int fu_MAIN()
{
    s_Context ctx = s_Context { fu_VEC<s_Module> { fu_VEC<s_Module>::INIT<1> { s_Module{} } } };
    return int(test(ctx).fname);
}

#endif


int main() { return fu_MAIN(); }

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

[[noreturn]] static fu::never noReturn()
{
    fu::fail("ex"_fu);
}

static void returnVoid(const int a)
{
    if (a > 0)
        noReturn();

}

int fu_MAIN()
{
    returnVoid(0);
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

static int parseQualifierChain(int i)
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
    return parseQualifierChain(15);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve
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

#ifndef FU_NO_FDEFs

static void compile(int& sum_0, const int x)
{
    if (!(x))
        fu::fail("x=0"_fu);

    if (x & 1)
        compile(sum_0, (x + 1));

    sum_0 += x;
}

int fu_MAIN()
{
    int sum = 0;
    compile(sum, 2);
    return sum - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_resolve
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
#include <fu/vec/split.h>

#ifndef FU_NO_FDEFs

static int getModule(const fu_STR& fname)
{
    return fname.size();
}

static void compile(int& sum_0, const fu_STR& fname, const fu_STR& via)
{
    int _0 {};
    const int module = ((_0 = getModule(fname)) ? _0 : fu::fail(((("import circle: '"_fu + via) + fname) + "'."_fu)));
    if (module & 1)
    {
        fu_VEC<fu_STR> fuzimports = fu::split(fname, "a"_fu);
        for (int i = 0; i < fuzimports.size(); i++)
            compile(sum_0, fuzimports[i], ((fname + " <- "_fu) + via));

    };
    sum_0 += module;
}

int fu_MAIN()
{
    int sum = 0;
    compile(sum, "ab"_fu, fu_STR{});
    return sum - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn if0_ret101(x: i32) {
            if      (x > 2) return x * 2;
            else if (x > 1) return x + 1; // <- left branch seeded right with never
            return x + 101;
        }

        fn main() 0.if0_ret101 - 101;

-----

#ifndef FU_NO_FDEFs

static int if0_ret101(const int x)
{
    if (x > 2)
        return x * 2;
    else if (x > 1)
        return x + 1;

    return x + 101;
}

int fu_MAIN()
{
    return if0_ret101(0) - 101;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn hello(x: i32) {
            if (x & 1)
                return x * 2;
            /*
            x; //ERR return
            /*/
            return x;
            //*/
        }

        fn main() 0.hello;

-----

#ifndef FU_NO_FDEFs

static int hello(const int x)
{
    if (x & 1)
        return x * 2;

    return int(x);
}

int fu_MAIN()
{
    return hello(0);
}

#endif


int main() { return fu_MAIN(); }

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

static int& operator++(s_X&);

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
        /*
            -1.0
        /*/
            (-1.0)
        //*/
                .abs;

        fn main() test ? 0 : 7;

-----
#include <cmath>

#ifndef FU_NO_FDEFs

static double test()
{
    return std::abs(-1.0);
}

int fu_MAIN()
{
    return (test() ? 0 : 7);
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

inline static int test_bKKL(const s_XY& s)
{
    int sum = 0;

    {
        sum += s.x;
        sum += s.y;
    };
    return sum;
}

int fu_MAIN()
{
    const s_XY thing = s_XY { 1, 2 };
    const int sum = test_bKKL(thing);
    return sum - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test() [] -> i32;
        fn main() test;

-----

#ifndef FU_NO_FDEFs

static int test()
{
    return 0;
}

int fu_MAIN()
{
    return test();
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

static int test_defer_if_errok(const bool throw_err)
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
    return (((test_defer_if_errok(true) - (7 * 3)) - (1 * 5)) - (0 * 7)) + (100 * (((test_defer_if_errok(false) - (10 * 3)) - (0 * 5)) - (9 * 7)));
}

#endif


int main() { return fu_MAIN(); }

-----

        type Test = i8;
        fn main() 256.Test.i32;

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    return int(int8_t(256));
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: $A, b: $B) b + /*
            a;
            /*/
            $B(a);
            //*/
        fn main() i8(-1).test(+1);

-----
#include <cstdint>

#ifndef FU_NO_FDEFs

inline static int test_ZHMH(const int8_t a, const int b)
{
    return b + int(a);
}

int fu_MAIN()
{
    return test_ZHMH(int8_t(-1), +1);
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
    int _0 {};
    const int x = (__extension__ (
    {
        int z = 0;
        z++;
        _0 = (z);
    }), int(_0));
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

inline static int mul2_U3Pf(const int a)
{
    return a * 2;
}

inline static int test_Yqt7(const int b, int)
{
    return mul2_U3Pf((1 + mul2_U3Pf(b)));
}

int fu_MAIN()
{
    return 14 - test_Yqt7(3, 0);
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

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

inline static int sqr_U3Pf(const int x)
{
    return x * x;
}

inline static fu_VEC<int> map_OOnE(const fu_VEC<int>& items, int)
{
    fu_VEC<int> result {};
    for (int i = 0; i < items.size(); i++)
        result.push(sqr_U3Pf(items[i]));

    return result;
}

int fu_MAIN()
{
    return map_OOnE(fu_VEC<int> { fu_VEC<int>::INIT<1> { 2 } }, 0)[0] - 4;
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
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

inline static int reduce_HEZr(const fu_VEC<int>& items, int, const int init)
{
    int result = init;
    for (int i = 0; i < items.size(); i++)
    {
        int _0 {};
        result = (__extension__ (
        {
            const int b = items[i];
            _0 = ((result + b));
        }), int(_0));
    };
    return result;
}

int fu_MAIN()
{
    return reduce_HEZr(fu_VEC<int> { fu_VEC<int>::INIT<2> { 1, 2 } }, 0, 0) - 3;
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
            [1, 2].each(|x| i += x);    //      in the everything-a-free-function
            return i - 3;               //      impl of closures
        }

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

inline static void each_kJRA(int& i_0, const fu_VEC<int>& items, int)
{
    for (int i = 0; i < items.size(); i++)
    {
        const int x = items[i];
        i_0 += x;
    };
}

int fu_MAIN()
{
    int i = 0;
    each_kJRA(i, fu_VEC<int> { fu_VEC<int>::INIT<2> { 1, 2 } }, 0);
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

static void makeDirty(int& sum_0, const int parent_idx)
{
    sum_0 += parent_idx;
}

inline static void each_FE0s(int& sum_0, int parent_idx_0, int)
{
    makeDirty(sum_0, parent_idx_0);
}

static void FnDecl_update(int& sum_0, const int parent_idx)
{
    each_FE0s(sum_0, parent_idx, 0);
}

int fu_MAIN()
{
    int sum = 2;
    FnDecl_update(sum, 1);
    return sum - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        struct A { a: i32; };
        struct B { b: i32; };

        implicit fn bananas(a: A) B(a.a * 2);

        fn main() 1.A.b - 2;

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

static s_B bananas(const s_A& a)
{
    return s_B { (a.a * 2) };
}

int fu_MAIN()
{
    return bananas(s_A { 1 }).b - 2;
}

#endif


int main() { return fu_MAIN(); }

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

inline static int fn_v_Jgvc(int, const s_XY& v)
{
    return v.x;
}

inline static int fn_v_NUPh(int, const s_XY& v)
{
    return v.y;
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_Jgvc(0, v) + fn_v_NUPh(0, v)) - 24;
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

inline static int fn_v_Jgvc(int, const s_XY& v)
{
    return v.x;
}

inline static int fn_v_NUPh(int, const s_XY& v)
{
    return v.y;
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_Jgvc(0, v) + fn_v_NUPh(0, v)) - 24;
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

inline static int fn_w_NUPh(int, const s_XY& y)
{
    return y.x;
}

inline static int fn_v_NUPh(int, const s_XY& x)
{
    return fn_w_NUPh(0, x);
}

inline static int fn_w_9qoR(int, const s_XY& y)
{
    return y.y;
}

inline static int fn_v_9qoR(int, const s_XY& x)
{
    return fn_w_9qoR(0, x);
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_NUPh(0, v) + fn_v_9qoR(0, v)) - 24;
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

inline static int identity_uae5(int depth1_0, int)
{
    return depth1_0;
}

inline static int outer_U3Pf(const int depth1)
{
    return identity_uae5(depth1, 0);
}

int fu_MAIN()
{
    const int sum = 0;
    return int(outer_U3Pf(sum));
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

inline static int identity_VSHQ(int depth0_0, int)
{
    return depth0_0;
}

inline static int outer_uae5(int depth0_0, int)
{
    return identity_VSHQ(depth0_0, 0);
}

inline static int test_U3Pf(const int depth0)
{
    return outer_uae5(depth0, 0);
}

int fu_MAIN()
{
    return int(test_U3Pf(0));
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

inline static int identity_lY2z(int depth0_0, int)
{
    return depth0_0;
}

inline static int inner_U8wp(int depth0_0, int)
{
    return identity_lY2z(depth0_0, 0);
}

inline static int outer_uae5(int depth0_0, int)
{
    return inner_U8wp(depth0_0, 0);
}

inline static int test_U3Pf(const int depth0)
{
    return outer_uae5(depth0, 0);
}

int fu_MAIN()
{
    return int(test_U3Pf(0));
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

inline static int first_inner_i5k8(int depth0_0, int sum_0, int sum_038, int)
{
    const int sum = ((depth0_0 + sum_0) + sum_038);
    return sum;
}

inline static int first_AUSd(int depth0_0, int sum_0, int)
{
    const int sum = (depth0_0 + sum_0);
    return first_inner_i5k8(depth0_0, sum_0, sum, 0);
}

inline static int second_inner_z5ia(int depth0_0, int sum_0, int sum_020, int)
{
    const int sum = ((depth0_0 + sum_0) + sum_020);
    return sum + first_AUSd(depth0_0, sum, 0);
}

inline static int second_lY2z(int depth0_0, int sum_0, int)
{
    const int sum = (depth0_0 + sum_0);
    return second_inner_z5ia(depth0_0, sum_0, sum, 0);
}

inline static int test_U3Pf(const int depth0)
{
    const int sum = (depth0 + depth0);
    return second_lY2z(depth0, sum, 0);
}

int fu_MAIN()
{
    return test_U3Pf(0);
}

#endif


int main() { return fu_MAIN(); }

-----

        //! FN_recursion FN_reopen
        //! DEAD_code DEAD_call
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

static int descend(int, int, int, int);
static int doSomething(int, int, int, int);
static int doSomethingElse(int, int);
static int parseStuff(int, int, int, int);

#ifndef FU_NO_FDEFs

static int use_a(const int a)
{
    return a * a;
}

static int use_b(const int b)
{
    return b * b;
}

static int doSomethingElse_inner(const int y, const int b)
{
    return y * use_b(b);
}

static int doSomethingElse(const int x, const int b)
{
    return doSomethingElse_inner((x * x), b);
}

static int use_c(const int c)
{
    return c * c;
}

static int descend_inner(int x_0, const int y, const int a, const int b, const int c)
{
    return ((y & 1) ? (parseStuff((y / 2), a, b, c) * parseStuff(x_0, a, b, c)) : (doSomethingElse((y * y), b) * use_c(c)));
}

static int descend(const int x, const int a, const int b, const int c)
{
    return descend_inner(x, (x * x), a, b, c);
}

static int doSomething_inner(const int y, const int a, const int b, const int c)
{
    return (y * use_a(a)) * descend((y * y), a, b, c);
}

static int doSomething(const int x, const int a, const int b, const int c)
{
    return doSomething_inner((x * x), a, b, c);
}

static int doStuff(const int y, const int a, const int b, const int c)
{
    return doSomething((y * y), a, b, c);
}

static int parseStuff(const int x, const int a, const int b, const int c)
{
    return doStuff((x * x), a, b, c);
}

int fu_MAIN()
{
    const int a = 0;
    const int b = 0;
    const int c = 0;
    return parseStuff(0, a, b, c);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sA(t: $T) struct { hey: $T; };

        fn fA(a: $T): sA($T) = [ a + 2 ];
        fn main() 1.fA.hey - 3;

-----

struct s_sA_U3Pf;

                                #ifndef DEF_s_sA_U3Pf
                                #define DEF_s_sA_U3Pf
struct s_sA_U3Pf
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

inline static s_sA_U3Pf fA_U3Pf(const int a)
{
    return s_sA_U3Pf { (a + 2) };
}

int fu_MAIN()
{
    return fA_U3Pf(1).hey - 3;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn sB(t: $T) struct { hey: $T; };

        fn fB(a: $T): sB($T) = [ a + 2 ];
        fn main() 1.fB.hey - 1.u32.fB.hey /*
            ; /*/ .i32; //*/

-----
#include <cstdint>

struct s_sB_U3Pf;
struct s_sB_aXiX;

                                #ifndef DEF_s_sB_U3Pf
                                #define DEF_s_sB_U3Pf
struct s_sB_U3Pf
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

                                #ifndef DEF_s_sB_aXiX
                                #define DEF_s_sB_aXiX
struct s_sB_aXiX
{
    uint32_t hey;
    explicit operator bool() const noexcept
    {
        return false
            || hey
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

inline static s_sB_U3Pf fB_U3Pf(const int a)
{
    return s_sB_U3Pf { (a + 2) };
}

inline static s_sB_aXiX fB_aXiX(const uint32_t a)
{
    return s_sB_aXiX { (a + 2u) };
}

int fu_MAIN()
{
    return fB_U3Pf(1).hey - int(fB_aXiX(uint32_t(1)).hey);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(x: i32) {
            outer: {
                inner: {
                    if (x > 1) break: outer;
                    if (x > 0) break: inner;
                    return 2;
                }
                return 1;
            }
            return 0;
        }

        fn main() 2.test * 11 + (1.test - 1) * 13 + (0.test - 2) * 17;

-----

#ifndef FU_NO_FDEFs

static int test(const int x)
{

    { {

        { {
            if (x > 1)
                goto L_outer;

            if (x > 0)
                goto L_inner;

            return 2;
          } L_inner:;
        };
        return 1;
      } L_outer:;
    };
    return 0;
}

int fu_MAIN()
{
    return ((test(2) * 11) + ((test(1) - 1) * 13)) + ((test(0) - 2) * 17);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(x: i32) {
            return {
                BLOCK: {
                    if (x & 1) break :BLOCK 1;
                    if (x & 2) return 2;
                    3
                }
            };
        }

        fn main() 4.test - 5.test - 6.test; // 3-1-2

-----

#ifndef FU_NO_FDEFs

static int test(const int x)
{
    int _0 {};
    return (__extension__ (
    {
        if (x & 1)
            return 1;

        if (x & 2)
            return 2;

        _0 = (3);
    }), int(_0));
}

int fu_MAIN()
{
    return (test(4) - test(5)) - test(6);
}

#endif


int main() { return fu_MAIN(); }

-----

        fn test(a: i32) {
            mut w = 3;
            OUTER: w += {
                INNER: {
                    if (a & 1)  break: INNER;
                    else        break: OUTER;
                };
                5
            };
            return w;
        }
        fn main() 0.test + 1.test - 11;

-----

#ifndef FU_NO_FDEFs

static int test(const int a)
{
    int w = 3;

    { {
        int _0 {};
        w += (__extension__ (
        {

            { {
                if (a & 1)
                    goto L_INNER;
                else
                    goto L_OUTER;

              } L_INNER:;
            };
            _0 = (5);
        }), int(_0));
      } L_OUTER:;
    };
    return w;
}

int fu_MAIN()
{
    return (test(0) + test(1)) - 11;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn v(x: i32) {
            return {
                BLOCK:                          5000 + { // *2:
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

static int v(const int x)
{
    int L_00_v {};
    return 5000 + (__extension__ (
    { {
        if (x == 9)
            { L_00_v = 2000; goto L_00; };

        if (x == 8)
            return 300;

        fu::never _0 {};
        L_00_v = (((x == 7) ? (__extension__ (
        {
            return 40;
        }), static_cast<fu::never&&>(_0)) : 5));
      } L_00:;
    }), int(L_00_v));
}

int fu_MAIN()
{
    return (((v(9) + v(8)) + v(7)) + v(6)) - 12345;
}

#endif


int main() { return fu_MAIN(); }

-----

        fn each(arr, fn)
            for (mut i = 0; i < arr.len; i++)
                fn(arr[i]);

        fn some(arr, fn) {
            arr.each(|x| { if (fn(x)) return x; });
            return 0;
        }

        fn main() [ 1, 2, 3 ].some(|v| v & 1 == 0) - 2;

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

inline static int some_kJRA(const fu_VEC<int>& arr, int)
{

    {
        for (int i = 0; i < arr.size(); i++)
        {
            const int x = arr[i];
            if ((x & 1) == 0)
                return int(x);

        };
    };
    return 0;
}

int fu_MAIN()
{
    return some_kJRA(fu_VEC<int> { fu_VEC<int>::INIT<3> { 1, 2, 3 } }, 0) - 2;
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn each(arr, fn)
            for (mut i = 0; i < arr.len; i++)
                fn(arr[i]);

        fn main() {
            mut sum = 0;
            OUTER: [1, 2, 3, 4].each(|x| {
                sum += x;
                for (mut i = 1; i--; ) // once
                    if (sum == 6) break :OUTER;
            });
            return sum - 6;
        }

-----
#include <fu/vec.h>

#ifndef FU_NO_FDEFs

int fu_MAIN()
{
    int sum = 0;

    { {
        fu_VEC<int> arr = fu_VEC<int> { fu_VEC<int>::INIT<4> { 1, 2, 3, 4 } };
        for (int i = 0; i < arr.size(); i++)
        {
            const int x = arr[i];
            sum += x;
            for (int i_1 = 1; i_1--; )
            {
                if (sum == 6)
                    goto L_OUTER;

            };
        };
      } L_OUTER:;
    };
    return sum - 6;
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

inline static void loop1d_B7Rx(int& x_0, const int i0, const int i1, int)
{
    for (int i = i0; i < i1; i++)
    {
        if ((x_0 += i))
            return;

    };
}

int fu_MAIN()
{
    int x = 0;
    loop1d_B7Rx(x, 0, 10, 0);
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

inline static void loop2d_11kI(int& sum_0, const int x0, const int x1, const int y0, const int y1, int)
{
    for (int y = y0; y < y1; y++)
    {
        for (int x = x0; x < x1; x++)
        {
            if (y < 11)
            {
                sum_0++;
                continue;
            };
            if (x == 1)
                return;

            sum_0 += ((x + 1) * y);
        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    loop2d_11kI(sum, 0, 10, 10, 12, 0);
    return sum - 21;
}

#endif


int main() { return fu_MAIN(); }

-----

        inline fn loop1d(i0, i1, fn)
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

inline static void loop2d_CSvR(int& sum_0, const int x0, const int x1, const int y0, const int y1, int)
{
    for (int i = y0; i < y1; i++)
    {
        for (int i_1 = x0; i_1 < x1; i_1++)
        {
            if (i < 11)
            {
                sum_0++;
                continue;
            };
            if (i_1 == 1)
                return;

            sum_0 += ((i_1 + 1) * i);
        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    loop2d_CSvR(sum, 0, 10, 10, 12, 0);
    return sum - 21;
}

#endif


int main() { return fu_MAIN(); }

-----
