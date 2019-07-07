import * as Fail from './fail';
import { Token, TokenKind, LexValue } from './lex';

type Options =
{
    fname:      string;
    tokens:     Token[];
};

type Nodes = (Node|null)[];

type Flags = number;

type Node =
{
    kind:       string;
    flags:      Flags;
    value:      LexValue|null;
    items:      Nodes|null;
    token:      Token;
};

type FullNode<TKind = string> =
{
    kind:       TKind,
    flags:      Flags;
    value:      LexValue;
    items:      Nodes;
    token:      Token;
};

// function shallowClone(node: Node): Node
// {
//     return Node(
//         node.kind,
//         node.items && node.items.slice(),
//         node.flags,
//         node.value,
//         node.token);
// }

export function Node(
    kind:       string,
    items:      Nodes|null      = null,
    flags:      number          = 0,
    value:      LexValue|null   = null,
    token:      Token|null      = null): Node
{
    return {
        kind:       kind  || fail(),
        value:      value,
        flags:      flags >>> 0,
        items:      items && items.length && items || null,
        token:      token || _loc || fail(),
    };
}


// Calltypes, probably an enum is better for the 4 kinds,
//  can't be mixed and matched.

const F_METHOD          = 1 << 0;
const F_INFIX           = 1 << 1;
// const F_PREFIX          = 1 << 2;
// const F_POSTFIX         = 1 << 3;
// const F_ACCESS          = 1 << 4;
const F_ID              = 1 << 5;

const F_LOCAL           = 1 << 6;
const F_IMPLICIT        = 1 << 7;
const F_UNTYPED_ARGS    = 1 << 8;


// Operator precedence table.

export type Precedence  = number & { K: 'Precedence' };

const P_RESET           = 1000 as Precedence;
const P_PREFIX_UNARY    = 3    as Precedence;

const PREFIX:  readonly string[] = [ '++', '+', '--', '-', '!', '!!', '~', '?', '*' ];
// const POSTFIX: readonly string[] = [ '++', '--', '[]' ];

type BINOP = {
    ASSIGNMENT:     { [op: string]: string };
    PRECEDENCE:     { [op: string]: Precedence };
    RIGHT_TO_LEFT:  { [precedence: number]: boolean };
};

function setupOperators()
{
    const out: BINOP =
    {
        ASSIGNMENT:     {},
        PRECEDENCE:     {},
        RIGHT_TO_LEFT:  {},
    };

    let precedence      = P_PREFIX_UNARY;
    let rightToLeft     = false;
    let isAssign        = false;

    function binop(...ops: string[]): void
    {
        precedence++
        out.RIGHT_TO_LEFT[precedence] = rightToLeft

        for (let i = 0; i < ops.length; i++)
        {
            const op = ops[i];
            out.PRECEDENCE[op] =
                precedence as Precedence;

            if (isAssign)
                out.ASSIGNMENT[op] = op.slice(0, -1);
        }
    }

    binop( 'as', 'is' );

    rightToLeft = true;
    binop( '**' );

    rightToLeft = false;
    binop( '*', '/', '%' );
    binop( '+', '-' );
    binop( '<<', '>>' );
    binop( '&' ); // Notice this is not js/c precedence, it's just never useful.
    binop( '^' ); // We're doing the rust thing here.
    binop( '|' );
    binop( '<', '<=', '>', '>=' );
    binop( '==', '!=', '<=>' );
    binop( '&&' );
    binop( '||' );

    binop( '->' );

    rightToLeft = true;
    binop( '?' );
    isAssign = true;
    binop( '=', '+=', '-=', '**=', '*=', '/=', '%=', '<<=', '>>=', '&=', '^=', '|=' );
    isAssign = false;

    rightToLeft = false;
    binop( ',' );

    //
    return out;
}

const BINOP     = setupOperators();
// const P_COMMA   = BINOP.PRECEDENCE[','] || fail();
const P_QMARK   = BINOP.PRECEDENCE['?'] || fail();


// Commons.

export const LET_TYPE = 0;
export const LET_INIT = 1;


//

let _fname: string      = '';
let _tokens: Token[]    = null as any;
let _idx                = 0;
let _loc: Token         = null as any;
let _col0               = 0;
let _precedence         = 0;

