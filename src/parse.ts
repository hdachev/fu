import * as Fail from './fail';
import { Token, TokenKind, LexValue } from './lex';
import { ModuleID } from './commons';

type Options =
{
    fname:      string;
    tokens:     Token[];
};

export type Nodes = (Node|null)[];

type Flags = number;

export type Node =
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

export const F_METHOD       = 1 << 0;
export const F_INFIX        = 1 << 1;
export const F_PREFIX       = 1 << 2;
export const F_POSTFIX      = 1 << 3;
export const F_ACCESS       = 1 << 4;
export const F_ID           = 1 << 5;

export const F_LOCAL        = 1 << 8;
export const F_ARG          = 1 << 9;
export const F_FIELD        = 1 << 10;

export const F_MUT          = 1 << 16;
export const F_IMPLICIT     = 1 << 17;
export const F_USING        = 1 << 18;

export const F_UNTYPED_ARGS = 1 << 24;
export const F_NAMED_ARGS   = 1 << 25;
export const F_FULLY_TYPED  = 1 << 26;
export const F_CLOSURE      = 1 << 27;
export const F_PATTERN      = 1 << 28;
export const F_TEMPLATE     = 1 << 29;


// Operator precedence table.

export type Precedence  = number & { K: 'Precedence' };

const P_RESET           = 1000 as Precedence;
const P_PREFIX_UNARY    = 3    as Precedence;

const PREFIX:  readonly string[] = [ '++', '+', '--', '-', '!', '!!', '~', '?', '*', '&', '&mut' ];
const POSTFIX: readonly string[] = [ '++', '--', '[]' ];

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


// Commons.

export const LET_TYPE       = 0;
export const LET_INIT       = 1;

export const FN_RET_BACK    = -2;
export const FN_BODY_BACK   = -1;
export const FN_ARGS_BACK   = FN_RET_BACK;

export const LOOP_INIT      = 0;
export const LOOP_COND      = 1;
export const LOOP_POST      = 2;
export const LOOP_BODY      = 3;
export const LOOP_POST_COND = 4;


//

let _fname: string      = '';
let _tokens: Token[]    = null as any;
let _idx                = -1111;
let _loc: Token         = null as any;
let _col0               = -1111;
let _precedence         = -1111;
let _fnDepth            = -1111;
let _numDollars         = -1111;
let _numReturns         = -1111;

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
    _numDollars = 0;

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
        || (_idx--, fail('Expected `' + (value || kind) + '`, got `' + token.value + '`.'));

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

    // Imports only ok on top of files.
    // for (;;) {
    //     if (!peek('id', 'import'))
    //         break;

    //     loc = ctx.idx
    //     consume()
    //     items += parseImport()
    // }

    return Node('root',
        parseBlockLike('eof', 'eof',
            parseStatement));
}


//

function parseBlock(): Node
{
    return createBlock(
        parseBlockLike('op', '}',
            parseStatement));
}

function createBlock(items: Nodes)
{
    return Node('block', items);
}


//

let _structName: LexValue|null = null;

function parseStructDecl(): Node
{
    const name = tryConsume('id');
    const id = name && name.value || fail('Anon structs.');

    ////////////////////////////////
    const structName0 = _structName;
    _structName = id;

    consume('op', '{');

    const items = parseBlockLike('op', '}',
        parseStructItem);

    _structName = structName0;
    //////////////////////////

    return Node(
        'struct', items, 0,
            name && name.value);
}

function parseStructItem(): Node
{
    //////////////////////////////
    const token = _tokens[_idx++];

    if (token.kind === 'op' || token.kind === 'id')
    {
        switch (token.value)
        {
            case 'fn': return parseStructMethod();
        }
    }

    _idx--;
    //////////////////////////////

    const member = parseLet();
    member.flags |= F_FIELD;

    consume('op', ';');
    return member;
}

