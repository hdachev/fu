import { fail } from './fail';

const OPTOKENS = '{}[]()!?~#$%^&*/-+<=>,.;:|';

const OPERATORS: readonly string[] =
[
    '+', '++', '-', '--',
    '*', '**', '/', '%',
    '<', '<<', '<<<', '>', '>>', '>>>',
    '===', '==', '!=', '!==', '<=', '>=', '=>', '->',
    '!', '!!', '?', '??',
    '.', '..', '...', ':', '::', ',', ';',
    '&', '&&', '|', '||', '^', '~',
    '{', '}', '[', ']', '(', ')', '[]',
    '=',
    '+=', '-=', '*=', '**=', '/=', '%=',
    '&=', '|=', '^=',
    '&&=', '||=',
    '@', '#', '$',
];

export type TokenKind =
    'id' | 'op' | 'str' | 'int' | 'num' | 'eof' | '?';

type i32 = number;

export type Token =
{
    kind:   TokenKind;
    value:  string;
    idx0:   i32;
    idx1:   i32;
    line:   i32;
    col:    i32;
};

export type LexErr =
{
    reason: string;
    kind:   TokenKind;
    value:  string;
    idx0:   i32;
    idx1:   i32;
    line:   i32;
    col:    i32;
};

export type LexResult =
{
    errors: LexErr[];
    tokens: Token[];
};

export function lex(src: string): LexResult
{
    const end   = src.length;
    let line    = 1;
    let lidx    = -1;
    let idx     = 0;

    let out: LexResult = { errors: [], tokens: [] };

    function token(kind: TokenKind, value: string, idx0: i32, idx1: i32, line: i32, col: i32)
    {
        out.tokens.push({
            kind, value,
            idx0, idx1,
            line, col,
        });
    }

    function err(kind: TokenKind, idx0: i32, reason: string|number)
    {
        // exit to nearest whitespace
        while (idx < end && src[idx] > ' ')
            idx++;

        const col = idx - lidx;

        if (typeof reason === 'number')
            reason = src[reason];

        out.errors.push({
            reason,
            kind,   value: src.slice(idx0, idx),
            idx0,   idx1: idx,
            line,   col,
        });
    }

    function checkNum(kind: TokenKind, str: string): TokenKind
    {
        const v = Number(str);
        v === v || fail();

        return kind;
    }

    function unescapeStr(src: string, idx0: i32, idx1: i32)
    {
        let out = '';

        let n = idx1 - 1;
        for (let i = idx0 + 1; i < n; i++)
        {
            let c = src[i]
            if (c === '\\')
            {
                let c1 = src[++i];
                switch (c1)
                {
                    case 'n': out += '\n'; break;
                    case 'r': out += '\r'; break;
                    case 't': out += '\t'; break;
                    case 'v': out += '\v'; break;
                    default:  out += c1;
                }
            }
            else
            {
                out += c;
            }
        }

        return out;
    }

    while (idx < end)
    {
        let idx0 = idx;
        let c = src[idx++];

        // whitespace
        if (c <= ' ')
        {
            if (c === '\n')
            {
                line++;
                lidx = idx - 1;
            }
        }

        // identifiers & keywords
        else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c === '_')
        {
            while (idx < end)
            {
                let c = src[idx++]
                if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c === '_' || c >= '0' && c <= '9')
                {
                    //
                }
                else
                {
                    idx--;
                    break;
                }
            }

            let idx1 = idx;

            token(
                'id', src.slice(idx0, idx1),
                idx0, idx1,
                line, idx0 - lidx);
        }

        // numeric literals
        else if (c >= '0' && c <= '9')
        {
            let hex = false;
            let dot = false;
            let exp = false;

            if (c === '0' && idx < end && src[idx] === 'x')
            {
                hex = true;
                idx++;
            }

            while (idx < end)
            {
                let c = src[idx++];

                if (c >= '0' && c <= '9')
                {
                    //
                }
                else if (c === '.')
                {
                    if (hex || dot || exp)
                    {
                        err('num', idx0, idx - 1);
                        break;
                    }

                    dot = true;
                }
                else if ((c === 'e' || c === 'E') && !hex)
                {
                    if (hex || exp)
                    {
                        err('num', idx0, idx - 1);
                        break;
                    }

                    if (idx < end && (src[idx] === '-' || src[idx] === '+'))
                        idx++;

                    exp = true;
                }
                else if (c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F')
                {
                    if (!hex)
                    {
                        err('num', idx0, idx - 1);
                        break;
                    }
                }
                else
                {
                    idx--
                    break;
                }
            }

            let trail = src[idx - 1];
            if (trail < '0' || trail > '9')
            {
                err('num', idx0, idx - 1);
            }
            else
            {
                let idx1 = idx;
                let str = src.slice(idx0, idx1);

                token(
                    checkNum(!dot && !exp ? 'num' : 'int', str), str,
                    idx0, idx1,
                    line, idx0 - lidx)
            }
        }

        // string literals
        else if (c === '\'' || c === '"' || c === '`')
        {
            let esc = false;
            let ok  = false;

            while (idx < end)
            {
                let c1 = src[idx++];
                if (c1 === c)
                {
                    ok = true;
                    break;
                }
                else if (c1 === '\\')
                {
                    esc = true;
                    idx++;
                }
            }

            if (!ok)
            {
                err('str', idx0, 'Unterminated string literal.');
            }
            else
            {
                let idx1 = idx;
                let str  = esc  ? unescapeStr(src, idx0, idx1)
                                : src.slice(idx0 + 1, idx1 - 1);

                token(
                    'str', str,
                    idx0, idx1,
                    line, idx0 - lidx);
            }
        }

        // comments
        else if (c === '/' && idx < end && src[idx] === '/')
        {
            idx++;
            while (idx < end)
            {
                let c1 = src[idx++];
                if (c1 === '\n')
                {
                    line++;
                    lidx = idx - 1;
                    break;
                }
            }
        }

        // multiline comments
        else if (c === '/' && idx < end && src[idx] === '*')
        {
            idx++;
            while (idx < end)
            {
                let c = src[idx++];
                if (c === '\n')
                {
                    line++;
                    lidx = idx - 1;
                }
                else if (c === '*' && idx < end && src[idx] === '/')
                {
                    idx++;
                    break;
                }
            }
        }

        // operators
        else if (OPTOKENS.indexOf(c) >= 0)
        {
            while (idx < end)
            {
                let c = src[idx++];
                if (OPTOKENS.indexOf(c) < 0)
                {
                    idx--;
                    break;
                }
            }

            // split off adjacent operators
            {
                let begin   = idx0;
                let end     = idx;
                while (begin < end)
                {
                    let candidate = src.slice(begin, end);
                    let ok = OPERATORS.indexOf(candidate) >= 0;
                    if (end > begin + 1 && !ok)
                    {
                        end--;
                        continue;
                    }

                    if (!ok)
                    {
                        err('op', begin, end);
                    }
                    else
                    {
                        token(
                            'op', candidate,
                            begin, end,
                            line, begin - lidx);
                    }

                    begin = end;
                    end = idx;
                }
            }
        }

        // dunno
        else
        {
            err('?', idx0, idx0);
        }
    }

    // end of file token
    token(
        'eof', 'eof',
        idx, idx,
        line, idx - lidx);

    // err, data
    return out;
}
