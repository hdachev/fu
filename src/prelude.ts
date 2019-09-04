export const prelude_src = `


// Arithmetics.

fn +(a: $T)                 case ($T & @arithmetic):    $T __native_pure;
fn +(a: $T, b: $T)          case ($T & @arithmetic):    $T __native_pure;

fn -(a: $T)                 case ($T & @arithmetic):    $T __native_pure;
fn -(a: $T, b: $T)          case ($T & @arithmetic):    $T __native_pure;
fn *(a: $T, b: $T)          case ($T & @arithmetic):    $T __native_pure;
fn /(a: $T, b: $T)
    case ($T & @floating_point):                        $T __native_pure;
    case ($T & @integral && $b & @non_zero):            $T __native_pure;

fn ++(a: &mut $T)           case ($T & @arithmetic):    $T __native_pure;
fn --(a: &mut $T)           case ($T & @arithmetic):    $T __native_pure;
fn +=(a: &mut $T, b: $T)    case ($T & @arithmetic):    $T __native_pure;
fn -=(a: &mut $T, b: $T)    case ($T & @arithmetic):    $T __native_pure;

fn > (a: $T, b: $T)         case ($T & @arithmetic):    bool __native_pure;
fn < (a: $T, b: $T)         case ($T & @arithmetic):    bool __native_pure;
fn >=(a: $T, b: $T)         case ($T & @arithmetic):    bool __native_pure;
fn <=(a: $T, b: $T)         case ($T & @arithmetic):    bool __native_pure;


// Assignment.

fn =(a: &mut $T, b: $T)
    case ($b & @copy):      &mut $T __native_pure;
    case ($b & @move):      &mut $T __native_pure;

`;
