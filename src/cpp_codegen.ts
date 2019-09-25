import { fail } from './fail';
import { SolvedNode, Type } from './solve';
import { LET_INIT, FN_BODY_BACK, FN_RET_BACK, FN_ARGS_BACK, LOOP_INIT, LOOP_COND, LOOP_POST, LOOP_BODY, LOOP_POST_COND, F_POSTFIX, F_CLOSURE, F_DESTRUCTOR, F_ELISION } from './parse';
import { lookupType, Struct, type_isMap } from './types';

type Nodes              = (SolvedNode|null)[]|null;
type CppScope           = { [id: string]: number };
type Dedupes            = { [id: string]: string };


//

let _libs: Dedupes      = null as any; // includes
let _tfwd: Dedupes      = null as any; // type fwd decls
let _ffwd: Dedupes      = null as any; // fn fwd decls
let _tdef: string       = null as any; // type decls
let _fdef: string       = null as any; // fn decls

let _indent: string     = null as any;
let _ids: CppScope      = null as any;
let _fnN: number        = 0;
let _exprN: number      = 0;

function RESET()
{
    _libs   = Object.create(null);
    _tfwd   = Object.create(null);
    _ffwd   = Object.create(null);
    _tdef   = '';
    _fdef   = '';

    _indent = '\n';
    _ids    = Object.create(null);
    _fnN    = 0;
    _exprN  = 0;
}


//

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

function include(lib: string)
{
    if (!_libs[lib])
        _libs[lib] = '#include ' + lib + '\n';
}


//

function typeAnnot(type: Type): string
{
    const fwd = typeAnnotBase(type);

    if (type.quals.indexOf('m') >= 0)
        return fwd + '&';
    if (type.quals.indexOf('r') >= 0)
        return 'const ' + fwd + '&';

    return fwd;
}

function typeAnnotBase(type: Type): string
{
    switch (type.canon)
    {
        case 'i32':     return 'int';
        case 'void':    return 'void';
        case 'string':
            include('<string>');
            return 'std::string';
    }

    const tdef = lookupType(type.canon) || fail('TODO', type.canon);

    switch (tdef.kind)
    {
        case 'struct':
            if (!(type.canon in _tfwd))
            {
                _tfwd[type.canon] = _tdef.indexOf(type.canon) >= 0
                    ? '\nstruct ' + type.canon + ';'
                    : '';

                const def = declareStruct(type, tdef);
                _tdef += def;
            }

            return type.canon;

        case 'array':
            const item = typeAnnot(tdef.fields[0].type);

            include('<vector>');
            return 'std::vector<' + item + '>';

        case 'map':
            const k = typeAnnot(tdef.fields[0].type);
            const v = typeAnnot(tdef.fields[1].type);

            include('<unordered_map>');
            return 'std::unordered_map<' + k + ', ' + v + '>';
    }

    return fail('TODO', tdef.kind);
}

function declareStruct(t: Type, s: Struct)
{
    let def = '\nstruct ' + t.canon + '\n{';
    let indent = '\n    ';

    if (s.flags & F_DESTRUCTOR)
    {
        def += '\n    struct Data\n    {';
        indent += '    ';
    }

    const fields = s.fields;
    for (let i = 0; i < fields.length; i++)
    {
        const field = fields[i];
        def += indent + typeAnnot(field.type) + ' ' + ID(field.id) + ';';
    }

    if (s.flags & F_DESTRUCTOR)
    {
        def += '\n    };';
        def += '\n';
        def += '\n    Data data;';
        def += '\n    bool dtor = false;';
        def += '\n';
        def += '\n    ~' + t.canon + '() noexcept;';
        def += '\n    inline ' + t.canon + '(Data data) noexcept : data(data) {};';
        def += '\n    ' + t.canon + '(const ' + t.canon + '&) = delete;';
        def += '\n    ' + t.canon + '& operator=(const ' + t.canon + '&) = delete;';
        def += '\n    ' + t.canon + '(' + t.canon + '&&) noexcept;';
        def += '\n    ' + t.canon + '& operator=(' + t.canon + '&&) noexcept;';
    }

    return def + '\n};\n';
}


//

function collectDedupes(_d: Dedupes|string)
{
    let out = '';

    if (typeof _d === 'string')
    {
        out = _d;
    }
    else
    {
        const keys = Object.keys(_d).sort();
        for (let i = 0; i < keys.length; i++)
            out += _d[keys[i]];
    }

    return out;
}

function cgRoot(root: SolvedNode)
{
    const src = cgStatements(root.items);

    let header = collectDedupes(_libs)
               + collectDedupes(_tfwd)
               + collectDedupes(_ffwd)
               + collectDedupes(_tdef)
               + collectDedupes(_fdef)
               ;

    return header + src;
}


