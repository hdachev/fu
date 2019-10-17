import { Overload } from './solve';

let nextId = 1;

export type Scope =
{
    readonly scopeId: number;
    readonly parent: Scope|null;

    items: Map<string, Overload[]>,
};

export function Scope_create(parent: Scope|null): Scope
{
    return {
        scopeId: nextId++,
        parent: parent,
        items: new Map(),
    };
}

export function Scope_createRoot(pairs: [string, Overload[]][]): Scope
{
    return {
        scopeId: nextId++,
        parent: null,
        items: new Map(pairs),
    };
}

export function Scope_lookup(scope: Scope|null, key: string): Overload[]|null
{
    while (scope)
    {
        const items = scope.items.get(key);
        if (items)
            return items;

        scope = scope.parent;
    }

    return null;
}

export function Scope_add(scope: Scope, key: string, item: Overload): void
{
    let items = scope.items.get(key) || null;
    if (!items)
    {
        items = Scope_lookup(scope.parent, key);
        items = items ? items.slice() : [];

        scope.items.set(key, items);
    }

    if (item.min)
        items.push(item);
    else
        items.unshift(item);
}

export function Scope_keys(scope: Scope|null): string[]
{
    const keys: string[] = [];

    while (scope)
    {
        for (const key of scope.items.keys())
            if (keys.indexOf(key) < 0)
                keys.push(key);

        scope = scope.parent;
    }

    return keys;
}
