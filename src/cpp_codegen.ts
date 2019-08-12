import { fail } from './fail';
import { SolvedNode, Type } from './solve';
import { LET_TYPE, LET_INIT, FN_BODY_BACK, FN_RET_BACK, FN_ARGS_BACK } from './parse';

type Nodes              = (SolvedNode|null)[]|null;
type CppScope           = { [id: string]: number };
type StdLibs            = { [id: string]: boolean };

let _indent: string     = null as any;
let _ids: CppScope      = null as any;
let _libs: StdLibs      = null as any;
let _fnMode: boolean    = false;

function RESET()
{
    _indent = '\n';
    _ids    = Object.create(null);
    _libs   = Object.create(null);
    _fnMode = false;
}

function enterScope(): CppScope
{
    const ret   = _ids;
    _ids        = Object.create(_ids);

    return ret;
}

function exitScope(s: CppScope)
{
    _ids = s;
}


//

function cgRoot(root: SolvedNode)
{
    const src = cgNodes(root.items).join(';\n' + _indent) + ';\n\n';

    let includes = '';
    for (const key in _libs)
        includes += '\n#include ' + key;

    if (includes)
        includes += '\n';

    return includes + src;
}

function blockWrap(nodes: Nodes)
{
    const indent0 = _indent;
    _indent += '    ';
    const src = indent0 + '{' + _indent + cgNodes(nodes).join(';' + _indent) + ';' + indent0 + '}';
    _indent = indent0;

    return src;
}

function cgBlock(block: SolvedNode)
{
    const s0 = enterScope();
    const src = blockWrap(block.items);
    exitScope(s0);

    return src;
}

function cgFn(fn: SolvedNode)
{
    ///////////////////////////
    const s0    = enterScope();
    const f0    = _fnMode;
    _fnMode     = true;
    ///////////////////////////

    const items = fn.items || fail();
    const body  = items[items.length + FN_BODY_BACK] || fail();
    const ret   = items[items.length + FN_RET_BACK ] || fail();
    const annot = typeAnnot(ret.type || fail());

    // Chosing between lambda and regular fn.
    //  Notice basic lambdas don't do recursions,
    //   but they can be cheated into it via this trick -
    //    http://pedromelendez.com/blog/2015/07/16/recursive-lambdas-in-c14/

    let src = f0
            ? 'const auto& ' + fn.value + ' = [&]('
            : annot + ' ' + fn.value + '(';

    for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
    {
        if (i)
            src += ', ';

        src += cgLet(items[i] || fail());
    }

    src += f0
         ? ') -> ' + annot
         : ')';

    if (body.kind === 'block')
        src += cgBlock(body);
    else
        src += blockWrap([ body ]);

    //////////////
    _fnMode = f0;
    exitScope(s0);
    //////////////

    return src;
}

function cgLet(node: SolvedNode)
{
    const items = node.items || fail();
    const id    = node.value || fail();

    const annot = typeAnnot((items[LET_TYPE] || fail()).type) || fail();
    const head  = annot + ' ' + id;
    const init  = items[LET_INIT];
    if (init)
        return head + ' = ' + cgNode(init);

    return head;
}

function cgReturn(node: SolvedNode)
{
    if (node.items)
        return 'return ' + cgNode(node.items[0] || fail());

    return 'return';
}

function cgCall(node: SolvedNode)
{
    const id = node.value || fail();
    const items = cgNodes(node.items);

    if (items && /[^a-z0-9_]/.test(id))
    {
        switch (items.length)
        {
            case 1: return id + items[0];
            case 2: return items[0] + ' ' + id + ' ' + items[1];
        }
    }

    if (node.target && node.target.kind === 'var')
        return id;

    return id + '(' + items.join(', ') + ')';
}

function cgLiteral(node: SolvedNode)
{
    return node.value || 'void';
}

function typeAnnot(type: Type)
{
    type.kind === 'i32' || fail('TODO');
    return 'int';
}


//

const CODEGEN: { [k: string]: (node: SolvedNode) => string } =
{
    'root':     cgRoot,
    'block':    cgBlock,
    'fn':       cgFn,
    'return':   cgReturn,
    'call':     cgCall,
    'int':      cgLiteral,
};

function cgNodes(nodes: Nodes)
{
    const result: string[] = [];

    if (nodes)
        for (let i = 0; i < nodes.length; i++)
        {
            const node  = nodes[i];
            const src   = node ? CODEGEN[node.kind](node) : '';
            result[i]   = src;
        }

    return result;
}

function cgNode(node: SolvedNode)
{
    return CODEGEN[node.kind](node);
}


//

export function cpp_codegen(root: SolvedNode): { src: string }
{
    RESET();

    root.kind === 'root' || fail();

    const src = CODEGEN[root.kind](root);
    return { src };
}
