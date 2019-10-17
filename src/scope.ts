import { Overload } from './solve';

type Item =
{
    id:         string;
    index:      number;
};

export type Scope =
{
    items:      Item[];
    overloads:  Overload[];
};

export function Scope_create(parent: Scope|null): Scope
{
    if (parent)
        return {
            items:      parent.items.slice(),
            overloads:  parent.overloads.slice(),
        };

    return { items: [], overloads: [] };
}

export function Scope_createRoot(pairs: [string, Overload[]][]): Scope
{
    const scope = Scope_create(null);

    for (let i = 0; i < pairs.length; i++)
    {
        const pair = pairs[i];
        const id = pair[0];
        const o = pair[1];
        for (let i = 0; i < o.length; i++)
        {
            scope.items.push({ id, index: scope.overloads.length });
            scope.overloads.push(o[i]);
        }
    }

    return scope;
}

export function Scope_lookup(scope: Scope, id: string): Overload[]|null
{
    const results: Overload[] = [];

    const items = scope.items;
    for (let i = items.length; i --> 0; )
    {
        const item = items[i];
        if (item.id === id)
            results.push(scope.overloads[item.index]);
    }

    return results.length ? results : null;
}

export function Scope_add(scope: Scope, id: string, item: Overload): void
{
    scope.items.push({ id, index: scope.overloads.length });
    scope.overloads.push(item);
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


////////////////////////////////

export function Scope_push(scope: Scope): number
{
    return scope.items.length;
}

export function Scope_pop(scope: Scope, memo: number): void
{
    scope.items.length = memo;
}