function parseStructMethod()
{
    const fn        = parseFnDecl();

    // `this` arg annotation -
    //  -----------------------------------
    //  Now what the fuck is happening here -
    //      how do we deal with const/mut here?
    //  --------------------------------------------------------
    //  We dont want cpp-style double definitions for everything,
    //      so how do we go about this?

    const typeAnnot =
        createPrefix('&',
            // createPrefix('mut',
                createRead(_structName || fail()));

    if (!fn.items)
        fn.items = [];

    fn.items.unshift(
        createLet('this' as LexValue, F_USING, typeAnnot, null));

    fn.flags |= F_METHOD;
    return fn;
}


//

function parseBlockLike(
    endKind: TokenKind, endVal: LexValue,
        parseItem: () => Node): Node[]
{
    const line0 = _tokens[_idx].line;
    const col00 = _col0;

    const items: Node[] = [];
    for (;;)
    {
        const token = _tokens[_idx];
        if (token.kind === endKind && token.value === endVal)
        {
            // Done.
            _col0 = col00;
            _idx++;

            // Style-check, makes for more helpful errors.
            const line1 = token.line;
            const col1  = token.col;

            line1 === line0 || col1 === _col0 || fail_Lint(
                'Bad closing `' + token.value + '` indent, expecting ' + (_col0 - 1)
                    + ', got ' + (col1 - 1)
                    + '. Block starts on line ' + line0 + '.');

            break;
        }

        _col0 = token.col;

        _col0 > col00 || fail_Lint(
            'Bad indent, expecting more than ' + col00
                + '. Block starts on line ' + line0 + '.');

        const expr = parseItem();
        expr.kind !== 'call' || ((expr.flags & (F_ID | F_METHOD)) === 0) || expr.items && expr.items.length > 1 || fail_Lint(
            'Orphan pure-looking expression.');

        items.push(expr);

        // Unpacking & ungrouping node types.
        switch (expr.kind)
        {
            case 'struct':
                moveNodesInto(items, 'fn', expr);
        }
    }

    return items;
}

function fail_Lint(...args: unknown[])
{
    // TODO allow opt out
    fail('Lint:', ...args);
}

function moveNodesInto(out: Node[], kind: string, from: Node)
{
    const items = from.items || fail();
    for (let i = 0; i < items.length; i++)
    {
        const item = items[i];
        if (item && item.kind === kind)
        {
            items.splice(i--, 1);
            out.push(item);
        }
    }
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
            case '{':       return parseBlock();
            case 'let':     return parseLetStmt();
            case 'mut':     return _idx--, parseLetStmt();
            case 'if':      return parseIf();
            case 'return':  return parseReturn();
            case 'fn':      return parseFnDecl();
            case 'for':     return parseFor();
            case 'while':   return parseWhile();
            case ';':       return parseEmpty();
            case 'struct':  return parseStructDecl();
        }
    }

    ////////////
    _idx--;
    _loc = loc0;
    ////////////

    // Expression statement, followed by a semi.
    return parseExpressionStatement();
}

function parseEmpty(): Node
{
    return Node('empty');
}

function parseExpressionStatement(): Node
{
    const expr = parseExpression(P_RESET);
    consume('op', ';');
    return expr;
}

function parseFnDecl(): Node
{
    ////////////////////////////////
    const numDollars0 = _numDollars;
    const numReturns0 = _numReturns;
    ////////////////////////////////

    // fn hello(), fn +()
    const name = tryConsume('id')
              || tryConsume('op');

    // Opening parens.
    consume('op', '(');

    const items: Nodes = [];
    let flags = parseArgsDecl(items, 'op', ')');

    ////////////////////////////////
    _fnDepth++;
    ////////////////////////////////

    // Return type annot.
    let type = tryPopTypeAnnot();
    const retIdx = items.length;
    items.push(type);

    // Body or pattern (case/case).
    flags |= parseFnBodyOrPattern(items);

    // Inject `: void` annot here, easy,
    //  one less thing to deal with later.
    if (!type && _numReturns === numReturns0)
        items[retIdx] = type =
            createRead('void' as LexValue);

    if (type)
        flags |= F_FULLY_TYPED;

    ////////////////////////////////
    {
        _fnDepth--;
        _numReturns = numReturns0;

        const numDollars1 = _numDollars;
        _numDollars = numDollars0;
        if (numDollars1 !== numDollars0)
            flags |= F_TEMPLATE;
    }
    ////////////////////////////////

    return Node('fn', items, flags, name && name.value);
}

