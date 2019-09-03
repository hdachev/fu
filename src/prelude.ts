export const prelude_src = `

//*

fn +(a: $T)                 case ($T & @arithmetic):    $T __native_pure;
fn +(a: $T, b: $T)          case ($T & @arithmetic):    $T __native_pure;

fn -(a: $T)                 case ($T & @arithmetic):    $T __native_pure;
fn -(a: $T, b: $T)          case ($T & @arithmetic):    $T __native_pure;
fn *(a: $T, b: $T)          case ($T & @arithmetic):    $T __native_pure;
fn /(a: $T, b: $T)
    case ($T & @floating_point):                        $T __native_pure;
    case ($T & @integral && b.typeof & @non_zero):      $T __native_pure;

fn >(a: $T, b: $T)          case ($T & @arithmetic):    bool __native_pure;
fn <(a: $T, b: $T)          case ($T & @arithmetic):    bool __native_pure;

fn ++(a: &mut $T)           case ($T & @arithmetic):    $T __native_pure;
fn --(a: &mut $T)           case ($T & @arithmetic):    $T __native_pure;
fn +=(a: &mut $T, b: $T)    case ($T & @arithmetic):    $T __native_pure;
fn -=(a: &mut $T, b: $T)    case ($T & @arithmetic):    $T __native_pure;

/*/


// Arithmetics.

fn +(a: $T)                 case @arithmetic($T):     $T __native_pure;
fn -(a: $T)                 case @arithmetic($T):     $T __native_pure;
fn +(a: $T, b: $T)          case @arithmetic($T):     $T __native_pure;
fn -(a: $T, b: $T)          case @arithmetic($T):     $T __native_pure;

fn *(a: $T, b: $T)          case @arithmetic($T):     $T __native_pure;
fn /(a: $T, b: $T)
    case @floating_point($T):                         $T __native_pure;
    case (@integral($T) && @non_zero(typeof b)):      $T __native_pure;

fn ++(a: &mut $T)           case @integral($T):       $T __native_pure;
fn --(a: &mut $T)           case @integral($T):       $T __native_pure;
fn +=(a: &mut $T, b: $T)    case @arithmetic($T):     $T __native_pure;
fn -=(a: &mut $T, b: $T)    case @arithmetic($T):     $T __native_pure;

fn > (a: $T, b: $T)         case @arithmetic($T):   bool __native_pure;
fn < (a: $T, b: $T)         case @arithmetic($T):   bool __native_pure;
fn >=(a: $T, b: $T)         case @arithmetic($T):   bool __native_pure;
fn <=(a: $T, b: $T)         case @arithmetic($T):   bool __native_pure;


// Assignment.

fn =(a: &mut $T, b: $T)
    case @copy($T):         &mut $T __native_pure;
    case @move(typeof b):   &mut $T __native_pure;


// */

`;
