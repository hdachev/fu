import { fail } from './fail';
import { LexValue } from './lex';
import { CONTEXT } from './context';
import { F_DESTRUCTOR } from './parse';

export type Primitive =
    'i8'  | 'u8'  |
    'i16' | 'u16' |
    'i32' | 'u32' |
    'i64' | 'u64' | 'bool' | 'void' | 'never'
                  | 'template'
                  | 'string';

export type Canon = (string & { K: 'Canon' }) | Primitive;

export const q_mutref       = 1 << 0;
export const q_ref          = 1 << 1;
export const q_prvalue      = 1 << 2;
export const q_copy         = 1 << 3;
export const q_move         = 1 << 4;

export const q_trivial      = 1 << 5;
export const q_primitive    = 1 << 6;
export const q_arithmetic   = 1 << 7;
export const q_integral     = 1 << 8;
export const q_signed       = 1 << 9;

const TAGS =
[
    'mutref',
    'ref',
    'prvalue',
    'copy',
    'move',

    'trivial',
    'primitive',
    'arithmetic',
    'integral',
    'signed',
];

export type Type =
{
    readonly canon: Canon;
    readonly quals: number;
};

function Type(canon: Canon, quals: number = 0)
{
    typeof canon === 'string' && canon || fail();
    typeof quals === 'number' || fail();

    return Object.freeze({ canon, quals });
}


// https://doc.rust-lang.org/nomicon/subtyping.html:

// Re: covariance of `T` in `Box<T>`:
//
// As it turns out, the argument for why it's ok for Box
//  (and Vec, Hashmap, etc.) to be covariant is pretty similar
//   to the argument for why it's ok for lifetimes to be covariant:
//    as soon as you try to stuff them in something like a mutable
//     reference, they inherit invariance and you're prevented
//      from doing anything bad.

export function isAssignable(host: Type, guest: Type)
{
    return host === guest
        || host.canon === guest.canon
            && (host.quals === guest.quals ||
                  !(host.quals & q_mutref) // mut invariance
                    && (host.quals & guest.quals) === host.quals)
        || guest === t_never;
}


//

const TYPES: { [canon: string]: Type }                      = {};
const QUALS: { [canon: string]: { [quals: number]: Type } } = {};

export function createType(canon: Canon, quals: number): Type
{
    if (!quals)
        return TYPES[canon] || (TYPES[canon] = Type(canon, 0));

    const c = QUALS[canon] || (QUALS[canon] = {});
    return c[quals] || (c[quals] = Type(canon, quals));
}


//

export function qadd(type: Type, q: number)
{
    return type.quals & q   ? type
                            : createType(
                                type.canon,
                                type.quals | q);
}

function tryClear(type: Type|null, q: number)
{
    if (!type || (type.quals & q) !== q)
        return null;

    return createType(type.canon, type.quals &~ q);
}

export function add_ref(type: Type)
{
    return qadd(type, q_ref);
}

export function add_mutref(type: Type)
{
    return qadd(add_ref(type), q_mutref);
}

export function add_prvalue_ref(type: Type)
{
    return qadd(add_ref(type), q_prvalue);
}

export function tryClear_mutref(type: Type)
{
    return tryClear(tryClear(type, q_ref), q_mutref);
}

export function tryClear_ref(type: Type)
{
    const t = tryClear(type, q_ref);
    return t && createType(t.canon, t.quals &~ q_mutref);
}

export function clear_refs(type: Type)
{
    return createType(
        type.canon,
        type.quals &~ (q_mutref | q_ref | q_prvalue));
}

export function add_refs_from(src: Type, dest: Type)
{
    if (src.quals & q_mutref)
        dest = add_mutref(dest);
    else if (src.quals & q_ref)
        dest = add_ref(dest);

    return dest;
}

export function serializeType(type: Type)
{
    if (type.quals)
        return '(' + type.canon + '{' + type.quals + '})';

    return '(' + type.canon + ')';
}

export function type_has(type: Type, tag: LexValue)
{
    const idx = TAGS.indexOf(tag);
    idx >= 0 || fail('Unknown type tag: `' + tag + '`.');
    const mask = 1 << idx;
    return (type.quals & mask) === mask;
}

