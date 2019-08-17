
export const prelude_src = `

fn +(a: i32, b: i32): i32 __native_pure;

fn -(a: i32)        : i32 __native_pure;
fn -(a: i32, b: i32): i32 __native_pure;
fn *(a: i32, b: i32): i32 __native_pure;
fn /(a: i32, b: i32): i32 __native_pure;

fn >(a: i32, b: i32): bool __native_pure;
fn <(a: i32, b: i32): bool __native_pure;

fn ++(a: &mut i32): i32 __native_pure; // TODO FIX
fn --(a: &mut i32): i32 __native_pure; // TODO FIX
fn +=(a: &mut i32, b: i32): i32 __native_pure; // TODO FIX
fn -=(a: &mut i32, b: i32): i32 __native_pure; // TODO FIX

`;
