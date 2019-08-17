import { fail } from './fail';

export type Tag = string & { tag: true };

const tags:     { [key: string]: Tag }      = {};
const exist:    { [key: string]: string }   = {};

let next = 256; // starting somewhere past ascii

function _generate(id: string): Tag
{
    let c = id[0] || fail();
    while (exist[c])
        c = String.fromCharCode(next++);

    exist[c] = id;
    return (tags[id] = c as Tag);
}

export function intern(id: string): Tag
{
    return tags[id] || (tags[id] = _generate(id));
}


//

export type TagSet = string & { tagset: true };

export const EMPTY = '' as TagSet;

export function humanize(v: TagSet): string
{
    let result = '';
    for (let i = 0; i < v.length; i++)
    {
        if (i) result += ' ';
        result += exist[v[i]] || fail();
    }

    return result;
}


//

export function contains(set: TagSet, sub: TagSet|Tag): boolean
{
    const extra = set.length - sub.length;
    if (extra <= 0)
        return extra === 0 && set === sub;

    let offset = 0;
    OUTER: for (let i = 0; i < sub.length; i++)
    {
        const c = sub[i];
        if (c === set[i + offset])
            continue;

        while (offset++ < extra)
            if (c === set[i + offset])
                continue OUTER;

        return false;
    }

    return true;
}


//

export function inter(a: TagSet, b: TagSet): TagSet
{
    if (a === b)
        return a;
    if (!a || !b)
        return EMPTY;

    if (a.length === 1)
        return b.indexOf(a) >= 0 ? a : EMPTY;
    if (b.length === 1)
        return a.indexOf(b) >= 0 ? b : EMPTY;

    return fail('TODO');
}

export function union(a: TagSet|Tag, b: TagSet|Tag): TagSet
{
    if (a === b || !a || !b)
        return (a || b) as TagSet;

    if (a.length <= 1 && b.length <= 1)
        return (a > b ? b + a : a + b) as TagSet;

    return fail('TODO');
}
