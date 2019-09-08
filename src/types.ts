import * as tagset from './tagset';
import { fail } from './fail';
import { LexValue } from './lex';
import { CONTEXT } from './context';

export type Primitive   =
    'i8'  | 'u8'  |
    'i16' | 'u16' |
    'i32' | 'u32' |
    'i64' | 'u64' | 'bool' | 'void' | 'never' | 'template';

export type Canon       = (string & { K: 'Canon' }) | Primitive;
export type Quals       = tagset.TagSet;

export const q_EMPTY    = tagset.EMPTY;
export const q_mutref   = tagset.intern('mutref');
export const q_ref      = tagset.intern('ref');

export type Type =
{
    // Qualified type ID:
    //  Should trivialize assignability checks.
    //   We're gonna keep the typesystem real trivial this time,
    //    at least till we get everything going.
    readonly canon: Canon; // `i32`, `f32`, `kind module name index`

    // Qualities, union drops quality:
    readonly quals: Quals; // ' mut non0 unit cc pure nn '

    // Defects, union spreads defect:
    // ...

    // Having these as strings should trivialize
    //  various types of trivial caching,
    //   type interning & quality transitions.
};

function Type(canon: Canon, quals: Quals = q_EMPTY)
{
    typeof canon === 'string' && canon || fail();
    typeof quals === 'string' || fail();

    return Object.freeze({ canon, quals });
}

export function isAssignable(host: Type, guest: Type)
{
    return host === guest ||
        (host.canon === guest.canon &&
            (   host.quals      === guest.quals ||
                host.quals.length < guest.quals.length &&
                tagset.contains(guest.quals, host.quals)));
}


//

const TYPES: { [canon: string]: Type }                      = {};
const QUALS: { [canon: string]: { [quals: string]: Type } } = {};

export function createType(canon: Canon, quals: Quals|null): Type
{
    if (!quals)
        return TYPES[canon] || (TYPES[canon] = Type(canon, q_EMPTY));

    const c = QUALS[canon] || (QUALS[canon] = {});
    return c[quals] || (c[quals] = Type(canon, quals));
}


//

export function qadd(type: Type, q: tagset.Tag)
{
    return type.quals.indexOf(q) >= 0
         ? type
         : createType(type.canon, tagset.union(type.quals, q));
}

function tryClear(type: Type|null, q: tagset.Tag)
{
    if (!type)
        return null;

    const sub = tagset.sub(type.quals, q);

    return sub !== type.quals
         ? createType(type.canon, sub)
         : null;
}

export function add_mutref(type: Type)
{
    return qadd(add_ref(type), q_mutref);
}

export function add_ref(type: Type)
{
    return qadd(type, q_ref);
}

export function tryClear_mutref(type: Type)
{
    return tryClear(tryClear(type, q_ref), q_mutref);
}

export function tryClear_ref(type: Type)
{
    const t = tryClear(type, q_ref);
    return t && createType(type.canon, tagset.sub(type.quals, q_mutref));
}

export function clear_refs(type: Type)
{
    return createType(
        type.canon, tagset.sub(
            tagset.sub(type.quals, q_mutref), q_ref));
}

export function add_refs_from(src: Type, dest: Type)
{
    if (src.quals.indexOf(q_mutref) >= 0)
        dest = add_mutref(dest);
    else if (src.quals.indexOf(q_ref) >= 0)
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
    return type.quals.indexOf(tagset.intern(tag)) >= 0;
}

export function type_tryInter(a: Type, b: Type)
{
    if (a.canon !== b.canon)
        return null;

    return createType(
        a.canon,
        tagset.inter(a.quals, b.quals) as Quals);
}


//

export const t_copy         = tagset.intern('copy');
export const t_primitive    = tagset.intern('primitive');
export const t_arithmetic   = tagset.intern('arithmetic');
export const t_integral     = tagset.intern('integral');
export const t_signed       = tagset.intern('signed');

export const Primitive      = tagset.union(t_copy, t_primitive);
export const Arithmetic     = tagset.union(Primitive, t_arithmetic);
export const Integral       = tagset.union(Arithmetic, t_integral);
export const SignedInt      = tagset.union(Integral, t_signed);

export const t_i32          = createType('i32', SignedInt);
export const t_void         = createType('void', null);
export const t_bool         = createType('bool', Primitive);
export const t_never        = createType('never', null);
export const t_template     = createType('template', null);

export const q_non_zero     = tagset.intern('non_zero');


//

export type Struct =
{
    kind:   'struct';
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

    const canon     = 's_' + id as Canon;
    const type      = createType(canon, null);

    const def: Struct =
    {
        kind:   'struct',
        id:     id      || fail(),
        fields: fields  || fail(),
        flags:  flags|0,
    };

    CONTEXT.TYPES[canon] = def;

    return type;
}

export type LookupType = Struct;

export function lookupType(canon: Canon): LookupType|null
{
    return CONTEXT.TYPES[canon]
        || null;
}