export function parse(opts: Options)
{
    // Clear state.
    _fname      = opts.fname;
    _tokens     = opts.tokens;
    _idx        = 0;
    _loc        = _tokens[0] || fail();
    _col0       = 0;
    _precedence = P_RESET;

    // Check EOF.
    _tokens[_tokens.length - 1].kind === 'eof' || fail(
        'Missing `eof` token.');

    //
    return parseRoot();
}

export function fail(...rest: unknown[])
{
    const msg   = rest.length
                ? rest
                : [ 'Unexpected `' + _tokens[_idx].value + '`.' ];

    return Fail.fail(
        _fname + ' at ' + _loc.line + ':' + _loc.col
            + ':\n\t', ...msg);
}


//

function consume(kind: TokenKind, value?: LexValue)
{
    const token = _tokens[_idx++];
    token.kind === kind && (value === undefined || token.value === value)
        || fail('Expecting `' + value + '`, got `' + token.value + '`');

    return token;
}

function tryConsume(kind: TokenKind, value?: LexValue): Token|null
{
    const peek = _tokens[_idx];
    if (peek.kind === kind && (value === undefined || peek.value === value))
    {
        _idx++;
        return peek;
    }

    return null;
}


//

function parseRoot(): Node
{
    _loc = _tokens[_idx];

    //
    let items: Node[] = [];

    // Imports only ok on top of files.
    // for (;;) {
    //     if (!peek('id', 'import'))
    //         break;

    //     loc = ctx.idx
    //     consume()
    //     items += parseImport()
    // }

    //
    for (;;)
    {
        const token = _tokens[_idx];
        if (token.kind === 'eof')
            break;

        _col0 = token.col;
        items.push(parseStatement());
    }

    //
    const token = _tokens[_idx];
    token.kind === 'eof' || fail();

    //
    return Node('root', items);
}

function parseBlock(): Node
{
    const line0 = _tokens[_idx].line;
    const col00 = _col0;

    const items: Node[] = [];
    for (;;)
    {
        const token = _tokens[_idx];
        if (token.kind === 'op' && token.value === '}')
        {
            // Done.
            _col0 = col00;
            _idx++;

            // Style-check, makes for more helpful errors.
            const line1 = token.line;
            const col1  = token.col;

            line1 === line0 || col1 === _col0 || fail_Lint(
                'Bad closing `}` indent, expecting ' + (_col0 - 1)
                    + ', got ' + (col1 - 1)
                    + '. Block starts on line ' + line0 + '.');

            break;
        }

        _col0 = token.col;

        _col0 > col00 || fail_Lint(
            'Bad indent, expecting more than ' + col00
                + '. Block starts on line ' + line0 + '.');

        const expr = parseStatement();
        expr.kind !== 'call' || ((expr.flags & (F_ID | F_METHOD)) === 0) || expr.items && expr.items.length > 1 || fail_Lint(
            'Orphan pure-looking expression.');

        items.push(expr);
    }

    return createBlock(items);
}

function createBlock(items: Nodes)
{
    return Node('block', items);
}

function fail_Lint(...args: unknown[])
{
    // TODO allow opt out
    fail('Lint:', ...args);
}


//

function parseStatement(): Node
{
    const loc0 = _loc;
    const stmt = tryParseNonExprStmt();
    _loc = loc0;

    if (stmt)
        return stmt;

    // Expression statement, followed by a semi.
    const expr = parseExpression(P_RESET);
    consume('op', ';');
    return expr;
}

function tryParseNonExprStmt(): Node|null
{
    const token = _tokens[_idx++];
    switch (token.value)
    {
        case 'fn': return parseFnDecl();
    }

    _idx--;
    return null;
}

function parseFnDecl(): Node
{
    // fn hello(), fn +()
    const name = tryConsume('id')
              || tryConsume('op');

    // Opening parens.
    consume('op', '(');

    const items: Nodes = [];
    const flags = parseArgsDecl(items, 'op', ')');

    items.push(
        tryPopTypeAnnot(),
         parseStatement());

    return Node('fn', items, flags, name && name.value);
}

function tryPopTypeAnnot()
{
    return tryConsume('op', ':')
        && popType();
}

function popType()
{
    return parseExpression(P_QMARK);
}

