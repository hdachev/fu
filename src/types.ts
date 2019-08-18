import * as tagset from './tagset';
import { fail } from './fail';
import { LexValue } from './lex';
import { CONTEXT } from './context';

export type Primitive   =
    'i8'  | 'u8'  |
    'i16' | 'u16' |
    'i32' | 'u32' |
    'i64' | 'u64' | 'bool' | 'void';

export type Canon       = (string & { K: 'Canon' }) | Primitive;
export type Quals       = tagset.TagSet;

export const q_EMPTY    = tagset.EMPTY;
export const q_mut      = tagset.intern('mut');
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

function qadd(type: Type, q: tagset.Tag)
{
    return type.quals.indexOf(q) >= 0
         ? type
         : createType(type.canon, tagset.union(type.quals, q));
}

export function add_mut(type: Type)
{
    return qadd(type, q_mut);
}

export function add_ref(type: Type)
{
    return qadd(type, q_ref);
}

export function serialize(type: Type)
{
    if (type.quals)
        return '(' + type.canon + '{' + type.quals + '})';

    return '(' + type.canon + ')';
}


//

export const t_i32  = createType('i32' , null);
export const t_void = createType('void', null);
export const t_bool = createType('bool', null);


//

export type Struct =
{
    kind:   'struct';
    id:     string;
    fields: StructField[];
};

export type StructField =
{
    id:     LexValue;
    type:   Type;
};

export function registerStruct(id: string, fields: StructField[])
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