function parseFnBodyOrPattern(out_push_body: Nodes)
{
    let flags = 0;
    let body: Node;
    //

    if (tryConsume('id', 'case'))
    {
        const branches: Node[] = [];

        flags |= F_PATTERN;

        do
        {
            const cond = parseUnaryExpression();
            const type = tryPopTypeAnnot();
            const body = parseFnBodyBranch();

            branches.push(
                Node('fnbranch', [ cond, type, body ]));
        }
        while (tryConsume('id', 'case'));

        body = Node('pattern', branches);
    }
    else
    {
        body = parseFnBodyBranch();
    }

    //
    out_push_body.push(body);
    return flags;
}

function parseFnBodyBranch()
{
    const body = parseStatement();

    return body.kind === 'block' || body.kind === 'return'
         ? body
         : (_numReturns++, createReturn(body));
}

function tryPopTypeAnnot()
{
    return tryConsume('op', ':')
        && parseTypeAnnot();
}

function parseTypeAnnot()
{
    return parseUnaryExpression();
}

function parseArgsDecl(outArgs: Nodes, endk: TokenKind, endv: LexValue)
{
    let first = true;
    let outFlags = 0;

    let implicit: Nodes|null = null;

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
        arg.flags |= F_ARG;

        if (arg.flags & F_IMPLICIT)
        {
            if (!implicit)
                implicit = [];

            implicit.push(arg);
        }
        else
        {
            outArgs.push(arg);
        }
    }

    // Ensures implicit arguments always come last.
    if (implicit)
        for (let i = 0; i < implicit.length; i++)
            outArgs.push(implicit[i]);

    return outFlags;
}

function parseLetStmt()
{
    const ret = parseLet();
    consume('op', ';');
    return ret;
}

function parseLet()
{
    let flags   = F_LOCAL;

    const numDollars0 = _numDollars;

    if (tryConsume('id', 'using'   )) flags |= F_USING;
    if (tryConsume('id', 'implicit')) flags |= F_IMPLICIT;
    if (tryConsume('id', 'mut'     )) flags |= F_MUT;

    const id    = consume('id').value;
    const type  = tryPopTypeAnnot();
    const init  = tryConsume('op', '=') && parseExpression();

    if (numDollars0 !== _numDollars)
        flags |= F_TEMPLATE;

    return createLet(id, flags, type, init);
}

export function createLet(
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
    if (token.kind === 'op')
    {
        const v = token.value;

        switch (v)
        {
            case ';': return _idx--, null;
            case '.': return parseAccessExpression(head);
            case '(': return parseCallExpression(head);
            // case '[': return parseIndexExpression(head);
        }

        const p1 = BINOP.PRECEDENCE[v];
        if (p1)
            return _idx--, tryParseBinary(head, v, p1);

        if (POSTFIX.indexOf(v) >= 0)
            return createCall(v, F_POSTFIX, [ head ]);
    }

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
            return createRead(token.value);

        // Operators.
        case 'op':

            switch (token.value)
            {
                case '(': return parseParens();

                // case '[': return parseArrayLiteral();

                // case '{': ...    either c++/js implict construction -
                //                  can actually work with `[`s too.
                //           ...    or block expressions and/or $0, $1 / $i, $j / $x, $y, $z, $w
                //                  swift-style auto lambdas.

                case '$': return parseTypeParam();
                case '@': return parseTypeTag();
            }

            return parsePrefix(token.value);
    }

    ///////
    _idx--;
    ///////

    return fail();
}

function parseParens()
{
    const expr = parseExpression(P_RESET);
    consume('op', ')');
    return expr;
}

