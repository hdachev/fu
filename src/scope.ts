
let nextId = 1;

export type Scope<T> =
{
    readonly scopeId: number;
    readonly parent: Scope<T>|null;

    items: Map<string, T[]>,
};

export function create<T>(parent: Scope<T>|null)
{
    return {
        scopeId: nextId++,
        parent: parent,

        items: new Map(),
    };
}

export function lookup<T>(scope: Scope<T>|null, key: string): T[]|null
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

export function prepend<T>(scope: Scope<T>, key: string, item: T)
{
    let items = scope.items.get(key) || null;
    if (!items)
    {
        items = lookup(scope.parent, key);
        items = items ? items.slice() : [];

        scope.items.set(key, items);
    }

    items.unshift(item);
}

export function append<T>(scope: Scope<T>, key: string, item: T)
{
    let items = scope.items.get(key) || null;
    if (!items)
    {
        items = lookup(scope.parent, key);
        items = items ? items.slice() : [];

        scope.items.set(key, items);
    }

    items.push(item);
}