export function type_tryInter(a: Type, b: Type)
{
    if (a.canon !== b.canon)
        return null;

    return createType(
        a.canon,
        a.quals & b.quals);
}


//

export const Trivial        = q_copy | q_trivial;
export const Primitive      = Trivial | q_primitive;
export const Arithmetic     = Primitive | q_arithmetic;
export const Integral       = Arithmetic | q_integral;
export const SignedInt      = Integral | q_signed;

export const t_i32          = createType('i32', SignedInt);
export const t_void         = createType('void', 0);
export const t_bool         = createType('bool', Primitive);
export const t_never        = createType('never', 0);
export const t_template     = createType('template', 0);
export const t_string       = createType('string', q_copy);


//

export type Struct =
{
    kind:   'struct'|'array'|'map';
    id:     string;
    fields: StructField[];
    flags:  number;
};

export type StructField =
{
    id:     LexValue;
    type:   Type;
};

export function registerStruct(id: string, fields: StructField[], flags: number)
{
    // TODO struct data goes on compile context.
    // TODO use module id.

    const canon = 's_' + id as Canon;
    const def: Struct =
    {
        kind:   'struct',
        id:     id      || fail(),
        fields: fields  || fail(),
        flags:  flags|0,
    };

    CONTEXT.TYPES[canon] = def;
    return createType(canon,
        copyOrMove(flags, fields, true));
}

function copyOrMove(
    flags: number,
    fields: StructField[],
    tryTrivial: boolean = false): number
{
    if ((flags & F_DESTRUCTOR) || someFieldNonCopy(fields))
        return q_move;

    if (tryTrivial && !someFieldNotTrivial(fields))
        return Trivial;

    return q_copy;
}

function someFieldNonCopy(fields: StructField[])
{
    for (let i = 0; i < fields.length; i++)
        if (!(fields[i].type.quals & q_copy))
            return true;

    return false;
}

function someFieldNotTrivial(fields: StructField[])
{
    for (let i = 0; i < fields.length; i++)
        if (!(fields[i].type.quals & q_trivial))
            return true;

    return false;
}

export type LookupType = Struct;

export function lookupType(canon: Canon): LookupType|null
{
    return CONTEXT.TYPES[canon]
        || null;
}


//

export function createArray(item: Type): Type
{
    const flags = 0;
    const fields: StructField[] =
    [
        {
            id:  'Item' as LexValue,
            type: item,
        },
    ];

    const canon = 'Array(' + serializeType(item) + ')' as Canon;
    if (!CONTEXT.TYPES[canon])
        CONTEXT.TYPES[canon] =
        {
            kind:   'array',
            id:     canon as any as LexValue,
            fields,
            flags,
        };

    return createType(canon,
        copyOrMove(flags, fields));
}

export function tryClear_array(type: Type): Type|null
{
    const def = CONTEXT.TYPES[type.canon];
    if (!def)
        return null;

    if (def.kind !== 'array')
        return null;

    return def.fields[0].type
        || fail();
}


//

export function type_isMap(type: Type): boolean
{
    const def = CONTEXT.TYPES[type.canon];
    return def && def.kind === 'map';
}

export function createMap(key: Type, value: Type): Type
{
    const flags = 0;
    const fields: StructField[] =
    [
        {
            id:  'Key' as LexValue,
            type: key,
        },
        {
            id:  'Value' as LexValue,
            type: value,
        },
    ];

    const canon = 'Map(' + serializeType(key) + ',' + serializeType(value) + ')' as Canon;
    if (!CONTEXT.TYPES[canon])
        CONTEXT.TYPES[canon] =
        {
            kind:   'map',
            id:     canon as any as LexValue,
            fields,
            flags,
        };

    return createType(canon,
        copyOrMove(flags, fields));
}

export function tryClear_map(type: Type): [Type, Type]|null
{
    const def = CONTEXT.TYPES[type.canon];
    if (!def)
        return null;

    if (def.kind !== 'map')
        return null;

    return [ def.fields[0].type || fail(),
             def.fields[1].type || fail() ];
}
