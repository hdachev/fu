export const prelude_src = `


// Arithmetics.

fn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;
fn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;

fn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;
fn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;
fn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;
fn /(a: $T, b: $T)
    case ($T -> @floating_point):                       $T __native_pure;
    case ($T -> @integral && $b -> @non_zero):          $T __native_pure;

fn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;
fn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;
fn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   $T __native_pure;
fn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   $T __native_pure;

fn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;
fn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;


// Assignment.

fn =(a: &mut $T, b: $T)
    case ($b -> @copy):     &mut $T __native_pure;
    case ($b -> @move):     &mut $T __native_pure;


// Arrays.

fn len(a: &$T[]):           i32 __native_pure;

fn [](a: &$T[], i: i32)
    case ($a -> &mut $T[]): &mut $T __native_pure;
    case ($a -> &    $T[]): &    $T __native_pure;

fn push(a: &mut $T[], b: $T)
    case ($b -> @copy):     &mut $T[] __native_pure;
    case ($b -> @move):     &mut $T[] __native_pure;


// Strings.

fn len(a: &string):                 i32         __native_pure;
fn [](a: &string, i: i32):          string      __native_pure;
fn +=(a: &mut string, b: &string):  &mut string __native_pure;
fn + (a: &string, b: &string):      &string     __native_pure;
fn ==(a: &string, b: &string):      bool        __native_pure;

`;
