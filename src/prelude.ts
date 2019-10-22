export const prelude_src = `


// Some lolcode.

fn __native_pure(): never never;


// Arithmetics.

fn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;
fn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;

fn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;
fn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;
fn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;
fn /(a: $T, b: $T)
    // case ($T -> @floating_point):                       $T __native_pure;
    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;
    case ($T -> @integral):          $T __native_pure;

fn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;
fn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;
fn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;
fn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;

fn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;


// Bitwise.

fn ~(a: $T)                 case ($T -> @integral):     $T __native_pure;
fn &(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;
fn |(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;
fn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;
fn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;
fn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;

fn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;
fn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;
fn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;


// Logic.

fn true (): bool __native_pure;
fn false(): bool __native_pure;

fn  !(a: &$T): bool __native_pure;
fn !!(a: &$T): bool __native_pure;


// Assignment.

fn   =(a: &mut $T, b: $T): &mut $T __native_pure;
fn ||=(a: &mut $T, b: $T): &mut $T __native_pure;


// Arrays.

fn len (a: &$T[]):         i32  __native_pure;
fn find(a: &$T[], b: &$T): i32  __native_pure;
fn has (a: &$T[], b: &$T): bool __native_pure;

fn [](a: &$T[], i: i32)
    case ($a -> &mut $T[]): &mut $T __native_pure;
    case ($a -> &    $T[]): &    $T __native_pure;

fn push   (a: &mut $T[], b: $T):              void __native_pure;
fn unshift(a: &mut $T[], b: $T):              void __native_pure;
fn insert (a: &mut $T[], i: i32, b: $T):      void __native_pure;

fn concat (a: &$T[], b: &$T[]):               $T[] __native_pure;
fn slice  (a: &$T[], i0: i32, i1: i32):       $T[] __native_pure;
fn slice  (a: &$T[], i0: i32):                $T[] __native_pure;

fn splice (a: &mut $T[], i: i32, count: i32): void __native_pure;
fn pop    (a: &mut $T[]):                     void __native_pure;

fn clear  (a: &mut $T[]):                     void __native_pure;
fn resize (a: &mut $T[], len: i32):           void __native_pure;
fn shrink (a: &mut $T[], len: i32):           void __native_pure;

fn move   (a: &mut $T[], from: i32, to: i32): void __native_pure;
fn sort   (a: &mut $T[]):                     void __native_pure;


// Strings.

fn len(a: &string):                 i32         __native_pure;
fn [](a: &string, i: i32):          string      __native_pure;
fn +=(a: &mut string, b: &string):  &mut string __native_pure;
fn + (a: &string, b: &string):      string      __native_pure;

fn ==(a: &string, b: &string):      bool        __native_pure;
fn !=(a: &string, b: &string):      bool        __native_pure;
fn  >(a: &string, b: &string):      bool        __native_pure;
fn  <(a: &string, b: &string):      bool        __native_pure;
fn >=(a: &string, b: &string):      bool        __native_pure;
fn <=(a: &string, b: &string):      bool        __native_pure;

fn find(a: &string, b: &string):    i32         __native_pure;
fn has(a: &string, b: &string):     bool        __native_pure;
fn starts(a: &string, with: &string): bool      __native_pure;

fn slice (a: &string, i0: i32, i1: i32): string __native_pure;
fn substr(a: &string, i0: i32, i1: i32): string __native_pure;
fn char  (a: &string, i0: i32): i32 __native_pure;


// Maps.

fn [](a: &Map($K, $V), b: &$K)
    case ($a -> &mut Map($K, $V)): &mut $V __native_pure;
    case ($a -> &    Map($K, $V)): &    $V __native_pure;


// Assertions, bugs & fails.

fn throw(reason: string): never __native_pure;
fn assert()             : never __native_pure;


// Butt plugs.

// TODO we should go for an any $B -> call stringify(b) macro.
fn + (a: &string, b: i32): &string __native_pure;

`;
