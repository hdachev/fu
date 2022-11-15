
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

	Bad call to [34;1m+[0m (HasInt: copy, HasInt: copy): 

	[35;1mtemplate[0m [34;1m+[0m: Could not specialize: No body pattern matched.

	[35;1mtemplate[0m [34;1m+[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mtemplate_add[0m /Users/hdachev/fu/__tests__/_0.fu:2:9
                [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_1.fu:3:9

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

	Invalid type annotation: call Map

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

	Invalid type annotation: call Map

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

-----

        fn test(a = 3, b = a * 2) a + b;
        fn main() test + test(a: -1) * 3;

-----
TODO: _0.fu @2:30:

[2m      | [0m
    2 |         fn test(a = 3, b = a [31;1m*[0m 2) a + b;
[2m      |         fn main() test + test(a: -1) * 3;[0m
[2m      | [0m

	Out of range local target from: [35;1mfn[0m [34;1mmain[0m
	locals=0
	index=1

RelaxCopyResize [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----

        fn woot(ref a: i32, ref b: i32) {
            ref c = a || b;
            fn arg_defaulted_to_closure(ref x = c)
                x *= 2;

            arg_defaulted_to_closure( );
            arg_defaulted_to_closure(a);
            arg_defaulted_to_closure(b);
        }

        fn main() {
            mut a = 1;
            mut b = 1;
            woot(a, b);
            return a * 10 + b - 42;
        }

-----
TODO: _0.fu @3:23:

[2m      | [0m
[2m      |         fn woot(ref a: i32, ref b: i32) {[0m
    3 |             ref c = a [31;1m||[0m b;
[2m      |             fn arg_defaulted_to_closure(ref x = c)[0m
[2m      |                 x *= 2;[0m

	Unused variable: [31;1mc[0m: make it [35;1mlax[0m if this is intentional.

       RelaxMut [35;1mfn[0m [34;1mwoot[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn test(ref a: i32, mut incr: i32) {
            fn woot(ref x, ref b = a) { // 'a' closes over here!
                if (x & 1) {
                    x /= 2;
                    return test(x, b);
                }
                return b += x;
            }

            return woot(incr<alt>, a</alt>);
        }

        fn main() {
            mut x = 10;
            return test(x, 5) - 12;
        }

-----
TODO: _0.fu @3:36:

[2m      | [0m
[2m      |         fn test(ref a: i32, mut incr: i32) {[0m
    3 |             fn woot(ref x, ref b = [31;1ma[0m) { // 'a' closes over here!
[2m      |                 if (x & 1) {[0m
[2m      |                     x /= 2;[0m

	[35;1mfn[0m [34;1mwoot[0m: Arguments [31;1mb[0m and [31;1mx[0m (args #1 and #0) both alias:

                [35;1marg[0m [34;1mincr[0m

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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

	Invalid type annotation: call Map

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

	Invalid type annotation: call Map

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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
TODO: _0.fu @12:26:

[2m      |             mut ab = AB(1, 2);[0m
[2m      | [0m
   12 |             test(ab.a, ab[31;1m.[0mb);
[2m      | [0m
[2m      |             return ab.b - 5;[0m

	[35;1mfn[0m [34;1mtest[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:9:9

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:7:9

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

	[35;1mfn[0m [34;1mtest[0m: Arguments [31;1mw1[0m and [31;1mw0[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mw[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:18:9

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

#ifndef fu_NO_fdefs

static s_X popfirst_QI3rj7t5(fu_VEC<s_X>&& arr)
{
    return s_X(arr[0]);
}

int fu_MAIN()
{
    return popfirst_QI3rj7t5(fu_VEC<s_X> { fu::slate<1, s_X> { s_X{} } }).items.size();
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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

RelaxCopyResize [35;1mfn[0m [34;1mpopfirst[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

-----

        fn Swap(ref a: i32[], x: i32, y: i32)
            swap(a[x], a[y]);

        fn main() {
            mut a = [ 1, 2 ];
            a.Swap(0, 1);
            return a[0] - 2 == 0 && a[1] - 1 == 0 ? 0 : 1;
        }

-----
TODO: _0.fu @3:25:

[2m      | [0m
[2m      |         fn Swap(ref a: i32[], x: i32, y: i32)[0m
    3 |             swap(a[x], a[31;1m[[0my]);
[2m      | [0m
[2m      |         fn main() {[0m

	[35;1m__native[0m [34;1m
hacks/soft_risk
<utility>
std::swap[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1marg[0m [34;1ma[0m

    BorrowCheck [35;1mfn[0m [34;1mSwap[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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

	Invalid type annotation: call Map

        Solving [35;1mtype[0m [34;1mBINOP[0m

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

	Invalid type annotation: call Map

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:12:9

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

	Invalid type annotation: call Map

        Solving [35;1mtype[0m [34;1mBINOP[0m
                [35;1mfn[0m [34;1msetupOperators[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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
            implicit mut ctx: Context;
            return resolveFile("a").len - 1;
        }

-----
TODO: _0.fu @2:9:

[2m      | [0m
    2 |         [31;1mstruct[0m Context
[2m      |         {[0m
[2m      |             fuzzy: Map(string, string);[0m

	Invalid type annotation: call Map

        Solving [35;1mtype[0m [34;1mContext[0m

-----

        struct vec3 { x: f32; y: f32; z: f32; };

        inline fn vec3(fill!: f32) vec3(fill, fill, fill);
        inline fn vec3(x!: f32, y!?: f32, z!?: f32) vec3(x, y, z);
        inline fn vec3(y!: f32, x!?: f32, z!?: f32) vec3(x, y, z);
        inline fn vec3(z!: f32, x!?: f32, y!?: f32) vec3(x, y, z);

        inline fn *(a: vec3, b: f32) vec3(a.x * b, a.y * b, a.z * b);

        import _0;

        struct Atmosphere { pView: vec3; rPlanet: f32; };

        let rEarth: f32 = 1e3;

        fn Atmosphere(
            altitude: f32,
            rPlanet: f32 = rEarth,
            vPlanet = vec3(z: -1)) // <- this crashes
        {
            let pView = vPlanet * (rPlanet + altitude);
            return Atmosphere(:rPlanet, :pView);
        }

        import _0;
        import _1;

        fn main() {
            let atmo = Atmosphere(altitude: 1e2);
            return atmo.pView.z == 11e2 ? 0 : 1;
        }

-----
TODO: _0.fu @7:64:

[2m      |         inline fn vec3(x!: f32, y!?: f32, z!?: f32) vec3(x, y, z);[0m
[2m      |         inline fn vec3(y!: f32, x!?: f32, z!?: f32) vec3(x, y, z);[0m
    7 |         inline fn vec3(z!: f32, x!?: f32, y!?: f32) vec3(x, y, [31;1mz[0m);
[2m      | [0m
[2m      |         inline fn *(a: vec3, b: f32) vec3(a.x * b, a.y * b, a.z * b);[0m

	Invalid local target -modid.
	Probably leaked from another module.
	BUG: Currently arg defaults & inlining can do this.

       RelaxMut [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_2.fu:5:9

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

	Invalid type annotation: call Map

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:9:9

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

	Bad call to [34;1m=[0m (ScopeSkip: mutref copy, [2i32]: copy resize): 

	[35;1mtemplate[0m [34;1m=[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for [2i32]: copy resize

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:7:9

-----

        fn A(x!: i32 = 0) x;
        fn B(x: i32 = 0) A(:x);
        fn main() A + B;

-----

#ifndef fu_NO_fdefs

static int A_DXBD5vmC(const int x)
{
    return x;
}

static int B_DXBD5vmC(const int x)
{
    return A_DXBD5vmC(x);
}

int fu_MAIN()
{
    return A_DXBD5vmC(0) + B_DXBD5vmC(0);
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

	Bad call to [34;1ma_len[0m (Test: copy): 

	[35;1mtemplate[0m [34;1ma_len[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for Test: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

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

	Bad call to [34;1m~[0m ([2c8]: mutref copy resize, CodegenOutput: copy): 

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

        Solving [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----
 // inline fn empty retval on autocall
        inline fn concatable(a: bool)               a ? "yes" : "no";
        inline fn concat(a.concatable, b: string)   a.concatable ~ b;
        fn main()                                   concat(true, "!").len - 4;

-----
TODO: COMPILER BUG: serializeType: Falsy type in: mangle.conv
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

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        fn sB(_: $T) struct { hey: $T; };

        // Pattern & partial spec, how?
        fn test(x: sB($T)): $T = x.hey - 1;

        type a = sB(i32);
        fn main() a(1).test;

-----
TODO: _0.fu @7:9:

[2m      |         fn test(x: sB($T)): $T = x.hey - 1;[0m
[2m      | [0m
    7 |         [31;1mtype[0m a = sB(i32);
[2m      |         fn main() a(1).test;[0m
[2m      | [0m

	Invalid type annotation: call sB

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

	Bad call to [34;1mBINOP[0m ([2i32]: copy resize): 

	[35;1mtype[0m [34;1mBINOP[0m: Argument [35;1marg[0m [34;1mi[0m expects sB: copy, got [2i32]: copy resize

        Solving [35;1mfn[0m [34;1msetupOperators[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn setupOperators(i: i32) {
            fn sB(_: $T) struct { hey: $T; }; // same as above
            struct BINOP { i: sB(i32); };     //  but template
            return BINOP([ i ]);
        }

        fn main() setupOperators(0).i.hey;

-----
TODO: _0.fu @4:13:

[2m      |         fn setupOperators(i: i32) {[0m
[2m      |             fn sB(_: $T) struct { hey: $T; }; // same as above[0m
    4 |             [31;1mstruct[0m BINOP { i: sB(i32); };     //  but template
[2m      |             return BINOP([ i ]);[0m
[2m      |         }[0m

	Invalid type annotation: call sB

        Solving [35;1mtype[0m [34;1mBINOP[0m
                [35;1mfn[0m [34;1msetupOperators[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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

	[35;1mfn[0m [34;1mm_and_c_cant_alias_001[0m: Arguments [31;1mc[0m and [31;1mm[0m (args #1 and #0) both alias:

                [35;1marg[0m [34;1mmc[0m

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:9:9

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

	Bad call to [34;1mlast[0m ([6[2c8]]): 

	[35;1mtemplate[0m [34;1mlast[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for [6[2c8]]

        Solving [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:12:9

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
TODO: _0.fu @4:23:

[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
[2m      |             fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck[0m
    4 |             return src[31;1m[[0m1, src.len] ~ src[0, 1];
[2m      |         }[0m
[2m      |         fn main() {[0m

	At call to [35;1m__native[0m [34;1m
<fu/view.h>
fu::get_view[0m, argument binding [31;1ma[0m (arg #0) at 4:20:

[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
[2m      |             fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck[0m
    4 |             return [31;1msrc[0m[1, src.len] ~ src[0, 1];
[2m      |         }[0m
[2m      |         fn main() {[0m

	... invalidated by subsequent write to [35;1marg[0m [34;1msources[0m upon evaluation of argument [31;1mend[0m (arg #2) at 4:27:

[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
[2m      |             fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck[0m
    4 |             return src[1, [31;1msrc[0m.len] ~ src[0, 1];
[2m      |         }[0m
[2m      |         fn main() {[0m

	At call to [34;1msrc[0m
            via [35;1m__native[0m [34;1m
.mutref[0m at 3:29:

[2m      | [0m
[2m      |         fn useless_ref_lambda(ref sources: string[]) {[0m
    3 |             fn src = sources[31;1m[[0msources.len / 2]; // didn't relax the ref, failed bck
[2m      |             return src[1, src.len] ~ src[0, 1];[0m
[2m      |         }[0m

            

    BorrowCheck [35;1mfn[0m [34;1museless_ref_lambda[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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

	[35;1mfn[0m [34;1mrec_useless_ref[0m is not pure, writes to argument [34;1mn[0m:

            via [35;1m__native[0m [34;1m
.mutref[0m at 7:47:

[2m      |             mut ret = n.items.len;[0m
[2m      |             for (mut i = 0; i < n.items.len; i++)[0m
    7 |                 ret += rec_useless_ref(n.items[31;1m[[0mi]);
[2m      | [0m
[2m      |             return ret;[0m

            

-----

        fn relaxes_arr_to_slice_and_fails(ref arr) {
            arr.pop();
            return arr;
        }

        fn main() {
            mut arr = [ 1 ];
            relaxes_arr_to_slice_and_fails(arr);
            return arr.len;
        }

-----
TODO: _0.fu @3:20:

[2m      | [0m
[2m      |         fn relaxes_arr_to_slice_and_fails(ref arr) {[0m
    3 |             arr.pop[31;1m([0m);
[2m      |             return arr;[0m
[2m      |         }[0m

	Bad call to [34;1mpop[0m ([2i32]: mutref): 

	[35;1mtemplate[0m [34;1m
.pop()[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for [2i32]: mutref

        Solving [35;1mfn[0m [34;1mrelaxes_arr_to_slice_and_fails[0m /Users/hdachev/fu/__tests__/_0.fu:2:9
RelaxCopyResize [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:7:9

-----

        fn sum_each(a, b)       // Same as above,
            a.Each + b.Each;    //  but we don't explicitly pass the fn Each in.

        fn hello(x) {
            if (x & 1) {
                fn Each(a) a    ? a * Each(a - 1)   // These get ignored?
                                : 100;              //  sum_each goes and selects the one from _1.

                return sum_each(x, x);
            }
            else {
                fn Each(b) b    ? b * Each(b - 1)
                                : 10000;

                return sum_each(x, x);
            }
        }

        fn Each(c) c & 1    ? c
                            : c / 2 + Each(c / 2);

        fn main() _0::hello(1) - 2 * Each(100)
                + _0::hello(2) - 2 * Each(20000);

-----
TODO:    EXIT code: 65024

	COMPILER BUG or INCORRECT TESTCASE:


        fn sum_each(a, b)       // Same as above,
            a.Each + b.Each;    //  but we don't explicitly pass the fn Each in.

        fn hello(x) {
            if (x & 1) {
                fn Each(a) a    ? a * Each(a - 1)   // These get ignored?
                                : 100;              //  sum_each goes and selects the one from _1.

                return sum_each(x, x);
            }
            else {
                fn Each(b) b    ? b * Each(b - 1)
                                : 10000;

                return sum_each(x, x);
            }
        }

        fn Each(c) c & 1    ? c
                            : c / 2 + Each(c / 2);

        fn main() _0::hello(1) - 2 * Each(100)
                + _0::hello(2) - 2 * Each(20000);


	Generated code:

inline static int Each_uFTlTv3M(int);

#ifndef fu_NO_fdefs

inline static int Each_uFTlTv3M(const int c)
{
    if (c & 1)
        return c;
    else
        return (c / 2) + Each_uFTlTv3M((c / 2));

}

                                #ifndef DEF_sum_each_V3ST2uOu7W6
                                #define DEF_sum_each_V3ST2uOu7W6
inline int sum_each_V3ST2uOu(const int a, const int b)
{
    return Each_uFTlTv3M(a) + Each_uFTlTv3M(b);
}
                                #endif

                                #ifndef DEF_hello_DXBD5vmCUt8
                                #define DEF_hello_DXBD5vmCUt8
inline int hello_DXBD5vmC(const int x)
{
    if (x & 1)
    {
        return sum_each_V3ST2uOu(x, x);
    }
    else
    {
        return sum_each_V3ST2uOu(x, x);
    };
}
                                #endif

int fu_MAIN()
{
    return ((hello_DXBD5vmC(1) - (2 * Each_uFTlTv3M(100))) + hello_DXBD5vmC(2)) - (2 * Each_uFTlTv3M(20000));
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCode, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn apply(num: i32, func: fn (i32): i32) = func(num);
        fn main()                               = apply([1], |i| i - 1);

-----
TODO: _0.fu @2:42:

[2m      | [0m
    2 |         fn apply(num: i32, func: fn (i32)[31;1m:[0m i32) = func(num);
[2m      |         fn main()                               = apply([1], |i| i - 1);[0m
[2m      | [0m

	Expected [35;1mop[0m [34;1m,[0m
	     got [35;1mop[0m [34;1m:[0m

-----

        enum Test { A; B = A; C; };
        fn main() C.i32 - 1;

-----
TODO: _0.fu @2:28:

[2m      | [0m
    2 |         enum Test { A; B = [31;1mA[0m; C; };
[2m      |         fn main() C.i32 - 1;[0m
[2m      | [0m

	Bad call to [34;1mA[0m (): [34;1mA[0m is not defined here.

        Solving [35;1mtype[0m [34;1mTest[0m

-----


        fn main(): i32 {}               

-----
_0.fu @3:9:

[2m      | [0m
[2m      | [0m
    3 |         [31;1mfn[0m main(): i32 {}               
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- void

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----


        fn main(): i32 { return 0; }    

-----

#ifndef fu_NO_fdefs

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

        Solving [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----


        fn test(): i32 { return 0; }    
        fn main() test();

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 1 - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        return 
                        3 

-----
   EXIT code: 768

	COMPILER BUG or INCORRECT TESTCASE:



fn main(): i32 {

        return 
                        3 

}


	Generated code:


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        return 
                        0 

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

-----

        return 0

            || throw("TESTERR")


-----
   EXIT code: 6

	COMPILER BUG or INCORRECT TESTCASE:



fn main(): i32 {

        return 0

            || throw("TESTERR")


}


	Generated code:

#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int _0 {};
    return (_0 = 0) ? _0 : fu::fail("TESTERR"_fu);
}

#endif

int main() { return fu_MAIN(); }

-----

        return 0


-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sum(a: i32, b: i32): i32
            a + b;

        return sum(1, -1);

-----

#ifndef fu_NO_fdefs

static int sum_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return sum_STRhqML7(1, -1);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sum(a: i32, b: i32)
            a + b;

        return sum(1, -1);

-----

#ifndef fu_NO_fdefs

static int sum_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return sum_STRhqML7(1, -1);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sign(a: i32)
            a > 0 ? 1 : a < 0 ? -1 : 0;

        return sign(7) + sign(-3) + sign(0);

-----

#ifndef fu_NO_fdefs

static int sign_sgbrcRuL(const int a)
{
    if (a > 0)
        return 1;
    else if (a < 0)
        return -1;
    else
        return 0;

}

int fu_MAIN()
{
    return (sign_sgbrcRuL(7) + sign_sgbrcRuL(-3)) + sign_sgbrcRuL(0);
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

#ifndef fu_NO_fdefs

static int sign_sgbrcRuL(const int a)
{
    if (a > 0)
        return 1;
    else
        return -2;

}

int fu_MAIN()
{
    return (sign_sgbrcRuL(10) * 2) + sign_sgbrcRuL(-5);
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

#ifndef fu_NO_fdefs

static int sign_sgbrcRuL(const int a)
{
    if (a > 0)
        return 1;
    else
        return -2;

}

int fu_MAIN()
{
    return (sign_sgbrcRuL(10) * 2) + sign_sgbrcRuL(-5);
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn main() {
            let  i = -1;
            let sb = i.i8;
            let  b = i.u8;

            return sb == -1 && b == 255 ? 0 : 1;
        }

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int i = -1;
    const fu::i8 sb = fu::i8(i);
    const fu::u8 b = fu::u8(unsigned(i));
    if ((sb == fu::i8(-1)) && (b == fu::u8(255u)))
        return 0;
    else
        return 1;

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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const fu::i8 sb = fu::i8(-1);
    const int i = int(sb);
    const unsigned u = unsigned(fu::u8(sb));
    if ((i == -1) && (int(u) == 255))
        return 0;
    else
        return 1;

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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const char b = char(200);
    const int i = int(fu::u8(b));
    if (i == 200)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        mut arr = [ 0 ];
        return arr[0];

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return arr[0];
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        let a = 3;
        mut b = a;
        b++;
        return b - (a + 1);

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static int decr_7v8nWS47(int& num)
{
    return num--;
}

int fu_MAIN()
{
    int res = 0;
    decr_7v8nWS47(res);
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

#ifndef fu_NO_fdefs

static int decr_7v8nWS47(int& num)
{
    return num--;
}

int fu_MAIN()
{
    int res = 0;
    decr_7v8nWS47(res);
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

#ifndef fu_NO_fdefs

static int decr_KNSTgz6i(int& res)
{
    return res--;
}

int fu_MAIN()
{
    int res = 0;
    decr_KNSTgz6i(res);
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

#ifndef fu_NO_fdefs

static void decr_7v8nWS47(int& num)
{
    num--;
}

int fu_MAIN()
{
    int res = 0;
    decr_7v8nWS47(res);
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

#ifndef fu_NO_fdefs

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

	Bad call to [34;1mpostfix++[0m (i32: copy): 

	[35;1mtemplate[0m [34;1mpostfix++[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

-----


        mut sum = 0;        
        while (sum < 15)
            sum++;

        return sum - 15;

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static int named_STRhqML7(const int a, const int b)
{
    return a - (b * 2);
}

int fu_MAIN()
{
    return named_STRhqML7(6, 3);
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

#ifndef fu_NO_fdefs

static int named_STRhqML7(const int a, const int b)
{
    return a - (b * 2);
}

static int other_7UZrJlt2(const int a, const int b)
{
    return named_STRhqML7(a, b);
}

int fu_MAIN()
{
    return other_7UZrJlt2(6, 3);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn ret_only_arg(a) a;

        fn main() 0.ret_only_arg;

-----

#ifndef fu_NO_fdefs

inline static int ret_only_arg_KFeeUbvh(const int a)
{
    return a;
}

int fu_MAIN()
{
    return ret_only_arg_KFeeUbvh(0);
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_ret_only_arg_KFeeUbvhZVk
                                #define DEF_ret_only_arg_KFeeUbvhZVk
inline int ret_only_arg_KFeeUbvh(const int a)
{
    return a;
}
                                #endif

int fu_MAIN()
{
    return ret_only_arg_KFeeUbvh(0);
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

#ifndef fu_NO_fdefs

static int size_tqMcby3b(const s_Range& r)
{
    return r.max - r.min;
}

int fu_MAIN()
{
    return size_tqMcby3b(s_Range { 14, 21 }) - 7;
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

#ifndef fu_NO_fdefs

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

	Bad call to [34;1mpostfix++[0m (i32: copy): 

	[35;1mtemplate[0m [34;1mpostfix++[0m: Could not specialize: Cannot solve argument [34;1ma[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static int size_tqMcby3b(const s_Range& r)
{
    return r.r_max - r.r_min;
}

int fu_MAIN()
{
    return size_tqMcby3b(s_Range { 14, 21 }) - 7;
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

#ifndef fu_NO_fdefs

static int test_xMoHMipk(const s_X& x, const int b)
{
    return x.a + b;
}

static int hey_aHMICT96(const s_X& x)
{
    return test_xMoHMipk(x, -1);
}

int fu_MAIN()
{
    return hey_aHMICT96(s_X { 1 });
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

#ifndef fu_NO_fdefs

static int dist_S4vrW6t5(const s_Player& p, const s_Player& other)
{
    return p.pos.x - other.pos.x;
}

int fu_MAIN()
{
    const s_Player a = s_Player { s_Pos { 10 } };
    const s_Player b = s_Player { s_Pos { 4 } };
    return dist_S4vrW6t5(a, b) - 6;
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
	        via [35;1marg[0m [34;1ma[0m) from global scope, as seen from `test`.

        Solving [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

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

#ifndef fu_NO_fdefs

static int test_Sl8jJCI0(const s_A& a, const s_B& b)
{
    return a.y + b.z;
}

int fu_MAIN()
{
    return test_Sl8jJCI0(s_A { 1, 1 }, s_B { -1, -1 });
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
struct s_CurrentFn_ResetOnResolve;
struct s_CurrentFn;

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

#ifndef fu_NO_fdefs

static int test_bg6iI5bZ(const s_CurrentFn& f)
{
    return f.parent_idx - f.RoR.ret_count;
}

int fu_MAIN()
{
    return test_bg6iI5bZ(s_CurrentFn { 1, s_CurrentFn_ResetOnResolve { 1 } });
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_HasPredicate isTrue = s_HasPredicate { "let"_fu, 0 };
    s_HasPredicate isFalse = s_HasPredicate { fu_STR{}, 1 };
    if (isTrue && !isFalse)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        struct Stuff { name: string };

        fn shadowsStructMember(using stuff: Stuff, other: string) {
            shadow let name = other || name;
            return name;
        }

        fn main() = shadowsStructMember(Stuff("a"), "bb").len - 2;

-----
#include <fu/str.h>

struct s_Stuff;

                                #ifndef DEF_s_Stuff
                                #define DEF_s_Stuff
struct s_Stuff
{
    fu_STR name;
    explicit operator bool() const noexcept
    {
        return false
            || name
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static const fu_STR& shadowsStructMember_eGlJ1k2o(const s_Stuff& stuff, const fu_STR& other)
{
    const fu_STR& name = (other ? other : stuff.name);
    return name;
}

int fu_MAIN()
{
    return shadowsStructMember_eGlJ1k2o(s_Stuff { "a"_fu }, "bb"_fu).size() - 2;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn call_with_using_and_explicit_arg(x: i32, y: i32) = x + 7*y;
        fn main () {
            using let y = 1;
            return call_with_using_and_explicit_arg(x: 2) - 9;
        }

-----

#ifndef fu_NO_fdefs

static int call_with_using_and_explicit_arg_XEOnvNp8(const int x, const int y)
{
    return x + (7 * y);
}

int fu_MAIN()
{
    const int y = 1;
    return call_with_using_and_explicit_arg_XEOnvNp8(2, y) - 9;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn call_with_using_explicit_and_trailing(x: i32, y: i32, m: i32) = (x + 7*y) * m;
        fn main () {
            using let x = 1;
            return call_with_using_explicit_and_trailing(y: 2, 3) - 45;
        }

-----

#ifndef fu_NO_fdefs

static int call_with_using_explicit_and_trailing_Zcjf1P4Y(const int x, const int y, const int m)
{
    return (x + (7 * y)) * m;
}

int fu_MAIN()
{
    const int x = 1;
    return call_with_using_explicit_and_trailing_Zcjf1P4Y(x, 2, 3) - 45;
}

#endif

int main() { return fu_MAIN(); }

-----


        trivial
        struct Node { items: Node[]; };

        fn main() {
            mut n: Node;
            return n.items.len;
        }

-----
_0.fu @3:9:

[2m      | [0m
[2m      | [0m
    3 |         [31;1mtrivial[0m
[2m      |         struct Node { items: Node[]; };[0m
[2m      | [0m

	Struct is not [35;1mtrivial[0m because of non-trivial member [34;1mitems[0m

        Solving [35;1mtype[0m [34;1mNode[0m

-----


        struct Node { items: Node[]; };

        fn main() {
            mut n: Node;
            return n.items.len;
        }

-----
#include <fu/vec.h>

struct s_Node;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_Node n {};
    return n.items.size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve

-----

        let x = 3;
        return x / 2 - 1;

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

inline static int hey_KFeeUbvh(const int a)
{
    return a * a;
}

int fu_MAIN()
{
    return hey_KFeeUbvh(0);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn div3by(a: $T) 3 / a;
        return div3by(2) - 1;

-----

#ifndef fu_NO_fdefs

inline static int div3by_CMaaM0tZ(const int a)
{
    return 3 / a;
}

int fu_MAIN()
{
    return div3by_CMaaM0tZ(2) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn div3by(a) 3 / a;
        return div3by(2) - 1;

-----

#ifndef fu_NO_fdefs

inline static int div3by_CMaaM0tZ(const int a)
{
    return 3 / a;
}

int fu_MAIN()
{
    return div3by_CMaaM0tZ(2) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn add3(a: i32, b = 3) a + b;
        fn main() add3(-3);

-----

#ifndef fu_NO_fdefs

static int add3_V3ST2uOu(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return add3_V3ST2uOu(-3, 3);
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

#ifndef fu_NO_fdefs

static s_v1 operator+(const s_v1& a, const int b)
{
    return s_v1 { (a.x + b) };
}

inline static s_v1 add3_LCL7UM5H(const s_v1& a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return add3_LCL7UM5H(s_v1 { 2 }, 3).x - 5;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn mul_ab_init(a: $T, b = 0) a*b;
        fn main() mul_ab_init(1);

-----

#ifndef fu_NO_fdefs

inline static int mul_ab_init_V3ST2uOu(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_init_V3ST2uOu(1, 0);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn mul_ab_annot_init(a: $T, b: $T = 0) a*b;
        fn main() mul_ab_annot_init(1);

-----

#ifndef fu_NO_fdefs

inline static int mul_ab_annot_init_V3ST2uOu(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_annot_init_V3ST2uOu(1, 0);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn mul_ab_opt(a: $T, b?: $T) a*b;
        fn main() mul_ab_opt(1);

-----

#ifndef fu_NO_fdefs

inline static int mul_ab_opt_V3ST2uOu(const int a, const int b)
{
    return a * b;
}

int fu_MAIN()
{
    return mul_ab_opt_V3ST2uOu(1, 0);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn ab(a, b) a + b*2;
        fn main() ab(b: 1, a: -2);

-----

#ifndef fu_NO_fdefs

inline static int ab_V3ST2uOu(const int a, const int b)
{
    return a + (b * 2);
}

int fu_MAIN()
{
    return ab_V3ST2uOu(-2, 1);
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

#ifndef fu_NO_fdefs

inline static int add_s_vy_gOe58vvN(const s_yi32& v, const int s)
{
    return s + v.y;
}

int fu_MAIN()
{
    return add_s_vy_gOe58vvN(s_yi32 { 1 }, -1);
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

#ifndef fu_NO_fdefs

inline static int add_s_vx_TuVeK2RP(const int s, const s_xi32& v)
{
    return s + v.x;
}

int fu_MAIN()
{
    return add_s_vx_TuVeK2RP(-1, s_xi32 { 1 });
}

#endif

int main() { return fu_MAIN(); }

-----

        fn ab(a, b = 0, c = 0) a + b*2 + c*3;
        fn main() ab(3, c: -1);

-----

#ifndef fu_NO_fdefs

inline static int ab_zGWPMBKJ(const int a, const int b, const int c)
{
    return (a + (b * 2)) + (c * 3);
}

int fu_MAIN()
{
    return ab_zGWPMBKJ(3, 0, -1);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn ab(a, b = -1) a + b*2;
        fn main() ab(3.0, -1.5).i32;

-----

#ifndef fu_NO_fdefs

inline static double ab_z7YBOixI(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_z7YBOixI(3.0, -1.5));
}

#endif

int main() { return fu_MAIN(); }

-----

        let NEG_ONE_FIVE = -1.5;
        fn ab(a: $T, b: $T = -1) a + b*2;
        fn main() ab(3, NEG_ONE_FIVE).i32;

-----

#ifndef fu_NO_fdefs

static const double NEG_ONE_FIVE = -1.5;

inline static double ab_z7YBOixI(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_z7YBOixI(3.0, NEG_ONE_FIVE));
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        let TWO = 2.0;
        fn ab(a: $T, b: $T = -1) a + b*2;
        fn main() ab(TWO).i32;

-----

#ifndef fu_NO_fdefs

static const double TWO = 2.0;

inline static double ab_z7YBOixI(const double a, const double b)
{
    return a + (b * 2.0);
}

int fu_MAIN()
{
    return int(ab_z7YBOixI(TWO, -1.0));
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn self_rec_template(x: $T): $T                     // !N_FnResolve
            x > 0 ? self_rec_template(x / 2 - 5) : x;

        fn main()
            self_rec_template(7) + 2;

-----
inline static int self_rec_template_DXBD5vmC(int);

#ifndef fu_NO_fdefs

inline static int self_rec_template_DXBD5vmC(const int x)
{
    if (x > 0)
        return self_rec_template_DXBD5vmC(((x / 2) - 5));
    else
        return x;

}

int fu_MAIN()
{
    return self_rec_template_DXBD5vmC(7) + 2;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

-----

        fn ab_rec(a: $T): $T = a ? ba_rec(a - 2) : -100;
        fn ba_rec(a: $T): $T = a ? ab_rec(a - 7) : -200;
        fn main() ab_rec(11) + 200;

-----
inline static int ba_rec_KFeeUbvh(int);
inline static int ab_rec_KFeeUbvh(int);

#ifndef fu_NO_fdefs

inline static int ba_rec_KFeeUbvh(const int a)
{
    if (a)
        return ab_rec_KFeeUbvh((a - 7));
    else
        return -200;

}

inline static int ab_rec_KFeeUbvh(const int a)
{
    if (a)
        return ba_rec_KFeeUbvh((a - 2));
    else
        return -100;

}

int fu_MAIN()
{
    return ab_rec_KFeeUbvh(11) + 200;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

-----

        fn main() {
            let a = 1;
            fn add1(b) a + b;
            return 2.add1 - 3;
        }

-----

#ifndef fu_NO_fdefs

inline static int add1_TtjF9B2H(const int b, const int a)
{
    return a + b;
}

int fu_MAIN()
{
    const int a = 1;
    return add1_TtjF9B2H(2, a) - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        pub fn MAP(a: [$T], fn) {               // !N_DeadCode
            mut res: typeof( fn($T) )[];
            res.grow_junk(a.len);
            for (mut i = 0; i < a.len; i++) res[i] = fn(a[i]);
            return res;
        }

        pub fn clone(a: $T)
        case ($T.is::copy) a;
        case ($T -> [$U]) a.MAP(fn clone);
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_clone_KFeeUbvhZVk
                                #define DEF_clone_KFeeUbvhZVk
inline int clone_KFeeUbvh(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_57ivwbk1L89
                                #define DEF_clone_57ivwbk1L89
inline s_Scope clone_57ivwbk1(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};
    res.x = clone_KFeeUbvh(a.x);
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_MAP_XEstX3yAgPk
                                #define DEF_MAP_XEstX3yAgPk
inline fu_VEC<s_Scope> MAP_XEstX3yA(fu::view<s_Scope> a)
{
    /*MOV*/ fu_VEC<s_Scope> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_57ivwbk1(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_7ZYyXSkNv4g
                                #define DEF_clone_7ZYyXSkNv4g
inline fu_VEC<s_Scope> clone_7ZYyXSkN(fu::view<s_Scope> a)
{
    return MAP_XEstX3yA(a);
}
                                #endif

                                #ifndef DEF_clone_ljMcSg550a9
                                #define DEF_clone_ljMcSg550a9
inline s_ModuleOutputs clone_ljMcSg55(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};
    res.deps = clone_7ZYyXSkN(a.deps);
    return /*NRVO*/ res;
}
                                #endif

int test_ljMcSg55(const s_ModuleOutputs& a)
{
    s_ModuleOutputs b = clone_ljMcSg55(a);
    return a.deps.size() - b.deps.size();
}

int fu_MAIN()
{
    return test_ljMcSg55(s_ModuleOutputs{});
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

#ifndef fu_NO_fdefs

static int hey_aHMICT96(const s_X& x)
{
    const int b = -1;
    return x.a + b;
}

int fu_MAIN()
{
    return hey_aHMICT96(s_X { 1 });
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

#ifndef fu_NO_fdefs

inline static int add_uxa_b_template_oKRlsc9P(const s_X& x, const int b)
{
    return x.a + b;
}

static int hey_aHMICT96(const s_X& x)
{
    return add_uxa_b_template_oKRlsc9P(x, -1);
}

int fu_MAIN()
{
    return hey_aHMICT96(s_X { 1 });
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

#ifndef fu_NO_fdefs

inline static int incr_yRNYXd1L(int& a)
{
    return a++;
}

int fu_MAIN()
{
    int a = 1;
    incr_yRNYXd1L(a);
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

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----

        inline fn inl_lies(x: u32) = x;
        fn main() 0.inl_lies ? 1 : 0;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    // Hoisted:
    unsigned x;

    unsigned BL_1_v {};
    if ((__extension__ (
    {
        x = 0u;
        BL_1_v = (x);
    (void)0;}), unsigned(BL_1_v)))
        return 1;
    else
        return 0;

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

	Bad call to [34;1mswap[0m (i32: mutref copy, i32: copy): 

	[35;1mtemplate[0m [34;1m
<fu/vec/view_swap.h>
fu::view_swap[0m: Wrong number of arguments: expects 3, got 2.

	[35;1mtemplate[0m [34;1m
hacks/soft_risk
<utility>
std::swap[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mwhat[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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


#ifndef fu_NO_fdefs

static void what_vz1hoU3p(int& x, int& y)
{
    std::swap(x, y);
}

int fu_MAIN()
{
    int a = 1;
    int b = 0;
    what_vz1hoU3p(a, b);
    return a;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn any(a, b) a || b;
        fn main() any(0, []);

-----

#ifndef fu_NO_fdefs

inline static int any_HhuTmsuV(const int a)
{
    return a ? a : 0;
}

int fu_MAIN()
{
    return any_HhuTmsuV(0);
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedStmt

-----

        fn both(a, b) a && b;
        fn main() both(1, []);

-----

#ifndef fu_NO_fdefs

void fu_MAIN()
{
    return void();
}

#endif

int main() { return fu_MAIN(), 0; }

// N_UnusedCall, N_UnusedStmt

-----

        fn either(a, b) a ? a : b;
        fn main() either(0, []);

-----

#ifndef fu_NO_fdefs

inline static int either_HhuTmsuV(const int a)
{
    if (a)
        return a;
    else
        return 0;

}

int fu_MAIN()
{
    return either_HhuTmsuV(0);
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedStmt

-----

        pub fn identity(dont_leak_me) dont_leak_me;

-----

-----

        pub fn identity(dont_leak_me) dont_leak_me;

        let dont_leak_me = 1;
        fn main() _0::identity(dont_leak_me * 2) - 2;

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_dont_leak_me
                                #define DEF_dont_leak_me
inline constexpr int dont_leak_me = 1;
                                #endif

                                #ifndef DEF_identity_fdNF7LuLj9i
                                #define DEF_identity_fdNF7LuLj9i
inline int identity_fdNF7LuL(const int dont_leak_me)
{
    return dont_leak_me;
}
                                #endif

int fu_MAIN()
{
    return identity_fdNF7LuL((dont_leak_me * 2)) - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        pub inline fn inl_id_leak(dont_leak_me) dont_leak_me;
        let dont_leak_me = 1;
        fn main() inl_id_leak(dont_leak_me * 2) - 2;

-----

#ifndef fu_NO_fdefs

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

// N_SD_HasStaticInit, N_SD_ExternPrivates

-----

        let static = 1;
        fn template(arg) static + arg;
        let arg = 7;                        // <- template shouldn't see this
        let result = template(arg / -4);    // <- when specializing here
        fn main() result;

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_arg
                                #define DEF_arg
inline constexpr int arg = 7;
                                #endif

                                #ifndef DEF_static
                                #define DEF_static
inline constexpr int sTatic = 1;
                                #endif

inline static int tEmplate_qTB6wTQ8(const int arg)
{
    return sTatic + arg;
}

static const int result = tEmplate_qTB6wTQ8((arg / -4));

int fu_MAIN()
{
    return result;
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn main() {
            let static = 1;
            fn template(arg) static + arg;
            let arg = 7; // same here, except we're in a fn.
            return template(arg / -4);
        }

-----

#ifndef fu_NO_fdefs

inline static int tEmplate_7iMdRWLU(const int arg, const int sTatic)
{
    return sTatic + arg;
}

int fu_MAIN()
{
    const int sTatic = 1;
    const int arg = 7;
    return tEmplate_7iMdRWLU((arg / -4), sTatic);
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

#ifndef fu_NO_fdefs

static s_HasInt operator+(const s_HasInt& a, const s_HasInt& b)
{
    return s_HasInt { (a.i + b.i) };
}

                                #ifndef DEF_template_add_xdhNmqgJRyc
                                #define DEF_template_add_xdhNmqgJRyc
inline s_HasInt template_add_xdhNmqgJ(const s_HasInt& a, const s_HasInt& b)
{
    return a + b;
}
                                #endif

int fu_MAIN()
{
    return template_add_xdhNmqgJ(s_HasInt { 1 }, s_HasInt { 2 }).i - 3;
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

#ifndef fu_NO_fdefs

static s_HasInt operator+(const s_HasInt& a, const s_HasInt& b)
{
    return s_HasInt { (a.i + b.i) };
}

                                #ifndef DEF_template_add_xdhNmqgJRyc
                                #define DEF_template_add_xdhNmqgJRyc
inline s_HasInt template_add_xdhNmqgJ(const s_HasInt& a, const s_HasInt& b)
{
    return a + b;
}
                                #endif

int fu_MAIN()
{
    return template_add_xdhNmqgJ(s_HasInt { 1 }, s_HasInt { 2 }).i - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn inner(i: i32): i32
            i > 0 ? outer(i - 1) : 0;

        fn outer(i: i32): i32
            2 * inner(i);

        return outer(1);

-----
static int inner_NOJ9Zz9j(int);
static int outer_xqlJBBE3(int);

#ifndef fu_NO_fdefs

static int inner_NOJ9Zz9j(const int i)
{
    if (i > 0)
        return outer_xqlJBBE3((i - 1));
    else
        return 0;

}

static int outer_xqlJBBE3(const int i)
{
    return 2 * inner_NOJ9Zz9j(i);
}

int fu_MAIN()
{
    return outer_xqlJBBE3(1);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

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
static int inner_i7NAyv3Y(int, int, int, int);
static int outer_ZFiP0X8g(int, int, int, int);

#ifndef fu_NO_fdefs

static int inner_i7NAyv3Y(const int i, const int one, const int zero, const int two)
{
    if (i > zero)
        return outer_ZFiP0X8g((i - one), one, zero, two);
    else
        return zero;

}

static int outer_ZFiP0X8g(const int i, const int one, const int zero, const int two)
{
    return two * inner_i7NAyv3Y(i, one, zero, two);
}

static int test_K49Xule3(const int one)
{
    const int zero = (one - 1);
    const int two = (one * 2);
    return outer_ZFiP0X8g(one, one, zero, two) + ((two - one) * 17);
}

int fu_MAIN()
{
    return test_K49Xule3(1) - 17;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

-----

        fn inner(i: i32): i32
            outer(i - 1);

        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        let implicit x = 7;
        return outer(1) - 7;

-----
static int inner_AF8otI7i(int, int);
static int outer_wbqZtcgd(int, int);

#ifndef fu_NO_fdefs

static int inner_AF8otI7i(const int i, const int x)
{
    return outer_wbqZtcgd((i - 1), x);
}

static int outer_wbqZtcgd(const int i, const int x)
{
    if (i > 0)
        return inner_AF8otI7i(i, x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_wbqZtcgd(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

-----

        fn inner_noret(i: i32)
            outer_noret(i - 1);

        fn outer_noret(implicit x: i32, i: i32)
            i > 0   ? inner_noret(i)
                    : x + i;

        let implicit x = 7;
        return outer_noret(1) - 7;

-----
static int inner_noret_AF8otI7i(int, int);
static int outer_noret_wbqZtcgd(int, int);

#ifndef fu_NO_fdefs

static int inner_noret_AF8otI7i(const int i, const int x)
{
    return outer_noret_wbqZtcgd((i - 1), x);
}

static int outer_noret_wbqZtcgd(const int i, const int x)
{
    if (i > 0)
        return inner_noret_AF8otI7i(i, x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_noret_wbqZtcgd(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

-----

        inline fn inner_inl(i: i32): i32
            outer_inl(i - 1);

        fn outer_inl(implicit x: i32, i: i32): i32
            i > 0   ? inner_inl(i)
                    : x + i;

        let implicit x = 7;
        return outer_inl(1) - 7;

-----
static int outer_inl_wbqZtcgd(int, int);

#ifndef fu_NO_fdefs

static int outer_inl_wbqZtcgd(const int i, const int x)
{
    if (i > 0)
        return outer_inl_wbqZtcgd((i - 1), x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_inl_wbqZtcgd(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

-----

        fn inner_templ(i): i32
            outer_templ(i - 1);

        fn outer_templ(implicit x: i32, i): i32
            i > 0   ? inner_templ(i)
                    : x + i;

        let implicit x = 7;
        return outer_templ(1) - 7;

-----
inline static int inner_templ_go63YaJj(int, int);
inline static int outer_templ_iivBEmF6(int, int);

#ifndef fu_NO_fdefs

inline static int inner_templ_go63YaJj(const int i, const int x)
{
    return outer_templ_iivBEmF6((i - 1), x);
}

inline static int outer_templ_iivBEmF6(const int i, const int x)
{
    if (i > 0)
        return inner_templ_go63YaJj(i, x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_templ_iivBEmF6(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

-----

        fn inner_templ_noret(i)
            outer_templ_noret(i - 1);

        fn outer_templ_noret(implicit x: i32, i)
            i > 0   ? inner_templ_noret(i)
                    : x + i;

        let implicit x = 7;
        return outer_templ_noret(1) - 7;

-----
inline static int inner_templ_noret_go63YaJj(int, int);
inline static int outer_templ_noret_iivBEmF6(int, int);

#ifndef fu_NO_fdefs

inline static int inner_templ_noret_go63YaJj(const int i, const int x)
{
    return outer_templ_noret_iivBEmF6((i - 1), x);
}

inline static int outer_templ_noret_iivBEmF6(const int i, const int x)
{
    if (i > 0)
        return inner_templ_noret_go63YaJj(i, x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_templ_noret_iivBEmF6(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

-----

        fn outer(i: i32): i32
            i > 0   ? inner(i)
                    : 2 * i;

        fn inner(implicit x: i32, i: i32): i32
            outer(i - 2 * x);

        let implicit x = 3;
        return outer(6);

-----
static int inner_wbqZtcgd(int, int);
static int outer_AF8otI7i(int, int);

#ifndef fu_NO_fdefs

static int inner_wbqZtcgd(const int i, const int x)
{
    return outer_AF8otI7i((i - (2 * x)), x);
}

static int outer_AF8otI7i(const int i, const int x)
{
    if (i > 0)
        return inner_wbqZtcgd(i, x);
    else
        return 2 * i;

}

int fu_MAIN()
{
    const int x = 3;
    return outer_AF8otI7i(6, x);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

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

#ifndef fu_NO_fdefs

static int has_implicit_T0KifhWP(const int add, const int i)
{
    return i + add;
}

int fu_MAIN()
{
    const int i = 2;
    return has_implicit_T0KifhWP(1, i) - 3;
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
static int inner_inl_wbqZtcgd(int, int);

#ifndef fu_NO_fdefs

static int inner_inl_wbqZtcgd(const int i, const int x)
{
    const int i_1 = (i - (2 * x));
    if (i_1 > 0)
        return inner_inl_wbqZtcgd(i_1, x);
    else
        return 2 * i_1;

}

int fu_MAIN()
{
    const int x = 3;
    const int i = 6;
    if (i > 0)
        return inner_inl_wbqZtcgd(i, x);
    else
        return 2 * i;

}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

-----

        fn outer_templ(i): i32
            i > 0   ? inner_templ(i)
                    : 2 * i;

        fn inner_templ(implicit x: i32, i): i32
            outer_templ(i - 2 * x);

        let implicit x = 3;
        return outer_templ(6);

-----
inline static int inner_templ_go63YaJj(int, int);
inline static int outer_templ_iivBEmF6(int, int);

#ifndef fu_NO_fdefs

inline static int inner_templ_go63YaJj(const int i, const int x)
{
    return outer_templ_iivBEmF6((i - (2 * x)), x);
}

inline static int outer_templ_iivBEmF6(const int i, const int x)
{
    if (i > 0)
        return inner_templ_go63YaJj(i, x);
    else
        return 2 * i;

}

int fu_MAIN()
{
    const int x = 3;
    return outer_templ_iivBEmF6(6, x);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

-----

        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        fn inner(i: i32): i32
            outer(i - 1);

        let implicit x = 7;
        return outer(1) - 7;

-----
static int inner_wbqZtcgd(int, int);
static int outer_AF8otI7i(int, int);

#ifndef fu_NO_fdefs

static int inner_wbqZtcgd(const int i, const int x)
{
    return outer_AF8otI7i((i - 1), x);
}

static int outer_AF8otI7i(const int i, const int x)
{
    if (i > 0)
        return inner_wbqZtcgd(i, x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_AF8otI7i(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

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
static int noret_nK5sJl9H(int, int);
inline static int tEmplate_nK5sJl9H(int, int);
static int inner_nK5sJl9H(int, int);
static int outer_nK5sJl9H(int, int);

#ifndef fu_NO_fdefs

static int noret_nK5sJl9H(const int i, const int x)
{
    return outer_nK5sJl9H(i, x);
}

inline static int tEmplate_nK5sJl9H(const int i, const int x)
{
    if (i & 1)
        return outer_nK5sJl9H(i, x);
    else
        return noret_nK5sJl9H(i, x);

}

static int inner_nK5sJl9H(const int i, const int x)
{
    return tEmplate_nK5sJl9H((i - 1), x);
}

static int outer_nK5sJl9H(const int i, const int x)
{
    if (i > 0)
        return inner_nK5sJl9H(i, x);
    else
        return x + i;

}

int fu_MAIN()
{
    const int x = 7;
    return outer_nK5sJl9H(1, x) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_FnReopen

-----

        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_1(call_self = false): i32
            = !call_self ? returns_x : calls_self_1 * 2;

        let implicit x = 7;
        return calls_self_1(true) - 14;

-----
static int calls_self_1_5KyVdNz2(bool, int);

#ifndef fu_NO_fdefs

static int returns_x_1nUeX7Cl(const int x)
{
    return x;
}

static int calls_self_1_5KyVdNz2(const bool call_self, const int x)
{
    if (!call_self)
        return returns_x_1nUeX7Cl(x);
    else
        return calls_self_1_5KyVdNz2(false, x) * 2;

}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_1_5KyVdNz2(true, x) - 14;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

-----

        fn returns_x(implicit x: i32): i32
            = x;

        fn calls_self_2(call_self = false): i32
            = call_self ? calls_self_2 * 3 : returns_x;

        let implicit x = 7;
        return calls_self_2(true) - 21;

-----
static int calls_self_2_5KyVdNz2(bool, int);

#ifndef fu_NO_fdefs

static int returns_x_1nUeX7Cl(const int x)
{
    return x;
}

static int calls_self_2_5KyVdNz2(const bool call_self, const int x)
{
    if (call_self)
        return calls_self_2_5KyVdNz2(false, x) * 3;
    else
        return returns_x_1nUeX7Cl(x);

}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_2_5KyVdNz2(true, x) - 21;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

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
static int do_call_self_ZHR8BsvD(int, int, int);
static int calls_self_3_5KyVdNz2(bool, int);

#ifndef fu_NO_fdefs

static int do_call_self_ZHR8BsvD(const int mul, const int add, const int x)
{
    return (calls_self_3_5KyVdNz2(false, x) * mul) + add;
}

static int returns_x_1nUeX7Cl(const int x)
{
    return x;
}

static int calls_self_3_5KyVdNz2(const bool call_self, const int x)
{
    const int add = 1;
    if (call_self)
        return do_call_self_ZHR8BsvD(4, add, x);
    else
        return returns_x_1nUeX7Cl(x);

}

int fu_MAIN()
{
    const int x = 7;
    return calls_self_3_5KyVdNz2(true, x) - 29;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

-----

        fn noret_x(implicit x: i32) x;

        fn templ_calls_self_2(call_self): i32
            = call_self ? templ_calls_self_2(false) * 3 : noret_x;

        fn main() {
            let implicit x = 7;
            return templ_calls_self_2(true) - 21;
        }

-----
inline static int templ_calls_self_2_wqB78TlL(bool, int);

#ifndef fu_NO_fdefs

static int noret_x_DXBD5vmC(const int x)
{
    return x;
}

inline static int templ_calls_self_2_wqB78TlL(const bool call_self, const int x)
{
    if (call_self)
        return templ_calls_self_2_wqB78TlL(false, x) * 3;
    else
        return noret_x_DXBD5vmC(x);

}

int fu_MAIN()
{
    const int x = 7;
    return templ_calls_self_2_wqB78TlL(true, x) - 21;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

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

#ifndef fu_NO_fdefs

static int size_tqMcby3b(const s_Range& r)
{
    return r.max - r.min;
}

static int test_C3Tqip8J(const s_Range& r)
{
    return size_tqMcby3b(r);
}

int fu_MAIN()
{
    const s_Range r = s_Range { 14, 21 };
    return test_C3Tqip8J(r) - 7;
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

#ifndef fu_NO_fdefs

static int size_tqMcby3b(const s_Range& r)
{
    return r.max - r.min;
}

static int inner_C3Tqip8J(const s_Range& r)
{
    return size_tqMcby3b(r);
}

static int outer_1DpFfXhR(const s_Range& r)
{
    return inner_C3Tqip8J(r);
}

int fu_MAIN()
{
    const s_Range r = s_Range { 14, 21 };
    return outer_1DpFfXhR(r) - 7;
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

#ifndef fu_NO_fdefs

static int sibling1_fucyoNFu(const int z, const int c)
{
    return z + c;
}

static int depth2_AeXTmnXo(const int y, const int x, const int b, const int c)
{
    return sibling1_fucyoNFu(((x + y) + b), c);
}

static int depth1_U7GkMeLB(const int x, const int a, const int b, const int c)
{
    return depth2_AeXTmnXo((x + a), x, b, c);
}

int fu_MAIN()
{
    const int a = 1;
    const int b = 2;
    const int c = 3;
    return depth1_U7GkMeLB(0, a, b, c) - 6;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn goto0(x): i32 = x ? goto0(x / 2) : 0;
        fn main() goto0(1);

-----
inline static int goto0_DXBD5vmC(int);

#ifndef fu_NO_fdefs

inline static int goto0_DXBD5vmC(const int x)
{
    if (x)
        return goto0_DXBD5vmC((x / 2));
    else
        return 0;

}

int fu_MAIN()
{
    return goto0_DXBD5vmC(1);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion

-----

        fn goto0(x) x ? goto0(x / 2) : 0;
        fn main() goto0(1);

-----
inline static int goto0_DXBD5vmC(int);

#ifndef fu_NO_fdefs

inline static int goto0_DXBD5vmC(const int x)
{
    if (x)
        return goto0_DXBD5vmC((x / 2));
    else
        return 0;

}

int fu_MAIN()
{
    return goto0_DXBD5vmC(1);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

-----

        fn goto0(x) x ? goto0(x / 2) : x; // ideally same as above
        fn main() goto0(1);

-----
inline static int goto0_DXBD5vmC(int);

#ifndef fu_NO_fdefs

inline static int goto0_DXBD5vmC(const int x)
{
    if (x)
        return goto0_DXBD5vmC((x / 2));
    else
        return x;

}

int fu_MAIN()
{
    return goto0_DXBD5vmC(1);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

-----

        fn goto0(x) x && goto0(x / 2); // ideally same as above [again]
        fn main() goto0(1);

-----
inline static int goto0_DXBD5vmC(int);

#ifndef fu_NO_fdefs

inline static int goto0_DXBD5vmC(const int x)
{
    return x ? goto0_DXBD5vmC((x / 2)) : int{};
}

int fu_MAIN()
{
    return goto0_DXBD5vmC(1);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

-----

        fn ref_a(ref a: i32) a;

        fn main() {
            mut a: i32;
            ref r = ref_a(a);
            r++;
            return a - 1;
        }

-----

#ifndef fu_NO_fdefs

static int& ref_a_ak4ns35v(int& a)
{
    return a;
}

int fu_MAIN()
{
    int a {};
    int& r = ref_a_ak4ns35v(a);
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

#ifndef fu_NO_fdefs

static int& ref_a_or_ref_b_D7ta17ag(int& a, int& b)
{
    return a ? a : b;
}

int fu_MAIN()
{
    int a {};
    int b {};
    int& a_or_b = ref_a_or_ref_b_D7ta17ag(a, b);
    a_or_b++;
    return b - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn impl(implicit ref _impl: i32) _impl;
        fn arg_or_impl(ref arg: i32) arg || impl;
        fn main() {
            implicit mut _impl: i32;
            mut arg: i32;
            ref ref = arg_or_impl(arg);
            return arg - ref;
        }

-----

#ifndef fu_NO_fdefs

static int& impl_Zrgg0GpZ(int& _impl)
{
    return _impl;
}

static int& arg_or_impl_31Qp4an9(int& arg, int& _impl)
{
    return arg ? arg : impl_Zrgg0GpZ(_impl);
}

int fu_MAIN()
{
    int _impl {};
    int arg {};
    const int ref = arg_or_impl_31Qp4an9(arg, _impl);
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

static fu_VEC<int>& hello_ceA7XsJ0(fu_VEC<int>&, fu_VEC<int>&, int);

#ifndef fu_NO_fdefs

static fu_VEC<int>& hello_ceA7XsJ0(fu_VEC<int>& a, fu_VEC<int>& b, const int x)
{
    if (x == 0)
        return a;
    else if (x == 1)
        return b;
    else
        return hello_ceA7XsJ0(b, a, (x / 17));

}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<3, int> { 1, 2, 3 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<3, int> { 4, 5, 6 } };
    hello_ceA7XsJ0(a, b, 397).mutref(1) *= 5;
    return b[1] - 25;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_RelaxRespec

-----

        pub fn ZERO(implicit ref sum: i32, mut x: i32) {
            while (x) {
                ZERO( --x ); // Same as below but without the unused 'y' thing,
                sum += x;    //  everything works because the call to ZERO isnt really unconditional,
            }                //   and if it were, then the never return would actually be correct.
        }

        fn main() {
            implicit mut sum = 0;
            ZERO(4);
            return sum - 11;
        }

-----
void ZERO_w7dq3wWg(int, int&);

#ifndef fu_NO_fdefs

void ZERO_w7dq3wWg(int x, int& sum)
{
    while (x)
    {
        ZERO_w7dq3wWg(int(--x), sum);
        sum += x;
    };
}

int fu_MAIN()
{
    int sum = 0;
    ZERO_w7dq3wWg(4, sum);
    return sum - 11;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCode

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
            implicit mut sum = 0;
            ZERO(4);
            return sum - 12;
        }

-----
void ZERO_w7dq3wWg(int, int&);

#ifndef fu_NO_fdefs

void ZERO_w7dq3wWg(int x, int& sum)
{
    while (x)
    {
        const int y = (x / 2);
        ZERO_w7dq3wWg(int(--x), sum);
        ZERO_w7dq3wWg(int(y), sum);
        sum += x;
    };
}

int fu_MAIN()
{
    int sum = 0;
    ZERO_w7dq3wWg(4, sum);
    return sum - 12;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCode

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
            implicit mut next = 0;

            let solve = solve(Node([
                Node([ Node ]),
                Node(),
            ]));

            return solve.len - 2;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>

struct s_Node;
static fu_VEC<int> solveNodes_XcSYx8Lg(fu::view<s_Node>, int&);
static fu_VEC<int> solveBlock_8mpStzXD(const s_Node&, int, int&);
static fu_VEC<int> solveNode_sh1uFjio(const s_Node&, int&);

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

#ifndef fu_NO_fdefs

static fu_VEC<int> solveNodes_XcSYx8Lg(fu::view<s_Node> nodes, int& next)
{
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < nodes.size(); i++)
        result += solveNode_sh1uFjio(nodes[i], next);

    return /*NRVO*/ result;
}

static bool Lifetime_allowsMutrefReturn_o8iC9EkX(fu::view<int> items, const int CTX)
{
    for (int i = items.size(); i-- > 0; )
    {
        const int item = items[i];
        const int CTX_1 = CTX;
        if (item == CTX_1)
            return false;

    };
    return true;
}

static const fu_VEC<int>& solveBlock_wS2zJ7O4(const fu_VEC<int>& items, const int CTX)
{
    if (!Lifetime_allowsMutrefReturn_o8iC9EkX(items, CTX))
        fu::fail("Nope!"_fu);
    else
        return items;

}

static fu_VEC<int> solveBlock_8mpStzXD(const s_Node& node, const int CTX, int& next)
{
    /*MOV*/ fu_VEC<int> items = solveNodes_XcSYx8Lg(node.items, next);
    return /* MOVE_FROM_CONST_REF */static_cast<fu_VEC<int>&&>(const_cast<fu_VEC<int>&>(solveBlock_wS2zJ7O4(items, CTX)));
}

static fu_VEC<int> solveNode_sh1uFjio(const s_Node& node, int& next)
{
    if (!node.items)
    {
        return fu_VEC<int> { fu::slate<1, int> { next++ } };
    }
    else
    {
        const int CTX = node.items.size();
        return solveBlock_8mpStzXD(node, CTX, next);
    };
}

static fu_VEC<int> solve_9uttlEqm(const s_Node& root, int& next)
{
    return solveNode_sh1uFjio(root, next);
}

int fu_MAIN()
{
    int next = 0;
    fu_VEC<int> solve = solve_9uttlEqm(s_Node { fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node { fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node{} } } }, s_Node{} } } }, next);
    return solve.size() - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_TypeRecursion, N_TypeResolve

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

	No implicit [31;1mx[0m in scope, needed to call [35;1mfn[0m [34;1mwoot[0m.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        fn woot(implicit x: i32) = x;

        fn main() {

            let implicit x = 2;

            return woot() - 2;
        }

-----

#ifndef fu_NO_fdefs

static int woot_DXBD5vmC(const int x)
{
    return x;
}

int fu_MAIN()
{
    const int x = 2;
    return woot_DXBD5vmC(x) - 2;
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

	No implicit [31;1my[0m in scope, needed to call [35;1mfn[0m [34;1mhey[0m.

-----


        fn woot(implicit x: i32) = x;


        fn hey() {
            let implicit x = 2;
            return woot() - 2;
        }

        let here = hey();
        fn main() = here;

-----

#ifndef fu_NO_fdefs

static int woot_DXBD5vmC(const int x)
{
    return x;
}

static int hey_H9fhQUVP()
{
    const int x = 2;
    return woot_DXBD5vmC(x) - 2;
}

static const int here = hey_H9fhQUVP();

int fu_MAIN()
{
    return here;
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn main() {
            mut x = +1;
            mut y: typeof(x) = -x;
            return x + y;
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int x = +1;
    const int y = -x;
    return x + y;
}

#endif

int main() { return fu_MAIN(); }

-----

        // N_UnusedImplicit
        fn dont_inject_my_implicit_args(implicit unused_implicit_arg: i32) {
            return unused_implicit_arg;
        }

        fn not_extern() {
            mut x: typeof(dont_inject_my_implicit_args) = 2;
            return x;
        }

        fn not_extern(mut x: typeof(dont_inject_my_implicit_args)) {
            return x;
        }

        fn main() {
            return not_extern() + not_extern(-2);
        }

-----

#ifndef fu_NO_fdefs

static int not_extern_H9fhQUVP()
{
    const int x = 2;
    return x;
}

static int not_extern_DXBD5vmC(const int x)
{
    return x;
}

int fu_MAIN()
{
    return not_extern_H9fhQUVP() + not_extern_DXBD5vmC(-2);
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedImplicit

-----

        fn mustwarn_unused_implicit(implicit forgot_to_use: i32, ref x: i32) {

            x *= 3;             
        }

        fn main() {
            mut x = 7;
            implicit forgot_to_use = 3;
            mustwarn_unused_implicit(x);
            return x == forgot_to_use * 7 ? 0 : 1;
        }

-----
_0.fu @2:9:

[2m      | [0m
    2 |         [31;1mfn[0m mustwarn_unused_implicit(implicit forgot_to_use: i32, ref x: i32) {
[2m      | [0m
[2m      |             x *= 3;             [0m

	Unused variable: [31;1mforgot_to_use[0m: make it [35;1mlax[0m if this is intentional.

       RelaxMut [35;1mfn[0m [34;1mmustwarn_unused_implicit[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn mustwarn_unused_implicit(implicit forgot_to_use: i32, ref x: i32) {

            x *= forgot_to_use; 
        }

        fn main() {
            mut x = 7;
            implicit forgot_to_use = 3;
            mustwarn_unused_implicit(x);
            return x == forgot_to_use * 7 ? 0 : 1;
        }

-----

#ifndef fu_NO_fdefs

static void mustwarn_unused_implicit_WdmgWjVa(int& x, const int forgot_to_use)
{
    x *= forgot_to_use;
}

int fu_MAIN()
{
    int x = 7;
    const int forgot_to_use = 3;
    mustwarn_unused_implicit_WdmgWjVa(x, forgot_to_use);
    if (x == (forgot_to_use * 7))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        let x = 1;

        fn test(): &i32
            x;

        return test - 1;

-----

#ifndef fu_NO_fdefs

static int test_2Sy5erUa(const int x)
{
    return x;
}

int fu_MAIN()
{
    const int x = 1;
    return test_2Sy5erUa(x) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        let a = 1;
        let x: &i32 = a;

        return a - x;

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

static int test_7WJlkmiA(fu::view<int> view)
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
    return test_7WJlkmiA(arr);
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


#ifndef fu_NO_fdefs

static int test_7WJlkmiA(fu::view<int> view)
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
    return test_7WJlkmiA(arr);
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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int x = 5;
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { -5 } };
    arr.push(int(x));
    return arr[0] + arr[1];
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

-----


        let x = [        0 ]; 
        return x[0];

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return x[0];
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


#ifndef fu_NO_fdefs

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
            {
                a = fu_VEC<int> { fu::slate<8, int> { int(i_1), int(i_1), int(i_1), int(i_1), int(i_1), int(i_1), int(i_1), int(i_1) } };
            };
        };
        other = arr;
        int _0 {};
        arr.resize(((_0 = other.size()) ? _0 : int(i)));
    };
    return other.size();
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.push(5);
            if (((orig[1] + orig[4]) - orig[5]) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.insert(5, 5);
            if (((orig[1] + orig[4]) - orig[5]) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.pop();
            if (((orig[1] + orig[3]) - orig.size()) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.splice(4, 1);
            if (((orig[1] + orig[3]) - orig.size()) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.unshift(5);
            if (((orig[2] + orig[5]) - orig[0]) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.insert(0, 5);
            if (((orig[2] + orig[5]) - orig[0]) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.shift();
            if (((orig[0] + orig[2]) - orig[3]) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.insert(1, 5);
            if (((orig[2] + orig[5]) - orig[1]) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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
        else
        {
            orig.splice(1, 3);
            if ((((orig.size() + orig[0]) + orig[1]) - 102) != 0)
                return 23;

        };
    };
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        let OPERATORS = [ "+", "-", "*", "/" ];

        fn main()
            OPERATORS[2] == "*" ? 0 : 1;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_VEC<fu_STR> OPERATORS fu_INIT_PRIORITY(1001) = fu_VEC<fu_STR> { fu::slate<4, fu_STR> { "+"_fu, "-"_fu, "*"_fu, "/"_fu } };

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    if (OPERATORS[2] == "*"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<s_X> x {};
    x.push(s_X { fu_VEC<s_Y> { fu::slate<1, s_Y> { s_Y { true } } } });
    return (x.size() + (x[0].y.size() * 2)) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return s_SelfRec { fu_VEC<s_SelfRec> { fu::slate<1, s_SelfRec> { s_SelfRec{} } } }.x.size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve

-----

        struct ABRec { x: BARec[]; };
        struct BARec { x: ABRec[]; };
        fn main() ABRec( [ BARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor

-----
#include <fu/vec.h>

struct s_BARec;
struct s_ABRec;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return s_ABRec { fu_VEC<s_BARec> { fu::slate<1, s_BARec> { s_BARec{} } } }.x.size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeReopen

-----

        struct ABRec { x: BARec[]; y: ABBARec[]; };
        struct BARec { x: ABRec[]; y: ABBARec[]; };
        struct ABBARec { x: ABRec[]; y: BARec[]; };
        fn main() ABRec( [ BARec() ], [ ABBARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor

-----
#include <fu/vec.h>

struct s_BARec;
struct s_ABRec;
struct s_ABBARec;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return s_ABRec { fu_VEC<s_BARec> { fu::slate<1, s_BARec> { s_BARec{} } }, fu_VEC<s_ABBARec> { fu::slate<1, s_ABBARec> { s_ABBARec{} } } }.x.size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeReopen

-----

        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]
        a.sort();
        return a[0] + a[1] + a[3] + a[4];

-----
#include <fu/vec.h>
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

                                #ifndef DEF_sort_ktu8TX39s22
                                #define DEF_sort_ktu8TX39s22
inline void sort_ktu8TX39(fu_VEC<int>& a)
{

        auto* data = a.data_mut();
        std::sort(data, data + a.size());
    ;
}
                                #endif

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<6, int> { 7, 1, 5, 3, 99, -13 } };
    sort_ktu8TX39(a);
    return ((a[0] + a[1]) + a[3]) + a[4];
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

-----

        let a = [0, 1, 2, 3];
        let b = a.slice(1, 3);
        return b.len - b[1];

-----
#include <fu/vec.h>
#include <fu/vec/slice.h>


#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

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
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

                                #ifndef DEF_sort_ktu8TX39s22
                                #define DEF_sort_ktu8TX39s22
inline void sort_ktu8TX39(fu_VEC<int>& a)
{

        auto* data = a.data_mut();
        std::sort(data, data + a.size());
    ;
}
                                #endif

inline static int collectDedupes_bD7c4no9(fu_VEC<int>&& vals)
{
    sort_ktu8TX39(vals);
    return vals[0];
}

int fu_MAIN()
{
    /*MOV*/ fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 0 } };
    return collectDedupes_bD7c4no9(static_cast<fu_VEC<int>&&>(vals));
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

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
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

                                #ifndef DEF_sort_ktu8TX39s22
                                #define DEF_sort_ktu8TX39s22
inline void sort_ktu8TX39(fu_VEC<int>& a)
{

        auto* data = a.data_mut();
        std::sort(data, data + a.size());
    ;
}
                                #endif

static int collectDedupes_bD7c4no9(fu_VEC<int>&& vals)
{
    sort_ktu8TX39(vals);
    return vals[0];
}

int fu_MAIN()
{
    /*MOV*/ fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 0 } };
    return collectDedupes_bD7c4no9(static_cast<fu_VEC<int>&&>(vals));
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

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
#include <utility>
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void sort01_921Zrsl4(fu::view_mut<int> arr)
{
    int tmp {};
    if (arr[0] > arr[1])
    {
        std::swap(arr.mutref(0), tmp);
        std::swap(arr.mutref(1), tmp);
    };
}

inline static int collectDedupes_PXgzQvsv(fu_VEC<int>&& vals)
{
    sort01_921Zrsl4(vals);
    return vals[0];
}

int fu_MAIN()
{
    /*MOV*/ fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 0 } };
    return collectDedupes_PXgzQvsv(static_cast<fu_VEC<int>&&>(vals));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        mut str = "hello ";
        str ~= "world";

        return str.len - 11;

-----
#include <fu/str.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

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
#include <fu/view.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_starts_Nz2mqu34wT8
                                #define DEF_starts_Nz2mqu34wT8
inline bool starts_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_ends_Nz2mqu34wT8
                                #define DEF_ends_Nz2mqu34wT8
inline bool ends_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

int fu_MAIN()
{
    fu_STR str = ("hello "_fu + "world"_fu);
    if (starts_Nz2mqu34(str, "hel"_fu))
    {
        if (ends_Nz2mqu34(str, "rld"_fu))
            return str.size() - 11;
        else
            return 171;

    }
    else
        return 173;

}

#endif

int main() { return fu_MAIN(); }

-----

        let str = "a" ~ 1710010;

        return str == "a1710010"
             ? 0 : 101;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR str = x7E_sTZRmMq1("a"_fu, fu::i64dec(1710010));
    if (str == "a1710010"_fu)
        return 0;
    else
        return 101;

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

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

// N_RelaxRespec

-----

        return "hello world".find("world")
             - 2 * [1, 7, 13, 14, 19].find(14);

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/find.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_find_Q09HnW0uoie
                                #define DEF_find_Q09HnW0uoie
inline int find_Q09HnW0u(fu::view<int> a, const int b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

int fu_MAIN()
{
    return fu::lfind("hello world"_fu, "world"_fu) - (2 * find_Q09HnW0u((fu::slate<5, int> { 1, 7, 13, 14, 19 }), 14));
}

#endif

int main() { return fu_MAIN(); }

-----

        return ("hello world".has("world") ? 1 : 0)
             + ([1, 14, 96, 2].has(14)     ? 2 : 0)
             - 3;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/find.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_has_Q09HnW0uoie
                                #define DEF_has_Q09HnW0uoie
inline bool has_Q09HnW0u(fu::view<int> a, const int b)
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
    return ((fu::has("hello world"_fu, "world"_fu) ? 1 : 0) + (has_Q09HnW0u((fu::slate<4, int> { 1, 14, 96, 2 }), 14) ? 2 : 0)) - 3;
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
#include <fu/view.h>
#include <fu/vec/slice.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR hw = "hello world!"_fu;
    fu_STR a = fu::slice(hw, 6, (6 + 5));
    fu_STR b = fu::substr(hw, 6, 5);
    if ((a == b) && (a == "world"_fu))
        return a.size() - 5;
    else
        return 1;

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
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_split_empxubwDcQ6
                                #define DEF_split_empxubwDcQ6
inline void split_empxubwD(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_empxubwD(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static int test_zbhr4CNi(const fu_STR& item)
{
    if (item == join_yaiqG1c4(split_3Ik58ru2(item, " "_fu), " "_fu))
        return 0;
    else
        return item.size();

}

int fu_MAIN()
{
    fu_VEC<fu_STR> tests = fu_VEC<fu_STR> { fu::slate<9, fu_STR> { fu_STR{}, " "_fu, "  "_fu, "hey you duders"_fu, " hey you duders"_fu, "hey you duders "_fu, "  hey you duders "_fu, "  hey you  duders "_fu, "  hey you  duders  "_fu } };
    int sum = 0;
    for (int i = 0; i < tests.size(); i++)
        sum += test_zbhr4CNi(tests[i]);

    return sum;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_MoveMustSeq

-----

        fn main() {
            let sj = "heelloo"  .split("ee").join("e")
                                .split('o').join("o!")
                                .split("he").join();

            return sj == "llo!o!" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_split_1lBYsO2qhwh
                                #define DEF_split_1lBYsO2qhwh
inline void split_1lBYsO2q(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_1lBYsO2q(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_find_mimv437E658
                                #define DEF_find_mimv437E658
inline int find_mimv437E(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_split_v51ll54xfWj
                                #define DEF_split_v51ll54xfWj
inline void split_v51ll54x(const fu_STR& str, const char sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    if (N)
    {
        while (((next = find_mimv437E(str, sep, int(last))) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_Wy9CSIhD9Ng
                                #define DEF_split_Wy9CSIhD9Ng
inline fu_VEC<fu_STR> split_Wy9CSIhD(const fu_STR& str, const char sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_v51ll54x(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_join_TGlp8hMJAya
                                #define DEF_join_TGlp8hMJAya
inline fu_STR join_TGlp8hMJ(fu::view<fu_STR> a)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR sj = join_TGlp8hMJ(split_3Ik58ru2(join_yaiqG1c4(split_Wy9CSIhD(join_yaiqG1c4(split_3Ik58ru2("heelloo"_fu, "ee"_fu), "e"_fu), 'o'), "o!"_fu), "he"_fu));
    if (sj == "llo!o!"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_MoveMustSeq

-----

        fn main() '\e'.i32 - 27
             ||   '\0'.i32
             || '\x11'.i32 - 17
             || '\xaA'.i32 - 170;

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

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
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    if ("\xD0\xAE"_fu == "\xD0\xAE"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        fn main() {
            mut hello = "hello";
            mut olleh = hello;
            olleh.reverse();
            return olleh == "olleh" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/view_swap.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_reverse_tQ89Pj43u3i
                                #define DEF_reverse_tQ89Pj43u3i
inline void reverse_tQ89Pj43(fu::view_mut<char> a)
{
    const int n1 = (a.size() - 1);
    const int n2 = (a.size() >> 1);
    for (int i = 0; i < n2; i++)
        fu::view_swap(a, i, (n1 - i));

}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    /*MOV*/ fu_STR hello = "hello"_fu;
    fu_STR olleh = static_cast<fu_STR&&>(hello);
    reverse_tQ89Pj43(olleh);
    if (olleh == "olleh"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        let strA = "0123456789abcdef0123456789ABCDEF";

        fn main()
        {
            let a0 = mem::ALLOC_STAT_COUNT();
            strA.slice(0, 26) == "0123456789abcdef0123456789" || throw("bad slice");

            let a1 = mem::ALLOC_STAT_COUNT();
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
#include <fu/view.h>
#include <fu/vec/slice.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_STR strA fu_INIT_PRIORITY(1001) = "0123456789abcdef0123456789ABCDEF"_fu;

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    if (fu::slice(strA, 26, 32) == "ABCDEF"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn test(a = 1, b = 2) a + b;
        return test() - 3;

-----

#ifndef fu_NO_fdefs

static int test_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_STRhqML7(1, 2) - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test(b: -1);

-----

#ifndef fu_NO_fdefs

static int test_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_STRhqML7(1, -1);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test(a = 1, b = 2) a + b;
        return test(-2);

-----

#ifndef fu_NO_fdefs

static int test_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_STRhqML7(-2, 2);
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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_Test t = s_Test { 1, 0 };
    return t.b;
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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static s_Test hey_3y4G9qFn(const int y)
{
    if (y)
    {
        return s_Test { 1 };
    }
    else
    {
        return s_Test{};
    };
}

int fu_MAIN()
{
    return hey_3y4G9qFn(0).x;
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

	Bad call to [34;1mtest[0m (i32: copy): 

	[35;1mfn[0m [34;1mtest[0m: Argument [35;1marg[0m [34;1ma[0m expects [2c8], got i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----


        fn test(a = 0) a + 1;           
        fn main() test(-1);

-----

#ifndef fu_NO_fdefs

static int test_KFeeUbvh(const int a)
{
    return a + 1;
}

int fu_MAIN()
{
    return test_KFeeUbvh(-1);
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Arg { name: string };
        fn main() {
            let arg = Arg(id: "hey");
            return arg.name.len - 3;
        }

-----
_0.fu @4:26:

[2m      |         struct Arg { name: string };[0m
[2m      |         fn main() {[0m
    4 |             let arg = Arg[31;1m([0mid: "hey");
[2m      |             return arg.name.len - 3;[0m
[2m      |         }[0m

	Bad call to [34;1mArg[0m ([2c8]: copy resize): 

	[35;1mtype[0m [34;1mArg[0m: Unknown argument name: id

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----

        struct Arg { name: string };
        fn main() {
            let arg = Arg(name: "hey");
            return arg.name.len - 3;
        }

-----
#include <fu/str.h>

struct s_Arg;

                                #ifndef DEF_s_Arg
                                #define DEF_s_Arg
struct s_Arg
{
    fu_STR name;
    explicit operator bool() const noexcept
    {
        return false
            || name
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_Arg arg = s_Arg { "hey"_fu };
    return arg.name.size() - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        let s = 7;
        return s ? 0 : 1;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int s = 7;
    if (s)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        let s = 0;
        return s ? 1 : 0;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int s = 0;
    if (s)
        return 1;
    else
        return 0;

}

#endif

int main() { return fu_MAIN(); }

-----

        let s = "hello";
        return s ? 0 : 1;

-----
#include <fu/str.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_STR s = "hello"_fu;
    if (s)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        let s = "";
        return s ? 1 : 0;

-----
#include <fu/str.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const fu_STR& s = (*(const fu_STR*)fu::NIL);
    if (s)
        return 1;
    else
        return 0;

}

#endif

int main() { return fu_MAIN(); }

-----

        let s = [ 4 ];
        return s ? 0 : 1;

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> s = fu_VEC<int> { fu::slate<1, int> { 4 } };
    if (s)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        mut s = [ 4 ];
        s.pop();
        return s ? 1 : 0;

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> s = fu_VEC<int> { fu::slate<1, int> { 4 } };
    s.pop();
    if (s)
        return 1;
    else
        return 0;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_S s = s_S { 1 };
    if (s)
        return 0;
    else
        return 1;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_S s {};
    if (s)
        return 1;
    else
        return 0;

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

#ifndef fu_NO_fdefs

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
            else if (x == 2)
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int sum = 0;
    for (int x = 0; ; x++)
    { {
        for (int y = 0; y < x; y++)
        {
            if ((y & 1) && !(x & 1))
                goto BL_2;
            else
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

        Solving [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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

#ifndef fu_NO_fdefs

static void test_mVvdKUG7(int& sum)
{

    { {
        if (sum & 1)
            goto BL_1;
        else
            sum++;

      } BL_1:;
    };
    if (sum & 1)
        return;
    else
    {
        sum++;
        if (sum & 2)
            return;
        else
            sum++;

    };
}

int fu_MAIN()
{
    int sum = 0;
    test_mVvdKUG7(sum);
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
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu::view<char> w = (x ? x : y);
    if (w == "hello"_fu)
        return 0;
    else
        return 1;

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
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu::view<char> w = (x ? y : fu::view<char>{});
    if (w == "world"_fu)
        return 0;
    else
        return 1;

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
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu::view<char> w = (3 && x ? x : y);
    if (w == "hello"_fu)
        return 0;
    else
        return 1;

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
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu_VEC<int> arr {};
    fu::view<char> w = (arr && x ? x : y);
    if (w == "world"_fu)
        return 0;
    else
        return 1;

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR x = "hello"_fu;
    fu_STR y = "world"_fu;
    fu_VEC<int> arr {};
    fu::view<char> w = (arr && x ? x : y ? y : fu::fail("Nope."_fu));
    if (w == "world"_fu)
        return 0;
    else
        return 1;

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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int what_KFeeUbvh(const int a)
{
    if ((a == 2) || (a & 1))
    {
        if ((a > 1) && (a & 1))
            fu::fail("what2"_fu);
        else if ((a > 0) && (a & 3))
            return a + 4;
        else
            fu::fail("what3"_fu);

    }
    else
        fu::fail("what1"_fu);

}

int fu_MAIN()
{
    return (what_KFeeUbvh(1) - what_KFeeUbvh(2)) + 1;
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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static fu_VEC<int> gen_FNUFUKvs(const int len)
{
    /*MOV*/ fu_VEC<int> res {};
    for (int i = 0; i < len; i++)
        res += int(i);

    return /*NRVO*/ res;
}

static int test_FNUFUKvs(const int len)
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<2, int> { -5, +5 } };
    fu::view<int> y = (gen_FNUFUKvs(len) ? x : fu::view<int>{});
    return x[(y.size() / 2)];
}

int fu_MAIN()
{
    return test_FNUFUKvs(0) + test_FNUFUKvs(1);
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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static bool is_mutref_mns6jHCO(fu::view<char> t)
{
    return t.size() == 6;
}

static bool is_never_mns6jHCO(fu::view<char> t)
{
    return t.size() == 5;
}

static fu_STR& test_1EkDZA5D(fu::view<char> init, fu_STR& annot)
{
    return is_mutref_mns6jHCO(init) && annot ? annot : is_never_mns6jHCO(init) && annot ? annot : fu::fail("noreturn"_fu);
}

int fu_MAIN()
{
    fu_STR annot = "hey!"_fu;
    fu_STR init = "woot!"_fu;
    return test_1EkDZA5D(init, annot).size() - 4;
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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int test_pkukm8bn(fu_STR&& init)
{
    if (init.size() && init)
        return init.size();
    else
        fu::fail("noreturn"_fu);

}

int fu_MAIN()
{
    return test_pkukm8bn("woot!"_fu) - 5;
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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static bool is_mutref_mns6jHCO(fu::view<char> t)
{
    return t.size() == 6;
}

static bool is_never_mns6jHCO(fu::view<char> t)
{
    return t.size() == 5;
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = 1;
                                #endif

static int test_6C5KsWwW(const fu_STR& init, const fu_STR& annot, const int flags)
{
    if (is_mutref_mns6jHCO(init) || (is_never_mns6jHCO(init) && annot) || (!init && (flags & F_ARG)))
        return flags;
    else
        fu::fail("noreturn"_fu);

}

int fu_MAIN()
{
    fu_STR annot = "hey!"_fu;
    fu_STR init = "woot!"_fu;
    return test_6C5KsWwW(init, annot, 0);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn a(a)  a ?  a : [];   // ifs used cons-type to seed alt-type
        fn b(b) !b ? [] : b;    //  which works for 'a', but not for 'b'.
        fn main() 1.a - 1.b;

-----
#include <fu/default.h>


#ifndef fu_NO_fdefs

inline static int a_KFeeUbvh(const int a)
{
    if (a)
        return a;
    else
        return (*(const int*)fu::NIL);

}

inline static int b_WrvrtNhQ(const int b)
{
    if (!b)
        return (*(const int*)fu::NIL);
    else
        return b;

}

int fu_MAIN()
{
    return a_KFeeUbvh(1) - b_WrvrtNhQ(1);
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

#ifndef fu_NO_fdefs

static bool is_mutref_wGV45QYw(const s_Type& t)
{
    return !!(t.i & 3);
}

static bool is_ref_wGV45QYw(const s_Type& t)
{
    return !!(t.i & 1);
}

static s_Type clear_refs_wGV45QYw(const s_Type& t)
{
    return s_Type { (t.i & ~3) };
}

static s_Type tryClearRefs_cI7mCidg(const s_Type& t, const bool mutref)
{
    return (mutref ? is_mutref_wGV45QYw(t) : is_ref_wGV45QYw(t)) ? clear_refs_wGV45QYw(t) : s_Type{};
}

int fu_MAIN()
{
    const s_Type a = tryClearRefs_cI7mCidg(s_Type { 6 }, true);
    const s_Type b = tryClearRefs_cI7mCidg(s_Type { 6 }, false);
    return (a.i + b.i) - 4;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn ambig_or(x: i32, y: f32)
            "Hello: " ~
       // So it happened that at some point I had an 'a || b'
                    (x || y)                         //   and then later when the types no longer matched this fell back silently to a '!!a || !!b'
                ;                                           //    which was is not the intent but compiled fine because str concat also accepts bool.

        fn main() {
            mut res = ambig_or(1, 2);
            return res == "Hello: 1" ? 0 : 1;
        }

-----
_0.fu @5:24:

[2m      |             "Hello: " ~[0m
[2m      |        // So it happened that at some point I had an 'a || b'[0m
    5 |                     (x [31;1m||[0m y)                         //   and then later when the types no longer matched this fell back silently to a '!!a || !!b'
[2m      |                 ;                                           //    which was is not the intent but compiled fine because str concat also accepts bool.[0m
[2m      | [0m

	Ambiguous ||, incompatible operands in a non-bool context: i32: copy || 

        Solving [35;1mfn[0m [34;1mambig_or[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn ambig_or(x: i32, y: f32)
            "Hello: " ~
       //  where a and b were of the same type used in string concat like this,
                    (x || y.i32)                     //   and then later when the types no longer matched this fell back silently to a '!!a || !!b'
                ;                                           //    which was is not the intent but compiled fine because str concat also accepts bool.

        fn main() {
            mut res = ambig_or(1, 2);
            return res == "Hello: 1" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR ambig_or_vqXOkvBP(const int x, const float y)
{
    return x7E_sTZRmMq1("Hello: "_fu, fu::i64dec((x ? int(x) : int(y))));
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR res = ambig_or_vqXOkvBP(1, 2.0f);
    if (res == "Hello: 1"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn unambig_or(b: bool, i: i32, f: f32)        // But currently the thinking is that so long as one operand is a bool
            i || f || b;                              //  the whole thing should weaken to (!!a || !!b) instead of erroring out.

        fn main() = unambig_or(false, 0, 0).i32;

-----

#ifndef fu_NO_fdefs

static bool unambig_or_69YZj2Xe(const bool b, const int i, const float f)
{
    return i || f || b;
}

int fu_MAIN()
{
    return int(unambig_or_69YZj2Xe(false, 0, 0.0f));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn unambig_or(b: bool, i: i32, f: f32)  
            b || i || f;                              //  the whole thing should weaken to (!!a || !!b) instead of erroring out.

        fn main() = unambig_or(false, 0, 0).i32;

-----

#ifndef fu_NO_fdefs

static bool unambig_or_69YZj2Xe(const bool b, const int i, const float f)
{
    return b || i || f;
}

int fu_MAIN()
{
    return int(unambig_or_69YZj2Xe(false, 0, 0.0f));
}

#endif

int main() { return fu_MAIN(); }

-----

        mut i = 7;
        i ||= 11;
        return i - 7;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int i = 7;
    if (!(i))
        i = 11;

    return i - 7;
}

#endif

int main() { return fu_MAIN(); }

-----

        mut i = 0;
        i ||= 11;
        return i - 11;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int i = 0;
    if (!(i))
        i = 11;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int a = 1;
    int b = 0;
    if (!(a))
        a = ++b;

    return b;
}

#endif

int main() { return fu_MAIN(); }

-----

        mut CHANGE = false;
        CHANGE ||= true;
        return CHANGE.i32 - 1;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    bool CHANGE = false;
    if (!(CHANGE))
        CHANGE = true;

    return int(CHANGE) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn and_incr(ref x: i32, v: i32)
            x &&= x + v;

        fn main() {
            mut x: i32 = 0;
            and_incr(x, 10);
            return x;
        }

-----

#ifndef fu_NO_fdefs

static int& and_incr_LK8SQac6(int& x, const int v)
{
    return !x ? x : (x = (x + v));
}

int fu_MAIN()
{
    int x = 0;
    and_incr_LK8SQac6(x, 10);
    return x;
}

#endif

int main() { return fu_MAIN(); }

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

#ifndef fu_NO_fdefs

static int test_mUMnvbsh(s_Test& t)
{
    return t.x++;
}

int fu_MAIN()
{
    s_Test t = s_Test{};
    test_mUMnvbsh(t);
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

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

       RelaxMut [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

-----

        let y = [ 1 ];              // TODO fu::slate<1, int> y
        let lax
            z = [ 2 ];              // TODO fu::slate<1, int> z

        return y[0] - 1

-----
;; TODO fu::slate<1, int> y
;; TODO fu::slate<1, int> z

#include <fu/vec.h>


#ifndef fu_NO_fdefs

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

       RelaxMut [35;1mfn[0m [34;1mhello[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----

        fn fail(a: string) throw("hey: " ~ a);
        fn hello(a: string,
lax
            b: string)
                a && fail(a) ? b : a;

        fn main() hello("", "nope").len;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

[[noreturn]] static fu::never fail_gKByzvrI(fu::view<char> a)
{
    fu::fail(("hey: "_fu + a));
}

static const fu_STR& hello_ICHsola5(const fu_STR& a, fu::view<char>)
{
    if (a)
        return fail_gKByzvrI(a);
    else
        return a;

}

int fu_MAIN()
{
    return hello_ICHsola5((*(const fu_STR*)fu::NIL), "nope"_fu).size();
}

#endif

int main() { return fu_MAIN(); }

// N_DeadIfCons

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

#ifndef fu_NO_fdefs

static int incr_NRWGuTBF(int& x)
{
    return x++;
}

static int lints_ambig_expr_indent_D7ta17ag(int& a, int& b)
{
    int _0 {};
    return (_0 = incr_NRWGuTBF(a), (int(_0) + incr_NRWGuTBF(b)));
}

int fu_MAIN()
{
    int a = 0;
    int b = 0;
    lints_ambig_expr_indent_D7ta17ag(a, b);
    return a - b;
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

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

#ifndef fu_NO_fdefs

static int lints_ambig_jump_semis_DXBD5vmC(const int x)
{
    return x;
}

int fu_MAIN()
{
    return lints_ambig_jump_semis_DXBD5vmC(0);
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
static int& A_ak4ns35v(int&);

#ifndef fu_NO_fdefs

static int& incr_ak4ns35v(int& a)
{
    return ++a;
}

static int& A_ak4ns35v(int& a)
{
    return a ? a : (a = A_ak4ns35v(incr_ak4ns35v(a)));
}

int fu_MAIN()
{
    int v = 0;
    return A_ak4ns35v(v) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedStmt

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


#ifndef fu_NO_fdefs

static void test_LWbFXTeb(const bool is_mutref, fu::view<int> args, int& sum)
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
    test_LWbFXTeb(true, (fu::slate<3, int> { 1, 2, 3 }), sum);
    test_LWbFXTeb(false, (fu::slate<3, int> { 11, 22, 33 }), sum);
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


#ifndef fu_NO_fdefs

static double test_H9fhQUVP()
{
    return std::abs(-1.0);
}

int fu_MAIN()
{
    if (test_H9fhQUVP())
        return 0;
    else
        return 7;

}

#endif

int main() { return fu_MAIN(); }

-----

        fn id(x) = x;
        fn main() {
            return id(
                0 +

               0  
            );
        }

-----
_0.fu @7:16:

[2m      |                 0 +[0m
[2m      | [0m
    7 |                [31;1m0[0m  
[2m      |             );[0m
[2m      |         }[0m

	Ambiguous indent at `0`: expected more than 17, got 16

-----

        fn id(x) = x;
        fn main() {
            return id(
                0 +

                0 
            );
        }

-----

#ifndef fu_NO_fdefs

inline static int id_DXBD5vmC(const int x)
{
    return x;
}

int fu_MAIN()
{
    return id_DXBD5vmC((0 + 0));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test(ref a: i32, ref b: i32) {
            return (++a) + 10 * (++b);              // N_BckMustSeq
        }

        fn main() {                                 // N_BckSoftRisk
            mut x = 0;

            ref y = x;
            let z = test(x, y);

            return x == 2 && z == 21 ? 0 : 1;
        }

-----

#ifndef fu_NO_fdefs

static int test_D7ta17ag(int& a, int& b)
{
    int _0 {};
    return (_0 = ++a, (int(_0) + (10 * ++b)));
}

int fu_MAIN()
{
    int x = 0;
    const int z = test_D7ta17ag(x, x);
    if ((x == 2) && (z == 21))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk, N_BckMustSeq

-----

        fn test(ref a: i32, ref b: i32) {
            return (++a) + 10 * (++b);              // N_BckMustSeq
        }

        fn main() {                                 // N_BckSoftRisk
            mut x = 0;

            let z = test(x, x);

            return x == 2 && z == 21 ? 0 : 1;
        }

-----

#ifndef fu_NO_fdefs

static int test_D7ta17ag(int& a, int& b)
{
    int _0 {};
    return (_0 = ++a, (int(_0) + (10 * ++b)));
}

int fu_MAIN()
{
    int x = 0;
    const int z = test_D7ta17ag(x, x);
    if ((x == 2) && (z == 21))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk, N_BckMustSeq

-----

        pub fn test_inner(ref a: i32, ref b: i32)
            (++a) + 10 * (++b);                     // N_BckMustSeq

        pub fn test_outer(ref a: i32, ref b: i32)
            test_inner(a, b);

        fn main() {                                 // N_BckSoftRisk
            mut x = 0;

            ref y = x;
            let z = test_outer(x, y);

            return x == 2 && z == 21 ? 0 : 1;
        }

-----

#ifndef fu_NO_fdefs

int test_inner_D7ta17ag(int& a, int& b)
{
    int _0 {};
    return (_0 = ++a, (int(_0) + (10 * ++b)));
}

int test_outer_D7ta17ag(int& a, int& b)
{
    return test_inner_D7ta17ag(a, b);
}

int fu_MAIN()
{
    int x = 0;
    const int z = test_outer_D7ta17ag(x, x);
    if ((x == 2) && (z == 21))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk, N_BckMustSeq

-----

        pub fn test_inner(ref a: i32, ref b: i32)
            (++a) + 10 * (++b);                     // N_BckMustSeq

        pub fn test_outer(ref a: i32, ref b: i32)
            test_inner(a, b);

        fn main() {                                 // N_BckSoftRisk
            mut x = 0;

            let z = test_outer(x, x);

            return x == 2 && z == 21 ? 0 : 1;
        }

-----

#ifndef fu_NO_fdefs

int test_inner_D7ta17ag(int& a, int& b)
{
    int _0 {};
    return (_0 = ++a, (int(_0) + (10 * ++b)));
}

int test_outer_D7ta17ag(int& a, int& b)
{
    return test_inner_D7ta17ag(a, b);
}

int fu_MAIN()
{
    int x = 0;
    const int z = test_outer_D7ta17ag(x, x);
    if ((x == 2) && (z == 21))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk, N_BckMustSeq

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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
#include <fu/view.h>


#ifndef fu_NO_fdefs

static void test_0OkT6FQ3(fu::view_mut<int> a)
{
    int& b = a.mutref(0);
    if (a.size() & 1)
        b++;

    b++;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_0OkT6FQ3(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

	[35;1mfn[0m [34;1mtest[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mx[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:5:9

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

#ifndef fu_NO_fdefs

static int test_SGpzjgLu(s_nci32& a, const s_nci32& b)
{
    int _0 {};
    return (_0 = a.i++) ? _0 : int(b.i);
}

int fu_MAIN()
{
    s_nci32 x = s_nci32 { 0 };
    s_nci32 y = s_nci32 { 0 };
    return test_SGpzjgLu(x, y);
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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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


#ifndef fu_NO_fdefs

static void test_YEpiEVCT(fu_VEC<int>& a)
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
    test_YEpiEVCT(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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


#ifndef fu_NO_fdefs

static void test_YEpiEVCT(fu_VEC<int>& a)
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
    test_YEpiEVCT(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 105;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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


#ifndef fu_NO_fdefs

static void test_YEpiEVCT(fu_VEC<int>& a)
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
    test_YEpiEVCT(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 106;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static int incr_a_or_b_D7ta17ag(int& a, int& b)
{
    return (a ? a : b)++;
}

int fu_MAIN()
{
    int Z = 0;
    int A = 1;
    int B = 0;
    incr_a_or_b_D7ta17ag(Z, B);
    incr_a_or_b_D7ta17ag(A, B);
    incr_a_or_b_D7ta17ag(B, B);
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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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
            

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

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

#ifndef fu_NO_fdefs

static int& aa_2DGZDuBK(s_V& A)
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
    return aa_2DGZDuBK(A) - 3;
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
_0.fu @16:27:

[2m      | [0m
[2m      | [0m
   16 |             ab_cd(ab, cd, [31;1mab[0m, cd); 
[2m      | [0m
[2m      |             return ab - cd;[0m

	[35;1mfn[0m [34;1mab_cd[0m: Arguments [31;1mc[0m and [31;1ma[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:11:9

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

#ifndef fu_NO_fdefs

void ab_cd_eqShI9iY(int& a, int& b, int& c, int& d)
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
    ab_cd_eqShI9iY(ab, ab, cd, cd);
    return ab - cd;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct X { i: i32; j: i32; };
        // a can alias b
        // c can alias d
        pub fn ab_cd_defer(ref a: X, ref b: X, ref c: X, ref d: X, j?: bool) {
            ref ab = a || b;
            defer {
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
_0.fu @21:33:

[2m      | [0m
[2m      | [0m
   21 |             ab_cd_defer(ab, cd, [31;1mab[0m, cd); 
[2m      | [0m
[2m      |             return ab.i - cd.i;[0m

	[35;1mfn[0m [34;1mab_cd_defer[0m: Arguments [31;1mc[0m and [31;1ma[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:16:9

-----

        struct X { i: i32; j: i32; };
        // a can alias b
        // c can alias d
        pub fn ab_cd_defer(ref a: X, ref b: X, ref c: X, ref d: X, j?: bool) {
            ref ab = a || b;
            defer {
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

#ifndef fu_NO_fdefs

void ab_cd_defer_zbefckqF(s_X& a, s_X& b, s_X& c, s_X& d, const bool j)
{
    s_X& ab = (a ? a : b);
    fu_DEFER(
    {
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
    ab_cd_defer_zbefckqF(ab, ab, cd, cd, false);
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
_0.fu @19:33:

[2m      | [0m
[2m      | [0m
   19 |             ab_cd_outer(ab, cd, [31;1mab[0m, cd); 
[2m      | [0m
[2m      |             return ab - cd;[0m

	[35;1mfn[0m [34;1mab_cd_outer[0m: Arguments [31;1mc[0m and [31;1ma[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mab[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:14:9

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

#ifndef fu_NO_fdefs

void ab_cd_inner_eqShI9iY(int& a, int& b, int& c, int& d)
{
    int& ab = (a ? a : b);
    int& cd = (c ? c : d);
    ++++ab;
    ++++cd;
}

void ab_cd_outer_eqShI9iY(int& a, int& b, int& c, int& d)
{
    ab_cd_inner_eqShI9iY(a, b, c, d);
}

int fu_MAIN()
{
    int ab = 0;
    int cd = 0;
    ab_cd_outer_eqShI9iY(ab, ab, cd, cd);
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
_0.fu @20:47:

[2m      | [0m
[2m      | [0m
   20 |             abcd_efgh(ab, ab, cd, gh, ef, ef, [31;1mcd[0m, gh); 
[2m      | [0m
[2m      |             return (ab + cd) - (ef + gh);[0m

	[35;1mfn[0m [34;1mabcd_efgh[0m: Arguments [31;1mg[0m and [31;1mc[0m (args #6 and #2) both alias:

                [35;1mvar[0m [34;1mcd[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:15:9

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

#ifndef fu_NO_fdefs

void abcd_efgh_VJTTzgQO(int& a, int& b, int& c, int& d, int& e, int& f, int& g, int& h)
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
    abcd_efgh_VJTTzgQO(ab, ab, cd, cd, ef, ef, gh, gh);
    return (ab + cd) - (ef + gh);
}

#endif

int main() { return fu_MAIN(); }

-----

        pub fn incr_a_or_b_and_b_or_a(ref a: i32, ref b: i32) {
            ref x = a || b; ++x;
            ref y = b || a; ++y;
        }

        fn main() {
            mut a = 0;                          // N_BckSoftRisk


            ref b = a;
            incr_a_or_b_and_b_or_a(a, b);


            return a - 2;
        }

-----

#ifndef fu_NO_fdefs

void incr_a_or_b_and_b_or_a_D7ta17ag(int& a, int& b)
{
    int& x = (a ? a : b);
    ++x;
    int& y = (b ? b : a);
    ++y;
}

int fu_MAIN()
{
    int a = 0;
    incr_a_or_b_and_b_or_a_D7ta17ag(a, a);
    return a - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk

-----

        pub fn incr_a_or_b_and_b_or_a(ref a: i32, ref b: i32) {
            ref x = a || b; ++x;
            ref y = b || a; ++y;
        }

        fn main() {
            mut a = 0;                          // N_BckSoftRisk


            incr_a_or_b_and_b_or_a(a, a);


            return a - 2;
        }

-----

#ifndef fu_NO_fdefs

void incr_a_or_b_and_b_or_a_D7ta17ag(int& a, int& b)
{
    int& x = (a ? a : b);
    ++x;
    int& y = (b ? b : a);
    ++y;
}

int fu_MAIN()
{
    int a = 0;
    incr_a_or_b_and_b_or_a_D7ta17ag(a, a);
    return a - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk

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

#ifndef fu_NO_fdefs

static void incr_a_or_b_by2_via_x_D7ta17ag(int& a, int& b)
{
    int& x = (a ? a : b);
    ++++x;
}

int fu_MAIN()
{
    int Z = 0;
    int A = 2;
    int B = 0;
    incr_a_or_b_by2_via_x_D7ta17ag(Z, B);
    incr_a_or_b_by2_via_x_D7ta17ag(A, B);
    incr_a_or_b_by2_via_x_D7ta17ag(B, B);
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

#ifndef fu_NO_fdefs

static int& incr_a_or_b_by2_D7ta17ag(int& a, int& b)
{
    return ++++(a ? a : b);
}

int fu_MAIN()
{
    int Z = 0;
    int A = 2;
    int B = 0;
    incr_a_or_b_by2_D7ta17ag(Z, B);
    incr_a_or_b_by2_D7ta17ag(A, B);
    incr_a_or_b_by2_D7ta17ag(B, B);
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

	[35;1mfn[0m [34;1malias[0m: Arguments [31;1mitem[0m and [31;1marr[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1ma[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:7:9

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


#ifndef fu_NO_fdefs

static int& alias_47Dp3znf(fu_VEC<int>& arr, int& item)
{
    arr += 1;
    return item;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    int& c = alias_47Dp3znf(a, b.mutref(0));
    return c++;
}

#endif

int main() { return fu_MAIN(); }

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static int& aa_4tgqyro8(fu::view_mut<int> a)
{
    return a.mutref(0);
}

static int& test_A6u0PNE3(fu_VEC<int>& a, fu::view_mut<int> b)
{
    int& bb = b.mutref(0);
    a += 1;
    int& cc = (bb ? bb : aa_4tgqyro8(a));
    return cc;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return test_A6u0PNE3(a, b);
}

#endif

int main() { return fu_MAIN(); }

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn test(ref a: i32[], ref b: i32[]) {

            fn  aa() a[0]; 

            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.
            return bb || aa;       // Same as above, but no explicit binding.
        }

        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }

-----
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static int& aa_4tgqyro8(fu::view_mut<int> a)
{
    return a.mutref(0);
}

static int& test_A6u0PNE3(fu_VEC<int>& a, fu::view_mut<int> b)
{
    int& bb = b.mutref(0);
    a += 1;
    return bb ? bb : aa_4tgqyro8(a);
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return test_A6u0PNE3(a, b);
}

#endif

int main() { return fu_MAIN(); }

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static int& aa_nTi1NhxH(fu::view_mut<int> a)
{
    return a.mutref(0);
}

inline static int& noop_NRWGuTBF(int& x)
{
    return x;
}

static int& test_A6u0PNE3(fu_VEC<int>& a, fu::view_mut<int> b)
{
    int& bb = b.mutref(0);
    a += 1;
    return noop_NRWGuTBF((bb ? bb : aa_nTi1NhxH(a)));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return test_A6u0PNE3(a, b);
}

#endif

int main() { return fu_MAIN(); }

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static int& aa_nTi1NhxH(fu::view_mut<int> a)
{
    return a.mutref(0);
}

inline static int& either_D7ta17ag(int& a, int& b)
{
    return a ? a : b;
}

static int& test_A6u0PNE3(fu_VEC<int>& a, fu::view_mut<int> b)
{
    int& bb = b.mutref(0);
    a += 1;
    return either_D7ta17ag(bb, aa_nTi1NhxH(a));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 0 } };
    return test_A6u0PNE3(a, b);
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

-----

        fn what(ref cond: i32, ref cons: i32)
            cond && (cons += 1);

        fn main() {
            mut x = 1;
            return what(x, x) - 2;
        }

-----

#ifndef fu_NO_fdefs

static int& what_moiqgTVC(int& cond, int& cons)
{
    return !cond ? cond : (cons += 1);
}

int fu_MAIN()
{
    int x = 1;
    return what_moiqgTVC(x, x) - 2;
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
#include <fu/view.h>

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

#ifndef fu_NO_fdefs

static fu_VEC<int>& which_dGmG3JsF(s_Target& t, const int i)
{
    if (i & 1)
        return t.overload;
    else
        return t.extended;

}

static void test_R1hvQfPQ(s_Target& target)
{
    const fu_VEC<int>& overload = which_dGmG3JsF(target, target.overload.size());
    fu::view_mut<int> extended = which_dGmG3JsF(target, (target.overload.size() + 1));
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
        fu::view_mut<int> overload_1 = which_dGmG3JsF(target, target.overload.size());
        overload_1.mutref(0) = 5;
    };
}

int fu_MAIN()
{
    s_Target target = s_Target { fu_VEC<int> { fu::slate<1, int> { 0 } }, fu_VEC<int> { fu::slate<1, int> { 1 } } };
    test_R1hvQfPQ(target);
    return ((target.overload[0] * 10) + (target.extended[0] * 100)) - 350;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static int outer_H9fhQUVP()
{
    int sum = 0;
    int x = 1;
    for (; ; )
    {
        const int v = x;
        for (int i = 0; i < 10; i++)
        {
            sum += v;
            if (sum > 40)
                return sum;

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


#ifndef fu_NO_fdefs

static void append_self_YEpiEVCT(fu_VEC<int>& a)
{
    fu_VEC<int> b { a };
    a += b;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    append_self_YEpiEVCT(arr);
    return (arr[2] + arr[3]) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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

	[35;1mfn[0m [34;1mpure_fn[0m is not pure, writes to argument [34;1ma[0m:

            via [35;1mfn[0m [34;1mbut_is_it_pure[0m at 8:34:

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

#ifndef fu_NO_fdefs

static int& but_is_it_pure_NRWGuTBF(int& x)
{
    return x;
}

static int& pure_fn_D7ta17ag(int& a, int& b)
{
    int& x = (a ? a : b);
    return but_is_it_pure_NRWGuTBF(x);
}

int fu_MAIN()
{
    int x = 0;
    int y = 0;
    return pure_fn_D7ta17ag(x, y);
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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7Ex3D_EHZEiPh81F6
                                #define DEF_x7Ex3D_EHZEiPh81F6
inline fu_STR& x7Ex3D_EHZEiPh8(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu_STR fail_k0JIPfc8(/*MOV*/ fu_STR&& reason, fu::view<fu_STR> _info)
{
    for (int i = _info.size(); i-- > 0; )
    {
        const fu_STR& info = _info[i];
        x7Ex3D_EHZEiPh8(reason, fu::i64dec((info ? i : (*(const int*)fu::NIL))));
    };
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<fu_STR> _info {};
    return fail_k0JIPfc8(fu_STR{}, _info).size();
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7Ex3D_EHZEiPh81F6
                                #define DEF_x7Ex3D_EHZEiPh81F6
inline fu_STR& x7Ex3D_EHZEiPh8(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu_STR fail_k0JIPfc8(/*MOV*/ fu_STR&& reason, fu::view<fu_STR> _info)
{
    for (int i = _info.size(); i-- > 0; )
    {
        const fu_STR& info = _info[i];
        x7Ex3D_EHZEiPh8(reason, fu::i64dec((info ? i : (*(const int*)fu::NIL))));
    };
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<fu_STR> _info {};
    return fail_k0JIPfc8(fu_STR{}, _info).size();
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_mZn6UTg7(/*MOV*/ fu_STR&& reason, fu::view<int> _info)
{
    const int info = _info[0];
    reason += (info ? x7E_sTZRmMq1(fu::view<char>{}, fu::i64dec(info)) : fu_STR{});
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<int> _info = fu_VEC<int> { fu::slate<1, int> { 101 } };
    return fail_mZn6UTg7(fu_STR{}, _info).size() - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_mZn6UTg7(/*MOV*/ fu_STR&& reason, fu::view<int> _info)
{
    const int info = _info[0];
    reason += (info ? x7E_sTZRmMq1(fu::view<char>{}, fu::i64dec(info)) : fu_STR{});
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_VEC<int> _info = fu_VEC<int> { fu::slate<1, int> { 101 } };
    return fail_mZn6UTg7(fu_STR{}, _info).size() - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static void solveNode_H_ESDtylWv(const s_Helpers& h, fu_VEC<s_Helpers>& _helpers, int& N)
{
    while (N % h.row[(h.row.size() - 1)])
    {
        N--;
        _helpers.grow((_helpers.size() * 2));
    };
}

static int solveJump_cgcMZSNG(fu_VEC<s_Helpers>& _helpers, int& N, const int row)
{
    solveNode_H_ESDtylWv(s_Helpers(_helpers[row]), _helpers, N);
    return _helpers.size();
}

static int test_CjPCnfGa(fu_VEC<s_Helpers>& _helpers, int N, const int row)
{
    return solveJump_cgcMZSNG(_helpers, N, row) - ((((1 * 2) * 2) * 2) * 2);
}

int fu_MAIN()
{
    fu_VEC<s_Helpers> _helpers = fu_VEC<s_Helpers> { fu::slate<1, s_Helpers> { s_Helpers { fu_VEC<int> { fu::slate<5, int> { 1, 2, 3, 4, 5 } } } } };
    return test_CjPCnfGa(_helpers, 4, 0);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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

#ifndef fu_NO_fdefs

static void solveNode_HH_inner_ESDtylWv(const s_Helpers& h, fu_VEC<s_Helpers>& _helpers, int& N)
{
    while (N % h.row[(h.row.size() - 1)])
    {
        N--;
        _helpers.grow((_helpers.size() * 2));
    };
}

static void solveNode_HH_NYwpmAdb(const s_Helpers& h, fu_VEC<s_Helpers>& _helpers, int& N)
{
    solveNode_HH_inner_ESDtylWv(h, _helpers, N);
}

static int solveJump_WEiSMBU2(fu_VEC<s_Helpers>& _helpers, int& N, const int row)
{
    solveNode_HH_NYwpmAdb(s_Helpers(_helpers[row]), _helpers, N);
    return _helpers.size();
}

static int test_CjPCnfGa(fu_VEC<s_Helpers>& _helpers, int N, const int row)
{
    return solveJump_WEiSMBU2(_helpers, N, row) - ((((1 * 2) * 2) * 2) * 2);
}

int fu_MAIN()
{
    fu_VEC<s_Helpers> _helpers = fu_VEC<s_Helpers> { fu::slate<1, s_Helpers> { s_Helpers { fu_VEC<int> { fu::slate<5, int> { 1, 2, 3, 4, 5 } } } } };
    return test_CjPCnfGa(_helpers, 4, 0);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

static void solveNode_a_k5Tf6L46(fu::view<int> h, fu_VEC<fu_VEC<int>>& _helpers, int& N)
{
    while (N % h[(h.size() - 1)])
    {
        N--;
        _helpers.grow((_helpers.size() * 2));
    };
}

static int solveJump_JeVRReAi(fu_VEC<fu_VEC<int>>& _helpers, int& N, const int row)
{
    solveNode_a_k5Tf6L46(fu_VEC<int>(_helpers[row]), _helpers, N);
    return _helpers.size();
}

static int test_qjVTfKSy(fu_VEC<fu_VEC<int>>& _helpers, int N, const int row)
{
    return solveJump_JeVRReAi(_helpers, N, row) - ((((1 * 2) * 2) * 2) * 2);
}

int fu_MAIN()
{
    fu_VEC<fu_VEC<int>> _helpers = fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<5, int> { 1, 2, 3, 4, 5 } } } };
    return test_qjVTfKSy(_helpers, 4, 0);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mmutargs[0m /Users/hdachev/fu/__tests__/_0.fu:5:9

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

#ifndef fu_NO_fdefs

static s_Arg mutargs_jpgwHIq1(fu_VEC<s_Arg>& args)
{
    const s_Arg badref { args[0] };
    args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { 11 } } };
    return badref;
}

int fu_MAIN()
{
    fu_VEC<s_Arg> args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { 7 } } };
    return mutargs_jpgwHIq1(args).i - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mmutargs[0m /Users/hdachev/fu/__tests__/_0.fu:7:9

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

#ifndef fu_NO_fdefs

static int witharg_57ivwbk1(const s_Arg& a)
{
    return a.i[(a.i.size() - 1)] * 4;
}

static int mutargs_jpgwHIq1(fu_VEC<s_Arg>& args)
{
    s_Arg badref { args[0] };
    args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 11 } } } } };
    return witharg_57ivwbk1(badref);
}

int fu_MAIN()
{
    fu_VEC<s_Arg> args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 7 } } } } };
    return mutargs_jpgwHIq1(args) - 28;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mmutargs[0m /Users/hdachev/fu/__tests__/_0.fu:7:9

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

#ifndef fu_NO_fdefs

static int witharg_3Ab0DkMx(const s_Arg& a, const int x)
{
    return a.i[(a.i.size() - 1)] * x;
}

static int mutargs_jpgwHIq1(fu_VEC<s_Arg>& args)
{
    s_Arg badref { args[0] };
    for (int i = 0; ; i++)
    {
        const int ret = witharg_3Ab0DkMx(badref, (i * 4));
        if (ret)
            return ret;
        else
        {
            args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 11 } } } } };
        };
    };
}

int fu_MAIN()
{
    fu_VEC<s_Arg> args = fu_VEC<s_Arg> { fu::slate<1, s_Arg> { s_Arg { fu_VEC<int> { fu::slate<1, int> { 7 } } } } };
    return mutargs_jpgwHIq1(args) - 28;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

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
#include <fu/view.h>


#ifndef fu_NO_fdefs

static void test_mvozTQrp(fu::view_mut<int> woot, const int x, const int y)
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
    test_mvozTQrp(x, 0, 1);
    return x[1] - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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


#ifndef fu_NO_fdefs

static void test_zVKzPsvm(fu_VEC<int>& a, fu_VEC<int>& b)
{
    if (a[0] == 1)
        a += 1;
    else
        b += 1;

}

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_zVKzPsvm(x, x);
    return x.size() - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn test(ref a: i32[], ref b: i32[]) {

            if (a[0]++ == 1)            // N_BckSoftRisk

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


#ifndef fu_NO_fdefs

static void test_zVKzPsvm(fu_VEC<int>& a, fu_VEC<int>& b)
{
    if (a.mutref(0)++ == 1)
        a += 1;
    else
        b += 1;

}

int fu_MAIN()
{
    fu_VEC<int> x = fu_VEC<int> { fu::slate<1, int> { 1 } };
    test_zVKzPsvm(x, x);
    return x.size() - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk

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
#include <fu/view.h>

static const fu_STR& T_tpHJN6lL(int, fu::view<fu_STR>);
static const fu_STR& selfRecurBeforeImplicitDep_erv5KUSi(int, fu::view<fu_STR>);

#ifndef fu_NO_fdefs

static const fu_STR& T_tpHJN6lL(const int i, fu::view<fu_STR> strings)
{
    return selfRecurBeforeImplicitDep_erv5KUSi((i / 2), strings);
}

static const fu_STR& indexIntoImplicit_GO2fjAWM(const int j, fu::view<fu_STR> strings)
{
    return strings[j];
}

static const fu_STR& selfRecurBeforeImplicitDep_erv5KUSi(const int x, fu::view<fu_STR> strings)
{
    if (x > 1)
        return T_tpHJN6lL(x, strings);
    else
        return indexIntoImplicit_GO2fjAWM(x, strings);

}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<fu_STR> strings = fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "a"_fu, "b"_fu } };
    if (selfRecurBeforeImplicitDep_erv5KUSi(2, strings) == "b"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

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
            implicit mut out: SolvedNode[];
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

	At call to [35;1mfn[0m [34;1mcreateMap[0m, argument binding [31;1ma[0m (arg #0) at 27:42:

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

	At call to [34;1mT[0m
            via [35;1mfn[0m [34;1mevalTypeAnnot[0m at 24:30:

[2m      |             //  so this shouldn't compile if Type is nocopy.[0m
[2m      |             fn T(i: i32)[0m
   24 |                 evalTypeAnnot[31;1m([0m[ nodes[i] ]).type;
[2m      | [0m
[2m      |             if (nodes.len > 1)[0m

            via [35;1mfn[0m [34;1msolved[0m at 27:30:

[2m      | [0m
[2m      |             if (nodes.len > 1)[0m
   27 |                 return solved[31;1m([0mcreateMap(T(0), T(1))); // <<< HERE >>>
[2m      | [0m
[2m      |             return solved(Type(nodes[0]));[0m

            via [35;1m__native[0m [34;1m
.grow[0m at 8:21:

[2m      | [0m
[2m      |         fn solved(type: Type, implicit ref out: SolvedNode[]) {[0m
    8 |             out.grow[31;1m([0mout.len * 100 + 1);
[2m      | [0m
[2m      |             ref tail = out[out.len - 1];[0m

            

    BorrowCheck [35;1mfn[0m [34;1mevalTypeAnnot[0m /Users/hdachev/fu/__tests__/_0.fu:19:9
        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:32:9

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
            implicit mut out: SolvedNode[];
            let annot = evalTypeAnnot([ "a", "b" ]);
            return out.len == 10101 && annot.type.canon.len == 2 ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/concat.h>

struct s_SolvedNode;
struct s_Type;
static s_Type& T_i7XFcMXH(int, fu::view<fu_STR>, fu_VEC<s_SolvedNode>&);
static s_SolvedNode& evalTypeAnnot_B5BxxzyG(fu::view<fu_STR>, fu_VEC<s_SolvedNode>&);

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

#ifndef fu_NO_fdefs

static s_Type& T_i7XFcMXH(const int i, fu::view<fu_STR> nodes, fu_VEC<s_SolvedNode>& out)
{
    return evalTypeAnnot_B5BxxzyG((fu::slate<1, fu_STR> { fu_STR(nodes[i]) }), out).type;
}

static s_Type createMap_B5NlNyE5(const s_Type& a, const s_Type& b)
{
    return s_Type { (a.canon + b.canon) };
}

static s_SolvedNode& solved_uHJnFE26(const s_Type& type, fu_VEC<s_SolvedNode>& out)
{
    out.grow(((out.size() * 100) + 1));
    s_SolvedNode& tail = out.mutref((out.size() - 1));
    tail.type.canon = type.canon;
    return tail;
}

static s_SolvedNode& evalTypeAnnot_B5BxxzyG(fu::view<fu_STR> nodes, fu_VEC<s_SolvedNode>& out)
{
    if (nodes.size() > 1)
    {
        s_Type _0 {};
        s_Type _1 {};
        return (_1 = (_0 = s_Type(T_i7XFcMXH(0, nodes, out)), createMap_B5NlNyE5(static_cast<s_Type&&>(_0), T_i7XFcMXH(1, nodes, out))), solved_uHJnFE26(static_cast<s_Type&&>(_1), out));
    }
    else
    {
        return solved_uHJnFE26(s_Type { fu_STR(nodes[0]) }, out);
    };
}

int fu_MAIN()
{
    fu_VEC<s_SolvedNode> out {};
    const s_SolvedNode& annot = evalTypeAnnot_B5BxxzyG((fu::slate<2, fu_STR> { "a"_fu, "b"_fu }), out);
    if ((out.size() == 10101) && (annot.type.canon.size() == 2))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_NonTrivAutoCopy, N_BckMustSeq

-----

        fn main() {
            mut x = 0;
            let s = ++x + ++x;
            return s - 3; // Not 4! one arg must invalidate
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int x = 0;
    int _0 {};
    const int s = (_0 = int(++x), (int(_0) + ++x));
    return s - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

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

	At call to [35;1mfn[0m [34;1msum[0m, argument binding [31;1ma[0m (arg #0) at 14:25:

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

	At call to [34;1mincr[0m
            via [35;1m__native[0m [34;1mpostfix++[0m at 8:16:

[2m      | [0m
[2m      |         fn incr(ref x: X) {[0m
    8 |             x.x[31;1m++[0m;
[2m      |             return x;[0m
[2m      |         }[0m

            

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:12:9

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

#ifndef fu_NO_fdefs

static s_X& incr_4NkBE36J(s_X& x)
{
    x.x++;
    return x;
}

static int sum_8ZvvcaaE(const s_X& a, const s_X& b)
{
    return a.x + b.x;
}

int fu_MAIN()
{
    s_X x {};
    s_X _0 {};
    return (_0 = s_X(incr_4NkBE36J(x)), sum_8ZvvcaaE(s_X(_0), incr_4NkBE36J(x))) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

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

	At call to [35;1mfn[0m [34;1msum[0m, argument binding [31;1ma[0m (arg #0) at 23:25:

[2m      |             mut x: Y;[0m
[2m      |             ref y = x.y;[0m
   23 |             return sum(y[31;1m.[0mincr, x.incr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	... invalidated by subsequent write to [35;1mvar[0m [34;1mx[0m upon evaluation of argument [31;1mb[0m (arg #1) at 23:33:

[2m      |             mut x: Y;[0m
[2m      |             ref y = x.y;[0m
   23 |             return sum(y.incr, x[31;1m.[0mincr) - 3; // Not 4! one arg must invalidate
[2m      |         }[0m
[2m      | [0m

	At call to [34;1mincr[0m
            via [35;1m__native[0m [34;1mpostfix++[0m at 16:18:

[2m      | [0m
[2m      |         fn incr(ref y: Y) {[0m
   16 |             y.y.x[31;1m++[0m;
[2m      |             return y;[0m
[2m      |         }[0m

            

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:20:9

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
struct s_Y;
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

#ifndef fu_NO_fdefs

static s_X& incr_4NkBE36J(s_X& x)
{
    x.x++;
    return x;
}

static s_Y& incr_msw3CI1v(s_Y& y)
{
    y.y.x++;
    return y;
}

static int x_4N0gwAQ0(const s_Y& y)
{
    return y.y.x;
}

inline static int sum_Sl8jJCI0(const s_X& a, const s_Y& b)
{
    return a.x + x_4N0gwAQ0(b);
}

int fu_MAIN()
{
    s_Y x {};
    s_X& y = x.y;
    s_X _0 {};
    return (_0 = s_X(incr_4NkBE36J(y)), sum_Sl8jJCI0(s_X(_0), incr_msw3CI1v(x))) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

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

	... invalidated by subsequent write to [35;1marg[0m [34;1mx[0m upon evaluation of argument [31;1ma[0m (arg #0) at 19:21:

[2m      |         fn test(ref x: X, ref y: X) {[0m
[2m      |             ref xy = y || x;[0m
   19 |             return x[31;1m.[0mincr += xy.incr; // <- xy invalidated by x.incr
[2m      |         }[0m
[2m      | [0m

	At call to [34;1mincr[0m
            via [35;1m__native[0m [34;1mpostfix++[0m at 7:16:

[2m      | [0m
[2m      |         fn incr(ref x: X) {[0m
    7 |             x.x[31;1m++[0m;
[2m      |             return x;[0m
[2m      |         }[0m

            

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:17:9

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

#ifndef fu_NO_fdefs

static s_X& incr_4NkBE36J(s_X& x)
{
    x.x++;
    return x;
}

static int operator+=(const s_X& a, const s_X& b)
{
    return a.x + b.x;
}

static int test_ey0viwBj(s_X& x, s_X& y)
{
    s_X& xy = (y ? y : x);
    return (incr_4NkBE36J(x) += s_X(incr_4NkBE36J(xy)));
}

int fu_MAIN()
{
    s_X x {};
    s_X y {};
    return test_ey0viwBj(x, y) - 3;
}

#endif

int main() { return fu_MAIN(); }

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

#ifndef fu_NO_fdefs

static fu_VEC<int> problematic_moves_Aov9DcDG(s_AB&& ab)
{
    fu::view<fu_VEC<int>> ra = ab.a;
    if (ra.size() & 1)
        return fu_VEC<int>(ra[0]);
    else
        return fu_VEC<int>(ab.b[0]);

}

int fu_MAIN()
{
    s_AB ab = s_AB { fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<10, int> { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } } } }, fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<10, int> { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 } } } } };
    fu_VEC<int> pick = problematic_moves_Aov9DcDG(s_AB(ab));
    return pick[9] - ab.a[0][9];
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----


        nocopy 
        struct NC { x: i32; y: i32 };

        fn wants_val(mut a: NC) {
            a.x++;
            a.y++;
            return a;
        }

        fn incr_by(mut a: NC, b: NC) {
            a.x += b.x;
            a.y += b.y;
            return a;
        }

        fn main() {
            mut v = NC(-1, -1);
            mut w = wants_val(v);
            return (w || v).x + 1;
        }

-----
_0.fu @20:30:

[2m      |         fn main() {[0m
[2m      |             mut v = NC(-1, -1);[0m
   20 |             mut w = wants_val[31;1m([0mv);
[2m      |             return (w || v).x + 1;[0m
[2m      |         }[0m

	Needs an explicit STEAL or CLONE: NC

RelaxCopyResize [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:18:9

-----


        struct NC { x: i32; y: i32 };

        fn wants_val(mut a: NC) {
            a.x++;
            a.y++;
            return a;
        }

        fn incr_by(mut a: NC, b: NC) {
            a.x += b.x;
            a.y += b.y;
            return a;
        }

        fn main() {
            mut v = NC(-1, -1);
            mut w = wants_val(v);
            return (w || v).x + 1;
        }

-----
struct s_NC;

                                #ifndef DEF_s_NC
                                #define DEF_s_NC
struct s_NC
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

#ifndef fu_NO_fdefs

static s_NC wants_val_3ubLdwC2(s_NC&& a)
{
    a.x++;
    a.y++;
    return a;
}

int fu_MAIN()
{
    const s_NC v = s_NC { -1, -1 };
    const s_NC w = wants_val_3ubLdwC2(s_NC(v));
    return (w ? w : v).x + 1;
}

#endif

int main() { return fu_MAIN(); }

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

#ifndef fu_NO_fdefs

static s_SolvedNode test_B5NlNyE5(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b)
{
    /*MOV*/ s_SolvedNode& n = (a.items ? a : b);
    return static_cast<s_SolvedNode&&>(n);
}

int fu_MAIN()
{
    return test_B5NlNyE5(s_SolvedNode{}, s_SolvedNode{}).items.size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve

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

#ifndef fu_NO_fdefs

static s_SolvedNode test_B5NlNyE5(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b)
{
    /*MOV*/ s_SolvedNode& n = (a ? a : b);
    return static_cast<s_SolvedNode&&>(n);
}

int fu_MAIN()
{
    return test_B5NlNyE5(s_SolvedNode{}, s_SolvedNode{}).items.size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve

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
            

    BorrowCheck [35;1mfn[0m [34;1mcreateBlock[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

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

#ifndef fu_NO_fdefs

static s_SolvedNode createBlock_FQWQHgof(s_SolvedNode&& last)
{
    const s_SolvedNode& tail = (last ? last : last);
    const s_SolvedNode unwrap { (tail ? tail : tail) };
    last.len--;
    return unwrap;
}

int fu_MAIN()
{
    return createBlock_FQWQHgof(s_SolvedNode{}).len;
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

	Cannot access [31;1mpop[0m, reference invalidated by write to [31;1mnode[0m at 11:31:

[2m      |             let pop = node.items[N - 1];[0m
[2m      |             if (N > 2) {[0m
   11 |                 node.items.pop[31;1m([0m);
[2m      |             }[0m
[2m      |             else {[0m

	At call to [34;1m
.pop()[0m
            

    BorrowCheck [35;1mfn[0m [34;1mpopAndOr[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

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

#ifndef fu_NO_fdefs

static s_SolvedNode popAndOr_k775CejQ(s_SolvedNode& node)
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
    s_SolvedNode b = popAndOr_k775CejQ(a);
    return a.items.size() + b.items.size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

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

	At call to [34;1mpop[0m
            via [35;1m__native[0m [34;1mpostfix--[0m at 17:29:

[2m      | [0m
[2m      |         fn pop(ref n: Nodes) {[0m
   17 |             n.last.items.len[31;1m--[0m;
[2m      |         }[0m
[2m      | [0m

            

    BorrowCheck [35;1mfn[0m [34;1mcreateBlock[0m /Users/hdachev/fu/__tests__/_0.fu:20:9

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
struct s_SolvedNode;
struct s_Nodes;

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

#ifndef fu_NO_fdefs

static void pop_Bs9b8Ndc(s_Nodes& n)
{
    n.last.items.len--;
}

static s_Items createBlock_aHo9FbW9(s_Nodes&& items)
{
    const s_SolvedNode& tail = items.last;
    const s_Items unwrap { tail.items };
    pop_Bs9b8Ndc(items);
    return unwrap;
}

int fu_MAIN()
{
    return createBlock_aHo9FbW9(s_Nodes { s_SolvedNode { s_Items{} } }).len;
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
            

    BorrowCheck [35;1mfn[0m [34;1mcreateBlock[0m /Users/hdachev/fu/__tests__/_0.fu:9:9

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

#ifndef fu_NO_fdefs

static fu_VEC<s_SolvedNode> createBlock_9kyQojVM(fu_VEC<s_SolvedNode>&& items)
{
    const s_SolvedNode& tail = items[(items.size() - 1)];
    /*MOV*/ fu_VEC<s_SolvedNode> unwrap { tail.items };
    items.pop();
    return /*NRVO*/ unwrap;
}

int fu_MAIN()
{
    return createBlock_9kyQojVM(fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode{} } }).size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mcreateBlock[0m /Users/hdachev/fu/__tests__/_0.fu:10:9

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
#include <fu/view.h>

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static fu_VEC<s_SolvedNode> createBlock_9kyQojVM(fu_VEC<s_SolvedNode>&& items)
{
    if (items.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = items[(items.size() - 1)];
            if (tail.kind != "block"_fu)
                break;
            else
            {
                /*MOV*/ fu_VEC<s_SolvedNode> unwrap { tail.items };
                items.pop();
                return /*NRVO*/ unwrap;
            };
        };
    };
    return fu_VEC<s_SolvedNode>{};
}

int fu_MAIN()
{
    return createBlock_9kyQojVM(fu_VEC<s_SolvedNode>{}).size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

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
            

    BorrowCheck [35;1mfn[0m [34;1mcreateBlock[0m /Users/hdachev/fu/__tests__/_0.fu:10:9

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
#include <fu/view.h>

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static fu_VEC<s_SolvedNode> createBlock_XvJXt1wD(fu_VEC<s_SolvedNode>& items)
{
    if (items.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = items[(items.size() - 1)];
            if (tail.kind != "block"_fu)
                break;
            else
            {
                /*MOV*/ fu_VEC<s_SolvedNode> unwrap { tail.items };
                items.pop();
                return /*NRVO*/ unwrap;
            };
        };
    };
    return fu_VEC<s_SolvedNode>{};
}

int fu_MAIN()
{
    fu_VEC<s_SolvedNode> items {};
    return createBlock_XvJXt1wD(items).size();
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/view.h>
#include <fu/vec/view_swap.h>


#ifndef fu_NO_fdefs

static void test_0OkT6FQ3(fu::view_mut<int> a)
{
    fu::view_swap(a, 0, 1);
}

int fu_MAIN()
{
    fu_VEC<int> nums = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    test_0OkT6FQ3(nums);
    if ((nums.size() == 2) && (nums[0] == 2) && (nums[1] == 1))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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


#ifndef fu_NO_fdefs

static void closure_L24usCWz(fu::view_mut<int> arg, fu::view<int> encloses_unchanged)
{
    for (int i = 0; i < arg.size(); i++)
        arg.mutref(i) += encloses_unchanged[i];

}

static void test_MN7IzrwB(fu_VEC<int>& arg)
{
    fu_VEC<int> encloses_unchanged { arg };
    closure_L24usCWz(arg, encloses_unchanged);
    if (arg.size() & 1)
        closure_L24usCWz(arg, encloses_unchanged);

}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 3 } };
    test_MN7IzrwB(a);
    return a[0] - 9;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

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

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

static fu_VEC<int> will_return_value_4NkBE36J(s_HasVec& x)
{
    /*MOV*/ s_HasVec bck_will_cpy { x };
    /*MOV*/ fu_VEC<int>& vec0 = bck_will_cpy.x;
    if (bck_will_cpy.x.size() & 1)
        return static_cast<fu_VEC<int>&&>(vec0);
    else
    {
        x.x += x.x.size();
        /*MOV*/ fu_VEC<int>& vec1 = bck_will_cpy.x;
        return static_cast<fu_VEC<int>&&>(vec1);
    };
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
        x_1 = will_return_value_4NkBE36J(x);
        BL_1_v = (x_1[(x_1.size() - 1)]);
    (void)0;}), int(BL_1_v)), (int(_0) - (__extension__ (
    {
        fu::view<int> x_2 = x.x;
        BL_2_v = (x_2[(x_2.size() - 1)]);
    (void)0;}), int(BL_2_v)))) + 1;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_BckMustSeq

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
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    // Hoisted:
    s_HasVec bck_will_cpy;

    s_HasVec x = s_HasVec { fu_VEC<int> { fu::slate<10, int> { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } } };
    int BL_1_v {};
    int _0 {};
    int BL_5_v {};
    return (_0 = (__extension__ (
    {
        fu::view<int> BL_2_v {};
        fu::view<int> x_1 = (__extension__ (
        { {
            bck_will_cpy =  { x };
            fu::view<int> vec0 = bck_will_cpy.x;
            fu::never BL_3_v {};
            fu::view<int> BL_4_v {};
            BL_2_v = (((bck_will_cpy.x.size() & 1) ? (__extension__ (
            {
                { BL_2_v = vec0; goto BL_2; };
            (void)0;}), static_cast<fu::never&&>(BL_3_v)) : (__extension__ (
            {
                x.x += x.x.size();
                fu::view<int> vec1 = bck_will_cpy.x;
                BL_4_v = (vec1);
            (void)0;}), static_cast<fu::view<int>&&>(BL_4_v))));
          } BL_2:;
        (void)0;}), static_cast<fu::view<int>&&>(BL_2_v));
        BL_1_v = (x_1[(x_1.size() - 1)]);
    (void)0;}), int(BL_1_v)), (int(_0) - (__extension__ (
    {
        fu::view<int> x_2 = x.x;
        BL_5_v = (x_2[(x_2.size() - 1)]);
    (void)0;}), int(BL_5_v)))) + 1;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_BckMustSeq

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

#ifndef fu_NO_fdefs

static int& PASS_borrowCheck_incr_a_ret_b_D7ta17ag(int& a, int& b)
{
    a++;
    return b;
}

int fu_MAIN()
{
    int x = 5;
    PASS_borrowCheck_incr_a_ret_b_D7ta17ag(x, x);
    return x - 6;
}

#endif

int main() { return fu_MAIN(); }

// N_BckSoftRisk

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
#include <fu/vec.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static void PASS_borrowCheck_reduct_aYxVn2NO(int& a, fu_VEC<int>& b)
{
    a++;
    b += 10;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 9 } };
    int* _0;
    (_0 = &(arr.mutref(0)), PASS_borrowCheck_reduct_aYxVn2NO(*_0, arr));
    return arr[0] - arr[1];
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_BckSoftRisk, N_BckMustSeq

-----

        struct Node { id: i32; items?: Node[]; };

        fn traverse(node: Node, visit) {
            visit(node);
            for (mut i = 0; i < node.items.len; i++)
                traverse(node.items[i], fn visit);
        }

        fn PASS_borrowCheck(ref root: Node)
        {
            mut n: i32;
            fn count(id: i32)
                traverse(root): |i|
                    if (i.id == id)
                        n++;

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
#include <fu/vec.h>

struct s_Node;
inline static void traverse_ZEHhsqPo(const s_Node&, int, int&);
static void check_UZzYxlWe(s_Node&, const s_Node&, int&);

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    int id;
    fu_VEC<s_Node> items;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || id
            || items
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

inline static void traverse_ZEHhsqPo(const s_Node& node, const int id, int& n)
{
    if (node.id == id)
        n++;

    for (int i = 0; i < node.items.size(); i++)
        traverse_ZEHhsqPo(node.items[i], id, n);

}

static void count_nNi77Ezv(const int id, const s_Node& root, int& n)
{
    traverse_ZEHhsqPo(root, id, n);
}

static void check_UZzYxlWe(s_Node& node, const s_Node& root, int& n)
{
    if (node.items)
        for (int i = 0; i < node.items.size(); i++)
            check_UZzYxlWe(node.items.mutref(i), root, n);

    else
        count_nNi77Ezv(node.id++, root, n);

}

static int PASS_borrowCheck_Wluve7dT(s_Node& root)
{
    int n {};
    check_UZzYxlWe(root, root, n);
    return n;
}

int fu_MAIN()
{
    s_Node tree = s_Node { 0, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node { 2, fu_VEC<s_Node>{} }, s_Node { 2, fu_VEC<s_Node>{} } } } };
    return PASS_borrowCheck_Wluve7dT(tree) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_TypeRecursion, N_TypeResolve, N_BckSoftRisk

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


#ifndef fu_NO_fdefs

                                #ifndef DEF_grow_if_oob_59X22tPklK9
                                #define DEF_grow_if_oob_59X22tPklK9
inline int& grow_if_oob_59X22tPk(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

int& grow_if_oob_to_len_from_self(fu_VEC<int>& arr, const int idx)
{
    return grow_if_oob_59X22tPk(arr, int(arr[idx]));
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 3 } };
    grow_if_oob_to_len_from_self(arr, 0) = 2;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum - 5;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_SD_ExternPrivates

-----

        fn used_in_a_loop__invalidated__by_new_var(
            ref arr: i32[], ref barr: i32[], ref carr: i32[])
        {
            ref head = arr[arr.len - 1];
            for (mut i = 0; i < arr.len; i++) {
                head += arr.len;
                let head_cpy = head + 0;
                ref barrcarr = barr || carr;
                barrcarr.resize(head_cpy);
            }
        }

        fn main() {
            mut arr = [ 1 ];


            ref barr = arr; 

            used_in_a_loop__invalidated__by_new_var(arr, barr, barr);
            return barr.len == 2 ? 0 : 1;
        }

-----
_0.fu @20:58:

[2m      |             ref barr = arr; [0m
[2m      | [0m
   20 |             used_in_a_loop__invalidated__by_new_var(arr, [31;1mbarr[0m, barr);
[2m      |             return barr.len == 2 ? 0 : 1;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mused_in_a_loop__invalidated__by_new_var[0m: Arguments [31;1mbarr[0m and [31;1marr[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1marr[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:14:9

-----

        fn used_in_a_loop__invalidated__by_new_var(
            ref arr: i32[], ref barr: i32[], ref carr: i32[])
        {
            ref head = arr[arr.len - 1];
            for (mut i = 0; i < arr.len; i++) {
                head += arr.len;
                let head_cpy = head + 0;
                ref barrcarr = barr || carr;
                barrcarr.resize(head_cpy);
            }
        }

        fn main() {
            mut arr = [ 1 ];


            mut barr = arr; 

            used_in_a_loop__invalidated__by_new_var(arr, barr, barr);
            return barr.len == 2 ? 0 : 1;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

static void used_in_a_loop__invalidated__by_new_var_QxECSRSF(fu::view_mut<int> arr, fu_VEC<int>& barr, fu_VEC<int>& carr)
{
    int& head = arr.mutref((arr.size() - 1));
    for (int i = 0; i < arr.size(); i++)
    {
        head += arr.size();
        const int head_cpy = (head + 0);
        fu_VEC<int>& barrcarr = (barr ? barr : carr);
        barrcarr.resize(head_cpy);
    };
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> barr { arr };
    used_in_a_loop__invalidated__by_new_var_QxECSRSF(arr, barr, barr);
    if (barr.size() == 2)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_BckSoftRisk

-----

        fn grow_if_oob(ref a: i32[], i: i32) {
            if (a.len <= i) a.grow(i + 1);
            return a[i];
        }

        fn assign(ref what: i32, ref to: i32) to = what;

        fn two_writes_in_an_arg(ref arr: i32[], ref brr: i32[], ref x: i32)
            assign( what: x ? arr.grow_if_oob(10)
                            : brr.grow_if_oob(10), to: x );

        fn main() {
            mut arr = [ 0, 1, 2, 3 ];
            mut brr = [ 0, 2, 4, 6 ];


            ref x = brr[0];  

            return two_writes_in_an_arg(arr, brr, x);
        }

-----
_0.fu @20:51:

[2m      |             ref x = brr[0];  [0m
[2m      | [0m
   20 |             return two_writes_in_an_arg(arr, brr, [31;1mx[0m);
[2m      |         }[0m
[2m      | [0m

	[35;1mfn[0m [34;1mtwo_writes_in_an_arg[0m: Arguments [31;1mx[0m and [31;1mbrr[0m (args #2 and #1) both alias:

                [35;1mvar[0m [34;1mbrr[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:13:9

-----

        fn grow_if_oob(ref a: i32[], i: i32) {
            if (a.len <= i) a.grow(i + 1);
            return a[i];
        }

        fn assign(ref what: i32, ref to: i32) to = what;

        fn two_writes_in_an_arg(ref arr: i32[], ref brr: i32[], ref x: i32)
            assign( what: x ? arr.grow_if_oob(10)
                            : brr.grow_if_oob(10), to: x );

        fn main() {
            mut arr = [ 0, 1, 2, 3 ];
            mut brr = [ 0, 2, 4, 6 ];


            mut x = 0;       

            return two_writes_in_an_arg(arr, brr, x);
        }

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static int& grow_if_oob_59X22tPk(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}

static int& assign_1h3vy8xV(const int what, int& to)
{
    return (to = what);
}

static int& two_writes_in_an_arg_yLSBpcaA(fu_VEC<int>& arr, fu_VEC<int>& brr, int& x)
{
    return assign_1h3vy8xV((x ? grow_if_oob_59X22tPk(arr, 10) : grow_if_oob_59X22tPk(brr, 10)), x);
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<4, int> { 0, 1, 2, 3 } };
    fu_VEC<int> brr = fu_VEC<int> { fu::slate<4, int> { 0, 2, 4, 6 } };
    int x = 0;
    return two_writes_in_an_arg_yLSBpcaA(arr, brr, x);
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Node { items: Node[] };

        fn main() {
            mut root = Node([
                Node([ Node, Node ])
            ]);


            swap(root.items[0], root);   // this is fine

            return root.items.len - 2;
        }

-----
_0.fu @10:33:

[2m      | [0m
[2m      | [0m
   10 |             swap(root.items[0], [31;1mroot[0m);   // this is fine
[2m      | [0m
[2m      |             return root.items.len - 2;[0m

	[35;1m__native[0m [34;1m
hacks/soft_risk
<utility>
std::swap[0m: Arguments [31;1mb[0m and [31;1ma[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mroot[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        struct Node { items: Node[] };

        fn main() {
            mut root = Node([
                Node([ Node, Node ])
            ]);

 // write to root invalidates root.items[0]
            root = root.items[0];        // this is fine

            return root.items.len - 2;
        }

-----
#include <fu/vec.h>

struct s_Node;

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_Node root = s_Node { fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node { fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node{}, s_Node{} } } } } } };
    root = root.items[0];
    return root.items.size() - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn grow_if_oob(ref a: i32[], i: i32) {
            if (a.len <= i) a.grow(i + 1);
            return a[i];
        }

        fn assign(ref to: i32, ref what: i32) to = what;

        fn two_writes_in_an_arg(ref x: i32, ref arr: i32[], ref brr: i32[])
            assign( to: x,  what: arr.grow_if_oob(10)
                               || brr.grow_if_oob(10));

        fn test(ref x: i32, ref arr: i32[], ref brr: i32[]) {
            two_writes_in_an_arg(

                    x || arr[0],    
                    :arr, :brr);

            return x;
        }

        fn main() {
            mut arr = [ 0 ];
            mut brr = [ 0 ];
            mut x   = 0;

            return test(:x, :arr, :brr);
        }

-----
_0.fu @17:22:

[2m      | [0m
[2m      |                     x || arr[0],    [0m
   17 |                     :[31;1marr[0m, :brr);
[2m      | [0m
[2m      |             return x;[0m

	[35;1mfn[0m [34;1mtwo_writes_in_an_arg[0m: Arguments [31;1marr[0m and [31;1mx[0m (args #1 and #0) both alias:

                [35;1marg[0m [34;1marr[0m

    BorrowCheck [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:13:9

-----

        fn grow_if_oob(ref a: i32[], i: i32) {
            if (a.len <= i) a.grow(i + 1);
            return a[i];
        }

        fn assign(ref to: i32, ref what: i32) to = what;

        fn two_writes_in_an_arg(ref x: i32, ref arr: i32[], ref brr: i32[])
            assign( to: x,  what: arr.grow_if_oob(10)
                               || brr.grow_if_oob(10));

        fn test(ref x: i32, ref arr: i32[], ref brr: i32[]) {
            two_writes_in_an_arg(

                    x,              
                    :arr, :brr);

            return x;
        }

        fn main() {
            mut arr = [ 0 ];
            mut brr = [ 0 ];
            mut x   = 0;

            return test(:x, :arr, :brr);
        }

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static int& grow_if_oob_59X22tPk(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}

static int& assign_Fmmq7X5i(int& to, const int what)
{
    return (to = what);
}

static int& two_writes_in_an_arg_xnw87qEt(int& x, fu_VEC<int>& arr, fu_VEC<int>& brr)
{
    int _0 {};
    return assign_Fmmq7X5i(x, ((_0 = grow_if_oob_59X22tPk(arr, 10)) ? _0 : grow_if_oob_59X22tPk(brr, 10)));
}

static int& test_xnw87qEt(int& x, fu_VEC<int>& arr, fu_VEC<int>& brr)
{
    two_writes_in_an_arg_xnw87qEt(x, arr, brr);
    return x;
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu_VEC<int> brr = fu_VEC<int> { fu::slate<1, int> { 0 } };
    int x = 0;
    return test_xnw87qEt(x, arr, brr);
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

-----

        fn writes_to_two_args(ref item: i32, ref arr: i32[], ref brr: i32[]) {
            ref arrbrr = arr || brr;
            arrbrr.resize(100 + arrbrr.len);
            return item += arrbrr.len;
        }

        fn main() {
            mut arr: i32[] = [      ];
            mut brr: i32[] = [ -101 ];


            ref item = brr[0]; 

            return writes_to_two_args(:item, :arr, :brr);
        }

-----
_0.fu @15:53:

[2m      |             ref item = brr[0]; [0m
[2m      | [0m
   15 |             return writes_to_two_args(:item, :arr, :[31;1mbrr[0m);
[2m      |         }[0m
[2m      | [0m

	[35;1mfn[0m [34;1mwrites_to_two_args[0m: Arguments [31;1mbrr[0m and [31;1mitem[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1mbrr[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:8:9

-----

        fn writes_to_two_args(ref item: i32, ref arr: i32[], ref brr: i32[]) {
            ref arrbrr = arr || brr;
            arrbrr.resize(100 + arrbrr.len);
            return item += arrbrr.len;
        }

        fn main() {
            mut arr: i32[] = [      ];
            mut brr: i32[] = [ -101 ];


            mut item = brr[0]; 

            return writes_to_two_args(:item, :arr, :brr);
        }

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static int& writes_to_two_args_CbCVqYsG(int& item, fu_VEC<int>& arr, fu_VEC<int>& brr)
{
    fu_VEC<int>& arrbrr = (arr ? arr : brr);
    arrbrr.resize((100 + arrbrr.size()));
    return (item += arrbrr.size());
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int>{};
    fu_VEC<int> brr = fu_VEC<int> { fu::slate<1, int> { -101 } };
    int item = brr[0];
    return writes_to_two_args_CbCVqYsG(item, arr, brr);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn reads_from_two_args(ref left: i32, ref right: i32, ref arr: i32[], ref brr: i32[]) {
            ref arrbrr = arr || brr;
            ref item = left || right;
            arrbrr.resize(100 + arrbrr.len);
            return item += arrbrr.len;
        }

        fn main() {
            mut arr: i32[] = [      ];
            mut brr: i32[] = [ -101 ];

            mut left = 0;


            ref right = brr[0]; 

            return reads_from_two_args(:left, :right, :arr, :brr);
        }

-----
_0.fu @18:62:

[2m      |             ref right = brr[0]; [0m
[2m      | [0m
   18 |             return reads_from_two_args(:left, :right, :arr, :[31;1mbrr[0m);
[2m      |         }[0m
[2m      | [0m

	[35;1mfn[0m [34;1mreads_from_two_args[0m: Arguments [31;1mbrr[0m and [31;1mright[0m (args #3 and #1) both alias:

                [35;1mvar[0m [34;1mbrr[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:9:9

-----

        fn reads_from_two_args(ref left: i32, ref right: i32, ref arr: i32[], ref brr: i32[]) {
            ref arrbrr = arr || brr;
            ref item = left || right;
            arrbrr.resize(100 + arrbrr.len);
            return item += arrbrr.len;
        }

        fn main() {
            mut arr: i32[] = [      ];
            mut brr: i32[] = [ -101 ];

            mut left = 0;


            mut right = brr[0]; 

            return reads_from_two_args(:left, :right, :arr, :brr);
        }

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static int& reads_from_two_args_3H8iFcEs(int& left, int& right, fu_VEC<int>& arr, fu_VEC<int>& brr)
{
    fu_VEC<int>& arrbrr = (arr ? arr : brr);
    int& item = (left ? left : right);
    arrbrr.resize((100 + arrbrr.size()));
    return (item += arrbrr.size());
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int>{};
    fu_VEC<int> brr = fu_VEC<int> { fu::slate<1, int> { -101 } };
    int left = 0;
    int right = brr[0];
    return reads_from_two_args_3H8iFcEs(left, right, arr, brr);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn grow(ref arr: i32[], by!n: i32) {
            arr.resize(arr.len + n);
            return arr;
        }

        fn incr__ltr_oee(ref what: i32, by: i32)
            what += by;

        fn reads_from_two_args__single_expr(ref left: i32, ref right: i32, ref arr: i32[], ref brr: i32[])
            incr__ltr_oee(left || right, grow(arr || brr, by: 100).len);

        fn main() {
            mut arr: i32[] = [      ];
            mut brr: i32[] = [ -101 ];

            mut left = 0;


            ref right = brr[0]; 

            return reads_from_two_args__single_expr(:left, :right, :arr, :brr);
        }

-----
_0.fu @22:75:

[2m      |             ref right = brr[0]; [0m
[2m      | [0m
   22 |             return reads_from_two_args__single_expr(:left, :right, :arr, :[31;1mbrr[0m);
[2m      |         }[0m
[2m      | [0m

	[35;1mfn[0m [34;1mreads_from_two_args__single_expr[0m: Arguments [31;1mbrr[0m and [31;1mright[0m (args #3 and #1) both alias:

                [35;1mvar[0m [34;1mbrr[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:13:9

-----

        fn grow(ref arr: i32[], by!n: i32) {
            arr.resize(arr.len + n);
            return arr;
        }

        fn incr__ltr_oee(ref what: i32, by: i32)
            what += by;

        fn reads_from_two_args__single_expr(ref left: i32, ref right: i32, ref arr: i32[], ref brr: i32[])
            incr__ltr_oee(left || right, grow(arr || brr, by: 100).len);

        fn main() {
            mut arr: i32[] = [      ];
            mut brr: i32[] = [ -101 ];

            mut left = 0;


            mut right = brr[0]; 

            return reads_from_two_args__single_expr(:left, :right, :arr, :brr);
        }

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static fu_VEC<int>& grow_yDuXApnt(fu_VEC<int>& arr, const int n)
{
    arr.resize((arr.size() + n));
    return arr;
}

static int& incr__ltr_oee_l4SaRbdh(int& what, const int by)
{
    return (what += by);
}

static int& reads_from_two_args__single_expr_3H8iFcEs(int& left, int& right, fu_VEC<int>& arr, fu_VEC<int>& brr)
{
    int* _0;
    return (_0 = &((left ? left : right)), incr__ltr_oee_l4SaRbdh(*_0, grow_yDuXApnt((arr ? arr : brr), 100).size()));
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int>{};
    fu_VEC<int> brr = fu_VEC<int> { fu::slate<1, int> { -101 } };
    int left = 0;
    int right = brr[0];
    return reads_from_two_args__single_expr_3H8iFcEs(left, right, arr, brr);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_BckMustSeq

-----

        fn main() {
            mut arr = [ 1,1,1,1,1 ];
            mut sum = 0;

            // veach(view) should decay to a slice -
            //  which push will invalidate.
            //
            fn veach(view, fn) {
                for (mut i = 0; i < view.len; i++) {
                    fn(view[i]);
                    arr ~= arr; // Relocate arr.
                }
            }

            arr.veach: |i| sum += 
                            (i *= 2)            ;

            return sum - 10;
        }

-----
_0.fu @16:16:

[2m      |             }[0m
[2m      | [0m
   16 |             arr[31;1m.[0mveach: |i| sum += 
[2m      |                             (i *= 2)            ;[0m
[2m      | [0m

	[35;1mfn[0m [34;1mveach[0m: Arguments [31;1mmain:arr[0m and [31;1mview[0m (args #2 and #0) both alias:

                [35;1mvar[0m [34;1marr[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            mut arr = [ 1,1,1,1,1 ];
            mut sum = 0;

            // veach(view) should decay to a slice -
            //  which push will invalidate.
            //
            fn veach(view, fn) {
                for (mut i = 0; i < view.len; i++) {
                    fn(view[i]);
                    arr ~= arr; // Relocate arr.
                }
            }

            arr.veach: |i| sum += 
                            (i  * 2)            ;

            return sum - 10;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

inline static void veach_zkf6hyQR(fu::view<int> view, fu_VEC<int>& arr, int& sum)
{
    for (int i = 0; i < view.size(); i++)
    {

        {
            const int i_1 = view[i];
            sum += (i_1 * 2);
        };
        arr += fu_VEC<int>(arr);
    };
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<5, int> { 1, 1, 1, 1, 1 } };
    int sum = 0;
    veach_zkf6hyQR(fu_VEC<int>(arr), arr, sum);
    return sum - 10;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        struct Context {
            modules:    Module[];
        };

        nocopy struct Module {
            in?:        string;
            fname:      string;
        };

        fn getFile(implicit ref ctx: Context, fname: string) {
            for (mut i = 0; i < ctx.modules.len; i++)
                if (ctx.modules[i].fname == fname)
                    return ctx.modules[i].in;

            ctx.modules ~= Module(:fname, in: fname ~ '\n' ~ fname ~ '\n');
            return ctx.modules[ctx.modules.len - 1].in;
        }

        fn getModule(implicit ref ctx: Context, fname: string) {
            for (mut i = 0; i < ctx.modules.len; i++)
                if (ctx.modules[i].fname == fname)
                    return ctx.modules[i];

            return [];
        }

        import _0;

        fn ensureParsed(fname: string) {
            let module = getModule(fname);
            if (!module.in)
                return getFile(fname).len

                    || module.in.len;


            return module.in.len;
        }

        fn main() {
            implicit mut ctx: Context;
            return ensureParsed("a") - 4;
        }

-----
_1.fu @9:24:

[2m      |                 return getFile(fname).len[0m
[2m      | [0m
    9 |                     || [31;1mmodule[0m.in.len;
[2m      | [0m
[2m      | [0m

	Cannot access [31;1mmodule[0m, reference invalidated by write to [31;1mctx[0m at 7:31:

[2m      |             let module = getModule(fname);[0m
[2m      |             if (!module.in)[0m
    7 |                 return getFile[31;1m([0mfname).len
[2m      | [0m
[2m      |                     || module.in.len;[0m

	At call to [34;1mgetFile[0m
            via [35;1m__native[0m [34;1m
.mutref[0m at /Users/hdachev/fu/__tests__/_0.fu@14:39:

[2m      |             for (mut i = 0; i < ctx.modules.len; i++)[0m
[2m      |                 if (ctx.modules[i].fname == fname)[0m
   14 |                     return ctx.modules[31;1m[[0mi].in;
[2m      | [0m
[2m      |             ctx.modules ~= Module(:fname, in: fname ~ '\n' ~ fname ~ '\n');[0m

            

    BorrowCheck [35;1mfn[0m [34;1mensureParsed[0m /Users/hdachev/fu/__tests__/_1.fu:4:9

-----

        struct Context {
            modules:    Module[];
        };

        nocopy struct Module {
            in?:        string;
            fname:      string;
        };

        fn getFile(implicit ref ctx: Context, fname: string) {
            for (mut i = 0; i < ctx.modules.len; i++)
                if (ctx.modules[i].fname == fname)
                    return ctx.modules[i].in;

            ctx.modules ~= Module(:fname, in: fname ~ '\n' ~ fname ~ '\n');
            return ctx.modules[ctx.modules.len - 1].in;
        }

        fn getModule(implicit ref ctx: Context, fname: string) {
            for (mut i = 0; i < ctx.modules.len; i++)
                if (ctx.modules[i].fname == fname)
                    return ctx.modules[i];

            return [];
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct s_Context;
struct s_Module;

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    fu_STR in;
    fu_STR fname;
    s_Module(const s_Module&) = delete;
    s_Module(s_Module&&) = default;
    s_Module& operator=(const s_Module&) = delete;
    s_Module& operator=(s_Module&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || in
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
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modules
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

fu_STR& getFile_0KWLzNxF(const fu_STR& fname, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules.mutref(i).in;

    };
    ctx.modules += s_Module { (((fname + '\n') + fname) + '\n'), fu_STR(fname) };
    return ctx.modules.mutref((ctx.modules.size() - 1)).in;
}

const s_Module& getModule_ReP5g3OT(fu::view<char> fname, const s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules[i];

    };
    return (*(const s_Module*)fu::NIL);
}

#endif

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        struct Context {
            modules:    Module[];
        };

        nocopy struct Module {
            in?:        string;
            fname:      string;
        };

        fn getFile(implicit ref ctx: Context, fname: string) {
            for (mut i = 0; i < ctx.modules.len; i++)
                if (ctx.modules[i].fname == fname)
                    return ctx.modules[i].in;

            ctx.modules ~= Module(:fname, in: fname ~ '\n' ~ fname ~ '\n');
            return ctx.modules[ctx.modules.len - 1].in;
        }

        fn getModule(implicit ref ctx: Context, fname: string) {
            for (mut i = 0; i < ctx.modules.len; i++)
                if (ctx.modules[i].fname == fname)
                    return ctx.modules[i];

            return [];
        }

        import _0;

        fn ensureParsed(fname: string) {
            let module = getModule(fname);
            if (!module.in)
                return getFile(fname).len

                    || throw(fname);


            return module.in.len;
        }

        fn main() {
            implicit mut ctx: Context;
            return ensureParsed("a") - 4;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>

struct s_Context;
struct s_Module;
const s_Module& getModule_ReP5g3OT(fu::view<char>, const s_Context&);
fu_STR& getFile_0KWLzNxF(const fu_STR&, s_Context&);

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    fu_STR in;
    fu_STR fname;
    s_Module(const s_Module&) = delete;
    s_Module(s_Module&&) = default;
    s_Module& operator=(const s_Module&) = delete;
    s_Module& operator=(s_Module&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || in
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
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modules
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static int ensureParsed_5qobCk24(const fu_STR& fname, s_Context& ctx)
{
    const s_Module& module = getModule_ReP5g3OT(fname, ctx);
    if (!module.in)
    {
        int _0 {};
        return (_0 = getFile_0KWLzNxF(fname, ctx).size()) ? _0 : fu::fail(fu_STR(fname));
    }
    else
        return module.in.size();

}

int fu_MAIN()
{
    s_Context ctx {};
    return ensureParsed_5qobCk24("a"_fu, ctx) - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        nocopy struct NCThing {
            items: i32[];
        };

        fn mut_in_loop_before_break(ref thing: NCThing) {
            mut sum = 0;

            ref items = thing.items;
            for (mut i = 0; i < items.len; i++)
            {
                sum += items[i];
                if (sum > 10)
                {
                    thing = NCThing();

                    if (sum > 20)                                   
                        break;
                }

                items[i] *= 2;
            }

            return sum;
        }

        fn main() {
            mut thing = NCThing([ 10 ]);
            return mut_in_loop_before_break(thing)
                 + mut_in_loop_before_break(thing)
                 - 30
                 + thing.items.len;
        }

-----
_0.fu @15:27:

[2m      |                 if (sum > 10)[0m
[2m      |                 {[0m
   15 |                     thing [31;1m=[0m NCThing();
[2m      | [0m
[2m      |                     if (sum > 20)                                   [0m

	Write to [31;1mthing[0m at call to [35;1m__native[0m [34;1m=[0m invalidates the use of [31;1mitems[0m at 10:33:

[2m      | [0m
[2m      |             ref items = thing.items;[0m
   10 |             for (mut i = 0; i < [31;1mitems[0m.len; i++)
[2m      |             {[0m
[2m      |                 sum += items[i];[0m

	... on next loop iteration.

	Written
            

    BorrowCheck [35;1mfn[0m [34;1mmut_in_loop_before_break[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

-----

        nocopy struct NCThing {
            items: i32[];
        };

        fn mut_in_loop_before_break(ref thing: NCThing) {
            mut sum = 0;

            ref items = thing.items;
            for (mut i = 0; i < items.len; i++)
            {
                sum += items[i];
                if (sum > 10)
                {
                    thing = NCThing();

                    if (true)                                       
                        break;
                }

                items[i] *= 2;
            }

            return sum;
        }

        fn main() {
            mut thing = NCThing([ 10 ]);
            return mut_in_loop_before_break(thing)
                 + mut_in_loop_before_break(thing)
                 - 30
                 + thing.items.len;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>

struct s_NCThing;

                                #ifndef DEF_s_NCThing
                                #define DEF_s_NCThing
struct s_NCThing
{
    fu_VEC<int> items;
    s_NCThing(const s_NCThing&) = delete;
    s_NCThing(s_NCThing&&) = default;
    s_NCThing& operator=(const s_NCThing&) = delete;
    s_NCThing& operator=(s_NCThing&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static int mut_in_loop_before_break_ywlWIMJ4(s_NCThing& thing)
{
    int sum = 0;
    fu::view_mut<int> items = thing.items;
    for (int i = 0; i < items.size(); i++)
    {
        sum += items[i];
        if (sum > 10)
        {
            thing = s_NCThing{};
            break;
        }
        else
            items.mutref(i) *= 2;

    };
    return sum;
}

int fu_MAIN()
{
    s_NCThing thing = s_NCThing { fu_VEC<int> { fu::slate<1, int> { 10 } } };
    int _0 {};
    int _1 {};
    return (_1 = ((_0 = mut_in_loop_before_break_ywlWIMJ4(thing), (int(_0) + mut_in_loop_before_break_ywlWIMJ4(thing))) - 30), (int(_1) + thing.items.size()));
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_RelaxRespec, N_BckMustSeq

-----

        struct XY { x: i32; y: i32 };

        fn main() {
            mut xy: XY;

            ref x = xy.x;        

            pragma emit("
                "xy".x++;
            ");

            return x - 1;
        }

-----
_0.fu @13:20:

[2m      |             ");[0m
[2m      | [0m
   13 |             return [31;1mx[0m - 1;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mx[0m, reference invalidated by write to [31;1mxy[0m at 
	Via [35;1mpragma[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        struct XY { x: i32; y: i32 };

        fn main() {
            mut xy: XY;

            fn  x = xy.x;        

            pragma emit("
                "xy".x++;
            ");

            return x - 1;
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
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static int& x_ebfRws7Z(s_XY& xy)
{
    return xy.x;
}

int fu_MAIN()
{
    s_XY xy {};

                xy.x++;
            ;
    return x_ebfRws7Z(xy) - 1;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

-----

        struct XY { x: i32; y: i32 };

        fn main() {
            mut xy: XY;

            ref x = xy.x;                  

            while (!x)
                pragma emit("
                    "xy".x++;
                ");

            return xy.x - 1;
        }

-----
_0.fu @11:22:

[2m      |             while (!x)[0m
[2m      |                 pragma emit("[0m
   11 |                     "[31;1mxy[0m".x++;
[2m      |                 ");[0m
[2m      | [0m

	Write to [31;1mxy[0m at call to [35;1mvar[0m [34;1mxy[0m invalidates the use of [31;1mx[0m at 9:21:

[2m      |             ref x = xy.x;                  [0m
[2m      | [0m
    9 |             while (![31;1mx[0m)
[2m      |                 pragma emit("[0m
[2m      |                     "xy".x++;[0m

	... on next loop iteration.

	Written

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        struct XY { x: i32; y: i32 };

        fn main() {
            mut xy: XY;

            fn  x = xy.x;                  

            while (!x)
                pragma emit("
                    "xy".x++;
                ");

            return xy.x - 1;
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
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static int& x_ebfRws7Z(s_XY& xy)
{
    return xy.x;
}

int fu_MAIN()
{
    s_XY xy {};
    while (!x_ebfRws7Z(xy))

                    xy.x++;
                ;

    return xy.x - 1;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

-----

        struct XY { x: i32; y: i32 };

        fn bckErr_fromPragmaEmit(ref xy: XY) {
            pragma emit("
                "xy".x++;
            ");
        }

        fn main() {
            mut xy: XY;

            ref x = xy.x;        

            bckErr_fromPragmaEmit(xy);
            return x - 1;
        }

-----
_0.fu @16:20:

[2m      | [0m
[2m      |             bckErr_fromPragmaEmit(xy);[0m
   16 |             return [31;1mx[0m - 1;
[2m      |         }[0m
[2m      | [0m

	Cannot access [31;1mx[0m, reference invalidated by write to [31;1mxy[0m at 15:34:

[2m      |             ref x = xy.x;        [0m
[2m      | [0m
   15 |             bckErr_fromPragmaEmit[31;1m([0mxy);
[2m      |             return x - 1;[0m
[2m      |         }[0m

	At call to [34;1mbckErr_fromPragmaEmit[0m
            

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:10:9

-----

        struct XY { x: i32; y: i32 };

        fn bckErr_fromPragmaEmit(ref xy: XY) {
            pragma emit("
                "xy".x++;
            ");
        }

        fn main() {
            mut xy: XY;

            fn  x = xy.x;        

            bckErr_fromPragmaEmit(xy);
            return x - 1;
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
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static void bckErr_fromPragmaEmit_xDD6P5V7(s_XY& xy)
{

                xy.x++;
            ;
}

static int& x_2DGZDuBK(s_XY& xy)
{
    return xy.x;
}

int fu_MAIN()
{
    s_XY xy {};
    bckErr_fromPragmaEmit_xDD6P5V7(xy);
    return x_2DGZDuBK(xy) - 1;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

-----

        struct Ext { ext: Ext[] };

        fn EXT(implicit ext: Ext[], a: i32) ext[a];

        fn EXT_insert(implicit ref ext: Ext[], a: i32) {
            ext.insert(a, Ext());
            return ext[a];
        }

        fn solveTypedef(a: i32, b: i32) EXT_insert(a) = EXT(b);

        fn main() {
            implicit mut ext = [ Ext([ Ext, Ext ]) ];

            for (mut i = 0; i < 128; i++)
                solveTypedef(0, 0);

            return ext[0].ext.len == 2 ? 0 : 1;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>

struct s_Ext;

                                #ifndef DEF_s_Ext
                                #define DEF_s_Ext
struct s_Ext
{
    fu_VEC<s_Ext> ext;
    s_Ext(const s_Ext&) = default;
    s_Ext(s_Ext&&) = default;
    s_Ext& operator=(s_Ext&&) = default;
    s_Ext& operator=(const s_Ext& selfrec) { return *this = s_Ext(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || ext
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_Ext& EXT_insert_dM0buzKk(const int a, fu_VEC<s_Ext>& ext)
{
    ext.insert(a, s_Ext{});
    return ext.mutref(a);
}

static const s_Ext& EXT_Z6iPK05c(const int a, fu::view<s_Ext> ext)
{
    return ext[a];
}

static s_Ext& solveTypedef_JrjeTnl3(const int a, const int b, fu_VEC<s_Ext>& ext)
{
    return (EXT_insert_dM0buzKk(a, ext) = s_Ext(EXT_Z6iPK05c(b, ext)));
}

int fu_MAIN()
{
    fu_VEC<s_Ext> ext = fu_VEC<s_Ext> { fu::slate<1, s_Ext> { s_Ext { fu_VEC<s_Ext> { fu::slate<2, s_Ext> { s_Ext{}, s_Ext{} } } } } };
    for (int i = 0; i < 128; i++)
        solveTypedef_JrjeTnl3(0, 0, ext);

    if (ext[0].ext.size() == 2)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn ints(implicit ref _ints: i32[]) _ints;
        fn sum (implicit ref _sum:  i32)   _sum;

        // while trying to sort implicit args i noticed tests didnt catch
        //  args getting reordered but AAR masks not updating
        //   this tries to reproduce the same thing
        fn flippedInjectedArgsWithBrokenAARMasks()
            if (sum) // the point of this is to inject _sum before _ints
                for (mut i = ints.len; i --> 0; )
                    ints.push(sum);

        fn main() {
            implicit mut _ints: i32[] = [ 0 ];

            implicit ref _sum = _ints[0];


            flippedInjectedArgsWithBrokenAARMasks();
            return ints[0];
        }

-----
_0.fu @19:50:

[2m      | [0m
[2m      | [0m
   19 |             flippedInjectedArgsWithBrokenAARMasks[31;1m([0m);
[2m      |             return ints[0];[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mflippedInjectedArgsWithBrokenAARMasks[0m: Arguments [31;1m_sum[0m and [31;1m_ints[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1m_ints[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:13:9

-----

        fn ints(implicit ref _ints: i32[]) _ints;
        fn sum (implicit ref _sum:  i32)   _sum;

        // while trying to sort implicit args i noticed tests didnt catch
        //  args getting reordered but AAR masks not updating
        //   this tries to reproduce the same thing
        fn flippedInjectedArgsWithBrokenAARMasks()
            if (sum) // the point of this is to inject _sum before _ints
                for (mut i = ints.len; i --> 0; )
                    ints.push(sum);

        fn main() {
            implicit mut _ints: i32[] = [ 0 ];

            implicit mut _sum = 0;


            flippedInjectedArgsWithBrokenAARMasks();
            return ints[0];
        }

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static int& sum_ryPrFW38(int& _sum)
{
    return _sum;
}

static fu_VEC<int>& ints_3U6tKKsD(fu_VEC<int>& _ints)
{
    return _ints;
}

static void flippedInjectedArgsWithBrokenAARMasks_2gkXU6oI(fu_VEC<int>& _ints, int& _sum)
{
    if (sum_ryPrFW38(_sum))
        for (int i = ints_3U6tKKsD(_ints).size(); i-- > 0; )
            ints_3U6tKKsD(_ints).push(int(sum_ryPrFW38(_sum)));
;
}

int fu_MAIN()
{
    fu_VEC<int> _ints = fu_VEC<int> { fu::slate<1, int> { 0 } };
    int _sum = 0;
    flippedInjectedArgsWithBrokenAARMasks_2gkXU6oI(_ints, _sum);
    return ints_3U6tKKsD(_ints)[0];
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        nocopy struct Val { x: i32 };
        struct Out { v: Val };
        fn move_Val_into_Out(mut v: Val)    = Out(:v);
        fn main()                           = move_Val_into_Out(Val(0)).v.x;

-----
struct s_Val;
struct s_Out;

                                #ifndef DEF_s_Val
                                #define DEF_s_Val
struct s_Val
{
    int x;
    s_Val(const s_Val&) = delete;
    s_Val(s_Val&&) = default;
    s_Val& operator=(const s_Val&) = delete;
    s_Val& operator=(s_Val&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Out
                                #define DEF_s_Out
struct s_Out
{
    s_Val v;
    s_Out(const s_Out&) = delete;
    s_Out(s_Out&&) = default;
    s_Out& operator=(const s_Out&) = delete;
    s_Out& operator=(s_Out&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || v
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_Out move_Val_into_Out_ZQXgAkCN(/*MOV*/ s_Val&& v)
{
    return s_Out { static_cast<s_Val&&>(v) };
}

int fu_MAIN()
{
    return move_Val_into_Out_ZQXgAkCN(s_Val { 0 }).v.x;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn must_not_move_mystr(n: i32) {
            mut mystr = "";
            for (mut i = 0; i < n; i++)
                mystr ~= "!";

            mut result: string[];
            for (mut i = 0; i < n; i++)
                result ~= mystr;

            return result.join();
        }

        fn main() = must_not_move_mystr(3).len - 9;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_join_TGlp8hMJAya
                                #define DEF_join_TGlp8hMJAya
inline fu_STR join_TGlp8hMJ(fu::view<fu_STR> a)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu_STR must_not_move_mystr_xZDqrZZt(const int n)
{
    fu_STR mystr {};
    for (int i = 0; i < n; i++)
        mystr += "!"_fu;

    fu_VEC<fu_STR> result {};
    for (int i_1 = 0; i_1 < n; i_1++)
        result += fu_STR(mystr);

    return join_TGlp8hMJ(result);
}

int fu_MAIN()
{
    return must_not_move_mystr_xZDqrZZt(3).size() - 9;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        struct Type {
            canon: string;
            quals: int;
        };

        fn takes_ref_and_val(ref r!: Type, mut v!: Type) {
            v.canon ~= r.canon;
            r.canon ~= v.canon;
            v.quals |= r.quals;
            return r;
        }

        fn main() {
            mut t = Type("abc", 123);
            return takes_ref_and_val(r: t, v: t).canon.len - 9;
        }

-----
#include <fu/str.h>
#include <fu/vec/concat.h>

struct s_Type;

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    explicit operator bool() const noexcept
    {
        return false
            || canon
            || quals
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_Type& takes_ref_and_val_H06g7nyG(s_Type& r, s_Type&& v)
{
    v.canon += r.canon;
    r.canon += v.canon;
    v.quals |= r.quals;
    return r;
}

int fu_MAIN()
{
    s_Type t = s_Type { "abc"_fu, 123 };
    return takes_ref_and_val_H06g7nyG(t, s_Type(t)).canon.size() - 9;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        struct Type {
            canon: string;
            quals: int;
        };

        fn takes_two_strings(mut a: Type, mut b: Type) {
            b.canon ~= a.canon;
            a.canon ~= b.canon;
            a.quals |= b.quals;
            return a;
        }

        fn move_on_last_use_OOE(mut canon: string, quals: int) {
            canon ~= canon;
            return takes_two_strings(   // N_MoveMustSeq
                Type(:canon, :quals),
                Type(:canon, :quals));  // out of order move-into-struct will break this
        }

        fn main() {
            let res = move_on_last_use_OOE(
                "1234567890abcdef1234567890abcdef" // len=32, *2 = 64, *3 = 192
                    1000);

            return res.canon.len + res.quals - 1192;
        }

-----
#include <fu/str.h>
#include <fu/vec/concat.h>

struct s_Type;

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    explicit operator bool() const noexcept
    {
        return false
            || canon
            || quals
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_Type takes_two_strings_8ZvvcaaE(/*MOV*/ s_Type&& a, s_Type&& b)
{
    b.canon += a.canon;
    a.canon += b.canon;
    a.quals |= b.quals;
    return static_cast<s_Type&&>(a);
}

static s_Type move_on_last_use_OOE_92OZyTrf(/*MOV*/ fu_STR&& canon, const int quals)
{
    canon += fu_STR(canon);
    s_Type _0 {};
    return (_0 = s_Type { fu_STR(canon), int(quals) }, takes_two_strings_8ZvvcaaE(static_cast<s_Type&&>(_0), s_Type { static_cast<fu_STR&&>(canon), int(quals) }));
}

int fu_MAIN()
{
    s_Type res = move_on_last_use_OOE_92OZyTrf("1234567890abcdef1234567890abcdef"_fu, 1000);
    return (res.canon.size() + res.quals) - 1192;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_MoveMustSeq

-----

        struct Type {
            canon: string;
            quals: int;
        };

        fn takes_two_strings_and_an_int(mut a: Type, mut b: Type, c: int) {
            b.canon ~= a.canon;
            a.canon ~= b.canon;
            a.quals |= b.quals;
            a.quals += c;
            return a;
        }

        fn moves_reordered_by_bck_OOE(mut canon: string, mut quals: int) {
            canon ~= canon;
            return takes_two_strings_and_an_int(    // N_MoveMustSeq
                Type(:canon, 0),
                Type(:canon, quals++), // quals++ triggered bck MUSTSEQ
                             quals  ); //  which reordered arg b BEFORE arg a,
        }                              //   which broke move-on-last-use.

        fn main() {
            let res = moves_reordered_by_bck_OOE(
                "1234567890abcdef1234567890abcdef" // len=32, *2 = 64, *3 = 192
                    0);

            return res.canon.len + res.quals - 193;
        }

-----
#include <fu/str.h>
#include <fu/vec/concat.h>

struct s_Type;

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    explicit operator bool() const noexcept
    {
        return false
            || canon
            || quals
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_Type takes_two_strings_and_an_int_NowGgyNc(/*MOV*/ s_Type&& a, s_Type&& b, const int c)
{
    b.canon += a.canon;
    a.canon += b.canon;
    a.quals |= b.quals;
    a.quals += c;
    return static_cast<s_Type&&>(a);
}

static s_Type moves_reordered_by_bck_OOE_92OZyTrf(/*MOV*/ fu_STR&& canon, int quals)
{
    canon += fu_STR(canon);
    s_Type _0 {};
    s_Type _1 {};
    return (_0 = s_Type { fu_STR(canon), 0 }, _1 = s_Type { static_cast<fu_STR&&>(canon), quals++ }, takes_two_strings_and_an_int_NowGgyNc(static_cast<s_Type&&>(_0), static_cast<s_Type&&>(_1), quals));
}

int fu_MAIN()
{
    s_Type res = moves_reordered_by_bck_OOE_92OZyTrf("1234567890abcdef1234567890abcdef"_fu, 0);
    return (res.canon.size() + res.quals) - 193;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_BckMustSeq, N_MoveMustSeq

-----

        fn track_last_loop_confusion(mut a: string, mut b: string)
        {
            for (mut i = 0; i < 6; i++) {
                a ~= a; // foil smallstring opti
                b ~= b; //  both are 64 chars long
            }

            ref x = a.len == 64 ? b : a;
            ref y = b.len == 64 ? x : a; // y points to b two refs deep

            mut result = b; // <-- BROKEN MOVE FROM b HERE

            // once
            for (mut i = result.len / 64; i --> 0; ) {
                y ~= y;         // now 128, ensures y not a view
                result ~= y;    // for a total of 192
            }

            return result;
        }

        fn main() {
            mut res = track_last_loop_confusion("a", "b");
            return res.len == 192 ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

static fu_STR track_last_loop_confusion_Ybn1rfl9(fu_STR&& a, fu_STR&& b)
{
    for (int i = 0; i < 6; i++)
    {
        a += fu_STR(a);
        b += fu_STR(b);
    };
    fu_STR& x = ((a.size() == 64) ? b : a);
    fu_STR& y = ((b.size() == 64) ? x : a);
    /*MOV*/ fu_STR result { b };
    for (int i_1 = (result.size() / 64); i_1-- > 0; )
    {
        y += fu_STR(y);
        result += y;
    };
    return /*NRVO*/ result;
}

int fu_MAIN()
{
    fu_STR res = track_last_loop_confusion_Ybn1rfl9("a"_fu, "b"_fu);
    if (res.size() == 192)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        nocopy struct NCItem { x: i32 };

        fn unshift_odds_push_evens(n: i32) {
            mut arr: NCItem[];
            for (mut i = 0; i < n; i++) {
                let item = NCItem(i);
                if (i & 1)  arr.unshift(item);
                else        arr.push(item);
            }
            return arr;
        }

        fn main() {
            let arr = unshift_odds_push_evens(3);
            return arr[0].x == 1
                && arr[1].x == 0
                && arr[2].x == 2 ? 0 : 1;
        }

-----
#include <fu/vec.h>

struct s_NCItem;

                                #ifndef DEF_s_NCItem
                                #define DEF_s_NCItem
struct s_NCItem
{
    int x;
    s_NCItem(const s_NCItem&) = delete;
    s_NCItem(s_NCItem&&) = default;
    s_NCItem& operator=(const s_NCItem&) = delete;
    s_NCItem& operator=(s_NCItem&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static fu_VEC<s_NCItem> unshift_odds_push_evens_xZDqrZZt(const int n)
{
    /*MOV*/ fu_VEC<s_NCItem> arr {};
    for (int i = 0; i < n; i++)
    {
        /*MOV*/ s_NCItem item = s_NCItem { int(i) };
        if (i & 1)
        {
            arr.unshift(static_cast<s_NCItem&&>(item));
        }
        else
            arr.push(static_cast<s_NCItem&&>(item));

    };
    return /*NRVO*/ arr;
}

int fu_MAIN()
{
    fu_VEC<s_NCItem> arr = unshift_odds_push_evens_xZDqrZZt(3);
    if ((arr[0].x == 1) && (arr[1].x == 0) && (arr[2].x == 2))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_MoveMustSeq

-----

        nocopy struct NCThing { x: i32 };

        fn last_used_before_break(mut nc: NCThing, N: i32) {
            mut res: NCThing;
            for (mut i = 0; i < N; i++) {
                nc.x *= 2;
                if (nc.x > 10) {
                    if (nc.x > 20) return nc;
                    res = nc; // <- should move here ...
                    break;
                }
            }


            if (nc.x > 15) return nc; // <- ... unless used here.


            res.x *= 10;
            return res;
        }

        fn main() {
            let res = last_used_before_break(NCThing(3), 10);
            return res.x - 120;
        }

-----
_0.fu @10:25:

[2m      |                 if (nc.x > 10) {[0m
[2m      |                     if (nc.x > 20) return nc;[0m
   10 |                     res [31;1m=[0m nc; // <- should move here ...
[2m      |                     break;[0m
[2m      |                 }[0m

	Needs an explicit STEAL or CLONE: NCThing

RelaxCopyResize [35;1mfn[0m [34;1mlast_used_before_break[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        nocopy struct NCThing { x: i32 };

        fn last_used_before_break(mut nc: NCThing, N: i32) {
            mut res: NCThing;
            for (mut i = 0; i < N; i++) {
                nc.x *= 2;
                if (nc.x > 10) {
                    if (nc.x > 20) return nc;
                    res = nc; // <- should move here ...
                    break;
                }
            }



            res.x *= 10;
            return res;
        }

        fn main() {
            let res = last_used_before_break(NCThing(3), 10);
            return res.x - 120;
        }

-----
struct s_NCThing;

                                #ifndef DEF_s_NCThing
                                #define DEF_s_NCThing
struct s_NCThing
{
    int x;
    s_NCThing(const s_NCThing&) = delete;
    s_NCThing(s_NCThing&&) = default;
    s_NCThing& operator=(const s_NCThing&) = delete;
    s_NCThing& operator=(s_NCThing&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || x
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_NCThing last_used_before_break_SwJp4COa(/*MOV*/ s_NCThing&& nc, const int N)
{
    /*MOV*/ s_NCThing res {};
    for (int i = 0; i < N; i++)
    {
        nc.x *= 2;
        if (nc.x > 10)
        {
            if (nc.x > 20)
                return static_cast<s_NCThing&&>(nc);
            else
            {
                res = static_cast<s_NCThing&&>(nc);
                break;
            };
        };
    };
    res.x *= 10;
    return /*NRVO*/ res;
}

int fu_MAIN()
{
    s_NCThing res = last_used_before_break_SwJp4COa(s_NCThing { 3 }, 10);
    return res.x - 120;
}

#endif

int main() { return fu_MAIN(); }

-----

        nocopy struct NCThing { str: string };

        fn last_used_in_defer(mut nc: NCThing, ref other: NCThing) {
            defer other = nc; // last use, move here!
            while (nc.str.len < 64)
                nc.str ~= nc.str;


            return nc;                   
        }

        fn main() {
            mut other: NCThing;
            last_used_in_defer(NCThing("Hello!"), other);
            return other.str.len - 96;
        }

-----
_0.fu @10:20:

[2m      | [0m
[2m      | [0m
   10 |             return [31;1mnc[0m;                   
[2m      |         }[0m
[2m      | [0m

	Needs an explicit STEAL or CLONE: NCThing

RelaxCopyResize [35;1mfn[0m [34;1mlast_used_in_defer[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        nocopy struct NCThing { str: string };

        fn last_used_in_defer(mut nc: NCThing, ref other: NCThing) {
            defer other = nc; // last use, move here!
            while (nc.str.len < 64)
                nc.str ~= nc.str;


            return nc.str.len;           
        }

        fn main() {
            mut other: NCThing;
            last_used_in_defer(NCThing("Hello!"), other);
            return other.str.len - 96;
        }

-----
#include <fu/str.h>
#include <fu/defer.h>
#include <fu/vec/concat.h>

struct s_NCThing;

                                #ifndef DEF_s_NCThing
                                #define DEF_s_NCThing
struct s_NCThing
{
    fu_STR str;
    s_NCThing(const s_NCThing&) = delete;
    s_NCThing(s_NCThing&&) = default;
    s_NCThing& operator=(const s_NCThing&) = delete;
    s_NCThing& operator=(s_NCThing&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || str
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static int last_used_in_defer_kbng27DM(/*MOV*/ s_NCThing&& nc, s_NCThing& other)
{
    fu_DEFER(other = static_cast<s_NCThing&&>(nc));
    while (nc.str.size() < 64)
        nc.str += fu_STR(nc.str);

    return nc.str.size();
}

int fu_MAIN()
{
    s_NCThing other {};
    last_used_in_defer_kbng27DM(s_NCThing { "Hello!"_fu }, other);
    return other.str.size() - 96;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const bool hex = true;
    fu_STR trail = "x"_fu;
    if (!((trail >= "0"_fu) && (trail <= "9"_fu)) && !(hex && (((trail >= "a"_fu) && (trail <= "f"_fu)) || ((trail >= "A"_fu) && (trail <= "F"_fu)))))
        return 0;
    else
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

struct s_Token;
struct s_Type;
struct s_SolvedNode;
struct s_ScopeIdx;

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

#ifndef fu_NO_fdefs

static s_SolvedNode createDefaultInit_4GajY8cT(const s_Type& type, const s_Token& _here)
{
    return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Token(_here), s_Type(type), s_ScopeIdx{} };
}

int fu_MAIN()
{
    const s_Token _here {};
    return createDefaultInit_4GajY8cT(s_Type{}, _here).target.i;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve

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

struct s_Scope;
struct s_Type;
struct s_Template;
struct s_SolvedNode;
struct s_Partial;

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

#ifndef fu_NO_fdefs

static int Scope_add_XdIQUzA7(const s_Scope& scope, fu::view<char> kind, fu::view<char> id, const s_Type& type, const int min, const int max, fu::view<fu_STR> arg_n, fu::view<s_Type> arg_t, fu::view<s_SolvedNode> arg_d, const s_Template& tEmplate, const s_Partial& partial)
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
    return Scope_add_XdIQUzA7(_scope, fu::view<char>{}, id, t_template, min, max, arg_n, fu::view<s_Type>{}, fu::view<s_SolvedNode>{}, tEmplate, s_Partial{});
}

#endif

int main() { return fu_MAIN(); }

-----

        let i = 0;
        let items = [ "" ];
        i == items.len - 1 || throw("what?");
        return i;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int i = 0;
    fu_VEC<fu_STR> items = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR{} } };
    if (i == (items.size() - 1))
        return i;
    else
        fu::fail("what?"_fu);

}

#endif

int main() { return fu_MAIN(); }

-----

        return false /* test */
             ? 0xffffff.i32 // what is this
             : 0 // madness
             ;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test(id: i32) id;
        return test(/*id*/0); // <- bad parse

-----

#ifndef fu_NO_fdefs

static int test_nWcpSK7H(const int id)
{
    return id;
}

int fu_MAIN()
{
    return test_nWcpSK7H(0);
}

#endif

int main() { return fu_MAIN(); }

-----

        return 0b101.i32 - 5;

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(0b101u) - 5;
}

#endif

int main() { return fu_MAIN(); }

-----

        return 0o101.i32 - 65;

-----

#ifndef fu_NO_fdefs

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_split_empxubwDcQ6
                                #define DEF_split_empxubwDcQ6
inline void split_empxubwD(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_empxubwD(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu_STR path_normalize_NcW8ORkp(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_3Ik58ru2(p, "/"_fu);
    for (int i = path.size(); i-- > 0; )
    {
        const fu_STR& part = path[i];
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    return join_yaiqG1c4(path, "/"_fu);
}

int fu_MAIN()
{
    if (path_normalize_NcW8ORkp("./hello///hey"_fu) == "hello/hey"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec, N_MoveMustSeq

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
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_split_5MGXxnIMLg7
                                #define DEF_split_5MGXxnIMLg7
inline void split_5MGXxnIM(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_5MGXxnIM(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu_STR path_normalize_NcW8ORkp(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_3Ik58ru2(p, "/"_fu);
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
    return join_yaiqG1c4(path, "/"_fu);
}

static fu_STR path_join_GSO4eTo4(fu::view<char> a, fu::view<char> b)
{
    return path_normalize_NcW8ORkp(((a + "/"_fu) + b));
}

int fu_MAIN()
{
    if (path_join_GSO4eTo4("hello/hey"_fu, "./../you//"_fu) == "hello/you/"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec, N_MoveMustSeq

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

#ifndef fu_NO_fdefs

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

        novec fn novec_each(a: $T[], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut a = [ 1 ];
            a.novec_each: |i| i *= 2;
            return a[0] - 2;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void novec_each_Y0cHAwwk(fu::view_mut<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int& i_1 = a.mutref(i);
        i_1 *= 2;
    };
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    novec_each_Y0cHAwwk(a);
    return a[0] - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        novec fn Each(a: [$T], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        struct Node { kind: string; items: Node[]; flags: i32; };

        let F_PREDICATE = 2;

        fn parse(tokens: byte[]): Node {
            mut _idx = 0;

            fn parseStructDecl(flags! = 0): Node {
                mut items = parseBlockLike('}');

                :F_PREDICATE {
                    items.Each: |item|
                        if (item.kind == "let")
                            if (item.flags & F_PREDICATE)
                                break :F_PREDICATE;

                    items.Each: |item|
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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
inline constexpr int F_PREDICATE = 2;
                                #endif

static fu_VEC<s_Node> parseBlockLike_cl8tFwyT(const char endToken, fu::view<char> tokens, int& _idx)
{
    /*MOV*/ fu_VEC<s_Node> items {};
    for (; ; )
    {
        const char token = tokens[_idx++];
        if (token == endToken)
            break;
        else
        {
            items += s_Node { "let"_fu, fu_VEC<s_Node>{}, int(((token == '+') ? F_PREDICATE : (*(const int*)fu::NIL))) };
        };
    };
    return /*NRVO*/ items;
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

inline static void Each_H7sOGHMo(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Node& item = a.mutref(i);
        if (item.kind == "let"_fu)
            item.flags |= F_PREDICATE;

    };
}

static s_Node parseStructDecl_hFKGEXbN(const int flags, fu::view<char> tokens, int& _idx)
{
    /*MOV*/ fu_VEC<s_Node> items = parseBlockLike_cl8tFwyT('}', tokens, _idx);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const s_Node& item = items[i];
            if ((item.kind == "let"_fu) && (item.flags & F_PREDICATE))
                goto BL_1;

        };
        Each_H7sOGHMo(items);
      } BL_1:;
    };
    return s_Node { "struct"_fu, static_cast<fu_VEC<s_Node>&&>(items), int(flags) };
}

static s_Node parse_XdhjPj6X(fu::view<char> tokens)
{
    int _idx = 0;
    return parseStructDecl_hFKGEXbN(0, tokens, _idx);
}

int fu_MAIN()
{
    fu_STR tokens = "+-}"_fu;
    fu_VEC<s_Node> p = parse_XdhjPj6X(tokens).items;
    return (p.size() - p[0].flags) + (p[1].flags * 17);
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_RelaxRespec, N_BckMustSeq, N_SD_HasStaticInit

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>
#include <fu/vec/view_assign.h>

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

#ifndef fu_NO_fdefs

void alloc_7FffpklN(s_MeshBuilder& mb, const int new_verts, const int new_indices)
{
    mb.verts.resize<false>(((mb.verts.size() + new_verts) * mb.vert_bytes));
    const int index_bytes = 4;
    mb.indices.resize<false>(((mb.indices.size() + new_indices) * index_bytes));
}

fu::view_mut<char> setup_quads_ozk5dRnl(s_MeshBuilder& mb, const int num_quads)
{
    const int b0 = mb.verts.size();
    const int v0 = mb.num_verts;
    const int i0 = mb.indices.size();
    int v1 = v0;
    alloc_7FffpklN(mb, (num_quads * 4), (num_quads * 6));
    fu::view_mut<int> indices_i32 = fu::view_of_mut(fu::get_view_mut(mb.indices, i0, mb.indices.size()), int{});
    for (int i = 0; i < indices_i32.size(); (i += 6))
    {
        indices_i32.mutref(i) = int(v1);
        indices_i32.mutref((i + 1)) = (v1 + 1);
        indices_i32.mutref((i + 2)) = (v1 + 2);
        indices_i32.mutref((i + 3)) = int(v1);
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
    fu::view_assign(fu::view_of_mut(setup_quads_ozk5dRnl(mb, 1), float{}), QUAD_VBO);
    return mb.num_verts - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

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
            implicit mut _target = 0;

            return __solveStruct(1) - 4;
        }

-----

#ifndef fu_NO_fdefs

static int& target_GRC5vaGs(int& _target)
{
    return _target;
}

static int& GET_mut_zoO6P6uL(int& x, int& _target)
{
    return x ? x : target_GRC5vaGs(_target);
}

static void checkRecursions_OBNypPi3(int& o, const int incr, int& _target)
{
    GET_mut_zoO6P6uL(o, _target) += incr;
}

static int __solveStruct_QeLYKCVK(int arg, int& _target)
{
    if (arg)
    {
        int& o = GET_mut_zoO6P6uL(arg, _target);
        o++;
        checkRecursions_OBNypPi3(o, int(o), _target);
    };
    return arg;
}

int fu_MAIN()
{
    int _target = 0;
    return __solveStruct_QeLYKCVK(1, _target) - 4;
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
static int& GET_mut_wRqlRfk1(int&, int&);

#ifndef fu_NO_fdefs

static int& GET_mut_wRqlRfk1(int& x, int& target)
{
    int* _0;
    return x ? x : (_0 = &((target += 1)), GET_mut_wRqlRfk1(*_0, target));
}

int fu_MAIN()
{
    int target = 0;
    return GET_mut_wRqlRfk1(target, target) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_BckMustSeq

-----

        fn target(implicit ref _itarg: i32) _itarg;

        fn main()
        {
            implicit mut _itarg = 0;
            fn GET_mut(ref x: i32) x || GET_mut(target += 1);
            return GET_mut(target) - 1;
        }

-----
static int& GET_mut_bB1c0rFh(int&, int&);

#ifndef fu_NO_fdefs

static int& target_AIAhVO8J(int& _itarg)
{
    return _itarg;
}

static int& GET_mut_bB1c0rFh(int& x, int& _itarg)
{
    int* _0;
    return x ? x : (_0 = &((target_AIAhVO8J(_itarg) += 1)), GET_mut_bB1c0rFh(*_0, _itarg));
}

int fu_MAIN()
{
    int _itarg = 0;
    return GET_mut_bB1c0rFh(target_AIAhVO8J(_itarg), _itarg) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_BckMustSeq

-----

        fn target(implicit ref _itarg: i32) _itarg;
        fn GET_mut(ref x: i32) x || GET_mut(target += 1);

        fn main()
        {
            implicit mut _itarg = 0;
            return GET_mut(target) - 1;
        }

-----
static int& GET_mut_y6c4IL5R(int&, int&);

#ifndef fu_NO_fdefs

static int& target_AIAhVO8J(int& _itarg)
{
    return _itarg;
}

static int& GET_mut_y6c4IL5R(int& x, int& _itarg)
{
    int* _0;
    return x ? x : (_0 = &((target_AIAhVO8J(_itarg) += 1)), GET_mut_y6c4IL5R(*_0, _itarg));
}

int fu_MAIN()
{
    int _itarg = 0;
    return GET_mut_y6c4IL5R(target_AIAhVO8J(_itarg), _itarg) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_BckMustSeq

-----

        fn main()
        {
            mut target = 0;
            fn GET_mut(ref x: i32) x || GET_mut(++target);
            return GET_mut(target) - 1;
        }

-----
static int& GET_mut_wRqlRfk1(int&, int&);

#ifndef fu_NO_fdefs

static int& GET_mut_wRqlRfk1(int& x, int& target)
{
    int* _0;
    return x ? x : (_0 = &(++target), GET_mut_wRqlRfk1(*_0, target));
}

int fu_MAIN()
{
    int target = 0;
    return GET_mut_wRqlRfk1(target, target) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_BckMustSeq

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
static int& GET_mut_dgAufwUm(int&, int&);
static int& __solveStruct_iYyAJmqV(int, int&);

#ifndef fu_NO_fdefs

static int& GET_mut_dgAufwUm(int& x, int& target)
{
    int _0 {};
    return x ? x : (target = (_0 = int((target += 1)), __solveStruct_iYyAJmqV(int(_0), target)));
}

static int& __solveStruct_iYyAJmqV(int arg, int& target)
{
    int& o = GET_mut_dgAufwUm(arg, target);
    o += int(target);
    return target;
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct_iYyAJmqV(0, target) - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_BckMustSeq

-----

        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) a || (a = B(incr(a)));
        fn B(ref b: i32) b || (b = A(incr(b)));
        fn main() { mut v = 0; return A(v) - 1; }

-----
static int& B_7kIWYl4O(int&);
static int& A_ak4ns35v(int&);

#ifndef fu_NO_fdefs

static int& incr_ak4ns35v(int& a)
{
    return ++a;
}

static int& B_7kIWYl4O(int& b)
{
    return b ? b : (b = A_ak4ns35v(incr_ak4ns35v(b)));
}

static int& A_ak4ns35v(int& a)
{
    return a ? a : (a = B_7kIWYl4O(incr_ak4ns35v(a)));
}

int fu_MAIN()
{
    int v = 0;
    return A_ak4ns35v(v) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_DeadCall, N_UnusedStmt

-----

        fn incr(ref a: i32) ++a;
        fn A(ref a: i32) { ref aa = a || (a = B(incr(a))); return aa; }
        fn B(ref b: i32) { ref bb = b || (b = A(incr(b))); return bb; }
        fn main() { mut v = 0; return A(v) - 1; }

-----
static int& B_7kIWYl4O(int&);
static int& A_ak4ns35v(int&);

#ifndef fu_NO_fdefs

static int& incr_ak4ns35v(int& a)
{
    return ++a;
}

static int& B_7kIWYl4O(int& b)
{
    int& bb = (b ? b : (b = A_ak4ns35v(incr_ak4ns35v(b))));
    return bb;
}

static int& A_ak4ns35v(int& a)
{
    int& aa = (a ? a : (a = B_7kIWYl4O(incr_ak4ns35v(a))));
    return aa;
}

int fu_MAIN()
{
    int v = 0;
    return A_ak4ns35v(v) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_DeadCall, N_UnusedStmt

-----

        fn main()
        {
            fn Each(cond, cons) cond && cons();
            fn arg(implicit ref __arg: i32) __arg;
            fn __solveStruct(x = 3) Each(arg, || arg += x);
            implicit mut __arg = 1;
            return __solveStruct - 4;
        }

-----

#ifndef fu_NO_fdefs

static int& arg_MlrGpRK1(int& __arg)
{
    return __arg;
}

inline static int& Each_g7LxAUOQ(int& cond, const int x, int& __arg)
{
    return !cond ? cond : (arg_MlrGpRK1(__arg) += x);
}

static int& __solveStruct_p1JkSn0z(const int x, int& __arg)
{
    return Each_g7LxAUOQ(arg_MlrGpRK1(__arg), x, __arg);
}

int fu_MAIN()
{
    int __arg = 1;
    return __solveStruct_p1JkSn0z(3, __arg) - 4;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn main() {
            fn Each(cond, cons)                     cond && cons();
            fn arg_incr_x(mut arg: i32)             Each(arg, || arg);
            return arg_incr_x(+7) - 7;
        }

-----
#include <fu/default.h>


#ifndef fu_NO_fdefs

inline static int Each_Tf7N6g1p(const int cond, const int arg)
{
    return cond ? arg : (*(const int*)fu::NIL);
}

static int arg_incr_x_lC6EPGNP(const int arg)
{
    return Each_Tf7N6g1p(arg, arg);
}

int fu_MAIN()
{
    return arg_incr_x_lC6EPGNP(+7) - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn main() {
            fn Each(cond, cons)                     cond && cons();
            fn arg_incr_x(mut arg: i32, x = 0)      Each(arg, || arg += x);
            return arg_incr_x(+7, -11) + 4;
        }

-----
#include <fu/default.h>


#ifndef fu_NO_fdefs

inline static int Each_3M12BMxW(const int cond, int& arg, const int x)
{
    return cond ? (arg += x) : (*(const int*)fu::NIL);
}

static int arg_incr_x_ODEKaadu(int arg, const int x)
{
    return Each_3M12BMxW(arg, arg, x);
}

int fu_MAIN()
{
    return arg_incr_x_ODEKaadu(+7, -11) + 4;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn main() {
            fn Each(cond, cons)                     cond && cons();
            fn arg_incr_x(mut arg: i32, x = 0): i32 {
                Each(arg, || arg += x);
                return arg;
            }
            return arg_incr_x(+7, -11) + 4;
        }

-----
#include <fu/default.h>


#ifndef fu_NO_fdefs

inline static int Each_w5AWM7DR(const int cond, int& arg, const int x)
{
    return cond ? (arg += x) : (*(const int*)fu::NIL);
}

static int arg_incr_x_ODEKaadu(int arg, const int x)
{
    Each_w5AWM7DR(arg, arg, x);
    return arg;
}

int fu_MAIN()
{
    return arg_incr_x_ODEKaadu(+7, -11) + 4;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn main()
        {
            mut target = 0;

            fn Each(cond, cons) cond && cons();

            fn GET_mut(ref x: i32) x || (target = __solveStruct(target));

            fn __solveStruct(mut arg: i32, x = 0): i32 {
                Each(arg, || arg += x);
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

static int& GET_mut_dgAufwUm(int&, int&);
static int __solveStruct_PnaEqB4T(int, int, int&);

#ifndef fu_NO_fdefs

inline static int Each_gFdgnyZb(const int cond, int& arg, const int x)
{
    return cond ? (arg += x) : (*(const int*)fu::NIL);
}

static int& GET_mut_dgAufwUm(int& x, int& target)
{
    return x ? x : (target = __solveStruct_PnaEqB4T(int(target), 0, target));
}

static void checkRecursions_LzJosTa4(int& o, const int incr, int& target)
{
    GET_mut_dgAufwUm(o, target) += incr;
}

static int __solveStruct_PnaEqB4T(int arg, const int x, int& target)
{
    Each_gFdgnyZb(arg, arg, x);
    if (arg)
    {
        int& o = GET_mut_dgAufwUm(arg, target);
        o++;
        checkRecursions_LzJosTa4(o, int(o), target);
    };
    return arg;
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct_PnaEqB4T(1, 0, target) - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_DeadCode, N_DeadLet, N_RelaxRespec

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
inline static int& GET_mut_Dolne0qH(int&, int&);
static int __solveStruct_xslK9RH9(int, int&);

#ifndef fu_NO_fdefs

inline static int& GET_mut_Dolne0qH(int& x, int& target)
{
    return x ? x : (target = __solveStruct_xslK9RH9(int(target), target));
}

static void checkRecursions_YEiTxk4S(int& o, const int incr, int& target)
{
    GET_mut_Dolne0qH(o, target) += incr;
}

static int __solveStruct_xslK9RH9(int arg, int& target)
{
    if (arg)
    {
        int& o = GET_mut_Dolne0qH(arg, target);
        o++;
        checkRecursions_YEiTxk4S(o, int(o), target);
    };
    return arg;
}

int fu_MAIN()
{
    int target = 0;
    return __solveStruct_xslK9RH9(1, target) - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

-----

        pub struct ScopeSkip { start: i32; end: i32; };

        pub fn Each(items: [$T], scope_skip: ScopeSkip[], fn, start = 0) {
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
            items.Each(ss, |item| sum += item, start: sum);
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_Each_5v4kCDnzBF9
                                #define DEF_Each_5v4kCDnzBF9
inline void Each_5v4kCDnz(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& sum)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;
        else
        {
            const int i1 = ss.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const int item = items[i_1];
                sum += item;
            };
            i0 = ss.end;
        };
    };
}
                                #endif

int test_363J3D1d(fu::view<int> items)
{
    int sum = 0;
    fu_VEC<s_ScopeSkip> ss {};
    Each_5v4kCDnz(items, ss, sum, sum);
    return sum;
}

int fu_MAIN()
{
    return test_363J3D1d(fu::view<int>{});
}

#endif

int main() { return fu_MAIN(); }

-----

        fn Each(a: [$T], fn, start!?: i32)
            for (mut i = start; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut sum = 0;
            let a = [ 1, 2, 3 ];
            a.Each(|i| sum += i, start: sum);   // <- start inferred to ref i32, which couldnt definit
            return sum - 6;                     //     perhaps we can use the optionality to infer constness
        }

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void Each_WzFxibRD(fu::view<int> a, const int start, int& sum)
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
    Each_WzFxibRD(a, sum, sum);
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

	[35;1mfn[0m [34;1mScopeSkip_push[0m is not novec, argument [34;1mscope_skip[0m is [2i32]: mutref copy resize

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


#ifndef fu_NO_fdefs

static void ScopeSkip_push_ze6Qjodc(fu_VEC<int>& scope_skip)
{
    if (scope_skip)
        scope_skip.mutref(0)++;
    else
        scope_skip += 1;

}

int fu_MAIN()
{
    fu_VEC<int> scope_skip = fu_VEC<int> { fu::slate<1, int> { 1 } };
    ScopeSkip_push_ze6Qjodc(scope_skip);
    return scope_skip[0] - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static fu_STR snippet2cpp_T1le2RST(const fu_STR& cpp)
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
    return snippet2cpp_T1le2RST("1"_fu).size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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

#ifndef fu_NO_fdefs

static fu_STR snippet2cpp_T1le2RST(const fu_STR& cpp)
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
    return snippet2cpp_T1le2RST("1"_fu).size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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
#include <fu/view.h>
#include <fu/vec/concat.h>

static fu_STR inner_vllpP6uW(const fu_STR&, fu::view<char>);
static fu_STR outer_SnQy3kWE(const fu_STR&, fu::view<char>);

#ifndef fu_NO_fdefs

static fu_STR inner_vllpP6uW(const fu_STR& you, fu::view<char> hey)
{
    fu_STR _0 {};
    return you && (_0 = (hey + you)) ? static_cast<fu_STR&&>(_0) : outer_SnQy3kWE("what#1"_fu, hey);
}

static fu_STR outer_SnQy3kWE(const fu_STR& arg, fu::view<char> hey)
{
    fu_STR _0 {};
    return (_0 = inner_vllpP6uW((arg ? (" "_fu + arg) : fu_STR{}), hey)) ? static_cast<fu_STR&&>(_0) : inner_vllpP6uW("what#2"_fu, hey);
}

static fu_STR test_u6ghQiuk(const fu_STR& x)
{
    fu_STR hey = "hey"_fu;
    return outer_SnQy3kWE(x, hey);
}

int fu_MAIN()
{
    return test_u6ghQiuk("you"_fu).size() - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_DeadCode

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

#ifndef fu_NO_fdefs

static int hello_0kRklHNi(const s_CurrentFn& c)
{
    const s_Target& a = c.target;
    return a.packed;
}

int fu_MAIN()
{
    return hello_0kRklHNi(s_CurrentFn{});
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

#ifndef fu_NO_fdefs

static int hello_RvpwLrX5(const s_CurrentFn& c)
{
    const s_Target& a = c.target;
    return a.packed;
}

int fu_MAIN()
{
    return hello_RvpwLrX5(s_CurrentFn{});
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

#ifndef fu_NO_fdefs

static const s_Data& Data_LI7XBqud(const s_ID& nid, fu::view<s_Data> all)
{
    return all[nid.offset];
}

static int test_uWhr7Ptm(const s_ID& node, fu::view<s_Data> all)
{
    const s_ID& init = Data_LI7XBqud(node, all).items[0];
    return Data_LI7XBqud(init, all).items.size();
}

int fu_MAIN()
{
    fu_VEC<s_Data> all = fu_VEC<s_Data> { fu::slate<2, s_Data> { s_Data { fu_VEC<s_ID> { fu::slate<1, s_ID> { s_ID { 1 } } } }, s_Data { fu_VEC<s_ID> { fu::slate<3, s_ID> { s_ID{}, s_ID{}, s_ID{} } } } } };
    return test_uWhr7Ptm(s_ID { 0 }, all) - 3;
}

#endif

int main() { return fu_MAIN(); }

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

	[35;1marg[0m [34;1ms[0m from `hello`, as seen from `|=`.

        Solving [35;1mfn[0m [34;1m|=[0m /Users/hdachev/fu/__tests__/_0.fu:5:13
                [35;1mfn[0m [34;1mhello[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

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

#ifndef fu_NO_fdefs

static int& x7Cx3D_2r7q88FK(s_S& s, const int v, const int w)
{
    return (s.i |= (v << w));
}

static void hello_yPn3Is87(s_S& s, const int w)
{
    x7Cx3D_2r7q88FK(s, 2, w);
}

int fu_MAIN()
{
    s_S s = s_S { 1 };
    hello_yPn3Is87(s, 3);
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


#ifndef fu_NO_fdefs

static fu_STR err_str_70KE6Qh8(const int idx1, const fu_STR& src, const int end, int& idx)
{
    while ((idx < end) && (src[idx] == ' '))
        idx++;

    return fu::slice(src, idx, idx1);
}

static fu_STR err_QRk4k6Wp(const int idx1_x2, const fu_STR& src, const int end, int& idx)
{
    return err_str_70KE6Qh8((idx1_x2 / 2), src, end, idx);
}

static fu_STR lex_LuO03oTi(const fu_STR& src)
{
    const int end = src.size();
    int idx = 0;
    return err_QRk4k6Wp((end * 2), src, end, idx);
}

int fu_MAIN()
{
    return lex_LuO03oTi("    hello"_fu).size() - 5;
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
            implicit mut sum: i32;

            ZERO( "AAAA|BB[split/]CC".split("|") );
            let expect = 4+2+2 + 4+2+2 + 10; // 10 = "import _0;"

            return sum - expect;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

void ZERO_1q4TEajj(fu_VEC<fu_STR>&&, int&);

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

void ZERO_1q4TEajj(fu_VEC<fu_STR>&& sources, int& sum)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i];
            int start0 = fu::lfind(src, "[split/]"_fu);
            if (start0 < 0)
                break;
            else
            {
                const int start00 = start0;
                const int start1 = (start0 + 8);
                while (start0 && (src[(start0 - 1)] == ' '))
                    start0--;

                /*MOV*/ fu_STR moduleA = fu::slice(src, 0, start0);
                /*MOV*/ fu_STR moduleB = ((x7E_sTZRmMq1((fu::get_view(src, start0, start00) + "import _"_fu), fu::i64dec(i)) + ";"_fu) + fu::get_view(src, start1, src.size()));
                /*MOV*/ fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
                sources.mutref(i) = static_cast<fu_STR&&>(without);
                ZERO_1q4TEajj(fu_VEC<fu_STR>(sources), sum);
                sources.mutref(i) = static_cast<fu_STR&&>(moduleA);
                int _0 {};
                (_0 = (i + 1), sources.insert(int(_0), static_cast<fu_STR&&>(moduleB)));
            };
        };
        sum += sources[i].size();
    };
}

                                #ifndef DEF_split_iZqd08wI9Uk
                                #define DEF_split_iZqd08wI9Uk
inline void split_iZqd08wI(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_iZqd08wI(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

int fu_MAIN()
{
    int sum {};
    ZERO_1q4TEajj(split_3Ik58ru2("AAAA|BB[split/]CC"_fu, "|"_fu), sum);
    const int expect = ((((((4 + 2) + 2) + 4) + 2) + 2) + 10);
    return sum - expect;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_NonTrivAutoCopy, N_RelaxRespec, N_MoveMustSeq

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

#ifndef fu_NO_fdefs

static int NOT_PREPPED_YET_DXBD5vmC(const int x)
{
    return x * 2;
}

static s_SolvedNode SolvedNode_xNiSDiT7(fu::view<char> blah)
{
    return s_SolvedNode { NOT_PREPPED_YET_DXBD5vmC(blah.size()) };
}

static int ARG_ANNOT_TRIGGERS_SOLVE_D2T5NYfn(const s_SolvedNode& node)
{
    return node.bli + 2;
}

int fu_MAIN()
{
    return ARG_ANNOT_TRIGGERS_SOLVE_D2T5NYfn(SolvedNode_xNiSDiT7("hello"_fu)) - ((2 * 5) + 2);
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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>

struct s_CurrentFn;
struct s_SolvedNode;
struct s_Overload;
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

#ifndef fu_NO_fdefs

static const s_SolvedNodeData& SolvedNodeData_gmALQCqI(const s_SolvedNode& nid, fu::view<s_Overload> overloads)
{
    fu::view<s_SolvedNodeData> nodes = overloads[nid.nodeidx].nodes;
    return nodes[nid.nodeidx];
}

static const s_Overload& GET_0XHrKvEz(const s_Target& target, fu::view<s_Overload> overloads)
{
    const s_Overload& o = overloads[target.index];
    return o;
}

static int test_nFTJN9OS(fu::view<s_Overload> overloads, const s_CurrentFn& _current_fn)
{
    const s_Target& current_fn = SolvedNodeData_gmALQCqI(_current_fn.out, overloads).target;
    const s_Overload& debug_2 = (current_fn ? GET_0XHrKvEz(current_fn, overloads) : (*(const s_Overload*)fu::NIL));
    return debug_2 ? current_fn.index : (*(const int*)fu::NIL);
}

int fu_MAIN()
{
    const s_CurrentFn _current_fn = s_CurrentFn { s_SolvedNode { 0 } };
    fu_VEC<s_Overload> overloads = fu_VEC<s_Overload> { fu::slate<1, s_Overload> { s_Overload { fu_VEC<s_SolvedNodeData> { fu::slate<1, s_SolvedNodeData> { s_SolvedNodeData { s_Target { 0 } } } } } } };
    return test_nFTJN9OS(overloads, _current_fn);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>

struct s_CurrentFn;
struct s_SolvedNode;
struct s_Overload;
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

#ifndef fu_NO_fdefs

static const s_SolvedNodeData& SolvedNodeData_gmALQCqI(const s_SolvedNode& nid, fu::view<s_Overload> overloads)
{
    return (nid.nodeidx != 303) ? overloads[nid.nodeidx].nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

static const s_Overload& GET_0XHrKvEz(const s_Target& target, fu::view<s_Overload> overloads)
{
    if (target.index != 303)
        return overloads[target.index];
    else
        return (*(const s_Overload*)fu::NIL);

}

static int test_nFTJN9OS(fu::view<s_Overload> overloads, const s_CurrentFn& _current_fn)
{
    const s_Target& current_fn = SolvedNodeData_gmALQCqI(_current_fn.out, overloads).target;
    const s_Overload& debug_2 = (current_fn ? GET_0XHrKvEz(current_fn, overloads) : (*(const s_Overload*)fu::NIL));
    return debug_2 ? current_fn.index : (*(const int*)fu::NIL);
}

int fu_MAIN()
{
    const s_CurrentFn _current_fn = s_CurrentFn { s_SolvedNode { 0 } };
    fu_VEC<s_Overload> overloads = fu_VEC<s_Overload> { fu::slate<1, s_Overload> { s_Overload { fu_VEC<s_SolvedNodeData> { fu::slate<1, s_SolvedNodeData> { s_SolvedNodeData { s_Target { 0 } } } } } } };
    return test_nFTJN9OS(overloads, _current_fn);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_6F44srbZ(fu_STR&& reason, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected '"_fu + here.value) + "'."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? x7E_sTZRmMq1((x7E_sTZRmMq1("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    fu::fail(((addr + ":\n\t"_fu) + reason));
}

static const s_Token& consume_Wx2yN3Eo(fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, const int _loc)
{
    const s_Token& token = tokens[_idx];
    if (token.value == value)
    {
        _idx++;
        return token;
    }
    else
        fail_6F44srbZ(((((((err ? fu_STR(err) : "Expected"_fu) + " '"_fu) + value) + "', got '"_fu) + token.value) + "'."_fu), tokens, _idx, _loc);

}

static const s_Token& parseRoot_n0Bxun0k(fu::view<s_Token> tokens, int& _idx, int& _loc)
{
    const s_Token& ret = consume_Wx2yN3Eo("sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, _loc);
    _loc = _idx;
    return ret;
}

static const s_Token& parse_QBInU5Sp(fu::view<s_Token> tokens)
{
    int _idx = 0;
    int _loc = 0;
    return parseRoot_n0Bxun0k(tokens, _idx, _loc);
}

int fu_MAIN()
{
    return parse_QBInU5Sp((fu::slate<1, s_Token> { s_Token { 1, 1, "sof"_fu } })).value.size() - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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

static int CallerNode_I7zQ0r8x(int, fu::view<int>);

#ifndef fu_NO_fdefs

static int CallerNode_I7zQ0r8x(const int t, fu::view<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        return CallerNode_I7zQ0r8x(int(arr[i]), fu::view<int>{});
    };
    return t;
}

int fu_MAIN()
{
    return CallerNode_I7zQ0r8x(0, fu::view<int>{});
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>

struct s_Target;
struct s_SolvedNode;
static s_SolvedNode CallerNode_19IxgvFY(s_Target&&, fu_VEC<s_SolvedNode>&&, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>);

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

#ifndef fu_NO_fdefs

static s_SolvedNode CallerNode_19IxgvFY(s_Target&& target, /*MOV*/ fu_VEC<s_SolvedNode>&& args, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions)
{
    if (reorder)
    {
        /*MOV*/ fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = s_SolvedNode(args[idx]);

        };
        args = static_cast<fu_VEC<s_SolvedNode>&&>(args_out);
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        for (int i = 0; i < conversion.size(); i++)
        {
            args.mutref(argIdx) = CallerNode_19IxgvFY(s_Target(conversion[i]), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{});
        };
    };
    s_Target _0 {};
    return (_0 = s_Target(target), s_SolvedNode { s_Target(_0), static_cast<fu_VEC<s_SolvedNode>&&>(args) });
}

int fu_MAIN()
{
    return CallerNode_19IxgvFY(s_Target { 0 }, fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}).target.index;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec, N_MoveMustSeq

-----

        fn qSTACK(x: i32) {
            let rec = x & 1 && "rec ";
            let via = !rec && qSTACK(x / 2);
            return "\n" ~ rec ~ "at #" ~ x ~ via;
        }

        fn main() qSTACK(2).len - 2 - 4 - 8 - 2;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

static fu_STR qSTACK_DXBD5vmC(int);

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR qSTACK_DXBD5vmC(const int x)
{
    fu_STR rec = ((x & 1) ? "rec "_fu : fu_STR{});
    fu_STR via = (!rec ? qSTACK_DXBD5vmC((x / 2)) : fu_STR{});
    return x7E_sTZRmMq1((("\n"_fu + rec) + "at #"_fu), fu::i64dec(x)) + via;
}

int fu_MAIN()
{
    return (((qSTACK_DXBD5vmC(2).size() - 2) - 4) - 8) - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

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
#include <fu/view.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

static fu_STR path_relative_8XUmHT1e(fu::view<char> from, const fu_STR& to)
{
    const int min = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min; i++)
    {
        const char a = from[i];
        const char b = to[i];
        if (b != a)
            break;
        else if (b == '/')
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

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR from = "/a/b/c"_fu;
    fu_STR to = "/a/e/f"_fu;
    fu_STR rel = path_relative_8XUmHT1e(from, to);
    if (rel == "../e/f"_fu)
        return 0;
    else
        return 1;

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


#ifndef fu_NO_fdefs

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
            a_1.mutref(i_1) = int(sum);

        BL_1_v = (a_1);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[0] - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_RelaxRespec

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
#include <fu/never.h>


#ifndef fu_NO_fdefs

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
            fu::never BL_3_v {};
            BL_2_v = &((((a[0] + b[0]) & 1) ? (__extension__ (
            {
                { BL_2_v = &(a); goto BL_2; };
            (void)0;}), static_cast<fu::never&&>(BL_3_v)) : b));
          } BL_2:;
        (void)0;}), *BL_2_v);
        int sum = 0;
        for (int i = 0; i < a_1.size(); i++)
            sum += a_1[i];

        a_1.shrink(1);
        a_1.mutref(0) = int(sum);
        BL_1_v = (a_1);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[0] - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int _0 {};
    fu::view<int> BL_1_v {};
    return (_0 = int(a[0]), (int(_0) - (__extension__ (
    {
        const int a_1 = 1;
        if (a_1 & 1)
            ((void)((a.size() <= a_1) && (a.grow((a_1 + 1)), 0)), a.mutref(a_1))++;

        BL_1_v = (a);
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[1]));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_BckMustSeq

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
#include <fu/never.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int _0 {};
    fu::view<int> BL_1_v {};
    return (_0 = int(a[0]), (int(_0) - (__extension__ (
    { {
        const int a_1 = 1;
        fu::never BL_2_v {};
        BL_1_v = (((a_1 & 1) ? (__extension__ (
        {
            ((void)((a.size() <= a_1) && (a.grow((a_1 + 1)), 0)), a.mutref(a_1))++;
            { BL_1_v = fu::get_view(a, 0, (a_1 + 1)); goto BL_1; };
        (void)0;}), static_cast<fu::never&&>(BL_2_v)) : a));
      } BL_1:;
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v))[1]));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_BckMustSeq

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
#include <fu/view.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

static fu_STR serializeType_shGVpYVE(fu::view<char> type, fu::view<char> debug)
{
    return (debug + ":"_fu) + type;
}

inline static fu_STR mangleArguments_zT43zwuM(fu::view<fu_STR> args)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_shGVpYVE(args[i], "M"_fu);
    };
    return /*NRVO*/ mangle;
}

static int trySpecialize_sIcd7N4q(fu::view<fu_STR> args, fu_STR& args_mangled)
{
    if (!(args_mangled))
        args_mangled = mangleArguments_zT43zwuM(args);

    return args_mangled.size();
}

int fu_MAIN()
{
    fu_STR args_mangled {};
    return trySpecialize_sIcd7N4q((fu::slate<2, fu_STR> { "a"_fu, "b"_fu }), args_mangled) - 7;
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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

static const fu_STR& next_HbtOm1LI(fu::view<fu_STR> argv, int& idx)
{
    const int i = idx++;
    if (i < argv.size())
        return argv[i];
    else
        return (*(const fu_STR*)fu::NIL);

}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_EMIT_CPP
                                #define DEF_EMIT_CPP
inline constexpr int EMIT_CPP = (1 << 0);
                                #endif

static void option_GiHL0y1H(fu::view<char> sHort, const int o, int& options, fu_STR& opt)
{
    if (opt == sHort)
    {
        options |= o;
        opt = fu_STR{};
    };
}

                                #ifndef DEF_EMIT_OBJ
                                #define DEF_EMIT_OBJ
inline constexpr int EMIT_OBJ = (1 << 1);
                                #endif

                                #ifndef DEF_EMIT_BIN
                                #define DEF_EMIT_BIN
inline constexpr int EMIT_BIN = (1 << 2);
                                #endif

                                #ifndef DEF_find_ODCLAe2r9ig
                                #define DEF_find_ODCLAe2r9ig
inline int find_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static s_Cmd parseOptions_2f015C0F(fu::view<fu_STR> argv)
{
    int idx = 0;
    const fu_STR& self = next_HbtOm1LI(argv, idx);
    if (argv.size() == 1)
    {
        return s_Cmd{};
    }
    else
    {
        int options {};
        fu_STR val { next_HbtOm1LI(argv, idx) };
        while ((val.size() > 1) && (val[0] == '-'))
        {
            fu_STR opt { val };
            if (opt[1] != '-')
            {
                opt = fu_STR { fu::slate<1, char> { char(opt[1]) } };
                val = ('-' + fu::slice(val, 2));
                if (val == "-"_fu)
                    val = next_HbtOm1LI(argv, idx);

            }
            else
                val = next_HbtOm1LI(argv, idx);

            option_GiHL0y1H("c"_fu, EMIT_CPP, options, opt);
            option_GiHL0y1H("o"_fu, EMIT_OBJ, options, opt);
            option_GiHL0y1H("b"_fu, EMIT_BIN, options, opt);
            if (opt)
                fu::fail((("Unknown option: '"_fu + opt) + "'."_fu));

        };
        const fu_STR* BL_9_v;
        return s_Cmd { fu_STR((__extension__ (
        { {
            const int idx_1 = find_ODCLAe2r(self, '.');
            fu::never BL_10_v {};
            BL_9_v = &(((idx_1 > 0) ? (__extension__ (
            {
                { BL_9_v = &((*(const fu_STR*)fu::NIL)); goto BL_9; };
            (void)0;}), static_cast<fu::never&&>(BL_10_v)) : self));
          } BL_9:;
        (void)0;}), *BL_9_v)), int(options) };
    };
}

int fu_MAIN()
{
    return parseOptions_2f015C0F((fu::slate<3, fu_STR> { "./hey"_fu, "-c"_fu, "-b"_fu })).options - (EMIT_CPP | EMIT_BIN);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec, N_SD_HasStaticInit

-----

        fn withPrefixed(b: byte, view: [byte], fn) {
            mut tmp: string;
            return fn(view.len > 1 ? view : tmp = b ~ view);
        }

        fn main() withPrefixed('a', "b"): |ab| return ab.len - 2;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{

    { {
        /*MOV*/ fu_STR left = "7a012345678900123456789001234567890"_fu;
        /*MOV*/ fu_STR right = "5a012345678900123456789001234567890"_fu;
        const char l = left[0];
        const char r = right[0];
        const bool lq = ((l > '0') && (l < '8'));
        const bool rq = ((r > '0') && (r < '8'));
        if (fu::get_view(left, (lq ? 1 : int{}), left.size()) != fu::get_view(right, (rq ? 1 : int{}), right.size()))
        {
            { /* TODO FIX UNUSED VAL false */; goto BL_1; };
        }
        else
        {
            const int ll = (lq ? (int(fu::u8(l)) - int(fu::u8('0'))) : int{});
            const int rr = (rq ? (int(fu::u8(r)) - int(fu::u8('0'))) : int{});
            const int qq = (ll | rr);
            fu_STR m = ((qq == ll) ? static_cast<fu_STR&&>(left) : ((qq == rr) ? static_cast<fu_STR&&>(right) : (char(qq) + fu::get_view(left, (lq ? 1 : int{}), left.size()))));
            const bool left_1 = (qq == ll);
            if ((m == "7a012345678900123456789001234567890"_fu) && left_1)
                return 0;
            else
                return 100;

        };
      } BL_1:;
    };
    return 101;
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
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

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
        {
            { /* TODO FIX UNUSED VAL false */; goto BL_1; };
        }
        else
        {
            const int ll = (lq ? (int(fu::u8(l)) - int(fu::u8('0'))) : int{});
            const int rr = (rq ? (int(fu::u8(r)) - int(fu::u8('0'))) : int{});
            const int qq = (ll | rr);
            fu_STR tmp {};
            fu::view<char> m = ((qq == ll) ? left : ((qq == rr) ? right : (tmp = (char(qq) + fu::get_view(left, (lq ? 1 : int{}), left.size())))));
            const bool left_1 = (qq == ll);
            if ((m == "7a012345678900123456789001234567890"_fu) && left_1)
                return 0;
            else
                return 100;

        };
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
            else            ifNotLeft(qq == rr ? right : qq ~ right[rq && 1, right.len]);

            return true;
        }

        fn TP_get(typeParams!: string, id!: string)
        {
            id || assert();

            mut start = 0;
            for (;;)
            {
                let idx = typeParams.find(id, :start);
                if (idx < 0)
                    return -1;

                start = id.len;
                if (typeParams[start] == ' ')
                    return start + 1;
            }
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
                ifLeft: || { /* egyptian */
                    return true;
                },                  // <- Lint complained about the nested curlies here ...
                ifNotLeft: |inter|
                { /* pedantic */
                    typeParams.splice(start, end - start, inter);
                    return true;
                });                 // <-  ... and here.

            return false;
        }

        fn main() {
            mut typeParams = "$T 3hey	";
            return TP_upsert(:typeParams, id: "$T", "4hey")
                && typeParams == "$T 7hey	" ? 0 : 101;
        }

-----
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/find.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static int TP_get_vMVlWSDD(fu::view<char> typeParams, const fu_STR& id)
{
    if (id)
    {
        int start = 0;
        for (; ; )
        {
            const int idx = fu::lfind(typeParams, id, start);
            if (idx < 0)
                return -1;
            else
            {
                start = id.size();
                if (typeParams[start] == ' ')
                    return start + 1;

            };
        };
    }
    else
        fu_ASSERT();

}

                                #ifndef DEF_find_mimv437E658
                                #define DEF_find_mimv437E658
inline int find_mimv437E(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static bool TP_upsert_QFRhc5vA(fu_STR& typeParams, const fu_STR& id, const fu_STR& canon)
{
    const int start = TP_get_vMVlWSDD(typeParams, id);
    if (start < 0)
    {
        typeParams += id;
        typeParams += canon;
        typeParams += '\t';
        return true;
    }
    else
    {
        const int end = find_mimv437E(typeParams, '\t', int(start));

        {
            fu::view<char> left = fu::get_view(typeParams, start, end);
            const char l = left[0];
            const char r = canon[0];
            const bool lq = ((l > '0') && (l < '8'));
            const bool rq = ((r > '0') && (r < '8'));
            if (fu::get_view(left, (lq ? 1 : int{}), left.size()) != fu::get_view(canon, (rq ? 1 : int{}), canon.size()))
                return false;
            else
            {
                const int ll = (lq ? (int(fu::u8(l)) - int(fu::u8('0'))) : int{});
                const int rr = (rq ? (int(fu::u8(r)) - int(fu::u8('0'))) : int{});
                const int qq = (ll | rr);
                if (qq == ll)
                    return true;
                else
                {
                    fu_STR inter = ((qq == rr) ? fu_STR(canon) : x7E_sTZRmMq1(fu::i64dec(qq), fu::get_view(canon, (rq ? 1 : int{}), canon.size())));
                    typeParams.splice(start, (end - start), inter);
                    return true;
                };
            };
        };
        return false;
    };
}

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR typeParams = "$T 3hey\t"_fu;
    if (TP_upsert_QFRhc5vA(typeParams, "$T"_fu, "4hey"_fu) && (typeParams == "$T 7hey\t"_fu))
        return 0;
    else
        return 101;

}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn fails_with_silly_error(ref set: i32[], i) {

            set  ||= i;  //  outputing a decent err msg
            return set;
        }

        fn main() {
            mut set = [ 0 ];
            fails_with_silly_error(set, 2);

            mut sum = 0;
            for (mut i = 0; i < set.len; i++) sum += set[i];
            return sum - 2;
        }

-----
_0.fu @4:18:

[2m      |         fn fails_with_silly_error(ref set: i32[], i) {[0m
[2m      | [0m
    4 |             set  [31;1m||=[0m i;  //  outputing a decent err msg
[2m      |             return set;[0m
[2m      |         }[0m

	Bad call to [34;1m||=[0m ([2i32]: mutref copy resize, i32: copy): 

	[35;1mtemplate[0m [34;1m||=[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mfails_with_silly_error[0m /Users/hdachev/fu/__tests__/_0.fu:2:9
                [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:8:9

-----

        fn fails_with_silly_error(ref set: i32[], i) {
 // this BUGged out instead of
            set   ~= i;  //  outputing a decent err msg
            return set;
        }

        fn main() {
            mut set = [ 0 ];
            fails_with_silly_error(set, 2);

            mut sum = 0;
            for (mut i = 0; i < set.len; i++) sum += set[i];
            return sum - 2;
        }

-----
#include <fu/vec.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

inline static fu_VEC<int>& fails_with_silly_error_TyWHzh2Z(fu_VEC<int>& set, const int i)
{
    set += int(i);
    return set;
}

int fu_MAIN()
{
    fu_VEC<int> set = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fails_with_silly_error_TyWHzh2Z(set, 2);
    int sum = 0;
    for (int i = 0; i < set.size(); i++)
        sum += set[i];

    return sum - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn solve(ref output: i32[], input: i32[])
        {
            fn SLOW_traverse(visit)
                for (mut i = 0; i < input.len; i++)
                    visit(input[i]);

            fn qSTACK(id: i32, implicit _current_fnort: i32) {
                SLOW_traverse: |x|
                    if (id == x)
                        return id || _current_fnort;

                return 0;
            }

            fn doTrySpecialize(target: i32)
            {
                fn updateScope(result: i32)
                    output ~= result || qSTACK(result + 1);

                if (target & 1) {
                    updateScope(target); // 1 - 1
                    return;
                }

                let implicit _current_fnort = target;
                updateScope(target / 2); // 4 - 2, 2 - 1, 0 - 0
            }

            let implicit _current_fnort = 1;

            doTrySpecialize(1);
            for (mut i = 0; i < input.len; i++)
                doTrySpecialize(input[i]);
        }

        fn main() {
            mut output: i32[];
            solve(output, input: [ 0, 3 ]);

            return output[0] == 1
                && output[1] == 0
                && output[2] == 3 ? 0 : 1;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static int qSTACK_EeWMv86Z(const int id, const int _current_fnort, fu::view<int> input)
{
    for (int i = 0; i < input.size(); i++)
    {
        const int x = input[i];
        if (id == x)
            return (id ? id : _current_fnort);

    };
    return 0;
}

static fu_VEC<int>& updateScope_kB5xhDD7(const int result, fu_VEC<int>& output, fu::view<int> input, const int _current_fnort)
{
    return (output += (result ? int(result) : qSTACK_EeWMv86Z((result + 1), _current_fnort, input)));
}

static void doTrySpecialize_VOfmqFni(const int target, fu_VEC<int>& output, fu::view<int> input, const int _current_fnort)
{
    if (target & 1)
    {
        updateScope_kB5xhDD7(target, output, input, _current_fnort);
        return;
    }
    else
    {
        const int _current_fnort_1 = target;
        updateScope_kB5xhDD7((target / 2), output, input, _current_fnort_1);
    };
}

static void solve_hWJQ0vZ8(fu_VEC<int>& output, fu::view<int> input)
{
    const int _current_fnort = 1;
    doTrySpecialize_VOfmqFni(1, output, input, _current_fnort);
    for (int i = 0; i < input.size(); i++)
        doTrySpecialize_VOfmqFni(input[i], output, input, _current_fnort);

}

int fu_MAIN()
{
    fu_VEC<int> output {};
    solve_hWJQ0vZ8(output, (fu::slate<2, int> { 0, 3 }));
    if ((output[0] == 1) && (output[1] == 0) && (output[2] == 3))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----


        fn noop_let_lax(ref x: i32) {
            let lax y = x;
        }

        fn main() {
            mut x = 0;
            noop_let_lax(x);
            return x;
        }

-----
_0.fu @3:9:

[2m      | [0m
[2m      | [0m
    3 |         [31;1mfn[0m noop_let_lax(ref x: i32) {
[2m      |             let lax y = x;[0m
[2m      |         }[0m

	[35;1mfn[0m [34;1mnoop_let_lax[0m does nothing: returns void and has no effects. Make it [35;1mlax[0m if this is intentional.

-----


        lax                
        fn noop_let_lax(ref x: i32) {
            let lax y = x;
        }

        fn main() {
            mut x = 0;
            noop_let_lax(x);
            return x;
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int x = 0;
    return x;
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedCall, N_UnusedStmt

-----

        fn compile_begin(mul: i32) {
            let id = mul * 10;
            let implicit options = getModule(:id);
            return compile(:id);
        }

        fn compile(implicit options: i32, id: i32) {
            return getModule(id) + options;
        }

        fn getModule(id: i32, implicit ctx: i32) {
            return ctx + id;
        }

-----

#ifndef fu_NO_fdefs

int getModule_nY5YSxNH(const int id, const int ctx)
{
    return ctx + id;
}

int compile_07fAwBrZ(const int id, const int options, const int ctx)
{
    return getModule_nY5YSxNH(id, ctx) + options;
}

int compile_begin_F7GdcMmT(const int mul, const int ctx)
{
    const int id = (mul * 10);
    const int options = getModule_nY5YSxNH(id, ctx);
    return compile_07fAwBrZ(id, options, ctx);
}

#endif

-----

        fn compile_begin(mul: i32) {
            let id = mul * 10;
            let implicit options = getModule(:id);
            return compile(:id);
        }

        fn compile(implicit options: i32, id: i32) {
            return getModule(id) + options;
        }

        fn getModule(id: i32, implicit ctx: i32) {
            return ctx + id;
        }

        import _0;

        fn main() {
            let implicit ctx = 2;
            return compile_begin(3) - 64;
        }

-----
int compile_begin_F7GdcMmT(int, int);

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int ctx = 2;
    return compile_begin_F7GdcMmT(3, ctx) - 64;
}

#endif

int main() { return fu_MAIN(); }

-----

        // An empty file.

-----

-----

        // An empty file.

        fn sqr(x: i32) x * x;

-----

#ifndef fu_NO_fdefs

int sqr_qhlm9UOq(const int x)
{
    return x * x;
}

#endif

-----

        // An empty file.

        fn sqr(x: i32) x * x;

        import _0;
        import _1;

        fn main() = 0.sqr;

-----
int sqr_qhlm9UOq(int);

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return sqr_qhlm9UOq(0);
}

#endif

int main() { return fu_MAIN(); }

-----

        struct vec2 {
            x?: f32;
            y?: f32;
        };

        inline fn *=(ref a: vec2, b: f32) {
            a.x *= b;
            a.y *= b;
            return a;
        }

        fn main() {
            mut v = vec2(1, 1);
            v *= 0.5; // BUG: Considering copy or move for incompatible types: vec2: copy <- f32: copy
            return v.x.i32;
        }

-----
struct s_vec2;

                                #ifndef DEF_s_vec2
                                #define DEF_s_vec2
struct s_vec2
{
    float x;
    float y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_vec2 v = s_vec2 { 1.0f, 1.0f };

    {
        const float b = 0.5f;
        v.x *= b;
        v.y *= b;
    };
    return int(v.x);
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Loop { l: i32 };
        struct Ring { r: i32 };
        struct Mesh { m: i32 };

        fn op(ref m: Mesh, x: i32, l: Loop) m.m += l.l + x;
        fn op(ref m: Mesh, r: Ring, x: i32) m.m *= r.r + x;
        fn op(using ref m: Mesh, l: Loop, r: Ring, x: i32) {
            l.op(:x);
            r.op(:x);
        }

        fn main() {
            mut m = Mesh(1);
            m.op(Loop(2), Ring(7), x: 1);
            return m.m == 32 ? 0 : 1;
        }

-----
struct s_Mesh;
struct s_Loop;
struct s_Ring;

                                #ifndef DEF_s_Mesh
                                #define DEF_s_Mesh
struct s_Mesh
{
    int m;
    explicit operator bool() const noexcept
    {
        return false
            || m
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Loop
                                #define DEF_s_Loop
struct s_Loop
{
    int l;
    explicit operator bool() const noexcept
    {
        return false
            || l
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Ring
                                #define DEF_s_Ring
struct s_Ring
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

#ifndef fu_NO_fdefs

static int& op_MOVg2b1i(s_Mesh& m, const int x, const s_Loop& l)
{
    return (m.m += (l.l + x));
}

static int& op_9tvr9YRv(s_Mesh& m, const s_Ring& r, const int x)
{
    return (m.m *= (r.r + x));
}

static void op_dARHOl1D(s_Mesh& m, const s_Loop& l, const s_Ring& r, const int x)
{
    op_MOVg2b1i(m, x, l);
    op_9tvr9YRv(m, r, x);
}

int fu_MAIN()
{
    s_Mesh m = s_Mesh { 1 };
    op_dARHOl1D(m, s_Loop { 2 }, s_Ring { 7 }, 1);
    if (m.m == 32)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        pub struct MultiDraw { id: i32; }

-----

-----

        pub struct MultiDraw { id: i32; }

        import _0;
        type ViewQuads = MultiDraw;

        fn ViewQuads(id!: i32, populate!): ViewQuads {
            mut vq = ViewQuads(:id);
            populate(vq);
            return vq;
        }

-----

-----

        pub struct MultiDraw { id: i32; }

        import _0;
        type ViewQuads = MultiDraw;

        fn ViewQuads(id!: i32, populate!): ViewQuads {
            mut vq = ViewQuads(:id);
            populate(vq);
            return vq;
        }

        import _1;
        fn ViewQuads(id!: i32, camera!: i32): ViewQuads {
            return ViewQuads(:id, populate: |vq| vq.id += camera);
        }

        fn main() {
            return ViewQuads(id: 2, camera: 5).id - 7;
        }

-----
struct s_MultiDraw;

                                #ifndef DEF_s_MultiDraw
                                #define DEF_s_MultiDraw
struct s_MultiDraw
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_ViewQuads_ur1wsC144Cb
                                #define DEF_ViewQuads_ur1wsC144Cb
inline s_MultiDraw ViewQuads_ur1wsC14(const int id, const int camera)
{
    s_MultiDraw vq = s_MultiDraw { int(id) };
    vq.id += camera;
    return vq;
}
                                #endif

static s_MultiDraw ViewQuads_QRculzoO(const int id, const int camera)
{
    return ViewQuads_ur1wsC14(id, camera);
}

int fu_MAIN()
{
    return ViewQuads_QRculzoO(2, 5).id - 7;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn setupOperators()
        {
            struct Maplike {
                keys: string[];
                vals: i32[];
            };

            fn set(ref m: Maplike, k: string, v: i32) {
                m.keys ~= k;
                m.vals ~= v;
            }

            struct BINOP {
                PRECEDENCE: Maplike;
                RIGHT_TO_LEFT: bool[];
            };

            mut out: BINOP;
            mut precedence: i32 = -1;
            mut rightToLeft = false;

            fn binop(ops: string[]) {
                precedence++;
                out.RIGHT_TO_LEFT ~= rightToLeft;
                for (mut i = 0; i < ops.len; i++)
                    out.PRECEDENCE.set(ops[i], precedence);
            }

            rightToLeft = false;
            binop([ "*", "/", "%" ]);

            rightToLeft = true;
            binop([ "*=", "/=", "%=" ]);

            return out;
        }

        let BINOP = setupOperators();
        fn main() BINOP.RIGHT_TO_LEFT[1] && BINOP.PRECEDENCE.vals[3] == 1 ? 0 : 1;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_BINOP;
struct s_Maplike;

                                #ifndef DEF_s_Maplike
                                #define DEF_s_Maplike
struct s_Maplike
{
    fu_VEC<fu_STR> keys;
    fu_VEC<int> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    s_Maplike PRECEDENCE;
    fu_VEC<bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE
            || RIGHT_TO_LEFT
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static void set_OZvRmNDj(s_Maplike& m, const fu_STR& k, const int v)
{
    m.keys += fu_STR(k);
    m.vals += int(v);
}

static void binop_GfkeOAAd(fu::view<fu_STR> ops, s_BINOP& out, int& precedence, const bool rightToLeft)
{
    precedence++;
    out.RIGHT_TO_LEFT += bool(rightToLeft);
    for (int i = 0; i < ops.size(); i++)
        set_OZvRmNDj(out.PRECEDENCE, ops[i], precedence);

}

static s_BINOP setupOperators_H9fhQUVP()
{
    /*MOV*/ s_BINOP out {};
    int precedence = -1;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_GfkeOAAd((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), out, precedence, rightToLeft);
    rightToLeft = true;
    binop_GfkeOAAd((fu::slate<3, fu_STR> { "*="_fu, "/="_fu, "%="_fu }), out, precedence, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1001) = setupOperators_H9fhQUVP();

int fu_MAIN()
{
    if (BINOP.RIGHT_TO_LEFT[1] && (BINOP.PRECEDENCE.vals[3] == 1))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_SD_HasStaticInit

-----

        let a = 7;
        let b = a && 3;
        return b - 3;

-----

#ifndef fu_NO_fdefs

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
#include <fu/str.h>
#include <fu/never.h>

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

#ifndef fu_NO_fdefs

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    s_TrueStory specialized = s_TrueStory { "fn"_fu, "val"_fu };
    if ((specialized.kind == "fn"_fu) && specialized.value)
    {
        fu_STR& v = ((specialized.kind == "fn"_fu) && specialized.value ? specialized.value : fu::fail("nope"_fu));
        v += "ue"_fu;
        if (specialized.value == "value"_fu)
            return 0;
        else
            return 1;

    }
    else
        fu::fail("nope"_fu);

}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

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

	Bad call to [34;1m=[0m (ScopeIdx: mutref copy, i32: copy): 

	[35;1mtemplate[0m [34;1m=[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

        Solving [35;1mfn[0m [34;1mhey[0m /Users/hdachev/fu/__tests__/_0.fu:10:9
                [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

#ifndef fu_NO_fdefs

static s_ScopeIdx thing_5SZ4IA77(const int x)
{
    return s_ScopeIdx { int(x) };
}

static int& hey_eC9Xz3b1(const int x, s_ScopeIdx& _return_scope)
{
    const s_ScopeIdx scope0 = thing_5SZ4IA77(x);
    _return_scope = scope0;
    return _return_scope.raw;
}

int fu_MAIN()
{
    s_ScopeIdx _return_scope {};
    return hey_eC9Xz3b1(0, _return_scope);
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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

static fu_VEC<fu_STR> maybe_empty_UJ2S99cF(const int N)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    for (int i = 0; i < N; i++)
    {
        res += (fu::slate<1, fu_STR> { "world!"_fu });
    };
    return /*NRVO*/ res;
}

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<fu_STR> arr = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "Hello"_fu } };
    for (int i = 0; i < 2; i++)
        arr += maybe_empty_UJ2S99cF(i);

    if (join_yaiqG1c4(arr, " "_fu) == "Hello world!"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

static fu_VEC<fu_STR> maybe_empty_UJ2S99cF(const int N)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    for (int i = 0; i < N; i++)
        res += "world!"_fu;

    return /*NRVO*/ res;
}

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<fu_STR> arr = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "Hello"_fu } };
    for (int i = 0; i < 2; i++)
        arr += maybe_empty_UJ2S99cF(i);

    if (join_yaiqG1c4(arr, " "_fu) == "Hello world!"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7Ex3D_EHZEiPh81F6
                                #define DEF_x7Ex3D_EHZEiPh81F6
inline fu_STR& x7Ex3D_EHZEiPh8(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu_STR fail_QoKUVxlt(/*MOV*/ fu_STR&& reason, fu::view<char> _info)
{
    const char info = _info[0];
    x7Ex3D_EHZEiPh8(reason, fu::i64dec((info ? int(fu::u8(info)) : int{})));
    return static_cast<fu_STR&&>(reason);
}

int fu_MAIN()
{
    fu_STR _info = "abc"_fu;
    return fail_QoKUVxlt(fu_STR{}, _info).size() - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        let q_mutref = 1;
        pub let RELAX_mutref_only = q_mutref;
        pub fn what(relax_mask: i32) relax_mask -1;

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline constexpr int q_mutref = 1;
                                #endif

                                #ifndef DEF_RELAX_mutref_only
                                #define DEF_RELAX_mutref_only
extern const int RELAX_mutref_only = q_mutref;
                                #endif

int what_py5LhX10(const int relax_mask)
{
    return relax_mask - 1;
}

#endif

// N_SD_HasStaticInit

-----

        let q_mutref = 1;
        pub let RELAX_mutref_only = q_mutref;
        pub fn what(relax_mask: i32) relax_mask -1;

        import _0;
        fn main() what(RELAX_mutref_only);

-----
int what_py5LhX10(int);

#ifndef fu_NO_fdefs

                                #ifndef DEF_RELAX_mutref_only
                                #define DEF_RELAX_mutref_only
extern const int RELAX_mutref_only;
                                #endif

int fu_MAIN()
{
    return what_py5LhX10(RELAX_mutref_only);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn main() {
            try         { return 0; }
            catch (e)   { return e == "x=2: even!" ? 11 : 22; }
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedTry

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_jKstHX9X(fu::view<char> str)
{
    fu::fail((str + "!"_fu));
}

static int test_DXBD5vmC(const int x)
{
    int _0 {};
    fu::never BL_1_v {};
    return (_0 = (x & 1)) ? _0 : (__extension__ (
    {
        fu_STR str = "even"_fu;
        str = ((x7E_sTZRmMq1("x="_fu, fu::i64dec(x)) + ": "_fu) + str);
        fail_jKstHX9X(str);
    (void)0;}), static_cast<fu::never&&>(BL_1_v));
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{

    try
    {
        return test_DXBD5vmC(2);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        fu_STR e_1 = ("hello "_fu + e);
        if (e_1 == "hello x=2: even!"_fu)
            return 0;
        else
            return 10;

    }
    }
;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_jKstHX9X(fu::view<char> str)
{
    fu::fail((str + "!"_fu));
}

static int test_DXBD5vmC(const int x)
{
    int _0 {};
    fu::never BL_1_v {};
    return (_0 = (x & 1)) ? _0 : (__extension__ (
    {
        fu_STR str = "even"_fu;
        str = ((x7E_sTZRmMq1("x="_fu, fu::i64dec(x)) + ": "_fu) + str);
        fail_jKstHX9X(str);
    (void)0;}), static_cast<fu::never&&>(BL_1_v));
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{

    try
    {
        return test_DXBD5vmC(2);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        if (e == "x=2: even!"_fu)
            return 0;
        else
            return 10;

    }
    }
;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

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


#ifndef fu_NO_fdefs

inline static int& ARR_LAST_0OkT6FQ3(fu::view_mut<int> a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_SqMGnz0V(fu::view<int> a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 2 } };
    ARR_LAST_0OkT6FQ3(b) += ARR_LAST_SqMGnz0V(a);
    return ARR_LAST_SqMGnz0V(b) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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


#ifndef fu_NO_fdefs

inline static int& ARR_LAST_t7X497EF(fu::view_mut<int> a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_NrrEtT9m(fu::view<int> a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 2 } };
    ARR_LAST_t7X497EF(b) += ARR_LAST_NrrEtT9m(a);
    return ARR_LAST_NrrEtT9m(b) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static int test_ehyhN9eU(s_S&& x)
{
    return (x.i += 1);
}

int fu_MAIN()
{
    return test_ehyhN9eU(s_S { -1 });
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


#ifndef fu_NO_fdefs

inline static int& ARR_LAST_t7X497EF(fu::view_mut<int> a)
{
    return a.mutref((a.size() - 1));
}

inline static int ARR_LAST_NrrEtT9m(fu::view<int> a)
{
    return a[(a.size() - 1)];
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    fu_VEC<int> b = fu_VEC<int> { fu::slate<1, int> { 2 } };
    ARR_LAST_t7X497EF(b) += ARR_LAST_NrrEtT9m(a);
    return ARR_LAST_NrrEtT9m(b) - ARR_LAST_NrrEtT9m((fu::slate<1, int> { 3 }));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static void test_P0FQ1OBh(s_RenderFrame& output)
{
    output.u_mat4_VP = s_mat4 { 1 };
}

int fu_MAIN()
{
    s_RenderFrame ret {};
    test_P0FQ1OBh(ret);
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

	Bad call to [34;1mScopeSkip[0m (i32: copy, i32: copy): 

	[35;1mtype[0m [34;1mScopeSkip[0m: Unknown argument name: min

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:10:13

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

#ifndef fu_NO_fdefs

int search_de95Pn2y(const s_ScopeSkip& skip)
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
                      mo.x * -i_mx.x +
                      mo.y * -i_my.x +
                      mo.z * -i_mz.x,

                      mo.x * -i_mx.y +
                      mo.y * -i_my.y +
                      mo.z * -i_mz.y,

                      mo.x * -i_mx.z +
                      mo.y * -i_my.z +
                      mo.z * -i_mz.z));
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

#ifndef fu_NO_fdefs

static s_mat34 inverse_TIi6h5IS(const s_mat34& mat)
{
    const float idet = (1.0f / (((((((-mat.mz.x * mat.my.y) * mat.mx.z) + ((mat.my.x * mat.mz.y) * mat.mx.z)) + ((mat.mz.x * mat.mx.y) * mat.my.z)) - ((mat.mx.x * mat.mz.y) * mat.my.z)) - ((mat.my.x * mat.mx.y) * mat.mz.z)) + ((mat.mx.x * mat.my.y) * mat.mz.z)));
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
        const s_mat34 _ = inverse_TIi6h5IS(s_mat34 { s_vec3 { 1.0f, 0.0f, 0.0f }, s_vec3 { 0.0f, 1.0f, 0.0f }, s_vec3 { 0.0f, 0.0f, 1.0f }, s_vec3{} });
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_TEA tea {};

    {
        unsigned sum {};
        const unsigned delta = 0x9e3779b9u;
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
inline static int rec_cases_KFeeUbvh(int);
inline static int rec_cases_3ubLdwC2(const s_X&);

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

#ifndef fu_NO_fdefs

inline static int rec_cases_KFeeUbvh(const int a)
{
    if (a)
        return rec_cases_KFeeUbvh((a / 2));
    else
        return a;

}

inline static int rec_cases_3ubLdwC2(const s_X& a)
{
    if (a.i)
    {
        s_X a_1 { a };
        a_1.i /= 2;
        return rec_cases_3ubLdwC2(a_1);
    }
    else
        return rec_cases_KFeeUbvh(a.i);

}

int fu_MAIN()
{
    return rec_cases_3ubLdwC2(s_X { 1 });
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCode

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
inline static int rec_cases_KFeeUbvh(int);
inline static int rec_cases_3ubLdwC2(const s_X&);

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

#ifndef fu_NO_fdefs

inline static int rec_cases_KFeeUbvh(const int a)
{
    if (a)
        return rec_cases_KFeeUbvh((a / 2));
    else
        return a;

}

inline static int rec_cases_3ubLdwC2(const s_X& a)
{
    if (a.i)
    {
        return rec_cases_3ubLdwC2(s_X { (a.i / 2) });
    }
    else
        return rec_cases_KFeeUbvh(a.i);

}

int fu_MAIN()
{
    return rec_cases_3ubLdwC2(s_X { 1 });
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCode

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

#ifndef fu_NO_fdefs

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
#include <fu/view.h>

struct s_Node;
static void walk_AdQKCoJF(s_Node&, fu::view<char>, const fu_STR&);

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static void walk_AdQKCoJF(s_Node& node, fu::view<char> a, const fu_STR& b)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_AdQKCoJF(node.items.mutref(i), a, b);

    if (node.value == a)
    {
        if ((node.items.size() == 1) && (node.kind == "call"_fu))
            node.value = b;
        else if (node.kind == "str"_fu)
            node.value = b;

    };
}

inline static s_Node astReplace_7TAdbHkN(const s_Node& node, fu::view<char> a, const fu_STR& b)
{
    /*MOV*/ s_Node node_1 { node };
    walk_AdQKCoJF(node_1, a, b);
    return /*NRVO*/ node_1;
}

static s_Node test_9SefmFa9(const s_Node& n, fu::view<char> a, const fu_STR& b)
{
    return astReplace_7TAdbHkN(n, a, b);
}

int fu_MAIN()
{
    s_Node v0 = s_Node { "str"_fu, fu_VEC<s_Node>{}, "woot"_fu };
    s_Node v1 = test_9SefmFa9(v0, "woot"_fu, "who"_fu);
    return v1.value.size() - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

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
static void traverse_sF97WlHL(s_Visitor&, const s_SolvedNode&);

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

#ifndef fu_NO_fdefs

static void visit_NyxgaLtI(s_Visitor& v, const s_SolvedNode& node)
{
    v.sum += node.value;
}

static void traverse_sF97WlHL(s_Visitor& v, const s_SolvedNode& n)
{
    visit_NyxgaLtI(v, n);
    for (int i = 0; i < n.items.size(); i++)
        traverse_sF97WlHL(v, n.items[i]);

}

inline static void visitNodes_X9g1TsW9(s_Visitor& _v, const s_SolvedNode& _n)
{
    traverse_sF97WlHL(_v, _n);
}

int fu_MAIN()
{
    s_SolvedNode tree = s_SolvedNode { 3, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode { 5, fu_VEC<s_SolvedNode>{} }, s_SolvedNode { 7, fu_VEC<s_SolvedNode>{} } } } };
    s_Visitor myVisitor {};
    visitNodes_X9g1TsW9(myVisitor, tree);
    return myVisitor.sum - 15;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_TypeRecursion, N_TypeResolve

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
            mut cpy = tree; cpy = tree; // <- but this fails cleanly when tree is nocopy


            mut myVisitor: Visitor;
            myVisitor.visitNodes(tree);
            return myVisitor.sum - 15;
        };

-----
#include <fu/vec.h>

struct s_SolvedNode;
struct s_Visitor;
static void traverse_HtRMTWcU(s_Visitor&, const s_SolvedNode&);

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

#ifndef fu_NO_fdefs

static void visit_NyxgaLtI(s_Visitor& v, const s_SolvedNode& node)
{
    v.sum += node.value;
}

static void traverse_HtRMTWcU(s_Visitor& v, const s_SolvedNode& n)
{
    visit_NyxgaLtI(v, n);
    for (int i = 0; i < n.items.size(); i++)
        traverse_HtRMTWcU(v, n.items[i]);

}

inline static void visitNodes_X9g1TsW9(s_Visitor& _v, const s_SolvedNode& _n)
{
    traverse_HtRMTWcU(_v, _n);
}

int fu_MAIN()
{
    s_SolvedNode tree = s_SolvedNode { 3, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode { 5, fu_VEC<s_SolvedNode>{} }, s_SolvedNode { 7, fu_VEC<s_SolvedNode>{} } } } };
    s_SolvedNode cpy { tree };
    cpy = tree;
    s_Visitor myVisitor {};
    visitNodes_X9g1TsW9(myVisitor, tree);
    return myVisitor.sum - 15;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy

-----

        return 0 > 1 ? throw("should type check") : 0;

-----
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    if (0 > 1)
        return fu::fail("should type check"_fu);
    else
        return 0;

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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

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

// N_DeadCode, N_DeadLet

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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

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

// N_DeadCode, N_DeadLet

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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

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

// N_DeadCode

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

static const fu_STR& next_1kOGaLoH(fu::view<fu_STR> args, int& idx)
{
    const int i = idx++;
    if (i < args.size())
        return args[i];
    else
        return (*(const fu_STR*)fu::NIL);

}

static int cli_handle_zT43zwuM(fu::view<fu_STR> args)
{
    int idx = 0;
    return next_1kOGaLoH(args, idx).size() - 5;
}

int fu_MAIN()
{
    return cli_handle_zT43zwuM((fu::slate<2, fu_STR> { "hello"_fu, "you"_fu }));
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

#ifndef fu_NO_fdefs

static int test_H9fhQUVP()
{
    const int x = 5;
    return x;
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

#ifndef fu_NO_fdefs

static s_Test test_H9fhQUVP()
{
    const s_Test x = s_Test { 5 };
    return x;
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

#ifndef fu_NO_fdefs

static s_Test test_H9fhQUVP()
{
    const s_Test x = s_Test { 5, -5 };
    return x;
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

#ifndef fu_NO_fdefs

static const s_X& ref2arg_CkxgtgYN(const s_X& x)
{
    return x;
}

int fu_MAIN()
{
    const s_X NOTREF { ref2arg_CkxgtgYN(s_X { 101 }) };
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

RelaxCopyResize [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static s_NoCopy& retmutref_4deLXrqz(s_NoCopy& nc)
{
    return nc;
}

int fu_MAIN()
{
    s_NoCopy nc {};
    retmutref_4deLXrqz(retmutref_4deLXrqz(nc)).i++;
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

#ifndef fu_NO_fdefs

static s_NoCopy& mutrefself_4deLXrqz(s_NoCopy& nc)
{
    nc.i++;
    return nc;
}

int fu_MAIN()
{
    s_NoCopy nc {};
    mutrefself_4deLXrqz(mutrefself_4deLXrqz(nc));
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

#ifndef fu_NO_fdefs

static const s_NoCopy& retargs_or_B5NlNyE5(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? a : b;
}

static const s_NoCopy& retargs_and_B5NlNyE5(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? b : (*(const s_NoCopy*)fu::NIL);
}

static const s_NoCopy& retargs_if_B5NlNyE5(const s_NoCopy& a, const s_NoCopy& b)
{
    if (a.i)
        return b;
    else
        return a;

}

static const s_NoCopy& retarg_57ivwbk1(const s_NoCopy& a)
{
    return a;
}

int fu_MAIN()
{
    s_NoCopy a {};
    s_NoCopy b {};
    return retarg_57ivwbk1(retargs_if_B5NlNyE5(a, retargs_and_B5NlNyE5(a, retargs_or_B5NlNyE5(a, b)))).i;
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

#ifndef fu_NO_fdefs

static const s_NoCopy& retargs_or_B5NlNyE5(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? a : b;
}

static const s_NoCopy& retargs_and_B5NlNyE5(const s_NoCopy& a, const s_NoCopy& b)
{
    return a ? b : (*(const s_NoCopy*)fu::NIL);
}

static const s_NoCopy& retargs_if_B5NlNyE5(const s_NoCopy& a, const s_NoCopy& b)
{
    if (a.i)
        return b;
    else
        return a;

}

static const s_NoCopy& retarg_57ivwbk1(const s_NoCopy& a)
{
    return a;
}

int fu_MAIN()
{
    s_NoCopy a {};
    return retarg_57ivwbk1(retargs_if_B5NlNyE5(a, retargs_and_B5NlNyE5(a, retargs_or_B5NlNyE5(a, s_NoCopy{})))).i;
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

#ifndef fu_NO_fdefs

inline static s_NoCopy& retargs_or_DFiiingB(s_NoCopy& a, s_NoCopy& b)
{
    return a ? a : b;
}

inline static s_NoCopy& retargs_and_DFiiingB(s_NoCopy& a, s_NoCopy& b)
{
    return !a ? a : b;
}

inline static s_NoCopy& retargs_if_DFiiingB(s_NoCopy& a, s_NoCopy& b)
{
    if (a.i)
        return b;
    else
        return a;

}

inline static s_NoCopy& retarg_d3U6OEvw(s_NoCopy& a)
{
    return a;
}

int fu_MAIN()
{
    s_NoCopy a {};
    s_NoCopy b {};
    retarg_d3U6OEvw(retargs_if_DFiiingB(a, retargs_and_DFiiingB(a, retargs_or_DFiiingB(a, b)))).i++;
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

#ifndef fu_NO_fdefs

static int as_blocks_after_DXBD5vmC(const int x)
{
    int zero = 0;
    if (x > 2)
        for (int i = 0; i < x; i++)
            zero = (i + (i * zero));
;
    return zero;
}

int fu_MAIN()
{
    return as_blocks_after_DXBD5vmC(2);
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Lifetime { woot: Lifetime[]; };

        fn Lifetime_test(x: Lifetime) {
            x.woot.len & 1 && throw("This is very important.");
            for (mut i = 0; i < x.woot.len; i++) Lifetime_test(x.woot[i]);
            return x;
        }

        fn Lifetime_fromBinding(x: i32) {
            mut woot: Lifetime[];
            for (mut i = 0; i < x; i++)
                woot[i] = Lifetime();

            // !N_NonTrivAutoCopy
            //
            //  1. Move 'woot' into Lifetime
            //      instead of naively copying it.
            //                             ....
            return Lifetime_test(Lifetime(:woot));
            //     ....
            //  2. Move the result out even though
            //      Lifetime_test takes and returns refs.
        }

        fn main() 0.Lifetime_fromBinding.woot.len;

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/never.h>

struct s_Lifetime;
static const s_Lifetime& Lifetime_test_CkxgtgYN(const s_Lifetime&);

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

#ifndef fu_NO_fdefs

static const s_Lifetime& Lifetime_test_CkxgtgYN(const s_Lifetime& x)
{
    if (x.woot.size() & 1)
        fu::fail("This is very important."_fu);
    else
    {
        for (int i = 0; i < x.woot.size(); i++)
        {
            Lifetime_test_CkxgtgYN(x.woot[i]);
        };
        return x;
    };
}

static s_Lifetime Lifetime_fromBinding_DXBD5vmC(const int x)
{
    /*MOV*/ fu_VEC<s_Lifetime> woot {};
    for (int i = 0; i < x; i++)
    {
        woot.mutref(i) = s_Lifetime{};
    };
    return /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_CkxgtgYN(s_Lifetime { static_cast<fu_VEC<s_Lifetime>&&>(woot) })));
}

int fu_MAIN()
{
    return Lifetime_fromBinding_DXBD5vmC(0).woot.size();
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_TypeRecursion, N_TypeResolve

-----

        fn test(x: i32) {                       // none of these need vecs
            let c = [10007];                    // TODO fu::slate<1, int> c
            let a = [7, 11, 9, 21, x, x, x, x]; // TODO fu::slate<2, int> a
            let b = {                           // TODO fu::slate<1, int> b
                :BRK {                          // !N_NonTrivAutoCopy
                    if (x & 2) break :BRK c;
                    if (x & 1) break :BRK [ x ]; // a val
                    a // a ref
                }
            };
            return a[0] - b[0] * a[1];
        }

        fn main() 1.test + 4.test + 74;

-----
;; TODO fu::slate<1, int> c
;; TODO fu::slate<2, int> a
;; TODO fu::slate<1, int> b

#include <fu/vec.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int test_DXBD5vmC(const int x)
{
    /*MOV*/ fu_VEC<int> c = fu_VEC<int> { fu::slate<1, int> { 10007 } };
    fu_VEC<int> a = fu_VEC<int> { fu::slate<8, int> { 7, 11, 9, 21, int(x), int(x), int(x), int(x) } };
    fu_VEC<int> BL_1_v {};
    fu_VEC<int> b = (__extension__ (
    { {
        fu::never BL_2_v {};
        fu::never BL_3_v {};
        BL_1_v = (fu_VEC<int>(((x & 2) ? (__extension__ (
        {
            { BL_1_v = static_cast<fu_VEC<int>&&>(c); goto BL_1; };
        (void)0;}), static_cast<fu::never&&>(BL_2_v)) : ((x & 1) ? (__extension__ (
        {
            { BL_1_v = fu_VEC<int> { fu::slate<1, int> { int(x) } }; goto BL_1; };
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : a))));
      } BL_1:;
    (void)0;}), static_cast<fu_VEC<int>&&>(BL_1_v));
    return a[0] - (b[0] * a[1]);
}

int fu_MAIN()
{
    return (test_DXBD5vmC(1) + test_DXBD5vmC(4)) + 74;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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

#ifndef fu_NO_fdefs

static s_Test test_CkxgtgYN(/*MOV*/ s_Test&& x)
{
    x.i.mutref(0) += int(x.i[1]);
    return static_cast<s_Test&&>(x);
}

int fu_MAIN()
{
    s_Test s = s_Test { fu_VEC<int> { fu::slate<2, int> { 1, 2 } } };
    return test_CkxgtgYN(s_Test(s)).i[0] - (s.i[0] * 3);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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

#ifndef fu_NO_fdefs

static s_Test test_CkxgtgYN(/*MOV*/ s_Test&& x)
{
    x.i.mutref(0) += int(x.i[1]);
    return static_cast<s_Test&&>(x);
}

int fu_MAIN()
{
    s_Test s = s_Test { fu_VEC<int> { fu::slate<2, int> { 1, 2 } } };
    return test_CkxgtgYN(s_Test(s)).i[0] - (s.i[0] * 3);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_find_ODCLAe2r9ig
                                #define DEF_find_ODCLAe2r9ig
inline int find_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static int compile_snippets_WeCDFLkr(fu::view<char> x0)
{
    int _0 {};
    return !(_0 = find_ODCLAe2r(x0, 'a')) ? _0 : fu::fail("throw#1"_fu);
}

static int ZERO_A9WjqG6r(fu::view<char> x1)
{
    int _0 {};
    return !(_0 = find_ODCLAe2r(x1, 'b')) ? _0 : fu::fail("throw#2"_fu);
}

static fu_STR FAIL_ReRHSofC(fu::view<char> x2)
{

    try
    {
    {
        /*MOV*/ fu_STR ctx = (compile_snippets_WeCDFLkr(x2) ? "hey"_fu : fu_STR{});
        return /*NRVO*/ ctx;
    }
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return fu_STR((ZERO_A9WjqG6r(x2) ? e : (*(const fu_STR*)fu::NIL)));
    }
;
}

int fu_MAIN()
{
    return FAIL_ReRHSofC("a"_fu).size();
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        // The thing below but shorter:
        //  the '|| throw' introduces a bullshit lambda during codegen,
        //   which misreturns a dangling reference to its own frame.
        fn test(x: string) [x][0] || throw("nope!");
        fn main() "what".test.len - 4;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static fu_STR test_BtMJ7F5E(const fu_STR& x)
{
    const fu_STR* _0;
    return fu_STR((*(_0 = &((fu::slate<1, fu_STR> { fu_STR(x) })[0])) ? *_0 : fu::fail("nope!"_fu)));
}

int fu_MAIN()
{
    return test_BtMJ7F5E("what"_fu).size() - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

static fu_VEC<s_SolvedNode> solveNodes_WyY8vQ5r(fu::view<s_Node> n)
{
    /*MOV*/ fu_VEC<s_SolvedNode> r {};
    for (int i = 0; i < n.size(); i++)
    {
        r += s_SolvedNode { fu_STR(n[i].kind) };
    };
    return /*NRVO*/ r;
}

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

inline static const s_SolvedNode& only_ZLhdPXoL(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}

static s_SolvedNode solveDeclExpr_QHszl5lN(const s_Node& n)
{
    const s_SolvedNode* _0;
    return s_SolvedNode((*(_0 = &(only_ZLhdPXoL(solveNodes_WyY8vQ5r((fu::slate<1, s_Node> { s_Node(n) }))))) ? *_0 : fu::fail("!only"_fu)));
}

int fu_MAIN()
{
    return solveDeclExpr_QHszl5lN(s_Node { "a"_fu }).kind.size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        pub fn test(x: i32): i32[] { // !N_NonTrivAutoCopy
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


#ifndef fu_NO_fdefs

fu_VEC<int> test_DXBD5vmC(const int x)
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
    {
        if (x & 1)
            return /*NRVO*/ a;
        else
            return /*NRVO*/ b;

    }
    else
        return /*NRVO*/ c;

}

int fu_MAIN()
{
    return (test_DXBD5vmC(2)[2] + test_DXBD5vmC(1)[1]) - (2 * test_DXBD5vmC(0)[0]);
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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int incr_x_aXtnu1CF(int& x)
{
    return x++;
}

static void incr_x_to_1_NRWGuTBF(int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);
    else
    {
        incr_x_aXtnu1CF(x);
    };
}

int fu_MAIN()
{
    int x = 0;
    incr_x_to_1_NRWGuTBF(x);
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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int incr_x_aXtnu1CF(int& x)
{
    return x++;
}

static void incr_x_to_1_KNSTgz6i(int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);
    else
    {
        incr_x_aXtnu1CF(x);
    };
}

int fu_MAIN()
{
    int x = 0;
    incr_x_to_1_KNSTgz6i(x);
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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int visit_f06nGgpL(const int item, int& x)
{
    if (item)
        return item;
    else
        return x++;

}

inline static int apply_FxHOHy10(const int v, int& x)
{
    return visit_f06nGgpL(v, x);
}

static void scope_using_Aik17XlZ(const int via, int& x)
{
    if (x)
        fu::fail("this reports return t_never"_fu);
    else
    {
        apply_FxHOHy10(via, x);
    };
}

int fu_MAIN()
{
    int x = 0;
    scope_using_Aik17XlZ(x, x);
    return x - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn main()
            i32(PI * 2.0) - 6;

-----
#include <math.h>


#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(((M_PI * 2.0) - 6.0));
}

#endif

int main() { return fu_MAIN(); }

-----

        let x: f32 = 1; fn main() 1 - x.i32;

-----

#ifndef fu_NO_fdefs

static const float x = 1.0f;

int fu_MAIN()
{
    return 1 - int(x);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        let x: f32 = 1.0; fn main() 1 - x.i32;

-----

#ifndef fu_NO_fdefs

static const float x = 1.0f;

int fu_MAIN()
{
    return 1 - int(x);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        let x: u8 = 1; fn main() 1 - x.i32;

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

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

// N_SD_HasStaticInit

-----

        let x = 1.f32; fn main() 1 - x.i32;

-----

#ifndef fu_NO_fdefs

static const float x = float(1);

int fu_MAIN()
{
    return 1 - int(x);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn gt0(x: f32) x > 0;
        fn main() gt0(1.f32) ? 0 : 1;

-----

#ifndef fu_NO_fdefs

static bool gt0_E8Eh1Fk2(const float x)
{
    return x > 0.0f;
}

int fu_MAIN()
{
    if (gt0_E8Eh1Fk2(float(1)))
        return 0;
    else
        return 1;

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static s_vec3 test_Wzw95kEi(const int i)
{
    return s_vec3 { float((i - 2)), 0.0f, 1.0f };
}

int fu_MAIN()
{
    const s_vec3 v = test_Wzw95kEi(1);
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

#ifndef fu_NO_fdefs

static s_vec3 test_oLw5oZ5J(const float f)
{
    return s_vec3 { float(f), 0.0f, -1.0f };
}

int fu_MAIN()
{
    const s_vec3 v = test_oLw5oZ5J(-1.0f);
    return int((v.x - v.z));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn hey(i: f32) i.f32 + 0.5;
        fn main() hey(1).i32 - 1;

-----

#ifndef fu_NO_fdefs

static float hey_287xHcI6(const float i)
{
    return float(i) + 0.5f;
}

int fu_MAIN()
{
    return int(hey_287xHcI6(1.0f)) - 1;
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
#include <cmath>


#ifndef fu_NO_fdefs

static float lin2srgb_i2Vy7gNF(const float l)
{
    if ((l <= 0.0031308f))
        return l * 12.92f;
    else
        return (1.055f * std::pow(l, (1.0f / float(2.4)))) - 0.055f;

}

                                #ifndef DEF_max_MjOyuwowzB6
                                #define DEF_max_MjOyuwowzB6
inline float max_MjOyuwow(const float a, const float b)
{
    if ((a >= b) || (b != b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_min_MjOyuwowzB6
                                #define DEF_min_MjOyuwowzB6
inline float min_MjOyuwow(const float a, const float b)
{
    if ((a <= b) || (b != b))
        return a;
    else
        return b;

}
                                #endif

static unsigned lin255_tZL1GPDO(const float v)
{
    return unsigned((min_MjOyuwow(max_MjOyuwow(lin2srgb_i2Vy7gNF(v), 0.0f), 1.0f) * 255.99f));
}

int fu_MAIN()
{
    return int((lin255_tZL1GPDO(1.0f) - 255u));
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

#ifndef fu_NO_fdefs

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
#include <fu/vec.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_VEC<float> QUAD_DATA fu_INIT_PRIORITY(1001) = fu_VEC<float> { fu::slate<54, float> { -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, +1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, +1.0f, +1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f } };

int fu_MAIN()
{
    return QUAD_DATA.size() - (6 * 9);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn test(a: bool): u8 = a ? 1 : 0;

        fn main() test(false).i32;

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

static fu::u8 test_lwPCzuPE(const bool a)
{
    if (a)
        return fu::u8(1u);
    else
        return fu::u8(0u);

}

int fu_MAIN()
{
    return int(unsigned(test_lwPCzuPE(false)));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test(a: bool): u8 = a && 1;

        fn main() test(false).i32;

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

static fu::u8 test_lwPCzuPE(const bool a)
{
    return a ? fu::u8(1u) : fu::u8{};
}

int fu_MAIN()
{
    return int(unsigned(test_lwPCzuPE(false)));
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


#ifndef fu_NO_fdefs

                                #ifndef DEF_A_u8
                                #define DEF_A_u8
inline constexpr fu::u8 A_u8 = fu::u8(0x0u);
                                #endif

static fu::u8 ATTRIB_bl5TAd0l(const fu::u8 type, const int count, const bool srgb)
{
    return fu::u8((fu::u8((type & fu::u8(0x3u))) | fu::u8((fu::u8(unsigned(count)) << fu::u8(2u))))) | (srgb ? fu::u8(0x80u) : fu::u8{});
}

int fu_MAIN()
{
    return int(unsigned(ATTRIB_bl5TAd0l(A_u8, 4, false))) - 16;
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

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
struct s_RenderFrame;
struct s_RenderFrame_in;
struct s_LogicFrame;
struct s_Geometry;
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

#ifndef fu_NO_fdefs

s_RenderFrame APP_renderFrame_ARwiSkrx(const s_RenderFrame_in& args)
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


#ifndef fu_NO_fdefs

static bool leadingDigit_sfrLT2IM(fu::view<char> name)
{
    return fu::u8((fu::u8(fu::u8(name[0])) - fu::u8(fu::u8('0')))) < fu::u8(10u);
}

int fu_MAIN()
{
    return int(leadingDigit_sfrLT2IM("hello"_fu));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn main() 1_000_000 - 1000000
               || 0xffff_ffff.i32 - 0xffffffff.i32
               || 123_456.789.i32 - 123456.789.i32;

-----

#ifndef fu_NO_fdefs

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
        fn main()                           test(1, true).i32 - 3;

-----

#ifndef fu_NO_fdefs

static unsigned test_VIBh6YrL(const unsigned a, const bool shadows)
{
    return (a << 1u) | (shadows ? 1u : unsigned{});
}

int fu_MAIN()
{
    return int(test_VIBh6YrL(1u, true)) - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct vec3 { x?: f32; y?: f32; z?: f32; };
        inline fn *(a: vec3, b: vec3) vec3(a.x * b.x, a.y * b.y, a.z * b.z);
        inline fn *(a: vec3, b: f32) vec3(a.x * b, a.y * b, a.z * b);
        inline fn lensq(a: vec3) a.x * a.x + a.y * a.y + a.z * a.z;
        inline fn len(a: vec3) a.lensq.sqrt;

        inline fn norm(a: vec3) {
            mut n = 1 / a.len;
            n = n.finite ? n : 0;
            return a * n;
        }

-----

-----

        struct vec3 { x?: f32; y?: f32; z?: f32; };
        inline fn *(a: vec3, b: vec3) vec3(a.x * b.x, a.y * b.y, a.z * b.z);
        inline fn *(a: vec3, b: f32) vec3(a.x * b, a.y * b, a.z * b);
        inline fn lensq(a: vec3) a.x * a.x + a.y * a.y + a.z * a.z;
        inline fn len(a: vec3) a.lensq.sqrt;

        inline fn norm(a: vec3) {
            mut n = 1 / a.len;
            n = n.finite ? n : 0;
            return a * n;
        }

        inline fn test(ref v) {
            v = v.norm();
            return v.len;
        }

        fn main() {
            mut v = _0::vec3(2, 0, 0);
            return v.test() == 1 ? 0 : 1;
        }

-----
#include <cmath>

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_vec3 v = s_vec3 { 2.0f, 0.0f, 0.0f };
    float BL_1_v {};
    if ((__extension__ (
    {
        s_vec3 BL_2_v {};
        v = (__extension__ (
        {
            const s_vec3& a = v;
            float n = (1.0f / std::sqrt((((a.x * a.x) + (a.y * a.y)) + (a.z * a.z))));
            n = (std::isfinite(n) ? float(n) : 0.0f);
            const float b = n;
            BL_2_v = (s_vec3 { (a.x * b), (a.y * b), (a.z * b) });
        (void)0;}), s_vec3(BL_2_v));
        const s_vec3& a = v;
        BL_1_v = (std::sqrt((((a.x * a.x) + (a.y * a.y)) + (a.z * a.z))));
    (void)0;}), float(BL_1_v)) == 1.0f)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        fn sub15(x: i32) x - 15;
        fn main() 0xf.sub15;

-----

#ifndef fu_NO_fdefs

static int sub15_DXBD5vmC(const int x)
{
    return x - 15;
}

int fu_MAIN()
{
    return sub15_DXBD5vmC(0xf);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn pick(albedo: i32 = 0x12345678, shift = 16)
            albedo >> shift & 0xf;
        fn main()
            pick() == 4 ? 0 : 1;

-----

#ifndef fu_NO_fdefs

static int pick_I8HQGoDf(const int albedo, const int shift)
{
    return (albedo >> shift) & 0xf;
}

int fu_MAIN()
{
    if (pick_I8HQGoDf(0x12345678, 16) == 4)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        type Test = i32[];
        fn yo(t: Test) t[0] + t[1];
        fn main() yo([-1, +1]);

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

static int yo_49KVb2Aa(fu::view<int> t)
{
    return t[0] + t[1];
}

int fu_MAIN()
{
    return yo_49KVb2Aa((fu::slate<2, int> { -1, +1 }));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn if_first(a: $T[]) a && a[0];
        fn hello(a: i32[]) a.if_first;
        fn main() hello([ 3 ]) - 3;

-----
#include <fu/vec.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

inline static int if_first_MkwvB6ob(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_MkwvB6ob(const fu_VEC<int>& a)
{
    return if_first_MkwvB6ob(a);
}

int fu_MAIN()
{
    return hello_MkwvB6ob(fu_VEC<int> { fu::slate<1, int> { 3 } }) - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn if_first(a: $T[]) a && a[0];
        type X = i32[];
        fn hello(a: X) a.if_first;
        fn main() hello([ 3 ]) - 3;

-----
#include <fu/vec.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

inline static int if_first_MkwvB6ob(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_MkwvB6ob(const fu_VEC<int>& a)
{
    return if_first_MkwvB6ob(a);
}

int fu_MAIN()
{
    return hello_MkwvB6ob(fu_VEC<int> { fu::slate<1, int> { 3 } }) - 3;
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
#include <fu/vec.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

static fu_VEC<fu_VEC<int>> list_H9fhQUVP()
{
    return fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<1, int> { 3 } } } };
}

inline static const fu_VEC<int>& if_first_F1k4Kl0Q(const fu_VEC<fu_VEC<int>>& a)
{
    return a ? a[0] : (*(const fu_VEC<int>*)fu::NIL);
}

inline static int if_first_MkwvB6ob(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_H9fhQUVP()
{
    return if_first_MkwvB6ob(if_first_F1k4Kl0Q(list_H9fhQUVP()));
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
#include <fu/vec.h>
#include <fu/default.h>


#ifndef fu_NO_fdefs

static fu_VEC<fu_VEC<int>> list_H9fhQUVP()
{
    return fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<1, int> { 3 } } } };
}

inline static const fu_VEC<int>& if_first_F1k4Kl0Q(const fu_VEC<fu_VEC<int>>& a)
{
    return a ? a[0] : (*(const fu_VEC<int>*)fu::NIL);
}

inline static int if_first_MkwvB6ob(const fu_VEC<int>& a)
{
    return a ? a[0] : (*(const int*)fu::NIL);
}

static int hello_H9fhQUVP()
{
    return if_first_MkwvB6ob(if_first_F1k4Kl0Q(list_H9fhQUVP()));
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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_VEC<int> arr fu_INIT_PRIORITY(1001) = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_JyKXThZd5il
                                #define DEF_x3Cx3E_JyKXThZd5il
inline int x3Cx3E_JyKXThZd(fu::view<int> a, fu::view<int> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_F7KakSWb(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_JyKXThZd5il
                                #define DEF_x3Dx3D_JyKXThZd5il
inline bool operator==(fu::view<int> a, fu::view<int> b)
{
    return !x3Cx3E_JyKXThZd(a, b);
}
                                #endif

static bool eq_hBzY5fZd(fu::view<int> a, fu::view<int> b)
{
    return a == b;
}

int fu_MAIN()
{
    if (eq_hBzY5fZd(arr, arr))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        let arr = [1, 2];
        fn eq(a: $T[], b: $T[]) a == b;
        fn main() eq(arr, arr) ? 0 : 1;

-----
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_VEC<int> arr fu_INIT_PRIORITY(1001) = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_JyKXThZd5il
                                #define DEF_x3Cx3E_JyKXThZd5il
inline int x3Cx3E_JyKXThZd(fu::view<int> a, fu::view<int> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_F7KakSWb(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_JyKXThZd5il
                                #define DEF_x3Dx3D_JyKXThZd5il
inline bool operator==(fu::view<int> a, fu::view<int> b)
{
    return !x3Cx3E_JyKXThZd(a, b);
}
                                #endif

inline static bool eq_hBzY5fZd(fu::view<int> a, fu::view<int> b)
{
    return a == b;
}

int fu_MAIN()
{
    if (eq_hBzY5fZd(arr, arr))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn test(hey: [i32])
            hey[0] + hey[1];

        fn main()
            test([-1, +1]);

        // EXPECT fu::slate<2, int> { -1, +1 }

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

static int test_jBdG34X0(fu::view<int> hey)
{
    return hey[0] + hey[1];
}

int fu_MAIN()
{
    return test_jBdG34X0((fu::slate<2, int> { -1, +1 }));
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


#ifndef fu_NO_fdefs

static int& test_O40FYcs9(fu::view_mut<int> hey)
{
    return (hey.mutref(0) += int(hey[1]));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<2, int> { -1, +1 } };
    return test_O40FYcs9(hey);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn test(i: i32) [ i, i + 1 ];
        fn main() test(0)[1] - 1;

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

static fu_VEC<int> test_Wzw95kEi(const int i)
{
    return fu_VEC<int> { fu::slate<2, int> { int(i), (i + 1) } };
}

int fu_MAIN()
{
    return test_Wzw95kEi(0)[1] - 1;
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


#ifndef fu_NO_fdefs

static unsigned test_CDkv9bnq(fu::view<char> hey)
{
    return fu::view_of(hey, unsigned{})[0];
}

int fu_MAIN()
{
    fu_STR hey = fu_STR { fu::slate<4, char> { char(1), char(1), char(1), char(1) } };
    return int((test_CDkv9bnq(hey) - 0x1010101u));
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


#ifndef fu_NO_fdefs

static int test_jBdG34X0(fu::view<int> hey)
{
    return hey[0] + hey[1];
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<3, int> { 7, -1, +1 } };
    return test_jBdG34X0(fu::get_view(hey, 1, 3));
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


#ifndef fu_NO_fdefs

static int& test_O40FYcs9(fu::view_mut<int> hey)
{
    return (hey.mutref(0) += int(hey[1]));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<3, int> { 7, -1, +1 } };
    return test_O40FYcs9(fu::get_view_mut(hey, 1, 3));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

static void test_O40FYcs9(fu::view_mut<int> hey)
{
    fu::view_assign(hey, (fu::slate<2, int> { 2, -3 }));
}

int fu_MAIN()
{
    fu_VEC<int> hey = fu_VEC<int> { fu::slate<3, int> { 1, 0, 0 } };
    test_O40FYcs9(fu::get_view_mut(hey, 1, 3));
    return (hey[0] + hey[1]) + hey[2];
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/view.h>
#include <fu/vec/view_assign.h>

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

#ifndef fu_NO_fdefs

static void test_RggXPcAs(fu::view_mut<s_Hey> out)
{
    fu::view_assign(fu::view_of_mut(out, fu::u8{}), (fu::slate<4, fu::u8> { fu::u8(unsigned(1)), fu::u8(unsigned(1)), fu::u8(unsigned(1)), fu::u8(unsigned(1)) }));
}

int fu_MAIN()
{
    fu_VEC<s_Hey> a = fu_VEC<s_Hey> { fu::slate<1, s_Hey> { s_Hey{} } };
    test_RggXPcAs(a);
    return a[0].i - 16843009;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/vec/view_assign.h>

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

#ifndef fu_NO_fdefs

static void test_Ijv23jLO(fu::view_mut<int> x, fu::view<s_Hey> y)
{
    fu::view_assign(x, fu::view_of(y, int{}));
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    test_Ijv23jLO(a, (fu::slate<1, s_Hey> { s_Hey { 13 } }));
    return a[0] - 13;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/vec/view_assign.h>

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 0 } };
    fu::view_assign(a, fu::view_of((fu::slate<1, s_Hey> { s_Hey { 13 } }), int{}));
    return a[0] - 13;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn test(a: [byte], b?: [byte]) a == b;
        fn main() test("") ? 0 : 1;

        // EXPECT (fu::view<char>{}, fu::view<char>{})

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static bool test_GSO4eTo4(fu::view<char> a, fu::view<char> b)
{
    return a == b;
}

int fu_MAIN()
{
    if (test_GSO4eTo4(fu::view<char>{}, fu::view<char>{}))
        return 0;
    else
        return 1;

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_VEC<fu_STR> NOTES fu_INIT_PRIORITY(1001) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "AAA"_fu, "BBB"_fu, "CCC"_fu } };

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_find_51aX1qKygWk
                                #define DEF_find_51aX1qKygWk
inline int find_51aX1qKy(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static int what_10F26Jbu(fu::view<char> annot)
{
    return find_51aX1qKy(NOTES, fu::get_view(annot, 1, annot.size()));
}

int fu_MAIN()
{
    return what_10F26Jbu("!BBB"_fu) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn Join(a: $T[][], lax sep = [])            // The sep is of type any-init.
        {                                           //
            if (a.len < 2)                          //
                return a.len && a[0];               // NOT SURE WHAT'S 100% IDEAL, BUT:
                                                    //
            let N = typeof(sep) -> [$T;] ? sep.len  // should either match here,
                  : typeof(sep) ->  $T   ? 1        //                                    but currently matches here, which is just wrong.
                                 : 0;               //                           or here,

            mut size = a[0].len;
            for (mut i = 1; i < a.len; i++)
                size += N + a[i].len;

            mut res: $T[];
            res.grow_junk(size);

            let head = a[0];
            size = head.len;
            res[0, head.len] .= head;
            for (mut i = 1; i < a.len; i++)
            {
                let range = a[i];
                if (typeof(sep) -> [$T;])
                    res[size, size + N] .= sep;
                else if (typeof(sep) -> $T)
                    res[size] = sep;

                size += N;
                res[size, size + range.len] .= range;
                size += range.len;
            }

            return res;
        }

        fn main() {
            let res = Join([ "hello", "world" ], []); // the [] fails the case above
            return res == "helloworld" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

inline static fu_STR Join_9zCTWVWL(fu::view<fu_STR> a)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR res = Join_9zCTWVWL((fu::slate<2, fu_STR> { "hello"_fu, "world"_fu }));
    if (res == "helloworld"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        // one of these things reported there's no $S in scope.
        fn Join(a: $T, b: $T, lax sep: $S = [])
            case ($S -> $T || $S -> [$T;] || $S -> [])
        {
            return typeof(sep) -> $T || typeof(sep) -> [$T;]
                 ? a ~ sep ~ b
                 : a ~ b;
        }

        fn main() {
            let res = Join("hello", "world");
            return res == "helloworld" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

inline static fu_STR Join_NkSj3zd2(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR res = Join_NkSj3zd2("hello"_fu, "world"_fu);
    if (res == "helloworld"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        // This is the initial type union concept
        fn Join(a: $T, b: $T, lax sep?: $T or [$T;] or [])
        {
            return typeof(sep) -> $T || typeof(sep) -> [$T;]
                 ? a ~ sep ~ b
                 : a ~ b;
        }

        fn main() {
            let res = Join("hello", "world");
            return res == "helloworld" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

inline static fu_STR Join_NkSj3zd2(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR res = Join_NkSj3zd2("hello"_fu, "world"_fu);
    if (res == "helloworld"_fu)
        return 0;
    else
        return 1;

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

	Bad call to [34;1mTest[0m (i32: copy): 

	[35;1mtype[0m [34;1mTest[0m: Wrong number of arguments: expects 2, got 1.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

#ifndef fu_NO_fdefs

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

	Bad call to [34;1mTest[0m (i32: copy): 

	[35;1mtype[0m [34;1mTest[0m: Wrong number of arguments: expects 2, got 1.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

static void rec_copy_SyP0PhxR(s_Node& a)
{
    a = a.items[0];
}

int fu_MAIN()
{
    s_Node a = s_Node { fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node { fu_VEC<s_Node>{}, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node{} } } } } }, fu_VEC<s_Node>{} };
    rec_copy_SyP0PhxR(a);
    return a.stuff.size() - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn test(a: i32, b!: i32 = 1) a + b;
        return test(-1);

-----

#ifndef fu_NO_fdefs

static int test_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_STRhqML7(-1, 1);
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

	Bad call to [34;1mtest[0m (i32: copy, i32: copy): 

	[35;1mfn[0m [34;1mtest[0m: Argument must be :explicitly named [35;1marg[0m [34;1mb[0m

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

-----

        fn test(a: i32, b!: i32 = 1) a + b;

        return test(-2, b: +2); 

-----

#ifndef fu_NO_fdefs

static int test_STRhqML7(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return test_STRhqML7(-2, +2);
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

	Bad call to [34;1mTest[0m (i32: copy, i32: copy): 

	[35;1mtype[0m [34;1mTest[0m: Argument must be :explicitly named [35;1marg[0m [34;1mb[0m

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

#ifndef fu_NO_fdefs

static int test_b6ucERvO(const s_Test& t)
{
    return t.a + t.b;
}

int fu_MAIN()
{
    return test_b6ucERvO(s_Test { -2, +2 });
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

	Bad call to [34;1mTest[0m (i32: copy, i32: copy): 

	[35;1mtype[0m [34;1mTest[0m: Argument must be :explicitly named [35;1marg[0m [34;1mb[0m

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:1

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

#ifndef fu_NO_fdefs

static int test_b6ucERvO(const s_Test& t)
{
    return t.a + t.b;
}

int fu_MAIN()
{
    return test_b6ucERvO(s_Test { 0, +2 }) - 2;
}

#endif

int main() { return fu_MAIN(); }

-----

        let _precedence = 0;
        fn parseExpression(p1 = _precedence, mode! = 0) p1 + mode;
        fn main() parseExpression();

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF__precedence
                                #define DEF__precedence
inline constexpr int _precedence = 0;
                                #endif

static int parseExpression_s12TFrq9(const int p1, const int mode)
{
    return p1 + mode;
}

int fu_MAIN()
{
    return parseExpression_s12TFrq9(_precedence, 0);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn what(a = -1, b!: i32) a + b; // Trailing explicit args.
        fn main() what(b: +1);

-----

#ifndef fu_NO_fdefs

static int what_V3ST2uOu(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return what_V3ST2uOu(-1, +1);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn greet(with!greeting: string)     greeting.len;
        fn main()                           greet(with: "Hello!") - 6;

-----
#include <fu/str.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

static int greet_SozZWlFo(fu::view<char> greeting)
{
    return greeting.size();
}

int fu_MAIN()
{
    return greet_SozZWlFo("Hello!"_fu) - 6;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn Each(arr: $T[], visit)
            for (mut i = 0; i < arr.len; i++)
                visit(arr[i], i?: i);

        fn main() {
            mut muls = 0;
            mut arr = [ 1, 2, 3 ];

            arr.Each: |v, i!index|
                muls += v * index; // complained no index in scope

            return muls - 8;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void Each_44bpBhd9(fu::view<int> arr, int& muls)
{
    for (int i = 0; i < arr.size(); i++)
    {
        const int v = arr[i];
        muls += (v * i);
    };
}

int fu_MAIN()
{
    int muls = 0;
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<3, int> { 1, 2, 3 } };
    Each_44bpBhd9(arr, muls);
    return muls - 8;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        struct Lifetime { using regions: i32[] };
        fn isInvalidatedBy(write: i32[]) write.len * write[0];

        // This blew up with a TODO: bck_node(non-empty argid).
        fn main() isInvalidatedBy(write: Lifetime([ 3, 5 ])) - 6;

-----
#include <fu/vec.h>
#include <fu/view.h>

struct s_Lifetime;

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<int> regions;
    explicit operator bool() const noexcept
    {
        return false
            || regions
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static int isInvalidatedBy_EKpK1xXp(fu::view<int> write)
{
    return write.size() * write[0];
}

int fu_MAIN()
{
    return isInvalidatedBy_EKpK1xXp(s_Lifetime { fu_VEC<int> { fu::slate<2, int> { 3, 5 } } }.regions) - 6;
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

	Bad call to [34;1ma2o1[0m (i32: copy, i32: copy): 

	[35;1mfn[0m [34;1ma2o1[0m: Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

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

#ifndef fu_NO_fdefs

static int a0o0_H9fhQUVP()
{
    return 0;
}

static int a1o0_KFeeUbvh(const int a)
{
    return a;
}

static int a2o1_V3ST2uOu(const int a, const int b)
{
    return a + b;
}

static int a2o2_V3ST2uOu(const int a, const int b)
{
    return a + b;
}

int fu_MAIN()
{
    return ((((((a0o0_H9fhQUVP() * 1) + (a1o0_KFeeUbvh(1) * 10)) + (a2o1_V3ST2uOu(1, 2) * 100)) + (a2o2_V3ST2uOu(1, 2) * 1000)) + (a2o1_V3ST2uOu(1, 2) * 10000)) + (a2o1_V3ST2uOu(1, 0) * 100000)) - 133310;
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


#ifndef fu_NO_fdefs

                                #ifndef DEF_reveach_GLFaQLQp148
                                #define DEF_reveach_GLFaQLQp148
inline void reveach_GLFaQLQp(fu::view<int> items, int& sum)
{
    for (int i = items.size(); i-- > 0; )
    {
        const int x = items[i];
        sum += x;
    };
}
                                #endif

                                #ifndef DEF_reveach_k34OBsvKlok
                                #define DEF_reveach_k34OBsvKlok
inline void reveach_k34OBsvK(fu::view<int> items, int& sum)
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
    reveach_GLFaQLQp((fu::slate<3, int> { 1, 2, 3 }), sum);
    reveach_k34OBsvK((fu::slate<3, int> { 1, 2, 3 }), sum);
    return sum - 806;
}

#endif

int main() { return fu_MAIN(); }

-----

        pub lax fn noop() 0;
        pub fn woot(ref i: i32, fn) i += fn(i?: i += 1); // Will not add 1.

        fn main() {
            mut sum = 0;
            woot(sum, fn noop);
            return sum;
        }

-----

#ifndef fu_NO_fdefs

int noop_H9fhQUVP()
{
    return 0;
}

                                #ifndef DEF_woot_WANQDq6CwQf
                                #define DEF_woot_WANQDq6CwQf
inline int& woot_WANQDq6C(int& i)
{
    return (i += noop_H9fhQUVP());
}
                                #endif

int fu_MAIN()
{
    int sum = 0;
    woot_WANQDq6C(sum);
    return sum;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn takesFns(x, f)
            f(x * 2, optAndUnused?: x * 3);

        fn hasUnusedOptArg(x: int, alt = 7, lax optAndUnused?: int)
            x + alt;

        fn main()
            takesFns(2, fn hasUnusedOptArg) - 11;

-----

#ifndef fu_NO_fdefs

static int hasUnusedOptArg_6gvySP3o(const int x, const int alt, const int)
{
    return x + alt;
}

inline static int takesFns_tROXoxBb(const int x)
{
    return hasUnusedOptArg_6gvySP3o((x * 2), 7, (x * 3));
}

int fu_MAIN()
{
    return takesFns_tROXoxBb(2) - 11;
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

	Type annotation does not match init expression [34;1mret[0m: i8: copy <- i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: i8 = 
                127 ;

            return (ret - 100).i32 - 27;
        }

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: i16: copy <- i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: i16 = 
                32767 ;

            return (ret - 32700).i32 - 67;
        }

-----

#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: i32: copy <- i64: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: i32 = 
                2147483647 ;

            return (ret - 2147483600).i32 - 47;
        }

-----

#ifndef fu_NO_fdefs

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

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() { // weird error, see the other two below
            let ret: i64 = 
                9223372036854775807 ;

            return (ret - 9223372036854775800).i32 - 7;
        }

-----
#include <cstdint>


#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: i8: copy <- i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: i8 = 
                -128 ;

            return (ret + 100).i32 + 28;
        }

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: i16: copy <- i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: i16 = 
                -32768 ;

            return (ret + 32700).i32 + 68;
        }

-----

#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: i32: copy <- i64: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: i32 = 
                -2147483648 ;

            return (ret + 2147483600).i32 + 48;
        }

-----

#ifndef fu_NO_fdefs

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

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() { // wording different from the ones above and below
            let ret: i64 = 
                -9223372036854775808 ;

            return (ret + 9223372036854775800).i32 + 8;
        }

-----
#include <cstdint>


#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: u8: copy <- i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: u8 = 
                255 ;

            return (ret - 0xff).i32;
        }

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: u16: copy <- i32: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: u16 = 
                65535 ;

            return (ret - 0xffff).i32;
        }

-----
#include <cstdint>


#ifndef fu_NO_fdefs

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

	Type annotation does not match init expression [34;1mret[0m: u32: copy <- i64: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let ret: u32 = 
                4294967295 ;

            return (ret - 0xffffffff).i32;
        }

-----

#ifndef fu_NO_fdefs

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

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() { // this is the best of the weird ones
            let ret: u64 = 
                18446744073709551615 ;

            return (ret - 0xffffffffffffffff).i32;
        }

-----
#include <cstdint>


#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

                                #ifndef DEF_set_once_2sBXkrxiasl
                                #define DEF_set_once_2sBXkrxiasl
inline bool set_once_2sBXkrxi(uint64_t& entry, const int bit)
{
    const uint64_t mask = (1ull << uint64_t(unsigned(bit)));
    if (entry & mask)
        return false;
    else
    {
        entry |= mask;
        return true;
    };
}
                                #endif

int fu_MAIN()
{
    uint64_t entry {};
    const bool a = set_once_2sBXkrxi(entry, 32);
    const bool b = set_once_2sBXkrxi(entry, 32);
    if (a && !b)
        return 0;
    else
        return 101;

}

#endif

int main() { return fu_MAIN(); }

-----

        fn main() {
            let hey: u128 = 0x8000000000000000.u128;
            let res = hey + hey;
            return res > hey ? 0 : 1;
        }

-----
#include <cstdint>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const __uint128_t hey = __uint128_t(0x8000000000000000ull);
    const __uint128_t res = (hey + hey);
    if (res > hey)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        pub lax fn noop() {} // AUTOPUB

        fn hello() 3;

        import _0;
        fn main() 6 - hello * 2;

-----
_1.fu @3:23:

[2m      | [0m
[2m      |         import _0;[0m
    3 |         fn main() 6 - [31;1mhello[0m * 2;
[2m      | [0m

	Bad call to [34;1mhello[0m (): [34;1mhello[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_1.fu:3:9

-----

        pub lax fn noop() {} // AUTOPUB

        pub

        fn hello() 3;

-----

#ifndef fu_NO_fdefs

void noop_H9fhQUVP()
{
}

int hello_H9fhQUVP()
{
    return 3;
}

#endif

-----

        pub lax fn noop() {} // AUTOPUB

        pub

        fn hello() 3;

        import _0;
        fn main() 6 - hello * 2;

-----
int hello_H9fhQUVP();

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

float determinant_m1go2yyb(const s_mat4& _)
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
struct s_vec3;
struct s_mat4;
float determinant_m1go2yyb(const s_mat4&);

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_mat34 m34 = s_mat34 { s_vec3 { 1.0f, 0.0f, 0.0f }, s_vec3 { 0.0f, 1.0f, 0.0f }, s_vec3 { 0.0f, 0.0f, 1.0f }, s_vec3{} };
    const s_mat4 m44 = s_mat4 { float(m34.mx.x), float(m34.mx.y), float(m34.mx.z), 0.0f, float(m34.my.x), float(m34.my.y), float(m34.my.z), 0.0f, float(m34.mz.x), float(m34.mz.y), float(m34.mz.z), 0.0f, float(m34.mo.x), float(m34.mo.y), float(m34.mo.z), 1.0f };
    return int(determinant_m1go2yyb(m44)) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct _0 { x?: f32; y?: f32 };
        fn maxc(using vec: _0) x > y ? x : y;

-----
struct s__0;

                                #ifndef DEF_s__0
                                #define DEF_s__0
struct s__0
{
    float x;
    float y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

float maxc_CjouuJTq(const s__0& vec)
{
    if (vec.x > vec.y)
        return vec.x;
    else
        return vec.y;

}

#endif

-----

        struct _0 { x?: f32; y?: f32 };
        fn maxc(using vec: _0) x > y ? x : y;


        fn main() ::_0.maxc.i32;


-----
struct s__0;
float maxc_CjouuJTq(const s__0&);

                                #ifndef DEF_s__0
                                #define DEF_s__0
struct s__0
{
    float x;
    float y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(maxc_CjouuJTq(s__0{}));
}

#endif

int main() { return fu_MAIN(); }

-----

        struct _0 { x?: f32; y?: f32 };
        fn maxc(using vec: _0) x > y ? x : y;

-----
struct s__0;

                                #ifndef DEF_s__0
                                #define DEF_s__0
struct s__0
{
    float x;
    float y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

float maxc_CjouuJTq(const s__0& vec)
{
    if (vec.x > vec.y)
        return vec.x;
    else
        return vec.y;

}

#endif

-----

        struct _0 { x?: f32; y?: f32 };
        fn maxc(using vec: _0) x > y ? x : y;


        import _0;
        fn main() _0.maxc.i32;


-----
struct s__0;
float maxc_CjouuJTq(const s__0&);

                                #ifndef DEF_s__0
                                #define DEF_s__0
struct s__0
{
    float x;
    float y;
    explicit operator bool() const noexcept
    {
        return false
            || x
            || y
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(maxc_CjouuJTq(s__0{}));
}

#endif

int main() { return fu_MAIN(); }

-----

        pub fn _0(i: i32) i + 1;

-----

#ifndef fu_NO_fdefs

int _0_Wzw95kEi(const int i)
{
    return i + 1;
}

#endif

-----

        pub fn _0(i: i32) i + 1;

        fn main() (-1).::_0;

-----
int _0_Wzw95kEi(int);

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return _0_Wzw95kEi(-1);
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


#ifndef fu_NO_fdefs

                                #ifndef DEF_add_kf5gWln3HGj
                                #define DEF_add_kf5gWln3HGj
inline void add_kf5gWln3(fu_VEC<int>& to, const int item)
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
    add_kf5gWln3(x, 3);
    if (x.size() != 3)
        return 33;
    else
    {
        add_kf5gWln3(x, 4);
        return x.size() - x[3];
    };
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        pub let pad0 = 0; pub let pad1 = 1; pub let pad2 = 2; pub let pad3 = 3; pub let pad4 = 4; pub let pad5 = 5; pub let pad6 = 6; pub let pad7 = 7; pub let pad8 = 8; pub let pad9 = 9;
        pub let PAD0 = 0; pub let PAD1 = 1; pub let PAD2 = 2; pub let PAD3 = 3; pub let PAD4 = 4; pub let PAD5 = 5; pub let PAD6 = 6; pub let PAD7 = 7; pub let PAD8 = 8; pub let PAD9 = 9;

        pub let A = "hello";
        pub let B = "world";

-----
#include <fu/str.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

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

// N_SD_HasStaticInit

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
#include <fu/view.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_A
                                #define DEF_A
extern const fu_STR A;
                                #endif

                                #ifndef DEF_B
                                #define DEF_B
extern const fu_STR B;
                                #endif

static int test_RtFjnBIR(const int i)
{
    fu::view<char> v = ((i & 1) ? A : B);
    return v.size();
}

int fu_MAIN()
{
    return test_RtFjnBIR(0) - test_RtFjnBIR(1);
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_clone_MgI070oq0P0
                                #define DEF_clone_MgI070oq0P0
inline const fu_VEC<int>& clone_MgI070oq(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_KFeeUbvhZVk
                                #define DEF_clone_KFeeUbvhZVk
inline int clone_KFeeUbvh(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_4pbSOkLrBcj
                                #define DEF_clone_4pbSOkLrBcj
inline s_Scope clone_4pbSOkLr(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};
    res.x = clone_KFeeUbvh(a.x);
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_CV4FMsr7xQ0
                                #define DEF_clone_CV4FMsr7xQ0
inline s_ModuleOutputs clone_CV4FMsr7(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_MgI070oq(a.deps);
        res.scope = clone_4pbSOkLr(a.scope);
    };
    return /*NRVO*/ res;
}
                                #endif

int test_wWb7QZGK(const s_ModuleOutputs& a)
{
    s_ModuleOutputs b = clone_CV4FMsr7(a);
    return a.deps.size() - b.deps.size();
}

int fu_MAIN()
{
    return test_wWb7QZGK(s_ModuleOutputs{});
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

-----

        // a private fn
        fn createShader(src: string) = src;

        // inits a public let
        pub let GEOMETRY_PASS_TEST = createShader("source code");

-----
#include <fu/str.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

static const fu_STR& createShader_LuO03oTi(const fu_STR& src)
{
    return src;
}

                                #ifndef DEF_GEOMETRY_PASS_TEST
                                #define DEF_GEOMETRY_PASS_TEST
extern const fu_STR GEOMETRY_PASS_TEST { createShader_LuO03oTi("source code"_fu) };
                                #endif

#endif

// N_SD_HasStaticInit

-----

        // a private fn
        fn createShader(src: string) = src;

        // inits a public let
        pub let GEOMETRY_PASS_TEST = createShader("source code");

        pub fn main() _0::GEOMETRY_PASS_TEST.len - 11;

-----
#include <fu/str.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

fu_VEC<fu_STR>& add_E9ldZyix(s_List& _, const fu_STR& val)
{
    return (_.vals += fu_STR(val));
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int x5Bx5D_vUjJdcc3(const s_List& _, fu::view<char> val)
{
    int count = 0;
    for (int i = 0; i < _.vals.size(); i++)
    {
        if (_.vals[i] == val)
            count++;

    };
    return count;
}

#endif

// N_NonTrivAutoCopy

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
fu_VEC<fu_STR>& add_E9ldZyix(s_List&, const fu_STR&);
int x5Bx5D_vUjJdcc3(const s_List&, fu::view<char>);

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_List list {};
    for (int i = 0; i < 3; i++)
        add_E9ldZyix(list, ((i & 1) ? "a"_fu : "b"_fu));

    return x5Bx5D_vUjJdcc3(list, "b"_fu) - 2;
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

#ifndef fu_NO_fdefs

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

void operator++(s_Int& a, /*postfix*/int)
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
void operator++(s_Int&, /*postfix*/int);

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_Int x = s_Int { 1 };
    x += -(x + x);
    x++;
    return x.i;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn private(x)           x * 3;              // Scope_import is broken,
        pub fn public(y)        private(y) * 2;     //  doesnt always import privates.

        fn main()               1.public - 6;

-----

#ifndef fu_NO_fdefs

inline static int pRivate_DXBD5vmC(const int x)
{
    return x * 3;
}

                                #ifndef DEF_pUblic_9qj2j6Eo7T1
                                #define DEF_pUblic_9qj2j6Eo7T1
inline int pUblic_9qj2j6Eo(const int y)
{
    return pRivate_DXBD5vmC(y) * 2;
}
                                #endif

int fu_MAIN()
{
    return pUblic_9qj2j6Eo(1) - 6;
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

#ifndef fu_NO_fdefs

inline static int pRivate_DXBD5vmC(const int x)
{
    return x * 3;
}

                                #ifndef DEF_pUblic_9qj2j6Eo7T1
                                #define DEF_pUblic_9qj2j6Eo7T1
inline int pUblic_9qj2j6Eo(const int y)
{
    return pRivate_DXBD5vmC(y) * 2;
}
                                #endif

int fu_MAIN()
{
    return pUblic_9qj2j6Eo(1) - 6;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn private(x: i32)      x * 3;              // cg fail:
        pub fn public(y)        private(y) * 2;     //  fn private hidden in first translation unit.

-----

#ifndef fu_NO_fdefs

int pRivate(const int x)
{
    return x * 3;
}

#endif

// N_SD_ExternPrivates

-----

        fn private(x: i32)      x * 3;              // cg fail:
        pub fn public(y)        private(y) * 2;     //  fn private hidden in first translation unit.

        fn main()               1._0::public - 6;

-----
int pRivate(int);

#ifndef fu_NO_fdefs

                                #ifndef DEF_pUblic_9qj2j6Eo7T1
                                #define DEF_pUblic_9qj2j6Eo7T1
inline int pUblic_9qj2j6Eo(const int y)
{
    return pRivate(y) * 2;
}
                                #endif

int fu_MAIN()
{
    return pUblic_9qj2j6Eo(1) - 6;
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
#include <fu/str.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_OPTOKENS
                                #define DEF_OPTOKENS
extern const fu_STR OPTOKENS fu_INIT_PRIORITY(1001) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;
                                #endif

#endif

// N_SD_HasStaticInit, N_SD_ExternPrivates

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/init_priority.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_OPTOKENS
                                #define DEF_OPTOKENS
extern const fu_STR OPTOKENS;
                                #endif

                                #ifndef DEF_has_ODCLAe2r9ig
                                #define DEF_has_ODCLAe2r9ig
inline bool has_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_lex_FFh8NBMSrBb
                                #define DEF_lex_FFh8NBMSrBb
inline int lex_FFh8NBMS(fu::view<char> src)
{
    const int end = src.size();
    int idx = 0;
    while (idx < end)
    {
        const char c = src[idx++];
        if (has_ODCLAe2r(OPTOKENS, c))
            return idx - 1;

    };
    return src.size();
}
                                #endif

int fu_MAIN()
{
    return lex_FFh8NBMS("3 - 3"_fu) - 2;
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

	Bad call to [34;1mnot_pubbed[0m (i32: copy): [34;1mnot_pubbed[0m is not defined here.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_1.fu:2:9

-----

        pub fn pubbed(a: i32) a * 2;

        pub                          
        fn not_pubbed(b: i32) b * 3;

-----

#ifndef fu_NO_fdefs

int pubbed_KFeeUbvh(const int a)
{
    return a * 2;
}

int not_pubbed_WrvrtNhQ(const int b)
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
int pubbed_KFeeUbvh(int);
int not_pubbed_WrvrtNhQ(int);

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return not_pubbed_WrvrtNhQ(pubbed_KFeeUbvh(1)) - 6;
}

#endif

int main() { return fu_MAIN(); }

-----

        let SELF_TEST           = true;
        let NODEIDX_signbits    = SELF_TEST && 4;
        let NODEIDX_signmask    = (1 << NODEIDX_signbits) - 1;

-----

#ifndef fu_NO_fdefs

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

// N_SD_HasStaticInit

-----

        let SELF_TEST           = true;
        let NODEIDX_signbits    = SELF_TEST && 4;
        let NODEIDX_signmask    = (1 << NODEIDX_signbits) - 1;

        fn main() _0::NODEIDX_signmask - 15;

-----

#ifndef fu_NO_fdefs

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

        struct Helpers { index: i32; }
        fn +(a: Helpers, b: Helpers) a.index - b.index;

        import _0;
        fn main() {
 //  feels like this override should be explicit
            infix fn +(a: Helpers, b: Helpers) a.index + b.index;
            return Helpers(+1) + Helpers(-1);
        }

-----
_1.fu @6:32:

[2m      |  //  feels like this override should be explicit[0m
[2m      |             infix fn +(a: Helpers, b: Helpers) a.index + b.index;[0m
    6 |             return Helpers(+1) [31;1m+[0m Helpers(-1);
[2m      |         }[0m
[2m      | [0m

	Ambiguous callsite, matches multiple items in scope:

	[35;1mfn[0m [34;1m+[0m(
	    [34;1ma[0m: Helpers: copy,
	    [34;1mb[0m: Helpers: copy) from `main` and 

	[35;1mfn[0m [34;1m+[0m(
	    [34;1ma[0m: Helpers: copy,
	    [34;1mb[0m: Helpers: copy) from global scope, as seen from `main`.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_1.fu:3:9

-----

        struct Helpers { index: i32; }
        fn +(a: Helpers, b: Helpers) a.index - b.index;

-----
struct s_Helpers;

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

#ifndef fu_NO_fdefs

int operator+(const s_Helpers& a, const s_Helpers& b)
{
    return a.index - b.index;
}

#endif

-----

        struct Helpers { index: i32; }
        fn +(a: Helpers, b: Helpers) a.index - b.index;

        import _0;
        fn main() {
 // autoshadowing surprised me here
            shadow       //  feels like this override should be explicit
            infix fn +(a: Helpers, b: Helpers) a.index + b.index;
            return Helpers(+1) + Helpers(-1);
        }

-----
struct s_Helpers;

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

#ifndef fu_NO_fdefs

static int operator+(const s_Helpers& a, const s_Helpers& b)
{
    return a.index + b.index;
}

int fu_MAIN()
{
    return s_Helpers { +1 } + s_Helpers { -1 };
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Options { v: i32; };

-----

-----

        struct Options { v: i32; };

        fn compile(o: _0::Options) = o.v;

-----
struct s_Options;

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
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

#ifndef fu_NO_fdefs

int compile_svCZzyiC(const s_Options& o)
{
    return o.v;
}

#endif

-----

        struct Options { v: i32; };

        fn compile(o: _0::Options) = o.v;

        // Won't find Options if solving in reverse modid order.
        fn compile_snippets(o: _0::Options) = o.v;

-----
struct s_Options;

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
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

#ifndef fu_NO_fdefs

int compile_snippets_YLshkivf(const s_Options& o)
{
    return o.v;
}

#endif

-----

        struct Options { v: i32; };

        fn compile(o: _0::Options) = o.v;

        // Won't find Options if solving in reverse modid order.
        fn compile_snippets(o: _0::Options) = o.v;

        import _1;
        import _2;

        fn main() {
            let o = _0::Options(0);
            return compile(o) + compile_snippets(o);
        }

-----
struct s_Options;
int compile_svCZzyiC(const s_Options&);
int compile_snippets_YLshkivf(const s_Options&);

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_Options o = s_Options { 0 };
    return compile_svCZzyiC(o) + compile_snippets_YLshkivf(o);
}

#endif

int main() { return fu_MAIN(); }

-----

        let x: i32 = 2;

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_x
                                #define DEF_x
inline constexpr int x = 2;
                                #endif

#endif

// N_SD_HasStaticInit

-----

        let x: i32 = 2;

        pub import _0;
        let y: i32 = 3;

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_y
                                #define DEF_y
inline constexpr int y = 3;
                                #endif

#endif

// N_SD_HasStaticInit

-----

        let x: i32 = 2;

        pub import _0;
        let y: i32 = 3;

        import _1;
        fn main() x + y - 5;

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_x
                                #define DEF_x
inline constexpr int x = 2;
                                #endif

                                #ifndef DEF_y
                                #define DEF_y
inline constexpr int y = 3;
                                #endif

int fu_MAIN()
{
    return (x + y) - 5;
}

#endif

int main() { return fu_MAIN(); }

-----

        let a = 1;
        shadow let a = a + 1;
        return a - 2;

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

int index_wGV45QYw(const s_Target& t)
{
    return int((t.packed & 0x7fffffffu));
}

int local_eq_UrLAq7jh(const s_Target& t, const int index, const int modid)
{
    int _0 {};
    return (_0 = (modid - t.modid)) ? _0 : (index - index_wGV45QYw(t));
}

int fu_MAIN()
{
    const int modid = 1;
    return local_eq_UrLAq7jh(s_Target { 1, 0x80000002u }, 7, modid) - 5;
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

#ifndef fu_NO_fdefs

static int test_ayK6oZ5d(const s_HasInt& s)
{
    const int i = s.i;
    return i;
}

int fu_MAIN()
{
    return test_ayK6oZ5d(s_HasInt { -1 }) + 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test(x: i32): &i32 = x;
        fn main() test(3) - 3;

-----

#ifndef fu_NO_fdefs

static int test_DXBD5vmC(const int x)
{
    return x;
}

int fu_MAIN()
{
    return test_DXBD5vmC(3) - 3;
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

#ifndef fu_NO_fdefs

static int inner_zGbXtmh3(const int x)
{
    return x;
}

static int test_DXBD5vmC(const int x)
{
    return inner_zGbXtmh3(x);
}

int fu_MAIN()
{
    return test_DXBD5vmC(3) - 3;
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

#ifndef fu_NO_fdefs

static int inner_7W26EjWr(const s_I& x)
{
    return x.v;
}

static int test_CkxgtgYN(const s_I& x)
{
    return inner_7W26EjWr(x);
}

int fu_MAIN()
{
    return test_CkxgtgYN(s_I { 3 }) - 3;
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

#ifndef fu_NO_fdefs

static int inner_n0AMi08f(const s_I& x)
{
    return x.v[0];
}

static int test_o6s44vEI(const s_I& x)
{
    return inner_n0AMi08f(x);
}

int fu_MAIN()
{
    return test_o6s44vEI(s_I { fu_VEC<int> { fu::slate<1, int> { 3 } } }) - 3;
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

#ifndef fu_NO_fdefs

static int inner_n0AMi08f(const s_I& x)
{
    fu::view<int> v = x.v;
    return v[0];
}

static int test_o6s44vEI(const s_I& x)
{
    return inner_n0AMi08f(x);
}

int fu_MAIN()
{
    return test_o6s44vEI(s_I { fu_VEC<int> { fu::slate<1, int> { 3 } } }) - 3;
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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

[[noreturn]] static fu::never noReturn_H9fhQUVP()
{
    fu::fail("ex"_fu);
}

static int doesReturn_KFeeUbvh(const int a)
{
    if (a > 0)
        noReturn_H9fhQUVP();
    else
        return a;

}

int fu_MAIN()
{
    return doesReturn_KFeeUbvh(-3) + 3;
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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Module& findModule_NzIbLAhW(const int fname, const s_Context& ctx)
{
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 0; i < modules.size(); i++)
    {
        const s_Module& module = modules[i];
        if (module.fname == fname)
            return module;

    };
    fu::fail(x7E_sTZRmMq1("Cannot locate: "_fu, fu::i64dec(fname)));
}

static const s_Module& test_f1S7z2f0(const s_Context& ctx)
{
    return findModule_NzIbLAhW(0, ctx);
}

int fu_MAIN()
{
    s_Context ctx = s_Context { fu_VEC<s_Module> { fu::slate<1, s_Module> { s_Module{} } } };
    return test_f1S7z2f0(ctx).fname;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

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
#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

[[noreturn]] static fu::never noReturn_H9fhQUVP()
{
    fu::fail("ex"_fu);
}

static void returnVoid_KFeeUbvh(const int a)
{
    if (a > 0)
        noReturn_H9fhQUVP();

}

int fu_MAIN()
{
    returnVoid_KFeeUbvh(0);
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

#ifndef fu_NO_fdefs

static int parseQualifierChain_Wzw95kEi(int i)
{
    for (; ; )
    {
        if (!(i & 15))
            return i;
        else
            i--;

    };
}

int fu_MAIN()
{
    return parseQualifierChain_Wzw95kEi(15);
}

#endif

int main() { return fu_MAIN(); }

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
#include <fu/str.h>
#include <fu/never.h>

static void compile_lkWgjNea(int, int&);

#ifndef fu_NO_fdefs

static void compile_lkWgjNea(const int x, int& sum)
{
    if (x)
    {
        if (x & 1)
            compile_lkWgjNea((x + 1), sum);

        sum += x;
    }
    else
        fu::fail("x=0"_fu);

}

int fu_MAIN()
{
    int sum = 0;
    compile_lkWgjNea(2, sum);
    return sum - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

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
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

static void compile_HHshkbnp(const fu_STR&, fu::view<char>, int&);

#ifndef fu_NO_fdefs

static int getModule_5OyIi0Fo(fu::view<char> fname)
{
    return fname.size();
}

                                #ifndef DEF_split_LWLw91kMNkj
                                #define DEF_split_LWLw91kMNkj
inline void split_LWLw91kM(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_LWLw91kM(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static void compile_HHshkbnp(const fu_STR& fname, fu::view<char> via, int& sum)
{
    int _0 {};
    const int module = ((_0 = getModule_5OyIi0Fo(fname)) ? _0 : fu::fail(((("import circle: '"_fu + via) + fname) + "'."_fu)));
    if (module & 1)
    {
        fu_VEC<fu_STR> fuzimports = split_3Ik58ru2(fname, "a"_fu);
        for (int i = 0; i < fuzimports.size(); i++)
            compile_HHshkbnp(fuzimports[i], ((fname + " <- "_fu) + via), sum);

    };
    sum += module;
}

int fu_MAIN()
{
    int sum = 0;
    compile_HHshkbnp("ab"_fu, fu::view<char>{}, sum);
    return sum - 2;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_NonTrivAutoCopy, N_MoveMustSeq

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

static int cycleA_inner_idnBU5cH(int, const fu_VEC<int>&, const fu_VEC<fu::u8>&);
static int cycleA_outer_idnBU5cH(int, const fu_VEC<int>&, const fu_VEC<fu::u8>&);
static int cycleB_inner_idnBU5cH(int, const fu_VEC<int>&, const fu_VEC<fu::u8>&);
static int cycleB_outer_idnBU5cH(int, const fu_VEC<int>&, const fu_VEC<fu::u8>&);
static int either_idnBU5cH(int, const fu_VEC<int>&, const fu_VEC<fu::u8>&);

#ifndef fu_NO_fdefs

static const fu_VEC<int>& A_lnzItjmR(const fu_VEC<int>& _A)
{
    return _A;
}

static const fu_VEC<fu::u8>& B_RLrwYKQR(const fu_VEC<fu::u8>& _B)
{
    return _B;
}

static int AB_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    return A_lnzItjmR(_A)[x] - int(unsigned(B_RLrwYKQR(_B)[x]));
}

static int BA_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    return int(unsigned(B_RLrwYKQR(_B)[x])) - A_lnzItjmR(_A)[x];
}

static int cycleA_inner_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    if (x & 1)
        return either_idnBU5cH((x + 1), _A, _B) + AB_idnBU5cH(x, _A, _B);
    else
        return BA_idnBU5cH(x, _A, _B);

}

static int cycleA_outer_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    if (x & 1)
        return cycleA_inner_idnBU5cH((x + 1), _A, _B) + AB_idnBU5cH(x, _A, _B);
    else
        return BA_idnBU5cH(x, _A, _B);

}

static int cycleB_inner_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    if (x & 2)
        return either_idnBU5cH((x + 1), _A, _B) + BA_idnBU5cH(x, _A, _B);
    else
        return AB_idnBU5cH(x, _A, _B);

}

static int cycleB_outer_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    if (x & 2)
        return cycleB_inner_idnBU5cH((x + 1), _A, _B) + BA_idnBU5cH(x, _A, _B);
    else
        return AB_idnBU5cH(x, _A, _B);

}

static int either_idnBU5cH(const int x, const fu_VEC<int>& _A, const fu_VEC<fu::u8>& _B)
{
    if (x & 4)
        return cycleA_outer_idnBU5cH(x, _A, _B);
    else
        return cycleB_outer_idnBU5cH(x, _A, _B);

}

int fu_MAIN()
{
    fu_VEC<int> _A = fu_VEC<int> { fu::slate<3, int> { 0, 1, 2 } };
    fu_VEC<fu::u8> _B = fu_VEC<fu::u8> { fu::slate<3, fu::u8> { fu::u8(unsigned(0)), fu::u8(unsigned(1)), fu::u8(unsigned(2)) } };
    return either_idnBU5cH(0, _A, _B);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_DeadCode, N_DeadCall

-----

        fn if0_ret101(x: i32) {
            if      (x > 2) return x * 2;
            else if (x > 1) return x + 1; // <- left branch seeded right with never
            return x + 101;
        }

        fn main() 0.if0_ret101 - 101;

-----

#ifndef fu_NO_fdefs

static int if0_ret101_DXBD5vmC(const int x)
{
    if (x > 2)
        return x * 2;
    else if (x > 1)
        return x + 1;

    return x + 101;
}

int fu_MAIN()
{
    return if0_ret101_DXBD5vmC(0) - 101;
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
_0.fu @2:26:

[2m      | [0m
    2 |         fn hello(x: i32) [31;1m{[0m
[2m      |             if (x & 1)[0m
[2m      |                 return x * 2;[0m

	Missing final return: No common supertype: i32: copy | void

        Solving [35;1mfn[0m [34;1mhello[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn hello(x: i32) {
            if (x & 1)
                return x * 2;


            return x;     
        }

        fn main() 0.hello;

-----

#ifndef fu_NO_fdefs

static int hello_DXBD5vmC(const int x)
{
    if (x & 1)
        return x * 2;
    else
        return x;

}

int fu_MAIN()
{
    return hello_DXBD5vmC(0);
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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

[[noreturn]] static fu::never throws_H9fhQUVP()
{
    fu::fail("WHAT!"_fu);
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{

    try
    {
        throws_H9fhQUVP();
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        if (e == "WHAT!"_fu)
            return 0;
        else
            return 1;

    }
    }
;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_DeadCall

-----

        fn printus(parts: string[], implicit ref out: i32)
            parts.each(|part| part.each(|c| out += c.i32 ));


        lax     
        fn silent(lax parts) {}

        fn main() {
            implicit mut out: i32;

            printus([ "Hel","lo" ]);
            if (out != 500)
                return 1;

            // Tries to test dead array literals.
            shadow let printus = fn silent;

            printus([ "Hel","lo" ]);
            return out == 500 ? 0 : 1;
        }

-----
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_each_WxT8zpwbM30
                                #define DEF_each_WxT8zpwbM30
inline void each_WxT8zpwb(fu::view<char> a, int& out)
{
    for (int i = 0; i < a.size(); i++)
    {
        const char c = a[i];
        out += int(fu::u8(c));
    };
}
                                #endif

                                #ifndef DEF_each_8NJAxXZdYb1
                                #define DEF_each_8NJAxXZdYb1
inline void each_8NJAxXZd(fu::view<fu_STR> a, int& out)
{
    for (int i = 0; i < a.size(); i++)
    {
        fu::view<char> part = a[i];
        each_WxT8zpwb(part, out);
    };
}
                                #endif

static void printus_zvzXhW22(fu::view<fu_STR> parts, int& out)
{
    each_8NJAxXZd(parts, out);
}

int fu_MAIN()
{
    int out {};
    printus_zvzXhW22((fu::slate<2, fu_STR> { "Hel"_fu, "lo"_fu }), out);
    if (out != 500)
        return 1;
    else
    {
        if (out == 500)
            return 0;
        else
            return 1;

    };
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedCall, N_UnusedStmt, N_UnusedArrlit

-----

        fn printus(parts: string[], implicit ref out: i32)
            parts.each(|part| part.each(|c| out += c.i32 ));


        inline  
        fn silent(lax parts) {}

        fn main() {
            implicit mut out: i32;

            printus([ "Hel","lo" ]);
            if (out != 500)
                return 1;

            // Tries to test dead array literals.
            shadow let printus = fn silent;

            printus([ "Hel","lo" ]);
            return out == 500 ? 0 : 1;
        }

-----
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_each_WxT8zpwbM30
                                #define DEF_each_WxT8zpwbM30
inline void each_WxT8zpwb(fu::view<char> a, int& out)
{
    for (int i = 0; i < a.size(); i++)
    {
        const char c = a[i];
        out += int(fu::u8(c));
    };
}
                                #endif

                                #ifndef DEF_each_8NJAxXZdYb1
                                #define DEF_each_8NJAxXZdYb1
inline void each_8NJAxXZd(fu::view<fu_STR> a, int& out)
{
    for (int i = 0; i < a.size(); i++)
    {
        fu::view<char> part = a[i];
        each_WxT8zpwb(part, out);
    };
}
                                #endif

static void printus_zvzXhW22(fu::view<fu_STR> parts, int& out)
{
    each_8NJAxXZd(parts, out);
}

int fu_MAIN()
{
    int out {};
    printus_zvzXhW22((fu::slate<2, fu_STR> { "Hel"_fu, "lo"_fu }), out);
    if (out != 500)
        return 1;
    else
    {

        {
            [[maybe_unused]] fu_VEC<fu_STR> parts = fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "Hel"_fu, "lo"_fu } };
        };
        if (out == 500)
            return 0;
        else
            return 1;

    };
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

#ifndef fu_NO_fdefs

static int operator++(s_X& x, /*postfix*/int)
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

#ifndef fu_NO_fdefs

inline static int test_ayK6oZ5d(const s_XY& s)
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
    const int sum = test_ayK6oZ5d(thing);
    return sum - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct ScopeSkip     { imports:     i32[]; implicits:     i32[]; }
        struct ScopeSkipMemo { imports_len: i32;   implicits_len: i32;   }

        fn snap(ss: ScopeSkip) {
            mut r: ScopeSkipMemo;
            for (fieldname i: typeof(ss))
                r.i_len = ss.i.len;

            return r;
        }

        fn check(v) {
            mut sum = 0; mut mul = 1;
            for (fieldname i: typeof(v)) {
                sum += v.i * mul; mul *= 10;
            }

            return sum;
        }

        fn main() check(snap(ScopeSkip([ 1 ], [ 2, 2 ]))) - 21;

-----
#include <fu/vec.h>

struct s_ScopeSkip;
struct s_ScopeSkipMemo;

                                #ifndef DEF_s_ScopeSkip
                                #define DEF_s_ScopeSkip
struct s_ScopeSkip
{
    fu_VEC<int> imports;
    fu_VEC<int> implicits;
    explicit operator bool() const noexcept
    {
        return false
            || imports
            || implicits
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkipMemo
                                #define DEF_s_ScopeSkipMemo
struct s_ScopeSkipMemo
{
    int imports_len;
    int implicits_len;
    explicit operator bool() const noexcept
    {
        return false
            || imports_len
            || implicits_len
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_ScopeSkipMemo snap_91cypy0B(const s_ScopeSkip& ss)
{
    s_ScopeSkipMemo r {};

    {
        r.imports_len = ss.imports.size();
        r.implicits_len = ss.implicits.size();
    };
    return r;
}

inline static int check_EkAeXdss(const s_ScopeSkipMemo& v)
{
    int sum = 0;
    int mul = 1;

    {

        {
            sum += (v.imports_len * mul);
            mul *= 10;
        };
        sum += (v.implicits_len * mul);
        mul *= 10;
    };
    return sum;
}

int fu_MAIN()
{
    return check_EkAeXdss(snap_91cypy0B(s_ScopeSkip { fu_VEC<int> { fu::slate<1, int> { 1 } }, fu_VEC<int> { fu::slate<2, int> { 2, 2 } } })) - 21;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn test() [] => i32;
        fn main() test;

-----

#ifndef fu_NO_fdefs

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

            if !(false) return 0;   
            DOESNT_EXIST();
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn main() {

            if (!false) return 0;   
            DOESNT_EXIST();
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn main() {

            if (true) return 0;     
            DOESNT_EXIST();
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return 0;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn test(a) {
            if (typeof(a) -> [any;])
                return a.len;

            return a * 10;
        }

        fn main() {
            let A = [ 0, 1 ].test;
            let B = 4.test;
            return A + B == 42 ? 0 : 1;
        }

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static int test_SqMGnz0V(fu::view<int> a)
{
    return a.size();
}

inline static int test_KFeeUbvh(const int a)
{
    return a * 10;
}

int fu_MAIN()
{
    const int A = test_SqMGnz0V((fu::slate<2, int> { 0, 1 }));
    const int B = test_KFeeUbvh(4);
    if ((A + B) == 42)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn staticIfSymmetry(

            ref a: $U[], b)  
        {
            let N = typeof(b) ->  $T   ? 1 : 2;
            let M = typeof(b) -> [$T;] ? 2 : 1;
            a ~= b;
            return N == M ? 0 : 1;
        }

        fn main() {
            mut arr = [ 0 ];
            return staticIfSymmetry(arr, 0)
                 + staticIfSymmetry(arr, [ 0, 0 ])
                 + arr.len * 10 - 40;
        }

-----
_0.fu @6:28:

[2m      |             ref a: $U[], b)  [0m
[2m      |         {[0m
    6 |             let N = typeof([31;1mb[0m) ->  $T   ? 1 : 2;
[2m      |             let M = typeof(b) -> [$T;] ? 2 : 1;[0m
[2m      |             a ~= b;[0m

	Bad call to [34;1m$T[0m (): [34;1m$T[0m is not defined here.

        Solving [35;1mfn[0m [34;1mstaticIfSymmetry[0m /Users/hdachev/fu/__tests__/_0.fu:2:9
                [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:12:9

-----

        fn staticIfSymmetry(

            ref a: $T[], b)  
        {
            let N = typeof(b) ->  $T   ? 1 : 2;
            let M = typeof(b) -> [$T;] ? 2 : 1;
            a ~= b;
            return N == M ? 0 : 1;
        }

        fn main() {
            mut arr = [ 0 ];
            return staticIfSymmetry(arr, 0)
                 + staticIfSymmetry(arr, [ 0, 0 ])
                 + arr.len * 10 - 40;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

inline static int staticIfSymmetry_VrbnWnFl(fu_VEC<int>& a, const int b)
{
    const int N = 1;
    const int M = 1;
    a += int(b);
    if (N == M)
        return 0;
    else
        return 1;

}

inline static int staticIfSymmetry_9h0sFrnV(fu_VEC<int>& a, fu::view<int> b)
{
    const int N = 2;
    const int M = 2;
    a += b;
    if (N == M)
        return 0;
    else
        return 1;

}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<1, int> { 0 } };
    int _0 {};
    int _1 {};
    return (_1 = (_0 = staticIfSymmetry_VrbnWnFl(arr, 0), (int(_0) + staticIfSymmetry_9h0sFrnV(arr, (fu::slate<2, int> { 0, 0 })))), (int(_1) + (arr.size() * 10))) - 40;
}

#endif

int main() { return fu_MAIN(); }

// N_BckMustSeq

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


#ifndef fu_NO_fdefs

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


#ifndef fu_NO_fdefs

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
#include <fu/str.h>
#include <fu/defer.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int test_defer_if_errok_rn82y0St(const bool throw_err)
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
        else
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
    return (((test_defer_if_errok_rn82y0St(true) - (7 * 3)) - (1 * 5)) - (0 * 7)) + (100 * (((test_defer_if_errok_rn82y0St(false) - (10 * 3)) - (0 * 5)) - (9 * 7)));
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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>


#ifndef fu_NO_fdefs

static void sum_amulb_RDqMVjd7(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static void incrarr_by1_0OkT6FQ3(fu::view_mut<int> a)
{
    for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;

}

static int test_BMjChp1K(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_RDqMVjd7(a, b, sum));
    fu_DEFER(incrarr_by1_0OkT6FQ3(a));
    return a[0] - 1;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_BMjChp1K(a, sum));
    return (sum - 2) + ret;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>


#ifndef fu_NO_fdefs

static void sum_amulb_RDqMVjd7(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static void incrarr_by1_0OkT6FQ3(fu::view_mut<int> a)
{
    for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;

}

static int test_BMjChp1K(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_RDqMVjd7(a, b, sum));
    incrarr_by1_0OkT6FQ3(a);
    return a[0] - 2;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_BMjChp1K(a, sum));
    return (sum - 2) + ret;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>


#ifndef fu_NO_fdefs

static void sum_amulb_RDqMVjd7(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static int test_BMjChp1K(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_RDqMVjd7(a, b, sum));
    fu_DEFER(for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;);
    return a[0] - 1;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_BMjChp1K(a, sum));
    return (sum - 2) + ret;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>


#ifndef fu_NO_fdefs

static void sum_amulb_RDqMVjd7(fu::view<int> a, fu::view<int> b, int& sum)
{
    for (int i = 0; i < a.size(); i++)
        sum += (a[i] * b[i]);

}

static int test_BMjChp1K(fu_VEC<int>& a, int& sum)
{
    fu_VEC<int> b { a };
    fu_DEFER(sum_amulb_RDqMVjd7(a, b, sum));
    for (int i = 0; i < a.size(); i++)
        a.mutref(i) += 1;

    return a[0] - 2;
}

int fu_MAIN()
{
    fu_VEC<int> a = fu_VEC<int> { fu::slate<1, int> { 1 } };
    int sum = 0;
    const int ret = (100 * test_BMjChp1K(a, sum));
    return (sum - 2) + ret;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn main() {
            mut res = 1;            // single statement blocks unwrap
            { defer res--; }        //  fix by unwraping tailing defers
            return res;
        }

-----

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int res = 1;

    {
        res--;
    };
    return res;
}

#endif

int main() { return fu_MAIN(); }

-----

        inline fn unwraps_defer(ref x: i32) unwrap {
            defer x++;
        }

        fn main() {
            mut y = 0;
            { unwraps_defer(y); }
            mut x = 0;
            unwraps_defer(x);
            return y == 1 && x == 0 ? 0 : 1;
        }

-----
#include <fu/defer.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int y = 0;

    {
        y++;
    };
    int x = 0;
    fu_DEFER(x++);
    if ((y == 1) && (x == 0))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        type Test = i8;
        fn main() 256.Test.i32;

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

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

	Bad call to [34;1m+[0m (i32: copy, i8: copy): 

	[35;1mtemplate[0m [34;1m+[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i8: copy

	[35;1mtemplate[0m [34;1m+[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mtest[0m /Users/hdachev/fu/__tests__/_0.fu:2:9
                [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:5:9

-----

        fn test(a: $A, b: $B) b +   
            $B(a);                  

        fn main() i8(-1).test(+1);

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

inline static int test_K9HA9vdw(const fu::i8 a, const int b)
{
    return b + int(a);
}

int fu_MAIN()
{
    return test_K9HA9vdw(fu::i8(-1), +1);
}

#endif

int main() { return fu_MAIN(); }

-----

        let x = { mut z = 0; z++; z };
        return x - 1;

-----

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

inline static int mul2_KFeeUbvh(const int a)
{
    return a * 2;
}

inline static int test_AHtWOsUX(const int b)
{
    return mul2_KFeeUbvh((1 + mul2_KFeeUbvh(b)));
}

int fu_MAIN()
{
    return 14 - test_AHtWOsUX(3);
}

#endif

int main() { return fu_MAIN(); }

-----

        let overloaded = 1;
        fn overloaded(a) a*2;
        fn test(b, fn) fn(fn + fn(b));
        fn main() 14 - test(3, fn overloaded);

-----

#ifndef fu_NO_fdefs

                                #ifndef DEF_overloaded
                                #define DEF_overloaded
inline constexpr int overloaded = 1;
                                #endif

inline static int overloaded_KFeeUbvh(const int a)
{
    return a * 2;
}

inline static int test_WL3MveiV(const int b)
{
    return overloaded_KFeeUbvh((overloaded + overloaded_KFeeUbvh(b)));
}

int fu_MAIN()
{
    return 14 - test_WL3MveiV(3);
}

#endif

int main() { return fu_MAIN(); }

// N_SD_HasStaticInit

-----

        fn overloaded(a) a*2;
        fn test(b, fn) fn(fn + fn(b));
        fn main() {
            let overloaded = 1;
            return 14 - test(3, fn overloaded);
        }

-----

#ifndef fu_NO_fdefs

inline static int overloaded_KFeeUbvh(const int a)
{
    return a * 2;
}

inline static int test_fwgdfM1C(const int b, const int overloaded)
{
    return overloaded_KFeeUbvh((overloaded + overloaded_KFeeUbvh(b)));
}

int fu_MAIN()
{
    const int overloaded = 1;
    return 14 - test_fwgdfM1C(3, overloaded);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn MAP(items: $T[], fn) {
            mut result: typeof( fn(items[0]) )[];
            for (mut i = 0; i < items.len; i++)
                result.push(fn(items[i]));

            return result;
        }

        fn sqr(x) x*x;

        fn main() [2].MAP(fn sqr)[0] - 4;

        // EXPECT (fu::slate<1, int> { 2 })
        //  During the propagateType rework
        //   the 'mut result: fn(items[0])[]' type annot
        //    was found listed as a callsite for items,
        //     but wasn't reachable for relax.

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static int sqr_DXBD5vmC(const int x)
{
    return x * x;
}

inline static fu_VEC<int> MAP_jXID6ZuK(fu::view<int> items)
{
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < items.size(); i++)
        result.push(sqr_DXBD5vmC(items[i]));

    return /*NRVO*/ result;
}

int fu_MAIN()
{
    return MAP_jXID6ZuK((fu::slate<1, int> { 2 }))[0] - 4;
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


#ifndef fu_NO_fdefs

inline static int reduce_qYecmPsP(fu::view<int> items, const int init)
{
    int result = init;
    for (int i = 0; i < items.size(); i++)
    {
        int BL_3_v {};
        result = (__extension__ (
        {
            const int b = items[i];
            BL_3_v = ((result + b));
        (void)0;}), int(BL_3_v));
    };
    return result;
}

int fu_MAIN()
{
    return reduce_qYecmPsP((fu::slate<2, int> { 1, 2 }), 0) - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn Each(items: $T[], fn) {
            for (mut i = 0; i < items.len; i++) // <- one i
                fn(items[i]);
        }

        fn main() {
            mut i = 0;                  // <- another i, i got them to shadow each other
            [1, 2].Each: |x| i += x;    //      in the everything-a-free-function
            return i - 3;               //      impl of closures
        }

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void Each_GLFaQLQp(fu::view<int> items, int& i)
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
    Each_GLFaQLQp((fu::slate<2, int> { 1, 2 }), i);
    return i - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        mut sum = 2;

        fn FnDecl_update(parent_idx: i32) {
            fn Each(fn) fn();
            Each(|| makeDirty(:parent_idx));
        }

        fn makeDirty(parent_idx: i32): void {
            sum += parent_idx;
        }

        FnDecl_update(1);

        return sum - 3;

-----

#ifndef fu_NO_fdefs

static void makeDirty_nEQLUA8z(const int parent_idx, int& sum)
{
    sum += parent_idx;
}

inline static void Each_ZhcVI7Y4(const int parent_idx, int& sum)
{
    makeDirty_nEQLUA8z(parent_idx, sum);
}

static void FnDecl_update_GRiT46gK(const int parent_idx, int& sum)
{
    Each_ZhcVI7Y4(parent_idx, sum);
}

int fu_MAIN()
{
    int sum = 2;
    FnDecl_update_GRiT46gK(1, sum);
    return sum - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        // something complains about no final return
        fn main() {
            let addret = |a: i32, b: i32| {
                return a + b;
            };

            let hey = |x: i32| {
                if !(x & 1)
                    return x;

                // this complains about indentation
                // TODO should work without the continue

                "".len.addret(x)    
            };

            // and this complains about no match for *(void, void)
            return hey(0) * hey(1);
        }

        // misfired during the removal of maybeCopyOrMove(isReturn)
        // !N_MoveMustSeq

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int x = 0;
    if (!(x & 1))
        return x;
    else
    {
        const int a = fu::view<char>{}.size();
        return a + x;
    };
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_DeadCall

-----

        // something complains about no final return
        fn main() {
            let addret = |a: i32, b: i32| {
                return a + b;
            };

            let hey = |x: i32| {
                if !(x & 1)
                    return x;

                // this complains about indentation
                // TODO should work without the continue

                continue "".len     
            };

            // and this complains about no match for *(void, void)
            return hey(0) * hey(1);
        }

        // misfired during the removal of maybeCopyOrMove(isReturn)
        // !N_MoveMustSeq

-----
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int BL_1_v {};
    int BL_3_v {};
    return (__extension__ (
    {
        const int x = 0;
        fu::never BL_2_v {};
        BL_1_v = ((!(x & 1) ? (__extension__ (
        {
            return x;
        (void)0;}), static_cast<fu::never&&>(BL_2_v)) : fu::view<char>{}.size()));
    (void)0;}), int(BL_1_v)) * (__extension__ (
    {
        const int x = 1;
        fu::never BL_4_v {};
        BL_3_v = ((!(x & 1) ? (__extension__ (
        {
            return x;
        (void)0;}), static_cast<fu::never&&>(BL_4_v)) : fu::view<char>{}.size()));
    (void)0;}), int(BL_3_v));
}

#endif

int main() { return fu_MAIN(); }

-----

        // something complains about no final return
        fn main() {
            let hey = |x: i32| {
                if !(x & 1)
                    return x;

                "".len + x
            };

            // and this complains about no match for *(void, void)
            return hey(1) * hey(0);
        }

-----
#include <fu/view.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int BL_1_v {};
    int BL_3_v {};
    return (__extension__ (
    {
        const int x = 1;
        fu::never BL_2_v {};
        BL_1_v = ((!(x & 1) ? (__extension__ (
        {
            return x;
        (void)0;}), static_cast<fu::never&&>(BL_2_v)) : (fu::view<char>{}.size() + x)));
    (void)0;}), int(BL_1_v)) * (__extension__ (
    {
        const int x = 0;
        fu::never BL_4_v {};
        BL_3_v = ((!(x & 1) ? (__extension__ (
        {
            return x;
        (void)0;}), static_cast<fu::never&&>(BL_4_v)) : (fu::view<char>{}.size() + x)));
    (void)0;}), int(BL_3_v));
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

#ifndef fu_NO_fdefs

static s_B bananas_3ubLdwC2(const s_A& a)
{
    return s_B { (a.a * 2) };
}

int fu_MAIN()
{
    return bananas_3ubLdwC2(s_A { 1 }).b - 2;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct A { a: i32; };
        struct B { b: i32; };
        using fn bananas(a: A) B(a.a * 2);


-----
struct s_B;
struct s_A;

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

#ifndef fu_NO_fdefs

s_B bananas_3ubLdwC2(const s_A& a)
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
s_B bananas_3ubLdwC2(const s_A&);

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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return bananas_3ubLdwC2(s_A { 1 }).b - 2;
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

#ifndef fu_NO_fdefs

inline static s_B bananas_3ubLdwC2(const s_A& a)
{
    return s_B { (a.a * 2) };
}

int fu_MAIN()
{
    return bananas_3ubLdwC2(s_A { 1 }).b - 2;
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_bananas_3ubLdwC2oah
                                #define DEF_bananas_3ubLdwC2oah
inline s_B bananas_3ubLdwC2(const s_A& a)
{
    return s_B { (a.a * 2) };
}
                                #endif

int fu_MAIN()
{
    return bananas_3ubLdwC2(s_A { 1 }).b - 2;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sqr(a: i32) a * a;
        fn woot(a.sqr) a + 1;
        fn main() 2.woot - 5;

-----

#ifndef fu_NO_fdefs

static int sqr_KFeeUbvh(const int a)
{
    return a * a;
}

inline static int woot_KFeeUbvh(const int a)
{
    return a + 1;
}

int fu_MAIN()
{
    return woot_KFeeUbvh(sqr_KFeeUbvh(2)) - 5;
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
struct s_B;
struct s_A1;

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

#ifndef fu_NO_fdefs

inline static s_B bananas_3ubLdwC2(const s_A0& a)
{
    return s_B { (a.a0 * 2) };
}

static int woot_DWvg38jL(const s_B& a)
{
    return a.b;
}

static int a0_fKq3G6yD(const s_A1& a1)
{
    return a1.a1 * 100;
}

inline static s_B bananas_Q8vWaCBW(const s_A1& a)
{
    return s_B { (a0_fKq3G6yD(a) * 2) };
}

int fu_MAIN()
{
    return (woot_DWvg38jL(bananas_3ubLdwC2(s_A0 { 1 })) + woot_DWvg38jL(bananas_Q8vWaCBW(s_A1 { 1 }))) - 202;
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
struct s_B0;
struct s_C;
struct s_A1;
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

#ifndef fu_NO_fdefs

static s_B0 bananas_vPWS4kHz(const s_A0& _)
{
    return s_B0 { (_.a0 * 2) };
}

static s_C c0_6by9tm0l(const s_B0& _)
{
    return s_C { (_.b0 * 5) };
}

static int woot_GusUf6yT(const s_C& a)
{
    return a.c;
}

static s_B1 bananas_LYoc9k8f(const s_A1& _)
{
    return s_B1 { (_.a1 * 3) };
}

static s_C c1_vd19Fe61(const s_B1& _)
{
    return s_C { (_.b1 * 7) };
}

int fu_MAIN()
{
    return (woot_GusUf6yT(c0_6by9tm0l(bananas_vPWS4kHz(s_A0 { 1 }))) + woot_GusUf6yT(c1_vd19Fe61(bananas_LYoc9k8f(s_A1 { 1 })))) - 31;
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
struct s_B0;
struct s_A1;
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

#ifndef fu_NO_fdefs

static s_B0 bananas_1tRUsEKR(const s_A0& a0)
{
    return s_B0 { (a0.a0 * 2) };
}

inline static int woot_DWvg38jL(const s_B0& a)
{
    return a.b;
}

static s_B1 bananas_fKq3G6yD(const s_A1& a1)
{
    return s_B1 { (a1.a1 * 3) };
}

inline static int woot_33zJhgxR(const s_B1& a)
{
    return a.b;
}

int fu_MAIN()
{
    return (woot_DWvg38jL(bananas_1tRUsEKR(s_A0 { 1 })) + woot_33zJhgxR(bananas_fKq3G6yD(s_A1 { 1 }))) - 5;
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

#ifndef fu_NO_fdefs

static int times7_DXBD5vmC(const int x)
{
    return x * 7;
}

static int woot_V3ST2uOu(const int a, const int b)
{
    return a * b;
}

static int test0_H9fhQUVP()
{
    return woot_V3ST2uOu(3, times7_DXBD5vmC(int(2)));
}

static int times_implicit_XEOnvNp8(const int x, const int y)
{
    return x * y;
}

inline static int woot_HbMMz80l(const int a, const unsigned b)
{
    return a * int(b);
}

static int test1_H9fhQUVP()
{
    const int y = 7;
    return woot_HbMMz80l(times_implicit_XEOnvNp8(3, y), unsigned(2));
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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static s_X to_debug_str_KFeeUbvh(const int a)
{
    return s_X { x7E_sTZRmMq1("i"_fu, fu::i64dec(a)) };
}

static s_X x7E_B5NlNyE5(const s_X& a, const s_X& b)
{
    return s_X { (a.str + b.str) };
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    s_X BL_1_v {};
    s_X hey = (__extension__ (
    {
        s_X a = s_X { "Hey! "_fu };
        s_X b = to_debug_str_KFeeUbvh(5);
        BL_1_v = (x7E_B5NlNyE5(a, b));
    (void)0;}), static_cast<s_X&&>(BL_1_v));
    if (hey.str == "Hey! i5"_fu)
        return 0;
    else
        return 1;

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
struct s_vec32;
struct s_conv32;

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

#ifndef fu_NO_fdefs

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
struct s_vec32;
struct s_conv32;

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

#ifndef fu_NO_fdefs

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
struct s_vec32;
struct s_conv32;

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

#ifndef fu_NO_fdefs

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

            implicit mut overloads: Overload[];
            overloads ~= Overload("What");
            return try_GET(Target(0, 1)).kind.len - 4;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>
#include <fu/vec/concat_one.h>

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

#ifndef fu_NO_fdefs

static const s_Overload& GET_N59UyAk0(const s_Target& target, fu::view<s_Overload> overloads)
{
    if (target.index > 0)
    {
        if (target.modid < 0)
            return overloads[(-target.modid - 1)].locals[(target.index - 1)];
        else
            return overloads[(target.index - 1)];

    }
    else
        fu_ASSERT();

}

static const s_Overload& try_GET_aQQciteR(const s_Target& target, fu::view<s_Overload> overloads)
{
    return target ? GET_N59UyAk0(target, overloads) : (*(const s_Overload*)fu::NIL);
}

int fu_MAIN()
{
    fu_VEC<s_Overload> overloads {};
    overloads += s_Overload { "What"_fu, fu_VEC<s_Overload>{} };
    return try_GET_aQQciteR(s_Target { 0, 1 }, overloads).kind.size() - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_DeadCode

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

	[35;1mfn[0m [34;1mrw_target[0m(
	    [34;1mread[0m: ReadID: copy) from `main` and 

	[35;1mfield[0m [34;1mrw_target[0m(
	    [34;1mthis[0m: RWEvent
	        via [35;1mfn[0m [34;1mRWEvent[0m) from global scope, as seen from `main`.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:5:9

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

#ifndef fu_NO_fdefs

static int rw_target_6Tp6OquC(const s_ReadID& read)
{
    return read.id;
}

int fu_MAIN()
{
    return rw_target_6Tp6OquC(s_ReadID { 0 });
}

#endif

int main() { return fu_MAIN(); }

-----

        struct linearRGB    { r: i32; };
        struct sRGB         { r: i32; };


        using    
        fn lin2srgb(c: linearRGB): sRGB = [ c.r / 3 ];

        using
        fn srgb2lin(c: sRGB): linearRGB = [ c.r * 3 ];

        fn RGB(linear: bool, r: i32) {
            return linear
                 ? linearRGB(r)
                 :      sRGB(r);
        }

        fn main() {
            mut c = RGB(linear: false, 7);
            return c.r - 21;
        }

-----
_0.fu @13:20:

[2m      | [0m
[2m      |         fn RGB(linear: bool, r: i32) {[0m
   13 |             return [31;1mlinear[0m
[2m      |                  ? linearRGB(r)[0m
[2m      |                  :      sRGB(r);[0m

	if/else: Type ambiguity, conversions exist both ways: linearRGB: copy <-> sRGB: copy

        Solving [35;1mfn[0m [34;1mRGB[0m /Users/hdachev/fu/__tests__/_0.fu:12:9

-----

        struct linearRGB    { r: i32; };
        struct sRGB         { r: i32; };


        fn lin2srgb(c: linearRGB): sRGB = [ c.r / 3 ];

        using
        fn srgb2lin(c: sRGB): linearRGB = [ c.r * 3 ];

        fn RGB(linear: bool, r: i32) {
            return linear
                 ? linearRGB(r)
                 :      sRGB(r);
        }

        fn main() {
            mut c = RGB(linear: false, 7);
            return c.r - 21;
        }

-----
struct s_linearRGB;
struct s_sRGB;

                                #ifndef DEF_s_linearRGB
                                #define DEF_s_linearRGB
struct s_linearRGB
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

                                #ifndef DEF_s_sRGB
                                #define DEF_s_sRGB
struct s_sRGB
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

#ifndef fu_NO_fdefs

static s_linearRGB srgb2lin_0kRklHNi(const s_sRGB& c)
{
    return s_linearRGB { (c.r * 3) };
}

static s_linearRGB RGB_NsIdeVby(const bool linear, const int r)
{
    if (linear)
    {
        return s_linearRGB { int(r) };
    }
    else
    {
        return srgb2lin_0kRklHNi(s_sRGB { int(r) });
    };
}

int fu_MAIN()
{
    const s_linearRGB c = RGB_NsIdeVby(false, 7);
    return c.r - 21;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct linearRGB    { r: i32; };
        struct sRGB         { r: i32; };


        fn srgb2lin(c: sRGB): linearRGB = [ c.r * 7 ];

        fn main() = (sRGB(r: 3) => linearRGB).r - 21;

-----
_0.fu @8:26:

[2m      |         fn srgb2lin(c: sRGB): linearRGB = [ c.r * 7 ];[0m
[2m      | [0m
    8 |         fn main() = (sRGB[31;1m([0mr: 3) => linearRGB).r - 21;
[2m      | [0m

	Cannot convert: linearRGB: copy <- sRGB: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:8:9

-----

        struct linearRGB    { r: i32; };
        struct sRGB         { r: i32; };


        using                
        fn srgb2lin(c: sRGB): linearRGB = [ c.r * 7 ];

        fn main() = (sRGB(r: 3) => linearRGB).r - 21;

-----
struct s_sRGB;
struct s_linearRGB;

                                #ifndef DEF_s_sRGB
                                #define DEF_s_sRGB
struct s_sRGB
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

                                #ifndef DEF_s_linearRGB
                                #define DEF_s_linearRGB
struct s_linearRGB
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

#ifndef fu_NO_fdefs

static s_linearRGB srgb2lin_0kRklHNi(const s_sRGB& c)
{
    return s_linearRGB { (c.r * 7) };
}

int fu_MAIN()
{
    return srgb2lin_0kRklHNi(s_sRGB { 3 }).r - 21;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Overload     { name: string; };
        struct Target       { o_index: i32; };

        struct Helpers      { hd_index: i32; };
        struct HelpersData  { target: Target; };

        fn solve(ref overloads: Overload[], ref helpers: HelpersData[])
        {
            using fn GET(h: Helpers)
                helpers[h.hd_index];

            fn qWHAT(o: Overload)
                o.name;

            using fn GET(t: Target) {
                ref o = overloads[t.o_index];

                // The qWHAT here tried to (pointlessly) solve qWHAT below,
                //  but GET hadn't solved yet so it wasn't available.
                return o.qWHAT ? o : GET(Target(t.o_index + 1));
            }

            fn qWHAT(hd: HelpersData)
                hd.target.qWHAT;

            return Helpers(0).qWHAT;
        }

        fn main() {
            mut overloads: Overload[];
            mut helpers: HelpersData[];

            for (mut i = 0; i < 2; i++) {
                overloads ~= Overload(i && "o=" ~ i);
                helpers ~= HelpersData(Target(i));
            }

            return solve(overloads, helpers) == "o=1" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct s_Overload;
struct s_HelpersData;
struct s_Target;
struct s_Helpers;
static s_Overload& GET_qmwzkKMX(const s_Target&, fu::view_mut<s_Overload>);

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR name;
    explicit operator bool() const noexcept
    {
        return false
            || name
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int o_index;
    explicit operator bool() const noexcept
    {
        return false
            || o_index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
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

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
{
    int hd_index;
    explicit operator bool() const noexcept
    {
        return false
            || hd_index
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static s_HelpersData& GET_jw1FXVas(const s_Helpers& h, fu::view_mut<s_HelpersData> helpers)
{
    return helpers.mutref(h.hd_index);
}

static const fu_STR& qWHAT_6FFpaQWb(const s_Overload& o)
{
    return o.name;
}

static s_Overload& GET_qmwzkKMX(const s_Target& t, fu::view_mut<s_Overload> overloads)
{
    s_Overload& o = overloads.mutref(t.o_index);
    if (qWHAT_6FFpaQWb(o))
        return o;
    else
    {
        return GET_qmwzkKMX(s_Target { (t.o_index + 1) }, overloads);
    };
}

static const fu_STR& qWHAT_XP22JkpY(const s_HelpersData& hd, fu::view_mut<s_Overload> overloads)
{
    return qWHAT_6FFpaQWb(GET_qmwzkKMX(hd.target, overloads));
}

static const fu_STR& solve_BhXEj3Od(fu::view_mut<s_Overload> overloads, fu::view_mut<s_HelpersData> helpers)
{
    return qWHAT_XP22JkpY(GET_jw1FXVas(s_Helpers { 0 }, helpers), overloads);
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<s_Overload> overloads {};
    fu_VEC<s_HelpersData> helpers {};
    for (int i = 0; i < 2; i++)
    {
        overloads += s_Overload { (i ? x7E_sTZRmMq1("o="_fu, fu::i64dec(i)) : fu_STR{}) };
        helpers += s_HelpersData { s_Target { int(i) } };
    };
    if (solve_BhXEj3Od(overloads, helpers) == "o=1"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve

-----

        struct Target       { index: int };
        struct Overload     { name: string; };

        fn solve(_overloads: Overload[], _targets: Target[]) {
            fn fail(mut reason: string): never {
                for (mut i = _targets.len; i --> 0; ) {
                    let t = _targets[i];
                    if (t)
                        reason ~= GET(t).qWHAT;
                }

                return throw(reason);
            }

            fn qWHAT(o: Overload)
                o.name;

            using fn GET(target: Target) {
                _overloads.len >= target.index || fail(
                    GET(Target(_overloads.len - 1)).qWHAT);

                return _overloads[target.index];
            }

            fn qWHAT(n: Target[]) {

                return n.map(|t| t.qWHAT).join();

            }

            return _targets.qWHAT;
        }

        fn main() {
            mut res = solve(
                [ Overload("Hello"), Overload(", "), Overload("! "), Overload("World!") ],
                [ Target(0), Target(1), Target(3) ]);

            return res == "Hello, World!" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/view_assign.h>

struct s_Overload;
struct s_Target;
[[noreturn]] static fu::never fail_68Z6nyH0(fu_STR&&, fu::view<s_Overload>, fu::view<s_Target>);
static const s_Overload& GET_e5piYddf(const s_Target&, fu::view<s_Overload>, fu::view<s_Target>);

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR name;
    explicit operator bool() const noexcept
    {
        return false
            || name
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

#ifndef fu_NO_fdefs

static const fu_STR& qWHAT_LbE1rwBs(const s_Overload& o)
{
    return o.name;
}

[[noreturn]] static fu::never fail_68Z6nyH0(/*MOV*/ fu_STR&& reason, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    for (int i = _targets.size(); i-- > 0; )
    {
        const s_Target& t = _targets[i];
        if (t)
            reason += qWHAT_LbE1rwBs(GET_e5piYddf(t, _overloads, _targets));

    };
    fu::fail(static_cast<fu_STR&&>(reason));
}

static const s_Overload& GET_e5piYddf(const s_Target& target, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    if ((_overloads.size() >= target.index))
        return _overloads[target.index];
    else
    {
        fail_68Z6nyH0(fu_STR(qWHAT_LbE1rwBs(GET_e5piYddf(s_Target { (_overloads.size() - 1) }, _overloads, _targets))), _overloads, _targets);
    };
}

                                #ifndef DEF_map_drh4mmNsp3j
                                #define DEF_map_drh4mmNsp3j
inline fu_VEC<fu_STR> map_drh4mmNs(fu::view<s_Target> a, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const fu_STR* BL_3_v;
        res.mutref(i) = fu_STR((__extension__ (
        {
            const s_Target& t = a[i];
            BL_3_v = &(qWHAT_LbE1rwBs(GET_e5piYddf(t, _overloads, _targets)));
        (void)0;}), *BL_3_v));
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_TGlp8hMJAya
                                #define DEF_join_TGlp8hMJAya
inline fu_STR join_TGlp8hMJ(fu::view<fu_STR> a)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu_STR qWHAT_CTRJRCoO(fu::view<s_Target> n, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    return join_TGlp8hMJ(map_drh4mmNs(n, _overloads, _targets));
}

static fu_STR solve_NOtVhr91(fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    return qWHAT_CTRJRCoO(_targets, _overloads, _targets);
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR res = solve_NOtVhr91((fu::slate<4, s_Overload> { s_Overload { "Hello"_fu }, s_Overload { ", "_fu }, s_Overload { "! "_fu }, s_Overload { "World!"_fu } }), (fu::slate<3, s_Target> { s_Target { 0 }, s_Target { 1 }, s_Target { 3 } }));
    if (res == "Hello, World!"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_FnReopen, N_DeadCall, N_NonTrivAutoCopy, N_RelaxRespec

-----

        struct Target       { index: int };
        struct Overload     { name: string; };

        fn solve(_overloads: Overload[], _targets: Target[]) {
            fn fail(mut reason: string): never {
                for (mut i = _targets.len; i --> 0; ) {
                    let t = _targets[i];
                    if (t)
                        reason ~= GET(t).qWHAT;
                }

                return throw(reason);
            }

            fn qWHAT(o: Overload)
                o.name;

            using fn GET(target: Target) {
                _overloads.len >= target.index || fail(
                    GET(Target(_overloads.len - 1)).qWHAT);

                return _overloads[target.index];
            }

            fn qWHAT(n: Target[]) {

                mut res = "";
                for (mut i = 0; i < n.len; i++)
                    res ~= n[i].qWHAT;

                return res;

            }

            return _targets.qWHAT;
        }

        fn main() {
            mut res = solve(
                [ Overload("Hello"), Overload(", "), Overload("! "), Overload("World!") ],
                [ Target(0), Target(1), Target(3) ]);

            return res == "Hello, World!" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>

struct s_Overload;
struct s_Target;
[[noreturn]] static fu::never fail_68Z6nyH0(fu_STR&&, fu::view<s_Overload>, fu::view<s_Target>);
static const s_Overload& GET_e5piYddf(const s_Target&, fu::view<s_Overload>, fu::view<s_Target>);

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR name;
    explicit operator bool() const noexcept
    {
        return false
            || name
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

#ifndef fu_NO_fdefs

static const fu_STR& qWHAT_LbE1rwBs(const s_Overload& o)
{
    return o.name;
}

[[noreturn]] static fu::never fail_68Z6nyH0(/*MOV*/ fu_STR&& reason, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    for (int i = _targets.size(); i-- > 0; )
    {
        const s_Target& t = _targets[i];
        if (t)
            reason += qWHAT_LbE1rwBs(GET_e5piYddf(t, _overloads, _targets));

    };
    fu::fail(static_cast<fu_STR&&>(reason));
}

static const s_Overload& GET_e5piYddf(const s_Target& target, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    if ((_overloads.size() >= target.index))
        return _overloads[target.index];
    else
    {
        fail_68Z6nyH0(fu_STR(qWHAT_LbE1rwBs(GET_e5piYddf(s_Target { (_overloads.size() - 1) }, _overloads, _targets))), _overloads, _targets);
    };
}

static fu_STR qWHAT_CTRJRCoO(fu::view<s_Target> n, fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < n.size(); i++)
        res += qWHAT_LbE1rwBs(GET_e5piYddf(n[i], _overloads, _targets));

    return /*NRVO*/ res;
}

static fu_STR solve_NOtVhr91(fu::view<s_Overload> _overloads, fu::view<s_Target> _targets)
{
    return qWHAT_CTRJRCoO(_targets, _overloads, _targets);
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    fu_STR res = solve_NOtVhr91((fu::slate<4, s_Overload> { s_Overload { "Hello"_fu }, s_Overload { ", "_fu }, s_Overload { "! "_fu }, s_Overload { "World!"_fu } }), (fu::slate<3, s_Target> { s_Target { 0 }, s_Target { 1 }, s_Target { 3 } }));
    if (res == "Hello, World!"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_FnReopen, N_DeadCall, N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn a_slash_b(a: f32, b: f32) {
            return a ~ "/" ~ b;
        }

        fn main() {
            return a_slash_b(1, 2) == "1.000000/2.000000" ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR a_slash_b_tIlG3RMt(const float a, const float b)
{
    return x7E_sTZRmMq1(x7E_sTZRmMq1(fu::f32dec(a), "/"_fu), fu::f32dec(b));
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    if (a_slash_b_tIlG3RMt(1.0f, 2.0f) == "1.000000/2.000000"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        fn varargs(a[]) a[0] + a[1];
        fn main() varargs(1, 2) - 3;

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static int varargs_SqMGnz0V(fu::view<int> a)
{
    return a[0] + a[1];
}

int fu_MAIN()
{
    return varargs_SqMGnz0V((fu::slate<2, int> { 1, 2 })) - 3;
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


#ifndef fu_NO_fdefs

static int to_debug_str_KFeeUbvh(const int a)
{
    return a * 2;
}

static int to_debug_str_UiS1uVyX(const unsigned b)
{
    return int(b) * 3;
}

inline static int inspect_363J3D1d(fu::view<int> items)
{
    int a = 0;
    for (int i = 0; i < items.size(); i++)
        a += items[i];

    return a;
}

int fu_MAIN()
{
    return inspect_363J3D1d((fu::slate<2, int> { to_debug_str_KFeeUbvh(int(5)), to_debug_str_UiS1uVyX(unsigned(7)) })) - 31;
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


#ifndef fu_NO_fdefs

static int to_debug_str_KFeeUbvh(const int a)
{
    return a * 2;
}

static int to_debug_str_UiS1uVyX(const unsigned b)
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
        fu_VEC<int> items = fu_VEC<int> { fu::slate<2, int> { to_debug_str_KFeeUbvh(int(5)), to_debug_str_UiS1uVyX(unsigned(7)) } };
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


#ifndef fu_NO_fdefs

static int va_HgWMfxyg(fu::view<int> args)
{
    int sum = 0;
    for (int i = 0; i < args.size(); i++)
        sum += args[i];

    return sum;
}

int fu_MAIN()
{
    return va_HgWMfxyg((fu::slate<2, int> { 1, 2 })) - 3;
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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR Stringy_Wzw95kEi(const int i)
{
    return x7E_sTZRmMq1("i:"_fu, fu::i64dec(i));
}

inline static int Println_WL1u1kTc(fu::view<fu_STR> parts)
{
    int total = 0;
    for (int i = 0; i < parts.size(); i++)
        total += parts[i].size();

    return total;
}

int fu_MAIN()
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;

    fu_STR* BL_1_v;
    fu_STR* BL_2_v;
    return Println_WL1u1kTc((fu::slate<2, fu_STR> { static_cast<fu_STR&&>((__extension__ (
    {
        x = "str"_fu;
        BL_1_v = &(x);
    (void)0;}), *BL_1_v)), static_cast<fu_STR&&>((__extension__ (
    {
        x_1 = Stringy_Wzw95kEi(10);
        BL_2_v = &(x_1);
    (void)0;}), *BL_2_v)) })) - 7;
}

#endif

int main() { return fu_MAIN(); }

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
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR Stringy_Wzw95kEi(const int i)
{
    return x7E_sTZRmMq1("i:"_fu, fu::i64dec(i));
}

static int Println_WL1u1kTc(fu::view<fu_STR> parts)
{
    int total = 0;
    for (int i = 0; i < parts.size(); i++)
        total += parts[i].size();

    return total;
}

int fu_MAIN()
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;

    fu_STR* BL_1_v;
    fu_STR* BL_2_v;
    return Println_WL1u1kTc((fu::slate<2, fu_STR> { static_cast<fu_STR&&>((__extension__ (
    {
        x = "str"_fu;
        BL_1_v = &(x);
    (void)0;}), *BL_1_v)), static_cast<fu_STR&&>((__extension__ (
    {
        x_1 = Stringy_Wzw95kEi(10);
        BL_2_v = &(x_1);
    (void)0;}), *BL_2_v)) })) - 7;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct My { i: i32 };

        fn test(oh: My)
        {
            // autocall(): never
            let str = |my: My|: never {             // N_DeadConv
                return my.i; // exits test() here
            };

 // both mess up, this one emits a pointless overload,
            let hello = oh ~ "!";            //  this one messes up earlier in the solver

            return hello.len;
        }

        fn main() {
            return test(My(3)) - 3;
        }

-----
struct s_My;

                                #ifndef DEF_s_My
                                #define DEF_s_My
struct s_My
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

#ifndef fu_NO_fdefs

static int test_Uv6SFfpg(const s_My& oh)
{
    return oh.i;
}

int fu_MAIN()
{
    return test_Uv6SFfpg(s_My { 3 }) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_DeadLet, N_DeadConv

-----

        struct My { i: i32 };

        fn test(oh: My)
        {
            // autocall(): never
            let str = |my: My|: never {             // N_DeadConv
                return my.i; // exits test() here
            };


            let hello = "Hello, " ~ oh;      //  this one messes up earlier in the solver

            return hello.len;
        }

        fn main() {
            return test(My(3)) - 3;
        }

-----
struct s_My;

                                #ifndef DEF_s_My
                                #define DEF_s_My
struct s_My
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

#ifndef fu_NO_fdefs

static int test_Uv6SFfpg(const s_My& oh)
{
    return oh.i;
}

int fu_MAIN()
{
    return test_Uv6SFfpg(s_My { 3 }) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode, N_DeadLet, N_DeadConv, N_UnusedStmt

-----

        fn printlike(topic: string, stuff.print[]: [string], implicit ref out: string) {
            out ~= topic ~ ": " ~ stuff.join() ~ '\n';
        }

        fn main() {
            let topic = "A";
            implicit mut out: string;
            printlike(:topic, "Hello, ", "World", "!");
            return out == "A: Hello, World!\n" ? 0 : 1
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_join_TGlp8hMJAya
                                #define DEF_join_TGlp8hMJAya
inline fu_STR join_TGlp8hMJ(fu::view<fu_STR> a)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static void printlike_GDmlAFUt(fu::view<char> topic, fu::view<fu_STR> stuff, fu_STR& out)
{
    out += (((topic + ": "_fu) + join_TGlp8hMJ(stuff)) + '\n');
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;

    fu_STR topic = "A"_fu;
    fu_STR out {};
    fu_STR* BL_1_v;
    fu_STR* BL_2_v;
    printlike_GDmlAFUt(topic, (fu::slate<3, fu_STR> { static_cast<fu_STR&&>((__extension__ (
    {
        x = "Hello, "_fu;
        BL_1_v = &(x);
    (void)0;}), *BL_1_v)), static_cast<fu_STR&&>((__extension__ (
    {
        x_1 = "World"_fu;
        BL_2_v = &(x_1);
    (void)0;}), *BL_2_v)), "!"_fu }), out);
    if (out == "A: Hello, World!\n"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn main() {
            mut out: string;
            fn lazywarn(prefix: string, inline stuff.print[]: [string]) {
                out ||= prefix ~ stuff.join();
            }

            mut once = 0;
            fn once(str: string) {
                once++;
                return str;
            }

            lazywarn(once("Hello"), ", ", "World", "!", prefix: "X: ");
            lazywarn(prefix: "Y: ", once("Hello"), "!");

            return out == "X: Hello, World!" && once == 1 ? 0 : 1
        }

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

static const fu_STR& once_hCzTYA7G(const fu_STR& str, int& once)
{
    once++;
    return str;
}

                                #ifndef DEF_join_TGlp8hMJAya
                                #define DEF_join_TGlp8hMJAya
inline fu_STR join_TGlp8hMJ(fu::view<fu_STR> a)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;

    fu_STR out {};
    int once = 0;

    {
        fu_STR prefix = "X: "_fu;
        if (!(out))
        {
            fu_STR* BL_3_v;
            out = (prefix + join_TGlp8hMJ((fu::slate<4, fu_STR> { static_cast<fu_STR&&>((__extension__ (
            {
                x = /* MOVE_FROM_CONST_REF */static_cast<fu_STR&&>(const_cast<fu_STR&>(once_hCzTYA7G("Hello"_fu, once)));
                BL_3_v = &(x);
            (void)0;}), *BL_3_v)), ", "_fu, "World"_fu, "!"_fu })));
        };
    };

    {
        fu_STR prefix_1 = "Y: "_fu;
        if (!(out))
        {
            fu_STR* BL_6_v;
            out = (prefix_1 + join_TGlp8hMJ((fu::slate<2, fu_STR> { static_cast<fu_STR&&>((__extension__ (
            {
                x_1 = /* MOVE_FROM_CONST_REF */static_cast<fu_STR&&>(const_cast<fu_STR&>(once_hCzTYA7G("Hello"_fu, once)));
                BL_6_v = &(x_1);
            (void)0;}), *BL_6_v)), "!"_fu })));
        };
    };
    if ((out == "X: Hello, World!"_fu) && (once == 1))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec, N_MoveMustSeq

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

#ifndef fu_NO_fdefs

inline static int fn_v_CWaitV18(const s_XY& v)
{
    return v.x;
}

inline static int fn_v_FlOj2YKX(const s_XY& v)
{
    return v.y;
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_CWaitV18(v) + fn_v_FlOj2YKX(v)) - 24;
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

#ifndef fu_NO_fdefs

inline static int fn_v_5HJCcJZ5(const s_XY& v)
{
    return v.x;
}

inline static int fn_v_g8ZMMEgA(const s_XY& v)
{
    return v.y;
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_5HJCcJZ5(v) + fn_v_g8ZMMEgA(v)) - 24;
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

#ifndef fu_NO_fdefs

inline static int fn_w_syuyLOEs(const s_XY& y)
{
    return y.x;
}

inline static int fn_v_cOzDz5EF(const s_XY& x)
{
    return fn_w_syuyLOEs(x);
}

inline static int fn_w_hujMG22O(const s_XY& y)
{
    return y.y;
}

inline static int fn_v_W5IMvUCB(const s_XY& x)
{
    return fn_w_hujMG22O(x);
}

int fu_MAIN()
{
    const s_XY v = s_XY { 11, 13 };
    return (fn_v_cOzDz5EF(v) + fn_v_W5IMvUCB(v)) - 24;
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

#ifndef fu_NO_fdefs

inline static int identity_ornSZgVh(const int depth1)
{
    return depth1;
}

inline static int outer_Pu6eWL6V(const int depth1)
{
    return identity_ornSZgVh(depth1);
}

int fu_MAIN()
{
    const int sum = 0;
    return outer_Pu6eWL6V(sum);
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

#ifndef fu_NO_fdefs

inline static int identity_o15VjF9b(const int depth0)
{
    return depth0;
}

inline static int outer_VDBCQSmO(const int depth0)
{
    return identity_o15VjF9b(depth0);
}

inline static int test_Mf6KjDHe(const int depth0)
{
    return outer_VDBCQSmO(depth0);
}

int fu_MAIN()
{
    return test_Mf6KjDHe(0);
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

#ifndef fu_NO_fdefs

inline static int identity_RfBMMZnI(const int depth0)
{
    return depth0;
}

inline static int inner_QPrA2jSM(const int depth0)
{
    return identity_RfBMMZnI(depth0);
}

inline static int outer_fjweiLc1(const int depth0)
{
    return inner_QPrA2jSM(depth0);
}

inline static int test_Mf6KjDHe(const int depth0)
{
    return outer_fjweiLc1(depth0);
}

int fu_MAIN()
{
    return test_Mf6KjDHe(0);
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

#ifndef fu_NO_fdefs

inline static int first_inner_8n0IBZzt(const int sum, const int sum_1, const int depth0)
{
    const int sum_2 = ((depth0 + sum_1) + sum);
    return sum_2;
}

inline static int first_mmKyTHcd(const int sum, const int depth0)
{
    const int sum_1 = (depth0 + sum);
    return first_inner_8n0IBZzt(sum_1, sum, depth0);
}

inline static int second_inner_4ALk3VBr(const int sum, const int depth0, const int sum_1)
{
    const int sum_2 = ((depth0 + sum_1) + sum);
    return sum_2 + first_mmKyTHcd(sum_2, depth0);
}

inline static int second_79BWUZZZ(const int depth0, const int sum)
{
    const int sum_1 = (depth0 + sum);
    return second_inner_4ALk3VBr(sum_1, depth0, sum);
}

inline static int test_Mf6KjDHe(const int depth0)
{
    const int sum = (depth0 + depth0);
    return second_79BWUZZZ(depth0, sum);
}

int fu_MAIN()
{
    return test_Mf6KjDHe(0);
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
static int descend_PhLY6vWe(int, int, int, int);
static int doSomething_PhLY6vWe(int, int, int, int);
static int doStuff_0W9jlMfS(int, int, int, int);
static int parseStuff_PhLY6vWe(int, int, int, int);

#ifndef fu_NO_fdefs

static int use_a_KFeeUbvh(const int a)
{
    return a * a;
}

static int use_b_WrvrtNhQ(const int b)
{
    return b * b;
}

static int doSomethingElse_inner_U7NpFKNF(const int y, const int b)
{
    return y * use_b_WrvrtNhQ(b);
}

static int doSomethingElse_kEOaFHsa(const int x, const int b)
{
    return doSomethingElse_inner_U7NpFKNF((x * x), b);
}

static int use_c_j9IN8q1o(const int c)
{
    return c * c;
}

static int descend_inner_IrVMrRlw(const int y, const int x, const int a, const int b, const int c)
{
    if (y & 1)
        return parseStuff_PhLY6vWe((y / 2), a, b, c) * parseStuff_PhLY6vWe(x, a, b, c);
    else
        return doSomethingElse_kEOaFHsa((y * y), b) * use_c_j9IN8q1o(c);

}

static int descend_PhLY6vWe(const int x, const int a, const int b, const int c)
{
    return descend_inner_IrVMrRlw((x * x), x, a, b, c);
}

static int doSomething_inner_eGcgM30e(const int y, const int a, const int b, const int c)
{
    return (y * use_a_KFeeUbvh(a)) * descend_PhLY6vWe((y * y), a, b, c);
}

static int doSomething_PhLY6vWe(const int x, const int a, const int b, const int c)
{
    return doSomething_inner_eGcgM30e((x * x), a, b, c);
}

static int doStuff_0W9jlMfS(const int y, const int a, const int b, const int c)
{
    return doSomething_PhLY6vWe((y * y), a, b, c);
}

static int parseStuff_PhLY6vWe(const int x, const int a, const int b, const int c)
{
    return doStuff_0W9jlMfS((x * x), a, b, c);
}

int fu_MAIN()
{
    const int a = 0;
    const int b = 0;
    const int c = 0;
    return parseStuff_PhLY6vWe(0, a, b, c);
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen, N_DeadCode, N_DeadCall

-----

        fn sA(_: $T) struct { hey: $T; };

        fn fA(a: $T): typeof( sA($T) ) = [ a + 2 ];
        fn main() 1.fA.hey - 3;

-----
struct s_sA_lrjqVShFVne;

                                #ifndef DEF_s_sA_lrjqVShFVne
                                #define DEF_s_sA_lrjqVShFVne
struct s_sA_lrjqVShFVne
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

#ifndef fu_NO_fdefs

inline static s_sA_lrjqVShFVne fA_KFeeUbvh(const int a)
{
    return s_sA_lrjqVShFVne { (a + 2) };
}

int fu_MAIN()
{
    return fA_KFeeUbvh(1).hey - 3;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sB(_: $T) struct { hey: $T; };

        fn fB(a: $T): typeof( sB($T) ) = [ a + 2 ];
        fn main() 1.fB.hey - 1.u32.fB.hey  ;

-----
_0.fu @5:28:

[2m      | [0m
[2m      |         fn fB(a: $T): typeof( sB($T) ) = [ a + 2 ];[0m
    5 |         fn main() 1.fB.hey [31;1m-[0m 1.u32.fB.hey  ;
[2m      | [0m

	Bad call to [34;1m-[0m (i32: copy, u32: copy): 

	[35;1mtemplate[0m [34;1m-[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for u32: copy

	[35;1mtemplate[0m [34;1m-[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:5:9

-----

        fn sB(_: $T) struct { hey: $T; };

        fn fB(a: $T): typeof( sB($T) ) = [ a + 2 ];
        fn main() 1.fB.hey - 1.u32.fB.hey  .i32  ;

-----
struct s_sB_lrjqVShFVne;
struct s_sB_pmr8g4FWSu9;

                                #ifndef DEF_s_sB_lrjqVShFVne
                                #define DEF_s_sB_lrjqVShFVne
struct s_sB_lrjqVShFVne
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

                                #ifndef DEF_s_sB_pmr8g4FWSu9
                                #define DEF_s_sB_pmr8g4FWSu9
struct s_sB_pmr8g4FWSu9
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

#ifndef fu_NO_fdefs

inline static s_sB_lrjqVShFVne fB_KFeeUbvh(const int a)
{
    return s_sB_lrjqVShFVne { (a + 2) };
}

inline static s_sB_pmr8g4FWSu9 fB_HUKWJ2V5(const unsigned a)
{
    return s_sB_pmr8g4FWSu9 { (a + 2u) };
}

int fu_MAIN()
{
    return fB_KFeeUbvh(1).hey - int(fB_HUKWJ2V5(unsigned(1)).hey);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sB(_: $T) struct { hey: $T; };

        // Prep for the thing below.
        fn test(x) x.hey - 1;

        // 'a' must be callable.
        type a = typeof( sB(i32) );
        fn main() a(1).test;

-----
struct s_sB_lrjqVShFVne;

                                #ifndef DEF_s_sB_lrjqVShFVne
                                #define DEF_s_sB_lrjqVShFVne
struct s_sB_lrjqVShFVne
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

#ifndef fu_NO_fdefs

inline static int test_CkxgtgYN(const s_sB_lrjqVShFVne& x)
{
    return x.hey - 1;
}

int fu_MAIN()
{
    return test_CkxgtgYN(s_sB_lrjqVShFVne { 1 });
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

#ifndef fu_NO_fdefs

static s_BINOP setupOperators_Wzw95kEi(const int i)
{
    return s_BINOP { int(i) };
}

int fu_MAIN()
{
    return setupOperators_Wzw95kEi(0).i;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sB(_: $T) struct { hey: $T; };

        fn setupOperators(i: i32) {
            struct BINOP { i: typeof( sB(i32) ); };
            mut s: typeof( sB(i32) ) = [ i ];
            return BINOP(s);
        }

        fn main() setupOperators(0).i.hey;

-----
struct s_BINOP;
struct s_sB_lrjqVShFVne;

                                #ifndef DEF_s_sB_lrjqVShFVne
                                #define DEF_s_sB_lrjqVShFVne
struct s_sB_lrjqVShFVne
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
    s_sB_lrjqVShFVne i;
    explicit operator bool() const noexcept
    {
        return false
            || i
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_BINOP setupOperators_Wzw95kEi(const int i)
{
    const s_sB_lrjqVShFVne s = s_sB_lrjqVShFVne { int(i) };
    return s_BINOP { s_sB_lrjqVShFVne(s) };
}

int fu_MAIN()
{
    return setupOperators_Wzw95kEi(0).i.hey;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn Hey = struct { i: i32 }; // fn Hey generated nonsense code
        fn get(s: typeof( Hey() )) s.i;

-----
struct s_Hey_H9fhQUVPa53;

                                #ifndef DEF_s_Hey_H9fhQUVPa53
                                #define DEF_s_Hey_H9fhQUVPa53
struct s_Hey_H9fhQUVPa53
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

#ifndef fu_NO_fdefs

s_Hey_H9fhQUVPa53 Hey_H9fhQUVP()
{
    return s_Hey_H9fhQUVPa53{};
}

int get_ayK6oZ5d(const s_Hey_H9fhQUVPa53& s)
{
    return s.i;
}

#endif

-----

        fn Hey = struct { i: i32 }; // fn Hey generated nonsense code
        fn get(s: typeof( Hey() )) s.i;

        fn main() {
            mut s: typeof( _0::Hey() );
            return s.get();
        }

-----
struct s_Hey_H9fhQUVPa53;
int get_ayK6oZ5d(const s_Hey_H9fhQUVPa53&);

                                #ifndef DEF_s_Hey_H9fhQUVPa53
                                #define DEF_s_Hey_H9fhQUVPa53
struct s_Hey_H9fhQUVPa53
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_Hey_H9fhQUVPa53 s {};
    return get_ayK6oZ5d(s);
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
            mut s: typeof( _0::Hey(i32) );
            return s.get(); // get(): wasn't visible, the struct didnt remember its template origin module.
        }

-----
struct s_Hey_lrjqVShFVne;

                                #ifndef DEF_s_Hey_lrjqVShFVne
                                #define DEF_s_Hey_lrjqVShFVne
struct s_Hey_lrjqVShFVne
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_get_4QyVqZjCyKb
                                #define DEF_get_4QyVqZjCyKb
inline int get_4QyVqZjC(const s_Hey_lrjqVShFVne& s)
{
    return s.i;
}
                                #endif

int fu_MAIN()
{
    const s_Hey_lrjqVShFVne s {};
    return get_4QyVqZjC(s);
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

#ifndef fu_NO_fdefs

static int test_DXBD5vmC(const int x)
{

    { {

        { {
            if (x > 1)
                goto BL_1;
            else if (x > 0)
                goto BL_2;
            else
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
    return ((test_DXBD5vmC(2) * 11) + ((test_DXBD5vmC(1) - 1) * 13)) + ((test_DXBD5vmC(0) - 2) * 17);
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
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int test_DXBD5vmC(const int x)
{
    if (x & 1)
    {
        fu::never BL_2_v {};
        return (__extension__ (
        {
            return 1;
        (void)0;}), static_cast<fu::never&&>(BL_2_v));
    }
    else if (x & 2)
    {
        fu::never BL_4_v {};
        return (__extension__ (
        {
            return 2;
        (void)0;}), static_cast<fu::never&&>(BL_4_v));
    }
    else
        return 3;

}

int fu_MAIN()
{
    return (test_DXBD5vmC(4) - test_DXBD5vmC(5)) - test_DXBD5vmC(6);
}

#endif

int main() { return fu_MAIN(); }

-----

        fn brkif(mut x: i32)
        {
            :WOOT
            if (x & 1) {
                if (x & 2) x++;
                if (x & 4) break :WOOT;
                x *= x;
            }

            return x;
        }

        fn main()
            brkif(1) + brkif(3) * 10 + brkif(5) * 100 + brkif(9) * 1000
                == 81541 ? 0 : 1;

-----

#ifndef fu_NO_fdefs

static int brkif_DXBD5vmC(int x)
{

    { {
        if (x & 1)
        {
            if (x & 2)
                x++;

            if (x & 4)
                goto BL_1;
            else
                x *= int(x);

        };
      } BL_1:;
    };
    return x;
}

int fu_MAIN()
{
    if ((((brkif_DXBD5vmC(1) + (brkif_DXBD5vmC(3) * 10)) + (brkif_DXBD5vmC(5) * 100)) + (brkif_DXBD5vmC(9) * 1000)) == 81541)
        return 0;
    else
        return 1;

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

#ifndef fu_NO_fdefs

static int test_KFeeUbvh(const int a)
{
    int w = 3;

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
    return w;
}

int fu_MAIN()
{
    return (test_KFeeUbvh(0) + test_KFeeUbvh(1)) - 11;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn ifbrk(a: i32) {
            mut x = 0;
            if (a & 3) {
                x += a;

                :IF_LABEL
                if (a & 1) {
                    mut incr    = a & 4 ? a * 2
                                : a & 2 ? { break :IF_LABEL; }
                                        : a;
                    x += incr;
                }
            }

            return x;
        }

        fn main() 1.ifbrk + 3.ifbrk * 10 + 5.ifbrk * 100 - 1532;

-----
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int ifbrk_KFeeUbvh(const int a)
{
    int x = 0;
    if (a & 3)
    { {
        x += a;
        if (a & 1)
        {
            fu::never BL_3_v {};
            const int incr = ((a & 4) ? (a * 2) : int(((a & 2) ? (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_3_v)) : a)));
            x += incr;
        };
      } BL_1:;
    };
    return x;
}

int fu_MAIN()
{
    return ((ifbrk_KFeeUbvh(1) + (ifbrk_KFeeUbvh(3) * 10)) + (ifbrk_KFeeUbvh(5) * 100)) - 1532;
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

                    5                                    //   - and here!
                }
            }  // -----------------------------------
        }
        fn main() 9.v + 8.v + 7.v + 6.v      - 12345;

-----
#include <fu/never.h>


#ifndef fu_NO_fdefs

static int v_DXBD5vmC(const int x)
{
    int BL_1_v {};
    return 5000 + (__extension__ (
    { {
        fu::never BL_2_v {};
        fu::never BL_3_v {};
        fu::never BL_4_v {};
        BL_1_v = (((x == 9) ? (__extension__ (
        {
            { BL_1_v = 2000; goto BL_1; };
        (void)0;}), static_cast<fu::never&&>(BL_2_v)) : ((x == 8) ? (__extension__ (
        {
            return 300;
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : ((x == 7) ? (__extension__ (
        {
            return 40;
        (void)0;}), static_cast<fu::never&&>(BL_4_v)) : 5))));
      } BL_1:;
    (void)0;}), int(BL_1_v));
}

int fu_MAIN()
{
    return (((v_DXBD5vmC(9) + v_DXBD5vmC(8)) + v_DXBD5vmC(7)) + v_DXBD5vmC(6)) - 12345;
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
                    x
                }
            };

            return z[0] + z[z.len - 1];
        }

        fn main() test([ 1 ], [ 2 ]) - 3;

-----
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

int test_8ylsdLfG(const fu_VEC<int>& x, fu::view<int> y)
{
    // Hoisted:
    fu_VEC<int> w;

    fu::view<int> BL_1_v {};
    fu::view<int> z = (__extension__ (
    { {
        w =  { x };
        if (y[0])
            w += y;

        fu::never BL_3_v {};
        BL_1_v = (((w[0] != 17) ? (__extension__ (
        {
            { BL_1_v = w; goto BL_1; };
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : x));
      } BL_1:;
    (void)0;}), static_cast<fu::view<int>&&>(BL_1_v));
    return z[0] + z[(z.size() - 1)];
}

int fu_MAIN()
{
    return test_8ylsdLfG(fu_VEC<int> { fu::slate<1, int> { 1 } }, (fu::slate<1, int> { 2 })) - 3;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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

#ifndef fu_NO_fdefs

static int test_DXBD5vmC(int x)
{

    { {
        x++;
        if (x & 1)
            goto BL_1;
        else
            return x;

      } BL_1:;
    };
    return x * 2;
}

int fu_MAIN()
{
    return (test_DXBD5vmC(1) + test_DXBD5vmC(2)) - 8;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn Each(arr, fn)
            for (mut i = 0; i < arr.len; i++)
                fn(arr[i]);

        fn some(arr, fn) {
            arr.Each: |x| if (fn(x)) return x;

            return 0;
        }

        fn main() [ 1, 2, 3 ].some(|v| v & 1 == 0) - 2;

        // EXPECT (fu::slate<3, int> { 1, 2, 3 })

-----
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static int some_Ed5XK9xU(fu::view<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        const int x = arr[i];
        if ((x & 1) == 0)
            return x;

    };
    return 0;
}

int fu_MAIN()
{
    return some_Ed5XK9xU((fu::slate<3, int> { 1, 2, 3 })) - 2;
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

#ifndef fu_NO_fdefs

static int outer_H9fhQUVP()
{
    int sum = 0;
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
                    return sum;

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

-----

        inline fn Each(arr, fn)
            for (mut i = 0; i < arr.len; i++)
                fn(arr[i]);

        fn main() {
            mut sum = 0;
            :OUTER [1, 2, 3, 4].Each(|x| {
                sum += x;
                for (mut i = 1; i--; ) // once
                    if (sum == 6) break :OUTER;
            });
            return sum - 6;
        }

        // !N_NonTrivAutoCopy

-----
#include <fu/vec.h>


#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

inline static void woot_mVvdKUG7(int& sum)
{
    if (sum > 2)
        return;
    else
        sum += 2;

}

int fu_MAIN()
{
    int sum = -2;
    woot_mVvdKUG7(sum);
    return sum;
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

#ifndef fu_NO_fdefs

inline static void loop1d_2bDsiTq4(const int i0, const int i1, int& x)
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
    loop1d_2bDsiTq4(0, 10, x);
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

#ifndef fu_NO_fdefs

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

#ifndef fu_NO_fdefs

inline static void loop2d_SO2t7Ygq(const int x0, const int x1, const int y0, const int y1, int& sum)
{
    for (int y = y0; y < y1; y++)
    {
        for (int x = x0; x < x1; x++)
        {
            if (y < 11)
            {
                sum++;
                continue;
            }
            else if (x == 1)
                return;
            else
                sum += ((x + 1) * y);

        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    loop2d_SO2t7Ygq(0, 10, 10, 12, sum);
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

#ifndef fu_NO_fdefs

inline static void loop2d_VuvGxzMw(const int x0, const int x1, const int y0, const int y1, int& sum)
{
    for (int i = y0; i < y1; i++)
    {
        for (int i_1 = x0; i_1 < x1; i_1++)
        {
            if (i < 11)
            {
                sum++;
                continue;
            }
            else if (i_1 == 1)
                return;
            else
                sum += ((i_1 + 1) * i);

        };
    };
}

int fu_MAIN()
{
    int sum = 0;
    loop2d_VuvGxzMw(0, 10, 10, 12, sum);
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
            implicit mut sum = 0;
            Lifetime_F_TODO_FIX_RRET(lifetime, locals_start: 1);
            return sum - 4;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>

inline static void Lifetime_each_RJUYj61G(fu::view<int>, int, int&);
static void Lifetime_F_TODO_FIX_RRET_ZN6ahSKb(fu::view<int>, int, int&);

#ifndef fu_NO_fdefs

static fu::view<int> next_ZN6ahSKb(fu::view<int> lifetime, const int locals_start, int& sum)
{
    sum += lifetime.size();
    return fu::get_view(lifetime, locals_start, lifetime.size());
}

inline static void Lifetime_each_RJUYj61G(fu::view<int> lifetime, const int locals_start, int& sum)
{
    for (int i = 0; i < lifetime.size(); i++)
    {
        fu::view<int> l = fu::get_view(lifetime, i, lifetime.size());
        if (l)
        {
            fu::view<int> _0 {};
            (_0 = next_ZN6ahSKb(l, locals_start, sum), Lifetime_F_TODO_FIX_RRET_ZN6ahSKb(static_cast<fu::view<int>&&>(_0), locals_start, sum));
        };
    };
}

static void Lifetime_F_TODO_FIX_RRET_ZN6ahSKb(fu::view<int> lifetime, const int locals_start, int& sum)
{
    Lifetime_each_RJUYj61G(lifetime, locals_start, sum);
}

int fu_MAIN()
{
    fu_VEC<int> lifetime = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    int sum = 0;
    Lifetime_F_TODO_FIX_RRET_ZN6ahSKb(lifetime, 1, sum);
    return sum - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_BckMustSeq

-----

        fn hello(a) a * a;          // EXPECT (const int a)
        fn main() {
            mut a = 3;
            let b = hello(a);
            return b - 9;
        }

-----

#ifndef fu_NO_fdefs

inline static int hello_KFeeUbvh(const int a)
{
    return a * a;
}

int fu_MAIN()
{
    const int a = 3;
    const int b = hello_KFeeUbvh(a);
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

#ifndef fu_NO_fdefs

static int sqr_DXBD5vmC(const int x)
{
    return x * x;
}

static int outer_Ol51fdCn(const s_AB& ab)
{
    return sqr_DXBD5vmC(ab.a) + sqr_DXBD5vmC(ab.b);
}

int fu_MAIN()
{
    const s_AB ab = s_AB { 3, 5 };
    return outer_Ol51fdCn(ab) - 34;
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


#ifndef fu_NO_fdefs

static fu_STR ascii_lower_gENzjScn(const fu_STR& a)
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
    return int(fu::u8(ascii_lower_gENzjScn("WORLD!"_fu)[2])) - int(fu::u8('r'));
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

fu_STR ascii_lower_gENzjScn(const fu_STR& a)
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

// N_NonTrivAutoCopy, N_RelaxRespec

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

fu_STR ascii_lower_gENzjScn(const fu_STR&);

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(fu::u8(ascii_lower_gENzjScn("WORLD!"_fu)[2])) - int(fu::u8('r'));
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


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    fu_VEC<fu_VEC<int>> a = fu_VEC<fu_VEC<int>> { fu::slate<1, fu_VEC<int>> { fu_VEC<int> { fu::slate<1, int> { 7 } } } };
    return a[0][0] - 7;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
#include <fu/view.h>
#include <fu/vec/concat_one.h>

struct s_Overload;
struct s_Argument;
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

#ifndef fu_NO_fdefs

void test_dQh7nqlT(const s_Overload& overload, fu_VEC<s_SolvedNode>& args)
{
    fu::view<s_Argument> host_args = overload.args;
    args.resize(host_args.size());
    for (int i = 0; i < args.size(); i++)
    {
        if (!args[i])
        {
            const s_Argument& host_arg = host_args[i];
            args.mutref(i) = s_SolvedNode(host_arg.dEfault);
        };
    };
}

int fu_MAIN()
{
    s_Overload o {};
    for (int i = 0; i < 3; i++)
    {
        o.args += s_Argument { s_SolvedNode { int(i) } };
    };
    fu_VEC<s_SolvedNode> args {};
    test_dQh7nqlT(o, args);
    return (args.size() - args[(args.size() - 1)].x) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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

	[35;1mfn[0m [34;1mm_and_c_cant_alias_002[0m: Arguments [31;1mc[0m and [31;1mm[0m (args #1 and #0) both alias:

                [35;1mvar[0m [34;1mmc[0m

    BorrowCheck [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:13:9

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

#ifndef fu_NO_fdefs

static const fu_VEC<int>& m_and_c_cant_alias_002_KsVUOX9v(s_S& m, const s_S& c)
{
    m.hey.clear();
    return c.hey;
}

int fu_MAIN()
{
    s_S mc = s_S { fu_VEC<int> { fu::slate<10, int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } } };
    s_S bc { mc };
    fu::view<int> hey = m_and_c_cant_alias_002_KsVUOX9v(mc, bc);
    return hey.size() - 10;
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy

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

#ifndef fu_NO_fdefs

inline static s_BitSet& grow_if_oob_wmt7gOtf(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}

inline static fu::u8& grow_if_oob_kOhX0WGq(fu_VEC<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}

static bool add_once_NGsuT0bI(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    fu::u8& entry = grow_if_oob_kOhX0WGq(_._data, bucket);
    if (!fu::u8((entry & mask)))
    {
        entry |= mask;
        return true;
    }
    else
        return false;

}

static bool add_once_JL6yP8Sh(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_NGsuT0bI(grow_if_oob_wmt7gOtf(bs, i), j);
}

int fu_MAIN()
{
    fu_VEC<s_BitSet> bs {};
    add_once_JL6yP8Sh(bs, 9, 9);
    return (bs.size() + (1000 * bs[9]._data.size())) - 2010;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

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
static int parseExpressionHead_ftZMAP8T(int&);
static int parseExpression_V7e2TUuW(int, int&);

#ifndef fu_NO_fdefs

static int parseExpressionHead_ftZMAP8T(int& _precedence)
{
    return parseExpression_V7e2TUuW(((_precedence * 101) + 1), _precedence);
}

static int parseExpression_V7e2TUuW(const int p1, int& _precedence)
{
    if (!(_precedence = p1))
        return parseExpressionHead_ftZMAP8T(_precedence);
    else
        return _precedence;

}

static int test_z0i9SQB5(int _precedence)
{
    return parseExpression_V7e2TUuW(0, _precedence);
}

int fu_MAIN()
{
    return test_z0i9SQB5(0) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnReopen

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
#include <fu/view.h>
#include <fu/vec/concat.h>

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

#ifndef fu_NO_fdefs

static const s_Overload& GET_6PgTKHJS(const int idx, fu::view<s_Overload> overloads)
{
    return overloads[idx];
}

static bool Lifetime_allowsMutrefReturn_VcvaESQy(const fu_VEC<int>& lifetime, fu::view<s_Overload> overloads)
{

    {
        const fu_VEC<int>& lifetime_1 = lifetime;
        fu_VEC<int> lifetime_2 { lifetime_1 };
        for (int i = 0; i < lifetime_2.size(); i++)
        {
            const int r = lifetime_2[i];
            const s_Overload& o = GET_6PgTKHJS(r, overloads);

            {
                if (o.is_var)
                    return false;

            };
            lifetime_2 += o.lifetime;
        };
    };
    return true;
}

int fu_MAIN()
{
    fu_VEC<s_Overload> overloads = fu_VEC<s_Overload> { fu::slate<6, s_Overload> { s_Overload{}, s_Overload { false, fu_VEC<int> { fu::slate<1, int> { 0 } } }, s_Overload { true, fu_VEC<int> { fu::slate<1, int> { 1 } } }, s_Overload { false, fu_VEC<int> { fu::slate<1, int> { 1 } } }, s_Overload { false, fu_VEC<int> { fu::slate<1, int> { 2 } } }, s_Overload { false, fu_VEC<int> { fu::slate<1, int> { 3 } } } } };
    const bool expect_false = Lifetime_allowsMutrefReturn_VcvaESQy(fu_VEC<int> { fu::slate<1, int> { 4 } }, overloads);
    const bool expect_true = Lifetime_allowsMutrefReturn_VcvaESQy(fu_VEC<int> { fu::slate<1, int> { 5 } }, overloads);
    if (expect_false)
        return 20;
    else if (!expect_true)
        return 10;
    else
        return 0;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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
            implicit mut _helpers_data = [ HelpersData(mask: 0) ];
            return Helpers(0).isFnOrType.i32;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>

struct s_HelpersData;
struct s_Helpers;

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

#ifndef fu_NO_fdefs

static const short HM_Function = short((short(1) << short(3)));

static const short HM_Struct = short((short(1) << short(5)));

static bool isFnOrType_YYBIs9P8(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
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
    return int(isFnOrType_YYBIs9P8(s_Helpers { 0 }, _helpers_data));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_SD_HasStaticInit

-----

        struct Helpers      { index: i32; };
        struct HelpersData  { mask!: i16; };

        let HM_Function     = 1.i16 << 3;
        let HM_Struct       = 1.i16 << 5;

        fn main() {
            implicit mut _helpers_data = [ HelpersData(mask: 0) ];

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

struct s_HelpersData;
struct s_Helpers;

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

#ifndef fu_NO_fdefs

static const short HM_Function = short((short(1) << short(3)));

static const short HM_Struct = short((short(1) << short(5)));

static bool isFnOrType_ru0tymjV(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!short((_helpers_data[h.index].mask & short((HM_Function | HM_Struct))));
}

int fu_MAIN()
{
    fu_VEC<s_HelpersData> _helpers_data = fu_VEC<s_HelpersData> { fu::slate<1, s_HelpersData> { s_HelpersData { short(0) } } };
    return int(isFnOrType_ru0tymjV(s_Helpers { 0 }, _helpers_data));
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec, N_SD_HasStaticInit

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
            mut _map: typeof( _1::Map(string, string) );

            fn upsert(k: string, v: string) _map._1::ref(k) = v;
            upsert("hello", "world");

            // Relaxer failed here while I was trying to get rid of F_REFs from specTypes.
            fn check(k: string) _map._1::ref(k) == "world" ? 0 : 1;
            return check("hello");
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/cmp.h>

struct s_Map_XVLv7pdGaTa;

                                #ifndef DEF_s_Map_XVLv7pdGaTa
                                #define DEF_s_Map_XVLv7pdGaTa
struct s_Map_XVLv7pdGaTa
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_ref_E24vVbpThE4
                                #define DEF_ref_E24vVbpThE4
inline fu_STR& ref_E24vVbpT(const fu_STR& item, s_Map_XVLv7pdGaTa& _)
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

                                #ifndef DEF_ref_hia4IbxieJ0
                                #define DEF_ref_hia4IbxieJ0
inline fu_STR& ref_hia4Ibxi(s_Map_XVLv7pdGaTa& _, const fu_STR& key)
{
    return ref_E24vVbpT(key, _);
}
                                #endif

static fu_STR& upsert_oJ1P8o11(const fu_STR& k, const fu_STR& v, s_Map_XVLv7pdGaTa& _map)
{
    return (ref_hia4Ibxi(_map, k) = fu_STR(v));
}

                                #ifndef DEF_ref_p2gl293DBbb
                                #define DEF_ref_p2gl293DBbb
inline fu_STR& ref_p2gl293D(const fu_STR& item, s_Map_XVLv7pdGaTa& _)
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

                                #ifndef DEF_ref_uD6Ea9gUJN4
                                #define DEF_ref_uD6Ea9gUJN4
inline fu_STR& ref_uD6Ea9gU(s_Map_XVLv7pdGaTa& _, const fu_STR& key)
{
    return ref_p2gl293D(key, _);
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static int check_sCkaNwLX(const fu_STR& k, s_Map_XVLv7pdGaTa& _map)
{
    if (ref_uD6Ea9gU(_map, k) == "world"_fu)
        return 0;
    else
        return 1;

}

int fu_MAIN()
{
    s_Map_XVLv7pdGaTa _map {};
    upsert_oJ1P8o11("hello"_fu, "world"_fu, _map);
    return check_sCkaNwLX("hello"_fu, _map);
}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

-----

        fn last(s: $T[])
            s.len ? s[s.len - 1] : throw("len == 0");

        struct Node { kind: string; items: Node[] }

        pure fn check(ref node: Node)
            node.kind != "block" ||
            node.items.last.kind == "return";

        fn main() {
            mut node: Node;
            return node.check ? 0 : 1;
        }

-----
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>

struct s_Node;

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    fu_VEC<s_Node> items;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || items
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

inline static const s_Node& last_StIb9SHp(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static bool check_JTVrdAbz(const s_Node& node)
{
    return (node.kind != "block"_fu) || (last_StIb9SHp(node.items).kind == "return"_fu);
}

int fu_MAIN()
{
    s_Node node {};
    if (check_JTVrdAbz(node))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

// N_TypeRecursion, N_TypeResolve, N_RelaxRespec

-----

        fn Each(y)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

-----

-----

        fn Each(y)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

-----

-----

        fn Each(y)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

        fn main() {
            let a = _0::Each(100);
            let b = _1::Each(8);

            return a+b - 107;
        }

-----
inline int Each_9qj2j6Eo(int);
inline int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

                                #ifndef DEF_Each_9qj2j6Eo7T1
                                #define DEF_Each_9qj2j6Eo7T1
inline int Each_9qj2j6Eo(const int y)
{
    if (y & 1)
        return y;
    else
        return (y / 2) + Each_9qj2j6Eo((y / 2));

}
                                #endif

                                #ifndef DEF_Each_LaykfY0hLzf
                                #define DEF_Each_LaykfY0hLzf
inline int Each_LaykfY0h(const int y)
{
    if (y & 1)
        return y / 2;
    else
        return (y / 2) + Each_LaykfY0h((y / 2));

}
                                #endif

int fu_MAIN()
{
    const int a = Each_9qj2j6Eo(100);
    const int b = Each_LaykfY0h(8);
    return (a + b) - 107;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

-----

-----

        fn Each(y)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

-----
int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

int Each_LaykfY0h(const int y)
{
    if (y & 1)
        return y / 2;
    else
        return (y / 2) + Each_LaykfY0h((y / 2));

}

#endif

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

        fn main() {
            let a = _0::Each(100);
            let b = _1::Each(8);

            return a+b - 107;
        }

-----
inline int Each_9qj2j6Eo(int);
int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

                                #ifndef DEF_Each_9qj2j6Eo7T1
                                #define DEF_Each_9qj2j6Eo7T1
inline int Each_9qj2j6Eo(const int y)
{
    if (y & 1)
        return y;
    else
        return (y / 2) + Each_9qj2j6Eo((y / 2));

}
                                #endif

int fu_MAIN()
{
    const int a = Each_9qj2j6Eo(100);
    const int b = Each_LaykfY0h(8);
    return (a + b) - 107;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y: i32)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

-----
int Each_9qj2j6Eo(int);

#ifndef fu_NO_fdefs

int Each_9qj2j6Eo(const int y)
{
    if (y & 1)
        return y;
    else
        return (y / 2) + Each_9qj2j6Eo((y / 2));

}

#endif

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y: i32)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

-----

-----

        fn Each(y: i32)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

        fn main() {
            let a = _0::Each(100);
            let b = _1::Each(8);

            return a+b - 107;
        }

-----
int Each_9qj2j6Eo(int);
inline int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

                                #ifndef DEF_Each_LaykfY0hLzf
                                #define DEF_Each_LaykfY0hLzf
inline int Each_LaykfY0h(const int y)
{
    if (y & 1)
        return y / 2;
    else
        return (y / 2) + Each_LaykfY0h((y / 2));

}
                                #endif

int fu_MAIN()
{
    const int a = Each_9qj2j6Eo(100);
    const int b = Each_LaykfY0h(8);
    return (a + b) - 107;
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y: i32)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

-----
int Each_9qj2j6Eo(int);

#ifndef fu_NO_fdefs

int Each_9qj2j6Eo(const int y)
{
    if (y & 1)
        return y;
    else
        return (y / 2) + Each_9qj2j6Eo((y / 2));

}

#endif

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y: i32)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

-----
int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

int Each_LaykfY0h(const int y)
{
    if (y & 1)
        return y / 2;
    else
        return (y / 2) + Each_LaykfY0h((y / 2));

}

#endif

// N_FnRecursion, N_FnResolve, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn Each(y: i32)
            y & 1   ? y
                    : y / 2 + Each(y / 2);

        fn Each(y: i32)
            y & 1   ? y / 2
                    : y / 2 + Each(y / 2);

        fn main() {
            let a = _0::Each(100);
            let b = _1::Each(8);

            return a+b - 107;
        }

-----
int Each_9qj2j6Eo(int);
int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int a = Each_9qj2j6Eo(100);
    const int b = Each_LaykfY0h(8);
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
            mut set: typeof( _1::Set(string) );
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
#include <fu/view.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat_one.h>

struct s_Set_odTy7Xg6dR0;

                                #ifndef DEF_s_Set_odTy7Xg6dR0
                                #define DEF_s_Set_odTy7Xg6dR0
struct s_Set_odTy7Xg6dR0
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_find_mNuHihlslGl
                                #define DEF_find_mNuHihlslGl
inline int find_mNuHihls(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;
            else
                return i;

        };
    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_YNeTnnv5Gal
                                #define DEF_has_YNeTnnv5Gal
inline bool has_YNeTnnv5(const s_Set_odTy7Xg6dR0& _, const fu_STR& key)
{
    return (find_mNuHihls(_.keys, key) >= 0);
}
                                #endif

static bool use_Set_BGoIa6x6(const fu_STR& a)
{
    s_Set_odTy7Xg6dR0 set {};
    set.keys += fu_STR(a);
    return has_YNeTnnv5(set, a);
}

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_find_51aX1qKygWk
                                #define DEF_find_51aX1qKygWk
inline int find_51aX1qKy(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static int dont_use_Set_a71VD4jv(const fu_STR& a, const fu_STR& b)
{
    fu_VEC<fu_STR> keys {};
    keys += fu_STR(b);
    keys += fu_STR(a);
    return find_51aX1qKy(keys, a);
}

int fu_MAIN()
{
    if (!use_Set_BGoIa6x6("a"_fu))
        return -1;
    else
        return dont_use_Set_a71VD4jv("a"_fu, "b"_fu) - 1;

}

#endif

int main() { return fu_MAIN(); }

// N_NonTrivAutoCopy, N_RelaxRespec

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


#ifndef fu_NO_fdefs

static int& token_xu7lbhva(const int idx, const int col, int& sum)
{
    return (sum += (idx * col));
}

static int& token_s0834og9(const int idx, const int lidx, int& sum)
{
    return token_xu7lbhva(idx, (lidx - idx), sum);
}

static int test_FSaFHjhi(fu::view<int> tokens)
{
    const int lidx = 0;
    int sum = 0;
    for (int i = 0; i < tokens.size(); i++)
        token_s0834og9(tokens[i], lidx, sum);

    return sum;
}

int fu_MAIN()
{
    return test_FSaFHjhi((fu::slate<1, int> { 1 })) + 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn sum_each(a, b, Each)     a.Each + b.Each;

        fn hello(x) {
            if (x & 1) {
                fn Each(y) y    ? y * Each(y - 1)
                                : 100;

                return sum_each(x, x, fn Each);
            }
            else {
                fn Each(y) y    ? y * Each(y - 1)
                                : 10000;

                return sum_each(x, x, fn Each);
            }
        }

-----

-----

        fn sum_each(a, b, Each)     a.Each + b.Each;

        fn hello(x) {
            if (x & 1) {
                fn Each(y) y    ? y * Each(y - 1)
                                : 100;

                return sum_each(x, x, fn Each);
            }
            else {
                fn Each(y) y    ? y * Each(y - 1)
                                : 10000;

                return sum_each(x, x, fn Each);
            }
        }

        fn Each(y) y & 1    ? y
                            : y / 2 + Each(y / 2);

        fn main() _0::hello(1) - 2 * Each(100)
                + _0::hello(2) - 2 * Each(20000);

-----
inline static int Each_IC2ZawB1(int);
inline static int Each_BMoTYnmb(int);
inline static int Each_LaykfY0h(int);

#ifndef fu_NO_fdefs

inline static int Each_IC2ZawB1(const int y)
{
    if (y)
        return y * Each_IC2ZawB1((y - 1));
    else
        return 100;

}

                                #ifndef DEF_sum_each_5b04OiZPx8h
                                #define DEF_sum_each_5b04OiZPx8h
inline int sum_each_5b04OiZP(const int a, const int b)
{
    return Each_IC2ZawB1(a) + Each_IC2ZawB1(b);
}
                                #endif

inline static int Each_BMoTYnmb(const int y)
{
    if (y)
        return y * Each_BMoTYnmb((y - 1));
    else
        return 10000;

}

                                #ifndef DEF_sum_each_0ExZ4BfmCnd
                                #define DEF_sum_each_0ExZ4BfmCnd
inline int sum_each_0ExZ4Bfm(const int a, const int b)
{
    return Each_BMoTYnmb(a) + Each_BMoTYnmb(b);
}
                                #endif

                                #ifndef DEF_hello_DXBD5vmCUt8
                                #define DEF_hello_DXBD5vmCUt8
inline int hello_DXBD5vmC(const int x)
{
    if (x & 1)
    {
        return sum_each_5b04OiZP(x, x);
    }
    else
    {
        return sum_each_0ExZ4Bfm(x, x);
    };
}
                                #endif

inline static int Each_LaykfY0h(const int y)
{
    if (y & 1)
        return y;
    else
        return (y / 2) + Each_LaykfY0h((y / 2));

}

int fu_MAIN()
{
    return ((hello_DXBD5vmC(1) - (2 * Each_LaykfY0h(100))) + hello_DXBD5vmC(2)) - (2 * Each_LaykfY0h(20000));
}

#endif

int main() { return fu_MAIN(); }

// N_FnRecursion, N_FnResolve, N_DeadCode, N_DeadCall, N_UnusedCall, N_UnusedStmt

-----

        fn a        = "aaa";
        fn shorter  = "bb";
        fn greater  = "aac";

        return a <> shorter == +1
            && a <> greater == -1 ? 0 : 101;

-----
#include <fu/str.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

static fu_STR a_EJhRWC6k()
{
    return "aaa"_fu;
}

static fu_STR shorter_y1jV3SX3()
{
    return "bb"_fu;
}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

static fu_STR greater_hpa9AihZ()
{
    return "aac"_fu;
}

int fu_MAIN()
{
    if ((x3Cx3E_sTZRmMq1(a_EJhRWC6k(), shorter_y1jV3SX3()) == +1) && (x3Cx3E_sTZRmMq1(a_EJhRWC6k(), greater_hpa9AihZ()) == -1))
        return 0;
    else
        return 101;

}

#endif

int main() { return fu_MAIN(); }

-----

        fn &(a, b) {
            mut res = a;
            for (fieldname i: $a) res.i &= b.i;
            return res;
        }

        struct XY  { x: i32; y: i32 };
        struct UVW { u: i32; v: i32; w: i32 };

-----

-----

        fn &(a, b) {
            mut res = a;
            for (fieldname i: $a) res.i &= b.i;
            return res;
        }

        struct XY  { x: i32; y: i32 };
        struct UVW { u: i32; v: i32; w: i32 };

        import _0;

        fn main() {
            mut xy  =  XY(1, 2)    &  XY(2, 3);
            mut uvw = UVW(1, 2, 3) & UVW(2, 3, 4);
            return xy.y - uvw.v;
        }

-----
struct s_XY;
struct s_UVW;

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

                                #ifndef DEF_s_UVW
                                #define DEF_s_UVW
struct s_UVW
{
    int u;
    int v;
    int w;
    explicit operator bool() const noexcept
    {
        return false
            || u
            || v
            || w
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x26_8ZvvcaaEWbf
                                #define DEF_x26_8ZvvcaaEWbf
inline s_XY operator&(const s_XY& a, const s_XY& b)
{
    s_XY res { a };

    {
        res.x &= b.x;
        res.y &= b.y;
    };
    return res;
}
                                #endif

                                #ifndef DEF_x26_n9svQ3N2W37
                                #define DEF_x26_n9svQ3N2W37
inline s_UVW operator&(const s_UVW& a, const s_UVW& b)
{
    s_UVW res { a };

    {
        res.u &= b.u;
        res.v &= b.v;
        res.w &= b.w;
    };
    return res;
}
                                #endif

int fu_MAIN()
{
    const s_XY xy = (s_XY { 1, 2 } & s_XY { 2, 3 });
    const s_UVW uvw = (s_UVW { 1, 2, 3 } & s_UVW { 2, 3, 4 });
    return xy.y - uvw.v;
}

#endif

int main() { return fu_MAIN(); }

-----

        struct Projection { x: i32; y: i32 };
        fn Projection(a: i32, b: i32) = Projection(x: a*a, y: b*b);
        fn Projection(c: i32, d: i32) = Projection(x: c+c, y: d+d);

-----
struct s_Projection;

                                #ifndef DEF_s_Projection
                                #define DEF_s_Projection
struct s_Projection
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

#ifndef fu_NO_fdefs

s_Projection Projection_V3ST2uOu(const int a, const int b)
{
    return s_Projection { (a * a), (b * b) };
}

s_Projection Projection_22GOdrtt(const int c, const int d)
{
    return s_Projection { (c + c), (d + d) };
}

#endif

-----

        struct Projection { x: i32; y: i32 };
        fn Projection(a: i32, b: i32) = Projection(x: a*a, y: b*b);
        fn Projection(c: i32, d: i32) = Projection(x: c+c, y: d+d);

        import _0;

        fn main() {
            let p0 = Projection(a: 3,  4);
            let p1 = Projection(c: 20, 30);
            return p0.x + p1.x - 49;
        }

-----
struct s_Projection;
s_Projection Projection_V3ST2uOu(int, int);
s_Projection Projection_22GOdrtt(int, int);

                                #ifndef DEF_s_Projection
                                #define DEF_s_Projection
struct s_Projection
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

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_Projection p0 = Projection_V3ST2uOu(3, 4);
    const s_Projection p1 = Projection_22GOdrtt(20, 30);
    return (p0.x + p1.x) - 49;
}

#endif

int main() { return fu_MAIN(); }

-----

        pragma emit("
            void ccIncrX2(int& a, int b) {
                a += b * 2;
            }
        ");

        fn main() {
            mut a = 0;
            pragma emit("ccIncrX2(", a, ", 5);");
            return a - 10;
        }

-----
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


            void ccIncrX2(int& a, int b) {
                a += b * 2;
            }
        
#ifndef fu_NO_fdefs

int fu_MAIN()
{
    int a = 0;
    ccIncrX2(a, 5);

    return a - 10;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

-----

        fn desc(a: i32, b: i32) b < a;

        fn main() {
            mut vals = [ 1, 2 ];
            vals.sort(fn desc);
            return vals[0] - 2;
        }

-----
#include <fu/vec.h>
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static bool desc_V3ST2uOu(const int a, const int b)
{
    return b < a;
}

static void sort_hKSAOR28(fu_VEC<int>& a)
{
    int l {};
    int r {};

            (void) l;
            (void) r;
            auto* data = a.data_mut();
            std::sort(data, data + a.size(), [&](auto& l, auto& r)
            {
        ;
    bool lt = desc_V3ST2uOu(l, r);

                return lt;
            });
        ;
}

                                #ifndef DEF_sort_D3qhaJkXDzb
                                #define DEF_sort_D3qhaJkXDzb
inline void sort_D3qhaJkX(fu_VEC<int>& a)
{
    sort_hKSAOR28(a);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    sort_D3qhaJkX(vals);
    return vals[0] - 2;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

-----

        fn main() {
            mut vals = [ 1, 2 ];
            vals.sort(|a: i32, b: i32| b < a);
            return vals[0] - 2;
        }

-----
#include <fu/vec.h>
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static void sort_EbTnIXDb(fu_VEC<int>& a)
{
    int l {};
    int r {};

            (void) l;
            (void) r;
            auto* data = a.data_mut();
            std::sort(data, data + a.size(), [&](auto& l, auto& r)
            {
        ;
    bool BL_1_v {};
    bool lt = (__extension__ (
    {
        const int a_1 = l;
        const int b = r;
        BL_1_v = ((b < a_1));
    (void)0;}), bool(BL_1_v));

                return lt;
            });
        ;
}

                                #ifndef DEF_sort_YSztHrJ5914
                                #define DEF_sort_YSztHrJ5914
inline void sort_YSztHrJ5(fu_VEC<int>& a)
{
    sort_EbTnIXDb(a);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    sort_YSztHrJ5(vals);
    return vals[0] - 2;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

-----

        fn main() {
            mut vals = [ 1, 2 ];
            vals.sort(|a, b| b < a);
            return vals[0] - 2;
        }

-----
#include <fu/vec.h>
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static void sort_EbTnIXDb(fu_VEC<int>& a)
{
    int l {};
    int r {};

            (void) l;
            (void) r;
            auto* data = a.data_mut();
            std::sort(data, data + a.size(), [&](auto& l, auto& r)
            {
        ;
    bool lt = (r < l);

                return lt;
            });
        ;
}

                                #ifndef DEF_sort_YSztHrJ5914
                                #define DEF_sort_YSztHrJ5914
inline void sort_YSztHrJ5(fu_VEC<int>& a)
{
    sort_EbTnIXDb(a);
}
                                #endif

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    sort_YSztHrJ5(vals);
    return vals[0] - 2;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

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
#include <fu/vec.h>
#include <algorithm>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static void sort_Lo9WvHCZ(fu_VEC<int>& a, const int xOr)
{
    int l {};
    int r {};

            (void) l;
            (void) r;
            auto* data = a.data_mut();
            std::sort(data, data + a.size(), [&](auto& l, auto& r)
            {
        ;
    bool BL_1_v {};
    bool lt = (__extension__ (
    {
        const int a_1 = l;
        const int b = r;
        BL_1_v = (((a_1 ^ xOr) < (b ^ xOr)));
    (void)0;}), bool(BL_1_v));

                return lt;
            });
        ;
}

                                #ifndef DEF_sort_bGkK8mmvke2
                                #define DEF_sort_bGkK8mmvke2
inline void sort_bGkK8mmv(fu_VEC<int>& a, const int xOr)
{
    sort_Lo9WvHCZ(a, xOr);
}
                                #endif

static void test_6tyEDuck(fu_VEC<int>& vals, const int xOr)
{
    sort_bGkK8mmv(vals, xOr);
}

int fu_MAIN()
{
    fu_VEC<int> vals = fu_VEC<int> { fu::slate<2, int> { 1, 2 } };
    test_6tyEDuck(vals, 3);
    return vals[0] - 2;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_RelaxRespec

-----

        fn main() {
            mut arr = [ 1, 2, 3, 4 ];

            arr.par::each: |it| it *= 2;

            mut sum = 0;
            for (mut i = 0; i < arr.len; i++)
                sum += arr[i];

            return sum - 2 - 4 - 6 - 8;
        }

-----

-----

        fn seq__each(a: [$T], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut arr = [ 1, 2, 3, 4 ];
            mut sum = 0;


            arr.par::each: |it| 
                sum += it *= 2;

            return sum - 2 - 4 - 6 - 8;
        }

-----
par.fu @2:5:

[2m      | [0m
    2 | pub [31;1mpurectx[0m fn each(arr: [$T], visit, min!?: int)
[2m      |     parallel_for(:min, end: arr.len): |i|[0m
[2m      |         visit(arr[i], i?: i);[0m

	[35;1mfn[0m [34;1meach[0m is not purectx, writes to implicit argument [34;1mmain:sum[0m:

            via [35;1mfn[0m [34;1mparallel_for[0m at /Users/hdachev/fu/lib/par.fu@3:17:

[2m      | [0m
[2m      | pub purectx fn each(arr: [$T], visit, min!?: int)[0m
    3 |     parallel_for[31;1m([0m:min, end: arr.len): |i|
[2m      |         visit(arr[i], i?: i);[0m
[2m      | [0m

            via [35;1m__native[0m [34;1m+=[0m at 12:21:

[2m      | [0m
[2m      |             arr.par::each: |it| [0m
   12 |                 sum [31;1m+=[0m it *= 2;
[2m      | [0m
[2m      |             return sum - 2 - 4 - 6 - 8;[0m

            

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

-----

        fn seq__each(a: [$T], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut arr = [ 1, 2, 3, 4 ];
            mut sum = 0;


            arr.seq__each: |it| 
                sum += it *= 2;

            return sum - 2 - 4 - 6 - 8;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void seq__each_VIDSU8WG(fu::view_mut<int> a, int& sum)
{
    for (int i = 0; i < a.size(); i++)
    {
        int& it = a.mutref(i);
        sum += (it *= 2);
    };
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<4, int> { 1, 2, 3, 4 } };
    int sum = 0;
    seq__each_VIDSU8WG(arr, sum);
    return (((sum - 2) - 4) - 6) - 8;
}

#endif

int main() { return fu_MAIN(); }

-----

        fn seq__each(a: [$T], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut arr = [ 1, 2, 3, 4 ];


            arr.par::each: |it| 
                if ((it *= 2) > 4)
                    break;

            mut sum = 0;
            for (mut i = 0; i < arr.len; i++)
                sum += arr[i];

            return sum - 2 - 4 - 6 - 4/*unchanged after break*/;
        }

-----
par.fu @28:1:

[2m      | // TODO nothrow - can't deal with exceptions here, we need a check for this[0m
[2m      | [0m
   28 | [31;1mnovec[0m noflow fn parallel_for(min!, mut end!, visit)
[2m      | {[0m
[2m      |     mut start = end & 0;[0m

	Function is not noflow: [31;1mContains non-local control flow.[0m

        Solving [35;1mfn[0m [34;1meach[0m /Users/hdachev/fu/lib/par.fu:2:5
                [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:6:9

-----

        fn seq__each(a: [$T], fn)
            for (mut i = 0; i < a.len; i++)
                fn(a[i]);

        fn main() {
            mut arr = [ 1, 2, 3, 4 ];


            arr.seq__each: |it| 
                if ((it *= 2) > 4)
                    break;

            mut sum = 0;
            for (mut i = 0; i < arr.len; i++)
                sum += arr[i];

            return sum - 2 - 4 - 6 - 4/*unchanged after break*/;
        }

-----
#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

inline static void seq__each_Y0cHAwwk(fu::view_mut<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int& it = a.mutref(i);
        if ((it *= 2) > 4)
            return;

    };
}

int fu_MAIN()
{
    fu_VEC<int> arr = fu_VEC<int> { fu::slate<4, int> { 1, 2, 3, 4 } };
    seq__each_Y0cHAwwk(arr);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return (((sum - 2) - 4) - 6) - 4;
}

#endif

int main() { return fu_MAIN(); }

// N_RelaxRespec

-----

        fn test(ref arr: i32[])
            arr.par::each: |v, i| v += i;

        fn main() {
            let N = 1087 * 1091;

            mut orig: i32[];
            orig.resize(N);

            mut arr = orig;
            arr.test();

            if (arr.len != N || arr.len != orig.len)
                return 1;

            for (mut i = 0; i < N; i++)
                if (orig[i] != 0)
                    return 2;

            for (mut i = 0; i < N; i++)
                if (arr[i] != i)
                    return 3;

            return 0;
        }

-----

-----

        fn main() {
            let i: i8 = 0;

            return i;        
        }

-----
_0.fu @5:20:

[2m      |             let i: i8 = 0;[0m
[2m      | [0m
    5 |             return [31;1mi[0m;        
[2m      |         }[0m
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- i8: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:2:9

-----

        fn main() {
            let i: i8 = 0;

            return i.i32;    
        }

-----
#include <fu/int.h>


#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const fu::i8 i = fu::i8(0);
    return int(i);
}

#endif

int main() { return fu_MAIN(); }

-----

        primitive s32: i32;

        fn main() {
            let i: s32 = 0;

            return i;        
        }

-----
_0.fu @7:20:

[2m      |             let i: s32 = 0;[0m
[2m      | [0m
    7 |             return [31;1mi[0m;        
[2m      |         }[0m
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- i32h1: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        primitive s32: i32;

        fn main() {
            let i: s32 = 0;

            return i.i32;    
        }

-----
typedef int s_s32;

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_s32 i = 0;
    return int(i);
}

#endif

int main() { return fu_MAIN(); }

-----

        enum Enum { None = 0 };

        fn main() {
            let e = None;

            return e;        
        }

-----
_0.fu @7:20:

[2m      |             let e = None;[0m
[2m      | [0m
    7 |             return [31;1me[0m;        
[2m      |         }[0m
[2m      | [0m

	Actual return type does not match annotation: i32: copy <- e8h1: copy

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----

        enum Enum { None = 0 };

        fn main() {
            let e = None;

            return e.i32;    
        }

-----
#include <fu/int.h>

enum s_Enum: fu::u8;

                                #ifndef DEF_s_Enum
                                #define DEF_s_Enum
enum s_Enum: fu::u8
{
    s_Enum_None = 0u,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_Enum e = s_Enum_None;
    return int(e);
}

#endif

int main() { return fu_MAIN(); }

-----

        enum Test { A = 5; B; C };
        fn main()

            C - 7;      

-----
_0.fu @5:15:

[2m      |         fn main()[0m
[2m      | [0m
    5 |             C [31;1m-[0m 7;      
[2m      | [0m

	Bad call to [34;1m-[0m (e8h1: copy, i32: copy): 

	[35;1mtemplate[0m [34;1m-[0m: Could not specialize: Cannot solve argument [34;1mb[0m pattern for i32: copy

	[35;1mtemplate[0m [34;1m-[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:3:9

-----

        enum Test { A = 5; B; C };
        fn main()

            C.i32 - 7;  

-----
#include <fu/int.h>

enum s_Test: fu::u8;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
enum s_Test: fu::u8
{
    s_Test_A = 5u,
    s_Test_B = 6u,
    s_Test_C = 7u,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(s_Test_C) - 7;
}

#endif

int main() { return fu_MAIN(); }

-----


        enum       Test: i32 { A1; A2; M5 = 5; A6 };

        fn main()
            A1.i32 + A2.i32 * 10 + M5.i32 * 100 + A6.i32 * 1000
                == 6521 ? 0 : 1;

-----
enum s_Test: int;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
enum s_Test: int
{
    s_Test_A1 = 1,
    s_Test_A2 = 2,
    s_Test_M5 = 5,
    s_Test_A6 = 6,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    if ((((int(s_Test_A1) + (int(s_Test_A2) * 10)) + (int(s_Test_M5) * 100)) + (int(s_Test_A6) * 1000)) == 6521)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----


        primitive  Test: i32 { A1; A2; M5 = 5; A6 };

        fn main()
            A1.i32 + A2.i32 * 10 + M5.i32 * 100 + A6.i32 * 1000
                == 6521 ? 0 : 1;

-----
typedef int s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
inline constexpr s_Test s_Test_A1 = 1;
inline constexpr s_Test s_Test_A2 = 2;
inline constexpr s_Test s_Test_M5 = 5;
inline constexpr s_Test s_Test_A6 = 6;
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    if ((((int(s_Test_A1) + (int(s_Test_A2) * 10)) + (int(s_Test_M5) * 100)) + (int(s_Test_A6) * 1000)) == 6521)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----


        enum          Test: i32 { A; B };
        fn main() (B - A).i32 - 1;

-----
_0.fu @4:22:

[2m      | [0m
[2m      |         enum          Test: i32 { A; B };[0m
    4 |         fn main() (B [31;1m-[0m A).i32 - 1;
[2m      | [0m

	Bad call to [34;1m-[0m (e32h1: copy, e32h1: copy): 

	[35;1mtemplate[0m [34;1m-[0m: Could not specialize: No body pattern matched.

	[35;1mtemplate[0m [34;1m-[0m: Wrong number of arguments: expects 1, got 2.

        Solving [35;1mfn[0m [34;1mmain[0m /Users/hdachev/fu/__tests__/_0.fu:4:9

-----


        primitive     Test: i32 { A; B };
        fn main() (B - A).i32 - 1;

-----
typedef int s_Test;

                                #ifndef DEF_s_Test
                                #define DEF_s_Test
inline constexpr s_Test s_Test_A = 1;
inline constexpr s_Test s_Test_B = 2;
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int((s_Test_B - s_Test_A)) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        enum EnumA: i32;
        enum EnumB: EnumA { Zero = 0 };
        fn main() Zero.i32;

-----
enum s_EnumB: int;

                                #ifndef DEF_s_EnumB
                                #define DEF_s_EnumB
enum s_EnumB: int
{
    s_EnumB_Zero = 0,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int(s_EnumB_Zero);
}

#endif

int main() { return fu_MAIN(); }

-----

        primitive PrimA: i32;
        primitive PrimB: PrimA { Zero = 0; One };
        fn main() (One - 1).i32;

-----
typedef int s_PrimB;

                                #ifndef DEF_s_PrimB
                                #define DEF_s_PrimB
inline constexpr s_PrimB s_PrimB_Zero = 0;
inline constexpr s_PrimB s_PrimB_One = 1;
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return int((s_PrimB_One - 1));
}

#endif

int main() { return fu_MAIN(); }

-----

        primitive PrimA: i32;
        primitive PrimB: PrimA { Zero = 0; One };


        fn and_decr(ref prim: PrimB)
        {
            mut res = prim - 1;
            prim &&= res;
            return prim;
        }


        fn main() {
            mut r = One;
            return r.and_decr.i32;
        }

-----
typedef int s_PrimB;

                                #ifndef DEF_s_PrimB
                                #define DEF_s_PrimB
inline constexpr s_PrimB s_PrimB_Zero = 0;
inline constexpr s_PrimB s_PrimB_One = 1;
                                #endif

#ifndef fu_NO_fdefs

static s_PrimB& and_decr_Xq7D2h6H(s_PrimB& prim)
{
    const s_PrimB res = (prim - 1);
    if (prim)
        prim = res;

    return prim;
}

int fu_MAIN()
{
    s_PrimB r = s_PrimB_One;
    return int(and_decr_Xq7D2h6H(r));
}

#endif

int main() { return fu_MAIN(); }

-----

        primitive PrimA: i32;
        primitive PrimB: PrimA { Zero = 0; One };


        fn and_decr(ref prim: PrimB)
            prim &&= prim - 1;


        fn main() {
            mut r = One;
            return r.and_decr.i32;
        }

-----
typedef int s_PrimB;

                                #ifndef DEF_s_PrimB
                                #define DEF_s_PrimB
inline constexpr s_PrimB s_PrimB_Zero = 0;
inline constexpr s_PrimB s_PrimB_One = 1;
                                #endif

#ifndef fu_NO_fdefs

static s_PrimB& and_decr_Xq7D2h6H(s_PrimB& prim)
{
    return !prim ? prim : (prim = (prim - 1));
}

int fu_MAIN()
{
    s_PrimB r = s_PrimB_One;
    return int(and_decr_Xq7D2h6H(r));
}

#endif

int main() { return fu_MAIN(); }

-----

        enum Hey { foo; };
        fn test(hey: Hey) hey.i32;
        fn main() test("foo") - 1;

-----
#include <fu/int.h>

enum s_Hey: fu::u8;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
enum s_Hey: fu::u8
{
    s_Hey_foo = 1u,
};
                                #endif

#ifndef fu_NO_fdefs

static int test_lFx7T8Iz(const s_Hey hey)
{
    return int(hey);
}

int fu_MAIN()
{
    return test_lFx7T8Iz(s_Hey_foo) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        enum Greet { hello; world };
        fn main()
            hello ~ " " ~ world == "hello world"
                ? 0 : 1;

-----
#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

enum s_Greet: fu::u8;

                                #ifndef DEF_s_Greet
                                #define DEF_s_Greet
enum s_Greet: fu::u8
{
    s_Greet_hello = 1u,
    s_Greet_world = 2u,
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_str_CoZ9Xr7op3l
                                #define DEF_str_CoZ9Xr7op3l
inline fu_STR str_CoZ9Xr7o(const s_Greet n)
{
    if (n == s_Greet_hello)
        return "hello"_fu;
    else if (n == s_Greet_world)
        return "world"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    if (x7E_sTZRmMq1(x7E_sTZRmMq1(str_CoZ9Xr7o(s_Greet_hello), " "_fu), str_CoZ9Xr7o(s_Greet_world)) == "hello world"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum Greet { hello; world };
        fn woot(hi: Greet) hi == "hello";
        fn main() hello.woot ? 0 : 1;

-----
#include <fu/int.h>

enum s_Greet: fu::u8;

                                #ifndef DEF_s_Greet
                                #define DEF_s_Greet
enum s_Greet: fu::u8
{
    s_Greet_hello = 1u,
    s_Greet_world = 2u,
};
                                #endif

#ifndef fu_NO_fdefs

static bool woot_OAFFN8y7(const s_Greet hi)
{
    return hi == s_Greet_hello;
}

int fu_MAIN()
{
    if (woot_OAFFN8y7(s_Greet_hello))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum Greet { hello; world };
        fn h() hello;
        fn w() world;

-----
#include <fu/int.h>

enum s_Greet: fu::u8;

                                #ifndef DEF_s_Greet
                                #define DEF_s_Greet
enum s_Greet: fu::u8
{
    s_Greet_hello = 1u,
    s_Greet_world = 2u,
};
                                #endif

#ifndef fu_NO_fdefs

s_Greet h_H9fhQUVP()
{
    return s_Greet_hello;
}

s_Greet w_H9fhQUVP()
{
    return s_Greet_world;
}

#endif

-----

        enum Greet { hello; world };
        fn h() hello;
        fn w() world;

        fn main()
            _0::h() ~ " " ~ _0::w() == "hello world"
                ? 0 : 1;

-----
#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

enum s_Greet: fu::u8;
s_Greet h_H9fhQUVP();
s_Greet w_H9fhQUVP();

                                #ifndef DEF_s_Greet
                                #define DEF_s_Greet
enum s_Greet: fu::u8
{
    s_Greet_hello = 1u,
    s_Greet_world = 2u,
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_str_CoZ9Xr7op3l
                                #define DEF_str_CoZ9Xr7op3l
inline fu_STR str_CoZ9Xr7o(const s_Greet n)
{
    if (n == s_Greet_hello)
        return "hello"_fu;
    else if (n == s_Greet_world)
        return "world"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

int fu_MAIN()
{
    if (x7E_sTZRmMq1(x7E_sTZRmMq1(str_CoZ9Xr7o(h_H9fhQUVP()), " "_fu), str_CoZ9Xr7o(w_H9fhQUVP())) == "hello world"_fu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum _0 { A; B };

-----

-----

        enum _0 { A; B };

        fn test(::_0) _0.i32;
        fn main() "A".test - _0::A.i32;

-----
#include <fu/int.h>

enum s__0: fu::u8;

                                #ifndef DEF_s__0
                                #define DEF_s__0
enum s__0: fu::u8
{
    s__0_A = 1u,
    s__0_B = 2u,
};
                                #endif

#ifndef fu_NO_fdefs

static int test_ovOsm0nl(const s__0 _0)
{
    return int(_0);
}

int fu_MAIN()
{
    return test_ovOsm0nl(s__0_A) - int(s__0_A);
}

#endif

int main() { return fu_MAIN(); }

-----

        enum _0 { A; B };

-----

-----

        enum _0 { A; B };

        fn test(x: ::_0 = "B") x.i32;
        fn main() test - _0::B.i32;

-----
#include <fu/int.h>

enum s__0: fu::u8;

                                #ifndef DEF_s__0
                                #define DEF_s__0
enum s__0: fu::u8
{
    s__0_A = 1u,
    s__0_B = 2u,
};
                                #endif

#ifndef fu_NO_fdefs

static int test_o43aYuo4(const s__0 x)
{
    return int(x);
}

int fu_MAIN()
{
    return test_o43aYuo4(s__0_B) - int(s__0_B);
}

#endif

int main() { return fu_MAIN(); }

-----

        enum Enum { A = 0; B };
        fn inner(x: Enum) x.i32;
        fn outer(x: i32) inner(x & 1 ? "B" : "A");
        fn main() outer(0);

-----
#include <fu/int.h>

enum s_Enum: fu::u8;

                                #ifndef DEF_s_Enum
                                #define DEF_s_Enum
enum s_Enum: fu::u8
{
    s_Enum_A = 0u,
    s_Enum_B = 1u,
};
                                #endif

#ifndef fu_NO_fdefs

static int inner_wUUvBCys(const s_Enum x)
{
    return int(x);
}

static int outer_DXBD5vmC(const int x)
{
    return inner_wUUvBCys(((x & 1) ? s_Enum_B : s_Enum_A));
}

int fu_MAIN()
{
    return outer_DXBD5vmC(0);
}

#endif

int main() { return fu_MAIN(); }

-----

        flags Flags { A; B; C; D };

        fn main() {
            mut flags = A | C;
            return flags.i32 == 5 ? 0 : 1;
        }

-----
#include <fu/int.h>

typedef fu::u8 s_Flags;

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_A = s_Flags(1u);
inline constexpr s_Flags s_Flags_B = s_Flags(2u);
inline constexpr s_Flags s_Flags_C = s_Flags(4u);
inline constexpr s_Flags s_Flags_D = s_Flags(8u);

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_A
    | s_Flags_B
    | s_Flags_C
    | s_Flags_D;
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_Flags flags = s_Flags((s_Flags_A | s_Flags_C));
    if (int(flags) == 5)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        flags Flags: i32 { A; B };

        fn main() {
            mut hello = 5;
            mut world = hello.Flags;
            return world.i32 - 1;
        }

-----
typedef int s_Flags;

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_A = 1;
inline constexpr s_Flags s_Flags_B = 2;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_A
    | s_Flags_B;
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const int hello = 5;
    const s_Flags world = s_Flags((int(hello)) & MASK_s_Flags);
    return int(world) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        flags Hey: u8 { A; B };
        fn main() {
            mut flags = A | B;
            flags &= ~B;
            return flags.i32 - 1;
        }

-----
#include <fu/int.h>

typedef fu::u8 s_Hey;

                                #ifndef DEF_s_Hey
                                #define DEF_s_Hey
inline constexpr s_Hey s_Hey_A = s_Hey(1u);
inline constexpr s_Hey s_Hey_B = s_Hey(2u);

inline constexpr s_Hey MASK_s_Hey
    = s_Hey_A
    | s_Hey_B;
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    s_Hey flags = s_Hey((s_Hey_A | s_Hey_B));
    flags &= s_Hey(~s_Hey_B);
    return int(flags) - 1;
}

#endif

int main() { return fu_MAIN(); }

-----

        enum thing { i32; int; bool }

        // So the problem is the retval annotation for fn ==(template): bool
        //  fails to resolve as it conflicts with enumv from thing here.
        //
        // I'm not terribly sure what we want to do about it,
        //  it's the ambiguity thing again - template sees the enum on expansion,
        //   so it does kinda make sense for thing not to compile,
        //    otherwise imagine the original bool goes away,
        //     it'd fallback to the enumv here, which is exactly not what we want.
        //
        // Perhaps the scoping rules for templates don't make so much sense,
        //  if we didn't make everything from local scope visible
        //   they'll also compile faster.
        //
        fn isInt (k: thing) k == "i32" || k == "int";
        fn isBool(k: thing) k == "bool";
        fn main() isInt("i32") && isBool("bool") ? 0 : 1;

-----
#include <fu/int.h>

enum s_thing: fu::u8;

                                #ifndef DEF_s_thing
                                #define DEF_s_thing
enum s_thing: fu::u8
{
    s_thing_i32 = 1u,
    s_thing_int = 2u,
    s_thing_bool = 3u,
};
                                #endif

#ifndef fu_NO_fdefs

static bool isInt_Y3YxfPRI(const s_thing k)
{
    return (k == s_thing_i32) || (k == s_thing_int);
}

static bool isBool_Y3YxfPRI(const s_thing k)
{
    return k == s_thing_bool;
}

int fu_MAIN()
{
    if (isInt_Y3YxfPRI(s_thing_i32) && isBool_Y3YxfPRI(s_thing_bool))
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum ID: u64 {
            // clang warned with -Wimplicitly-unsigned-literal
            CustomIDs = 0x8000_0000_0000_0000;
            BitmapFontAtlas;
        };

        fn main() {
            mut id: u64 = BitmapFontAtlas.u64;
            // meawhile this outputted the underscores
            return id == 0x8000_0000_0000_0001 ? 0 : 1;
        }

-----
#include <cstdint>

enum s_ID: uint64_t;

                                #ifndef DEF_s_ID
                                #define DEF_s_ID
enum s_ID: uint64_t
{
    s_ID_CustomIDs = 0x8000000000000000ull,
    s_ID_BitmapFontAtlas = 9223372036854775809ull,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const uint64_t id = uint64_t(s_ID_BitmapFontAtlas);
    if (id == 0x8000000000000001ull)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum ID: u32 {
            SecondLast = 0xffff_fffe;
            Last;

            NoRoom; 
        };

        fn main() {
            return Last.u32 == 0xffff_ffff ? 0 : 1;
        }

-----
_0.fu @3:26:

[2m      | [0m
[2m      |         enum ID: u32 {[0m
    3 |             SecondLast = [31;1m0xffff_fffe[0m;
[2m      |             Last;[0m
[2m      | [0m

	Primitive range exhausted: requires 64 bits, got 32.

        Solving [35;1mtype[0m [34;1mID[0m

-----

        enum ID: u32 {
            SecondLast = 0xffff_fffe;
            Last;

        };

        fn main() {
            return Last.u32 == 0xffff_ffff ? 0 : 1;
        }

-----
enum s_ID: unsigned;

                                #ifndef DEF_s_ID
                                #define DEF_s_ID
enum s_ID: unsigned
{
    s_ID_SecondLast = 0xfffffffeu,
    s_ID_Last = 4294967295u,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    if (unsigned(s_ID_Last) == 0xffffffffu)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum ID: u64 {
            SecondLast = 0xffff_ffff_ffff_fffe;
            Last;

            NoRoom; 
        };

        fn main() {
            return Last.u64 == 0xffff_ffff_ffff_ffff ? 0 : 1;
        }

-----
_0.fu @3:26:

[2m      | [0m
[2m      |         enum ID: u64 {[0m
    3 |             SecondLast = [31;1m0xffff_ffff_ffff_fffe[0m;
[2m      |             Last;[0m
[2m      | [0m

	Failed to auto-increment, range exhausted.

        Solving [35;1mtype[0m [34;1mID[0m

-----

        enum ID: u64 {
            SecondLast = 0xffff_ffff_ffff_fffe;
            Last;

        };

        fn main() {
            return Last.u64 == 0xffff_ffff_ffff_ffff ? 0 : 1;
        }

-----
#include <cstdint>

enum s_ID: uint64_t;

                                #ifndef DEF_s_ID
                                #define DEF_s_ID
enum s_ID: uint64_t
{
    s_ID_SecondLast = 0xfffffffffffffffeull,
    s_ID_Last = 18446744073709551615ull,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    if (uint64_t(s_ID_Last) == 0xffffffffffffffffull)
        return 0;
    else
        return 1;

}

#endif

int main() { return fu_MAIN(); }

-----

        enum ID { A = 1 };
        enum IDOffset { B = 10 };
        fn offset(a: ID, b: IDOffset) = a.i32 + b.i32;

-----
#include <fu/int.h>

enum s_ID: fu::u8;
enum s_IDOffset: fu::u8;

                                #ifndef DEF_s_ID
                                #define DEF_s_ID
enum s_ID: fu::u8
{
    s_ID_A = 1u,
};
                                #endif

                                #ifndef DEF_s_IDOffset
                                #define DEF_s_IDOffset
enum s_IDOffset: fu::u8
{
    s_IDOffset_B = 10u,
};
                                #endif

#ifndef fu_NO_fdefs

int offset_5Hho9CWw(const s_ID a, const s_IDOffset b)
{
    return int(a) + int(b);
}

#endif

-----

        enum ID { A = 1 };
        enum IDOffset { B = 10 };
        fn offset(a: ID, b: IDOffset) = a.i32 + b.i32;

        fn main() = _0::A.offset(_0::B) - 11;

-----
#include <fu/int.h>

enum s_ID: fu::u8;
enum s_IDOffset: fu::u8;
int offset_5Hho9CWw(s_ID, s_IDOffset);

                                #ifndef DEF_s_ID
                                #define DEF_s_ID
enum s_ID: fu::u8
{
    s_ID_A = 1u,
};
                                #endif

                                #ifndef DEF_s_IDOffset
                                #define DEF_s_IDOffset
enum s_IDOffset: fu::u8
{
    s_IDOffset_B = 10u,
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    return offset_5Hho9CWw(s_ID_A, s_IDOffset_B) - 11;
}

#endif

int main() { return fu_MAIN(); }

-----

        union union_ui {
            i: i32;
            u: u32;
        }

        fn main() {
            mut ui = union_ui(i: -1);
            return (ui.u - 0xffffffff).i32;
        }

-----
union s_union_ui;

                                #ifndef DEF_s_union_ui
                                #define DEF_s_union_ui
union s_union_ui
{
    int i;
    unsigned u;
    explicit operator bool() const noexcept
    {
        return false
            || i
            || u
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

int fu_MAIN()
{
    const s_union_ui ui = s_union_ui { -1 };
    return int((ui.u - 0xffffffffu));
}

#endif

int main() { return fu_MAIN(); }

-----

        fn does_throw(mut x: i32) {
            if (x & 1)          return x;
            mut str = "";
            while (x--)         str ~= x;
            throw(str);
        }

        nothrow fn does_catch(mut y: i32) {
            try                 return does_throw(y);
            catch (e)           return e.len;
        }


        nothrow 
        fn doesnt_catch(mut z: i32) {
            if (z & 2)          return does_throw(z);
            else                return does_catch(z);
        }

        fn main() = doesnt_catch(1) - 1;

-----
_0.fu @15:9:

[2m      | [0m
[2m      | [0m
   15 |         [31;1mnothrow[0m 
[2m      |         fn doesnt_catch(mut z: i32) {[0m
[2m      |             if (z & 2)          return does_throw(z);[0m

	[35;1mfn[0m [34;1mdoesnt_catch[0m is not nothrow, throws here:

            via [35;1mfn[0m [34;1mdoes_throw[0m at 17:50:

[2m      |         nothrow [0m
[2m      |         fn doesnt_catch(mut z: i32) {[0m
   17 |             if (z & 2)          return does_throw[31;1m([0mz);
[2m      |             else                return does_catch(z);[0m
[2m      |         }[0m

            via [35;1m__native[0m [34;1m
<fu/never.h>
fu::fail[0m at 6:18:

[2m      |             mut str = "";[0m
[2m      |             while (x--)         str ~= x;[0m
    6 |             throw[31;1m([0mstr);
[2m      |         }[0m
[2m      | [0m

            

-----

        fn does_throw(mut x: i32) {
            if (x & 1)          return x;
            mut str = "";
            while (x--)         str ~= x;
            throw(str);
        }

        nothrow fn does_catch(mut y: i32) {
            try                 return does_throw(y);
            catch (e)           return e.len;
        }


        fn doesnt_catch(mut z: i32) {
            if (z & 2)          return does_throw(z);
            else                return does_catch(z);
        }

        fn main() = doesnt_catch(1) - 1;

-----
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_x7Ex3D_EHZEiPh81F6
                                #define DEF_x7Ex3D_EHZEiPh81F6
inline fu_STR& x7Ex3D_EHZEiPh8(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static int does_throw_DXBD5vmC(int x)
{
    if (x & 1)
        return x;
    else
    {
        /*MOV*/ fu_STR str {};
        while (x--)
            x7Ex3D_EHZEiPh8(str, fu::i64dec(x));

        fu::fail(static_cast<fu_STR&&>(str));
    };
}

static int does_catch_9qj2j6Eo(const int y)
{

    try
    {
        return does_throw_DXBD5vmC(int(y));
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

        return e.size();
    }
;
}

static int doesnt_catch_kAazLQLd(const int z)
{
    if (z & 2)
        return does_throw_DXBD5vmC(int(z));
    else
        return does_catch_9qj2j6Eo(int(z));

}

int fu_MAIN()
{
    return doesnt_catch_kAazLQLd(1) - 1;
}

#endif

int main() { return fu_MAIN(); }

// N_DeadCode

-----

        fn has_fx() {
            mut res = 0;
            pragma output("
                static int counter;
                "res"    = counter++;
            ");
            return res;
        }

        fn not_dead_mutually_rec_a(x: i32) {
            if (x > 0) {
                not_dead_mutually_rec_b(x - 1);
                has_fx();
            }
        }

        fn not_dead_mutually_rec_b(x: i32) {
            if (x > 0) {
                not_dead_mutually_rec_a(x - 1);
                has_fx();
            }
        }

        fn main() {

            not_dead_mutually_rec_b(2); 
            return has_fx() - 2;
        }

-----
static void not_dead_mutually_rec_a_DXBD5vmC(int);
static void not_dead_mutually_rec_b_DXBD5vmC(int);
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static int has_fx_H9fhQUVP()
{
    int res = 0;

                static int counter;
                res    = counter++;
            ;
    return res;
}

static void not_dead_mutually_rec_a_DXBD5vmC(const int x)
{
    if (x > 0)
    {
        not_dead_mutually_rec_b_DXBD5vmC((x - 1));
        has_fx_H9fhQUVP();
    };
}

static void not_dead_mutually_rec_b_DXBD5vmC(const int x)
{
    if (x > 0)
    {
        not_dead_mutually_rec_a_DXBD5vmC((x - 1));
        has_fx_H9fhQUVP();
    };
}

int fu_MAIN()
{
    not_dead_mutually_rec_b_DXBD5vmC(2);
    return has_fx_H9fhQUVP() - 2;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_FnRecursion, N_FnReopen, N_DeadCode

-----

        fn has_fx() {
            mut res = 0;
            pragma output("
                static int counter;
                "res"    = counter++;
            ");
            return res;
        }

        fn not_dead_mutually_rec_a(x: i32) {
            if (x > 0) {
                not_dead_mutually_rec_b(x - 1);
                has_fx();
            }
        }

        fn not_dead_mutually_rec_b(x: i32) {
            if (x > 0) {
                not_dead_mutually_rec_a(x - 1);
                has_fx();
            }
        }

        fn main() {

            not_dead_mutually_rec_a(2); 
            return has_fx() - 2;
        }

-----
static void not_dead_mutually_rec_b_DXBD5vmC(int);
static void not_dead_mutually_rec_a_DXBD5vmC(int);
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static int has_fx_H9fhQUVP()
{
    int res = 0;

                static int counter;
                res    = counter++;
            ;
    return res;
}

static void not_dead_mutually_rec_b_DXBD5vmC(const int x)
{
    if (x > 0)
    {
        not_dead_mutually_rec_a_DXBD5vmC((x - 1));
        has_fx_H9fhQUVP();
    };
}

static void not_dead_mutually_rec_a_DXBD5vmC(const int x)
{
    if (x > 0)
    {
        not_dead_mutually_rec_b_DXBD5vmC((x - 1));
        has_fx_H9fhQUVP();
    };
}

int fu_MAIN()
{
    not_dead_mutually_rec_a_DXBD5vmC(2);
    return has_fx_H9fhQUVP() - 2;
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_FnRecursion, N_FnReopen, N_DeadCode

-----

        fn no_fx() {
            mut res = 0;
            pragma clock("
                static int counter;
                "res"  = counter++;
            ");
            return res;
        }

        fn test(lax x: i32) {
            x & 1 && no_fx();
            x & 2 || no_fx();
            if (!no_fx) no_fx(); else no_fx();
            for (mut i = 1; i--> 0; no_fx()) no_fx();

            // the idea is that everything above should go,
            //  and just this one call to no_fx will remain.
            return no_fx();
        }

        fn main() = test(1);

-----
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static int no_fx_H9fhQUVP()
{
    int res = 0;

                static int counter;
                res  = counter++;
            ;
    return res;
}

static int test_XzHONHMl(const int)
{
    for (int i = 1; i-- > 0; );
    return no_fx_H9fhQUVP();
}

int fu_MAIN()
{
    return test_XzHONHMl(1);
}

#endif

int main() { return fu_MAIN(); }

#pragma GCC diagnostic pop

// N_UnusedCall, N_UnusedStmt, N_UnusedAndOr, N_UnusedIfElse

-----

        fn lex(src: string) {
            mut idx = 0;
            let end = src.len;
            while (idx < end) {
                let c = src[idx++]; // bug in discard(if) unused this var
                if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c == '_' || c >= '0' && c <= '9') {
                    //
                }
                else {
                    idx--;
                    break;
                }
            }
            return idx;
        }

        fn main() = "hello!".lex - 5;

-----
#include <fu/str.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

static int lex_FFh8NBMS(fu::view<char> src)
{
    int idx = 0;
    const int end = src.size();
    while (idx < end)
    {
        const char c = src[idx++];
        if (!(((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || (c == '_') || ((c >= '0') && (c <= '9'))))
        {
            idx--;
            break;
        };
    };
    return idx;
}

int fu_MAIN()
{
    return lex_FFh8NBMS("hello!"_fu) - 5;
}

#endif

int main() { return fu_MAIN(); }

// N_UnusedIfElse

-----