function parseTypeParam()
{
    _numDollars++;
    return createTypeParam(consume('id').value);
}

function createTypeParam(id: LexValue)
{
    return Node('typeparam', null, 0, id);
}

function parseTypeTag()
{
    return createTypeTag(consume('id').value);
}

function createTypeTag(id: LexValue)
{
    return Node('typetag', null, 0, id);
}

function parsePrefix(op: LexValue)
{
    if (op === '&' && tryConsume('id', 'mut'))
        op = '&mut' as LexValue;

    return createPrefix(
        op, parseUnaryExpression());
}

function parseUnaryExpression()
{
    return parseExpression(P_PREFIX_UNARY);
}

function createPrefix(op: LexValue, expr: Node)
{
    PREFIX.indexOf(op) >= 0 || (_idx--, fail());
    return createCall(op, F_PREFIX, [ expr ]);
}

function parseAccessExpression(expr: Node)
{
    return createCall(
        consume('id').value,
        F_ACCESS, [ expr ]);
}


//

function parseCallArgs(endop: string, out_args: Node[])
{
    let flags = 0;

    let first = true;
    for (;;)
    {
        if (tryConsume('op', endop))
            break;

        // Comma juggle.
        if (!first)
            consume('op', ',');

        first = false;

        // Named arguments.
        let name: LexValue|null = null;

        if (_tokens[_idx    ] .kind === 'id' &&
            _tokens[_idx + 1].value === ':')
        {
            name = _tokens[_idx].value;
            _idx += 2;

            flags |= F_NAMED_ARGS;
        }

        const expr = parseExpression(P_COMMA);

        out_args.push(
            name    ? createLabel(name, expr)
                    : expr);
    }

    return flags;
}

function createLabel(id: LexValue, value: Node)
{
    return Node('label', [ value ], 0, id);
}

function parseCallExpression(expr: Node)
{
    const args: Node[] = [];
    const argFlags = parseCallArgs(')', args);

    // Uniform call syntax.
    if (expr.kind === 'call' && (expr.flags & F_ACCESS))
    {
        const head = expr.items
                && expr.items.length === 1
                && expr.items[0] || fail();

        return createCall(
            expr.value || fail(), F_METHOD & argFlags,
            [ head ].concat(args));
    }

    if (expr.kind === 'call' && (expr.flags & F_ID))
        return createCall(
            expr.value || fail(), argFlags, args);

    return fail('TODO dynamic call');
}

function createLeaf(kind: TokenKind, value: LexValue)
{
    return Node(kind, null, 0, value);
}

export function createCall(id: LexValue, flags: number, args: Node[]|null)
{
    return Node('call', args, flags, id);
}

export function createRead(id: LexValue)
{
    return createCall(id || fail(), F_ID, null);
}


//

function parseReturn()
{
    _fnDepth > 0 || (_idx--, fail());
    _numReturns++;

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

function parseIf()
{
    consume('op', '(');
    const cond = parseExpression();
    consume('op', ')');

    const cons = parseStatement();

    const alt = tryConsume('id', 'else')
        ? parseStatement()
        : null;

    return createIf(cond, cons, alt);
}

function createIf(cond: Node, cons: Node, alt: Node|null)
{
    return Node('if', [ cond, cons, alt ]);
}


//

function parseFor()
{
    consume('op', '(');

    tryConsume('id', 'let');
    const init = parseLetStmt();
    const cond = parseExpressionStatement();

    const token = _tokens[_idx];
    const post = token.kind === 'op' && token.value === ')'
        ? parseEmpty()
        : parseExpression();

    consume('op', ')');
    const body = parseStatement();

    return createLoop(init, cond, post, body, null);
}

function parseWhile()
{
    consume('op', '(');
    const cond = parseExpression();
    consume('op', ')');
    const body = parseStatement();

    return createLoop(null, cond, null, body, null);
}

function createLoop(init: Node|null, cond: Node|null, post: Node|null, body: Node|null, postcond: Node|null)
{
    return Node('loop', [ init, cond, post, body, postcond ]);
}
