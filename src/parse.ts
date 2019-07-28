import * as Fail from './fail';
import { Token, TokenKind, LexValue } from './lex';
import { ModuleID } from './commons';

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

function Node(
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
const F_PREFIX          = 1 << 2;
// const F_POSTFIX         = 1 << 3;
const F_ACCESS          = 1 << 4;
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
const P_COMMA   = BINOP.PRECEDENCE[','] || fail();
const P_QMARK   = BINOP.PRECEDENCE['?'] || fail();


// Commons.

export const LET_TYPE = 0;
export const LET_INIT = 1;


//

let _fname: string      = '';
let _tokens: Token[]    = null as any;
let _idx                = -1111;
let _loc: Token         = null as any;
let _col0               = -1111;
let _precedence         = -1111;
let _fnDepth            = -1111;

export type ParseResult =
{
    imports: ModuleID[];
    root: Node;
};

export function parse(opts: Options)
{
    // Clear state.
    _fname      = opts.fname;
    _tokens     = opts.tokens;
    _idx        = 0;
    _loc        = _tokens[0] || fail();
    _col0       = 0;
    _precedence = P_RESET;
    _fnDepth    = 0;

    // Check EOF.
    _tokens[_tokens.length - 1].kind === 'eof' || fail(
        'Missing `eof` token.');

    //
    return {
        imports: [],
        root: parseRoot(),
    };
}

function fail(...rest: unknown[])
{
    const here  = _tokens[_idx];
    const msg   = rest.length
                ? rest
                : [ 'Unexpected `' + here.value + '`.' ];

    const l0 = _loc.line;
    const c0 = _loc.col;

    const l1 = here.line;
    const c1 = here.col;

    const addr = l1 === l0
        ? '@' + l1 + ':' + c1
        : '@' + l0 + ':' + c0 + '..' + l1 + ':' + c1;

    return Fail.fail(
        _fname + ' ' + addr
            + ':\n\t', ...msg);
}


//

function consume(kind: TokenKind, value?: LexValue)
{
    const token = _tokens[_idx++];
    token.kind === kind && (value === undefined || token.value === value)
        || (_idx--, fail('Expected `' + value + '`, got `' + token.value + '`.'));

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
    consume('eof');

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
    ///////////////////////////////////////////////
    const loc0  = _loc;
    const token = _loc = _tokens[_idx++] || fail();
    ///////////////////////////////////////////////

    if (token.kind === 'op' || token.kind === 'id')
    {
        switch (token.value)
        {
            case '{':
                return parseBlock();

            case 'fn':
                return parseFnDecl();

            case 'ret':
            case 'return':
                return parseReturn();
        }
    }

    ////////////
    _idx--;
    _loc = loc0;
    ////////////

    // Expression statement, followed by a semi.
    return parseExpressionStatement();
}

function parseExpressionStatement(): Node
{
    const expr = parseExpression(P_RESET);
    consume('op', ';');
    return expr;
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

    ///////////
    _fnDepth++;
    ///////////

    items.push(
        tryPopTypeAnnot(),
         parseStatement());

    ///////////
    _fnDepth--;
    ///////////

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
        case '(': return parseCallExpression(head);
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

    switch (token.kind)
    {
        // Literals.
        case 'int':
        case 'num':
        case 'str':
            return createLeaf(
                token.kind, token.value);

        // Calls & co.
        case 'id':

            // Identifier expression.
            return createCall(
                token.value, F_ID, null);

        // Operators.
        case 'op':

            // TODO blocks should stick to being statements for the time being.
            switch (token.value)
            {
                // case '(': return parseParens();
                // case '$': return parseTypeParam();
                // case '[': return parseArrayLiteral();
            }

            return parsePrefix(token.value);
    }

    ///////
    _idx--;
    ///////

    return fail();
}

function parsePrefix(op: string)
{
    PREFIX.indexOf(op) >= 0 || (_idx--, fail());

    return createCall(
        op, F_PREFIX,
        [ parseExpression(P_PREFIX_UNARY) ]);
}


//

function parseCallArgs(endop: string, outArgs: Node[])
{
    let first = true;
    for (;;)
    {
        if (tryConsume('op', endop))
            break;

        if (!first)
            consume('op', ',');

        first = false;
        outArgs.push(parseExpression(P_COMMA));
    }

    return outArgs;
}

function parseCallExpression(expr: Node)
{
    const args = parseCallArgs(')', []);

    // Uniform call syntax.
    if (expr.kind === 'call' && (expr.flags & F_ACCESS))
    {
        const head = expr.items
                && expr.items.length === 1
                && expr.items[0] || fail();

        return createCall(
            expr.value || fail(), F_METHOD,
            [ head ].concat(args));
    }

    if (expr.kind === 'call' && (expr.flags & F_ID))
        return createCall(
            expr.value || fail(), 0, args);

    return fail('TODO dynamic call');
}

function createLeaf(kind: TokenKind, value: LexValue)
{
    return Node(kind, null, 0, value);
}

function createCall(id: LexValue, flags: number, args: Node[]|null)
{
    return Node('call', args, flags, id);
}


//

function parseReturn()
{
    _fnDepth > 0 || (_idx--, fail());

    const peek = _tokens[_idx];
    if (peek.kind === 'op' && peek.value === ';')
        return createReturn(null);

    return createReturn(
        parseExpressionStatement());
}

function createReturn(node: Node|null)
{
    return Node('return', node && [ node ]);
}


//

function createIf(cond: Node, cons: Node, alt: Node)
{
    return Node('if', [ cond, cons, alt ]);
}