function parseArgsDecl(outArgs: Nodes, endk: TokenKind, endv: LexValue)
{
    let first = true;
    let outFlags = 0;

    for (;;)
    {
        if (tryConsume(endk, endv))
            break;

        if (!first)
            consume('op', ',');

        first = false;

        let arg = parseLet();
        if (!arg.items[LET_TYPE])
            outFlags |= F_UNTYPED_ARGS;

        if (arg.items[LET_INIT])
            fail('TODO default arguments');

        arg.flags &= ~F_LOCAL;
        outArgs.push(arg);
    }

    return outFlags;
}

function parseLet()
{
    let flags   = F_LOCAL;
    if (tryConsume('id', 'implicit'))
        flags  |= F_IMPLICIT;

    const id    = consume('id').value;
    const type  = tryPopTypeAnnot();
    const init  = tryConsume('op', '=') && parseExpression();

    return createLet(id, flags, type, init);
}

function createLet(
    id: LexValue, flags: Flags,
    type: Node|null, init: Node|null)
{
    return Node('let', [ type, init ], flags, id) as FullNode<'let'>;
}

function parseExpression(p1 = _precedence): Node
{
    const p0    = _precedence;
    const loc0  = _loc;

    //////////////////////////////
    _precedence = p1;
    _loc        = _tokens[_idx] || fail();
    //////////////////////////////

    let head    = parseExpressionHead();
    {
        let out: Node|null;
        while (out  = tryParseExpressionTail(head))
        {
            _loc    = _tokens[_idx] || fail();
            head    = out;
        };
    }

    //////////////////////////////
    _precedence = p0;
    _loc        = loc0;
    //////////////////////////////

    return head;
}

function tryParseBinary(left: Node, op: LexValue, p1: Precedence): Node|null
{
    if (p1 > _precedence || p1 === _precedence && !BINOP.RIGHT_TO_LEFT[p1])
        return null;

    // consume
    _idx++;

    let mid: Node|null = null;
    if (op === '?')
    {
        mid = parseExpression();
        consume('op', ':');
    }

    let right = parseExpression(p1);
    if (mid)
        return createIf(left, mid, right);

    let flags = F_INFIX;

    return createCall(
        op, flags, [left, right])
}

function tryParseExpressionTail(head: Node): Node|null
{
    // Consume.
    const token = _tokens[_idx++];
    const v = token.value;

    switch (v)
    {
        case ';': return _idx--, null;
        // case '.': return parseAccessExpression(head);
        // case '(': return parseCallExpression(head);
        // case '[': return parseIndexExpression(head);
    }

    const p1 = BINOP.PRECEDENCE[v];
    if (p1)
        return _idx--, tryParseBinary(head, v, p1);

    // if (POSTFIX.indexOf(token.value) >= 0)
    //     return parsePostfix(head, token.value);

    // Backtrack.
    return _idx--, null;
}

function parseExpressionHead(): Node
{
    //////////////////////////////
    const token = _tokens[_idx++];
    //////////////////////////////

    // Keywords.
    if (token.kind === 'id')
    {
        switch (token.value)
        {
            case 'ret':
            case 'return':
                return createReturn(
                    parseExpression());
        }

        // Identifier expression.
        return createCall(
            token.value, F_ID, null);
    }

    // Blocks & other nonsense.
    if (token.kind === 'op')
    {
        switch (token.value)
        {
            case '{': return parseBlock();
            // case '(': return parseParens()
            // case '$': return parseTypeParam()
            // case '[': return parseArrayLiteral()
            // default:  return parsePrefix(token.value)
        }
    }

    //
    switch (token.kind)
    {
        case 'int':
        case 'num':
        case 'str':
            return createLeaf(
                token.kind, token.value);
    }

    ///////
    _idx--;
    ///////

    return fail(
        'Unexpected `' + token.value + '`.');
}

function createLeaf(kind: TokenKind, value: LexValue)
{
    return Node(kind, null, 0, value);
}

function createCall(id: LexValue, flags: number, args: Node[]|null)
{
    return Node('call', args, flags, id);
}

function createReturn(node: Node)
{
    return Node('return', [ node ]);
}

function createIf(cond: Node, cons: Node, alt: Node)
{
    return Node('if', [ cond, cons, alt ]);
}
