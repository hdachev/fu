import { fail } from './fail';
import { SolvedNode, Type } from './solve';
import { LET_TYPE, LET_INIT, FN_BODY_BACK, FN_RET_BACK, FN_ARGS_BACK, LOOP_INIT, LOOP_COND, LOOP_POST, LOOP_BODY, LOOP_POST_COND, F_POSTFIX } from './parse';

type Nodes              = (SolvedNode|null)[]|null;
type CppScope           = { [id: string]: number };
type StdLibs            = { [id: string]: boolean };

let _indent: string     = null as any;
let _ids: CppScope      = null as any;
let _libs: StdLibs      = null as any;
let _fnMode: boolean    = false;
let _exprN: number      = 0;

function RESET()
{
    _indent = '\n';
    _ids    = Object.create(null);
    _libs   = Object.create(null);
    _fnMode = false;
    _exprN  = 0;
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
    const src = cgNodes(root.items, 'stmt').join(';\n' + _indent) + ';\n';

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
    const src = indent0 + '{' + _indent + cgNodes(nodes, 'stmt').join(';' + _indent) + ';' + indent0 + '}';
    _indent = indent0;

    return src;
}

function blockWrapOne(node: SolvedNode)
{
    if (node.kind === 'block')
        return cgBlock(node);

    return blockWrap([ node ]);
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
            case 1: return node.flags & F_POSTFIX
                            ? items[0] + id
                            : id + items[0];

            case 2: return '(' + items[0] + ' ' + id + ' ' + items[1] + ')';
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

function cgEmpty()
{
    return '';
}

function typeAnnot(type: Type)
{
    if (type.canon === 'i32')
    {
        switch (type.quals)
        {
            case '':   return 'int' ;
            case 'mr': return 'int&';
        }
    }

    return fail('TODO');
}

function cgIf(node: SolvedNode)
{
    const [n0, n1, n2] = node.items || fail();

    const stmt = _exprN === 0;

    const cond = n0 && cgNode(n0);
    const cons = n1 && (stmt ? blockWrapOne(n1) : cgNode(n1));
    const alt  = n2 && (stmt ? blockWrapOne(n2) : cgNode(n2));

    if (stmt)
        return 'if (' + cond + ') ' + cons + (alt ? _indent + 'else ' + alt : '');

    if (cons && alt)
        return '(' + cond + ' ? ' + cons + ' : ' + alt + ')';

    if (cons)
        return '(' + cond + ' && ' + cons + ')';

    if (alt)
        return '(' + cond + ' || ' + alt + ')';

    return fail('TODO');
}

function cgLoop(node: SolvedNode)
{
    const items = node.items || fail();

    const n_init = items[LOOP_INIT];
    const n_cond = items[LOOP_COND];
    const n_post = items[LOOP_POST];
    const n_body = items[LOOP_BODY];
    const n_pcnd = items[LOOP_POST_COND];

    const init = n_init && cgNode(n_init);
    const cond = n_cond && cgNode(n_cond);
    const post = n_post && cgNode(n_post);
    const body = n_body && blockWrapOne(n_body);
    const pcnd = n_pcnd && cgNode(n_pcnd);

    if (pcnd)
    {
        if (init || post || cond)
            fail('TODO extended loop.');

        return 'do' + body + _indent + 'while (' + cond + ')';
    }

    if (init || post || !cond)
        return 'for (' + init + '; ' + cond + '; ' + post + ')' + body;

    return 'while (' + cond + ')' + body;
}


//

const CODEGEN: { [k: string]: (node: SolvedNode) => string } =
{
    'root':     cgRoot,
    'block':    cgBlock,
    'fn':       cgFn,
    'return':   cgReturn,
    'call':     cgCall,
    'let':      cgLet,
    'if':       cgIf,
    'loop':     cgLoop,
    'int':      cgLiteral,
    'empty':    cgEmpty,
};

function cgNodes(nodes: Nodes, statements: 'stmt'|null = null)
{
    const result: string[] = [];

    //////////////////////
    const exprN0 = _exprN;
    if (statements)
        _exprN = 0;
    else
        _exprN++;
    //////////////////////

    if (nodes)
        for (let i = 0; i < nodes.length; i++)
        {
            const node  = nodes[i];
            const src   = node ? CODEGEN[node.kind](node) : '';
            result[i]   = src;
        }

    ////////////////
    _exprN = exprN0;
    ////////////////

    return result;
}

function cgNode(node: SolvedNode, statement: boolean = false)
{
    /////////
    const exprN0 = _exprN;
    if (statement)
        _exprN = 0;
    else
        _exprN++;
    /////////

    const out = CODEGEN[node.kind](node);

    ////////////////
    _exprN = exprN0;
    ////////////////

    return out;
}


//

export function cpp_codegen(root: SolvedNode): { src: string }
{
    RESET();

    root.kind === 'root' || fail();

    const src = CODEGEN[root.kind](root);
    return { src };
}
