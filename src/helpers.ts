
export type From<T extends { readonly [k: number]: any }> =
    Exclude<T[number], null|undefined>;
