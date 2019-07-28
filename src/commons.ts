
export type ModuleID =
    string & { K: 'ModuleID' };


// Scope chain basics.

export type ScopeKind =
    'root' | 'module' | 'exports' | 'node' | 'struct';

export type Scope =
{
    kind:       ScopeKind;
    fns:        { [id: string]: Overloads };
    bindings:   { [id: string]: Binding };
    types:      { [id: string]: Type };
};

export type Binding     = {};
export type Overloads   = {};


// Type system basics.

export type Primitive   = 'i8' | 'i16' | 'i32' | 'i64'
                        | 'u8' | 'u16' | 'u32' | 'u64';

export type Compound    = 'struct' | 'array';

export type TypeKind    = Primitive | Compound;

export type Type =
{
    kind: TypeKind,
};
