import { fail } from './fail';
import { Overload } from './solve';
import { Type } from './types';

export type ScopeIdx = (number & 'ScopeIdx')|0;

type Item =
{
    id:         string;
    index:      ScopeIdx;
};

type IndexedOverload = Overload & { index: ScopeIdx };

function copy(o: IndexedOverload)
{
    if (o.template)
    {
        o = Object.assign({}, o);
        o.template = Object.assign({}, o.template);
        o.template.specializations = {};
    }

    return o;
}

export type Scope =
{
    items:      Item[];
    overloads:  IndexedOverload[];
};

export function Scope(parent: Scope|null): Scope
{
    if (parent)
        return {
            items:      parent.items.slice(),
            overloads:  parent.overloads.map(copy),
        };

    return { items: [], overloads: [] };
}

export function Scope_lookup(scope: Scope, id: string): ScopeIdx[]|null
{
    const results: ScopeIdx[] = [];

    const items = scope.items;
    for (let i = items.length; i --> 0; )
    {
        const item = items[i];
        if (item.id === id)
            results.push(item.index);
    }

    return results.length ? results : null;
}

export function Scope_keys(scope: Scope): string[]
{
    const keys: string[] = [];

    const items = scope.items;
    for (let i = items.length; i --> 0; )
    {
        const id = items[i].id;
        if (keys.indexOf(id) < 0)
            keys.push(id);
    }

    return keys;
}

export function Scope_get(scope: Scope, idx: ScopeIdx): Overload
{
    const o = scope.overloads[idx - 1];
    o.index === idx || fail('Overload indexing breakage.');
    return o;
}


////////////////////////////////

export function Scope_push(scope: Scope): number
{
    return scope.items.length;
}

export function Scope_pop(scope: Scope, memo: number): void
{
    scope.items.length = memo;
}


////////////////////////////////

import { SolvedNodes, Template, OverloadKind } from './solve';

export function Scope_add(
    scope: Scope,
    kind: OverloadKind, id: string, type: Type,

    min: number = 0, max: number = 0,
    arg_n: string[]|null = null,
    arg_t: Type[]|null = null,
    arg_d: SolvedNodes|null = null,

    template: Template|null = null,
    partial: [ScopeIdx, ScopeIdx]|null = null): ScopeIdx
{
    const index = (scope.overloads.length + 1) as ScopeIdx;

    const item: IndexedOverload =
    {
        index, kind,

        name: id, type,
        min, max, args: arg_t,
        names: arg_n, defaults: arg_d,
        partial, template,
    };

    scope.items.push({ id, index });
    scope.overloads.push(item);
    return index;
}