//

function ID(id: string)
{
    switch (id)
    {
        case 'this':    return '_';
    }

    return id;
}

function cgStatements(nodes: Nodes)
{
    let src = '';

    const lines = cgNodes(nodes, 'stmt');
    for (let i = 0; i < lines.length; i++)
    {
        const line = lines[i];
        if (line)
            src += _indent + line + ';';
    }

    return src;
}

function blockWrap(nodes: Nodes)
{
    const indent0 = _indent;
    _indent += '    ';

    const src = indent0 + '{' + cgStatements(nodes) + indent0 + '}';

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

function cgParens(node: SolvedNode)
{
    const items = cgNodes(node.items);
    if (!items || !items.length)
        return '(false /*empty parens*/)';

    if (items.length === 1)
        return items[0];

    return '(' + items.join(', ') + ')';
}

function cgFn(fn: SolvedNode)
{
    ///////////////////////////
    const s0    = enterScope();
    const f0    = _fnN;
    const indent0 = _indent;
    _fnN++;
    ///////////////////////////

    // Template emit.
    if (!fn.items)
    {
        let src = '';

        const template = fn.target && fn.target.template || fail();
        const specs = template.specializations;
        for (const key in specs)
        {
            const s = specs[key];
            const node = s && s.node;
            if (node)
                src += cgNode(node);
        }

        return src;
    }

    const items = fn.items || fail();
    const body  = items[items.length + FN_BODY_BACK] || fail();
    const ret   = items[items.length + FN_RET_BACK ] || fail();
    const annot = typeAnnot(ret.type || fail());

    // Chosing between lambda and regular fn.
    //  Notice basic lambdas don't do recursions,
    //   but they can be cheated into it via this trick -
    //    http://pedromelendez.com/blog/2015/07/16/recursive-lambdas-in-c14/
    const closure = !!(fn.flags & F_CLOSURE);

    if (!closure)
        _indent = '\n';

    let src = closure
            ? 'const auto& ' + fn.value + ' = [&]('
            : annot + ' ' + fn.value + '(';

    for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
    {
        if (i)
            src += ', ';

        src += cgLet(items[i] || fail());
    }

    src += closure
         ? ') -> ' + annot
         : ') noexcept';

    if (!closure && src !== 'int main()' && _fdef.indexOf(fn.value || fail()) >= 0)
        _ffwd[src] = '\n' + src + ';';

    if (body.kind === 'block')
        src += cgBlock(body);
    else
        src += blockWrap([ body ]);

    //////////////
    _fnN    = f0;
    _indent = indent0;
    exitScope(s0);
    //////////////

    if (fn.flags & F_DESTRUCTOR)
    {
        const head = items[0] || fail();
        const name = head.type.canon;

        src += '\n\n' + name + '::~' + name + '() noexcept';
        src += '\n{';
        src += '\n    if (!dtor)';
        src += '\n    {';
        src += '\n        dtor = true;';
        src += '\n        free(*this);';
        src += '\n    }';
        src += '\n}';

        include('<cassert>');
        include('<utility>');

        src += '\n\n' + name + '::' + name + '(' + name + '&& src) noexcept';
        src += '\n    : data(std::move(src.data))';
        src += '\n{';
        src += '\n    assert(!src.dtor);';
        src += '\n    dtor = src.dtor;';
        src += '\n    src.dtor = true;';
        src += '\n}';

        include('<cstring>');

        src += '\n\n' + name + '& ' + name + '::operator=(' + name + '&& src) noexcept';
        src += '\n{';
        src += '\n    if (&src != this)';
        src += '\n    {';
        src += '\n        char temp[sizeof(' + name + ')];';
        src += '\n        std::memcpy(temp, this, sizeof(' + name + '));';
        src += '\n        std::memcpy(this, &src, sizeof(' + name + '));';
        src += '\n        std::memcpy(&src, temp, sizeof(' + name + '));';
        src += '\n    }';
        src += '\n';
        src += '\n    return *this;';
        src += '\n}';
    }

    if (!closure && _fnN)
    {
        _fdef += '\n' + src + '\n';
        src = '';
    }

    return src;
}

function cgLet(node: SolvedNode)
{
    const id    = node.value || fail();

    const annot = typeAnnot(node.type) || fail();
    const head  = annot + ' ' + ID(id);
    const init  = node.items && node.items[LET_INIT];
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

function cgJump(node: SolvedNode)
{
    node.value && fail('TODO');

    return node.kind;
}

function cgStringLiteral(node: SolvedNode)
{
    include('<string>');
    return 'std::string(' + JSON.stringify(node.value) + ')';
}

function cgArrayLiteral(node: SolvedNode)
{
    const items = cgNodes(node.items);
    const annot = typeAnnot(node.type).replace(/^const |&$/g, '');

    return annot + ' { ' + items.join(', ') + ' }';
}

function cgCall(node: SolvedNode)
{
    const target = node.target || fail();
    const items  = cgNodes(node.items);

    if (target.kind === 'defctor')
    {
        let head = (target.type || fail()).canon;

        let open = ' { ';
        let close = ' }';
        const type = lookupType(head) || fail();
        if (type.flags & F_DESTRUCTOR)
        {
            open = ' { ' + head + '::Data { ';
            close = ' }}';
        }

        return head + open + items.join(', ') + close;
    }

    const id = target.node && target.node.value || fail();

    if (items && /[^a-zA-Z0-9_]/.test(id))
    {
        const nodes = node.items  || fail();
        const head  = nodes[0]    || fail();

        switch (items.length)
        {
            case 1: return node.flags & F_POSTFIX
                            ? items[0] + id
                            : id + items[0];

            case 2:
                if (id === '[]')
                {
                    if (head.type.canon === 'string')
                        return 'std::string(1, ' + items[0] + '[' + items[1] + '])';

                    // One does not simply index into a map.
                    if (type_isMap(head.type))
                        return items[0] + '.at(' + items[1] + ')';

                    return items[0] + '[' + items[1] + ']';
                }

                // This is hellish but should cover our asses for a little while -
                //  this is the `a[b]=c` instead of `a.at(b)=c` pattern.
                if (id === '=')
                {
                    const index = head.kind === 'call' && head.value === '[]'
                               && head.items && head.items.length === 2
                                ? head.items : null;

                    if (index && type_isMap((index[0] || fail()).type))
                        return '(' + cgNode(index[0] || fail()) +
                            '[' + cgNode(index[1] || fail()) + '] = ' +
                                items[1] + ')';
                }

                return '(' + items[0] + ' ' + id + ' ' + items[1] + ')';
        }
    }

    if (target.kind === 'var')
        return ID(id);

    if (target.kind === 'field')
    {
        let sep = '.';
        const parent = lookupType(
            (node.items && node.items[0] || fail())
                .type.canon) || fail();

        if (parent.flags & F_DESTRUCTOR)
            sep = '.data.';

        return items[0] + sep + ID(id);
    }

    if (id === 'len' && items.length === 1)
        return 'int(' + items[0] + '.size())';

    if (id === 'push' && items.length === 2)
        return items[0] + '.push_back(' + items[1] + ')';

    if (id === 'unshift' && items.length === 2)
        return '([&](auto& _) { _.insert(_.begin(), ' + items[1] + '); } (' + items[0] + '))';

    if (id === 'insert' && items.length === 3)
        return '([&](auto& _) { _.insert(_.begin() + ' + items[1] + ', ' + items[2] + '); } (' + items[0] + '))';

    if (id === 'splice' && items.length === 3)
        return '([&](auto& _) { const auto& _0 = _.begin() + ' + items[1] + '; _.erase(_0, _0 + ' + items[2] + '); } (' + items[0] + '))';

    if (id === 'idx' && items.length === 2)
    {
        const head = node.items && node.items[0] || fail();
        if (head.type.canon === 'string')
            return 'int(' + items[0] + '.find(' + items[1] + '))';

        include('<algorithm>');
        return '([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, ' + items[1] + '); return _1 != _N ? int(_1 - _0) : -1; } (' + items[0] + '))';
    }

    if (id === 'has' && items.length === 2)
    {
        const head = node.items && node.items[0] || fail();
        if (head.type.canon === 'string')
            return '(' + items[0] + '.find(' + items[1] + ') >= 0)';

        include('<algorithm>');
        return '([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, ' + items[1] + '); return _1 != _N; } (' + items[0] + '))';
    }

    return ID(id) + '(' + items.join(', ') + ')';
}

function cgLiteral(node: SolvedNode)
{
    return node.value || 'void';
}

function cgEmpty()
{
    return '';
}


//

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
    'break':    cgJump,
    'continue': cgJump,
    'call':     cgCall,
    'let':      cgLet,
    'if':       cgIf,
    'loop':     cgLoop,
    'int':      cgLiteral,
    'str':      cgStringLiteral,
    'arrlit':   cgArrayLiteral,
    'empty':    cgEmpty,

    'comma':    cgParens,
    'parens':   cgParens,
    'label':    cgParens,
    'struct':   cgEmpty,

    'copy':     cgCopyMove,
    'move':     cgCopyMove,
};

function cgCopyMove(node: SolvedNode)
{
    const a = cgNode(node.items && node.items[0] || fail());

    if (node.kind === 'move' && !(node.flags & F_ELISION))
    {
        include('<utility>');
        return 'std::move(' + a + ')';
    }

    return a;
}

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
