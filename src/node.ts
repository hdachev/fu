import { Node } from './parse';

export type Node = Node;

export function deepClone_Node(node: Node): Node;
export function deepClone_Node(node: null): null;
export function deepClone_Node(node: Node|null): Node|null
{
    const mapping = new WeakMap<Node, Node>();

    function visit_Node(node: Node|null): Node|null
    {
        if (!node)
            return node;

        let ret = mapping.get(node as Node);
        if (!ret)
        {
            ret = {
                kind:   node.kind,
                flags:  node.flags,
                value:  node.value,
                items:  node.items && node.items.map(visit_Node),
                token:  node.token,
            };

            mapping.set(node, ret);
        }

        return ret;
    }

    return visit_Node(node);
}
