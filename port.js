const fs = require('fs');
const FILES = [ 'solve', 'cpp_codegen' ];

function warn(src)
{
    src = src.replace(
        /"[^\n"]+"|'[^\n']+'|`[^\n`]`/g,
        '');

    if (/\.map\b/.test(src))
        console.error('\tHAS .map');

    if (/\.filter\b/.test(src))
        console.error('\tHAS .filter');

    if (/\.reduce\b/.test(src))
        console.error('\tHAS .reduce');

    if (/\.find\b/.test(src))
        console.error('\tHAS .find');

    if (/\.some\b/.test(src))
        console.error('\tHAS .some');

    if (/\.sort\b/.test(src))
        console.error('\tHAS .sort');

    if (/=>/.test(src))
        console.error('\tHAS =>');

    if (/undefined/.test(src))
        console.error('\tHAS undefined');

    if (/\|null/.test(src))
        console.error('\tHAS |null');

    if (/\?:/.test(src))
        console.error('\tHAS ?:');

    if (/\bswitch\b/.test(src))
        console.error('\tHAS switch');

    if (/\.\.\./.test(src))
        console.error('\tHAS ...rest');

    {
        const calls = {};
        const re = /\b(Object(\s*\.[a-zA-Z0-9_]+)?\b|\bArray\s*\.[a-zA-Z0-9_]+)\b/g;

        let m;
        while ((m = re.exec(src)))
            calls[m[0]] = true;

        Object.keys(calls).forEach(call =>
            console.error('\tHAS ' + call));
    }


    //

    function rpad(src)
    {
        while (src.length < 24)
            src += ' ';

        return src;
    }

    function checkOpArgs(regex, op, ok)
    {
        let m;

        const bad = {};

        while ((m = regex.exec(src)))
        {
            const l = m[1];
            const r = m[2];
            if (ok.indexOf(l) < 0) bad[l] = m[0];
            if (ok.indexOf(r) < 0) bad[r] = m[0];
        }

        Object.keys(bad).forEach(
            arg => console.error('\tHAS ' + op + ' ' + rpad(arg) + '\t' + bad[arg]));
    }

    const eqOk =
    [
        // --------------------------------------------------
        // Parser.
        // --------------------------------------------------

        // The usual suspects.
        'length', 'i',

        // These look all good.
        'kind', 'value',
        'endKind', 'endVal',
        'l0', 'l1', 'line0', 'line1',
        'col1', '_col0',

        // Should be good.
        '_precedence', 'p1',

        // Counters.
        '_numReturns', 'numReturns0',
        '_numDollars', 'numDollars0', 'numDollars1',

        // Node kinds.
        'k_left', 'k_right',

        // --------------------------------------------------
        // Solver.
        // --------------------------------------------------

        // Types - should be fine.
        'type',
        't_bool', 't_never',
        't_or', 'sumType',
    ];

    checkOpArgs(
        /(?:\b[a-zA-Z_][a-zA-Z0-9_]*\.)*([a-zA-Z_][a-zA-Z0-9_]*\b)\s*(?:\s*\))*===?\s*(?:\(\s*)*(?:\b[a-zA-Z_][a-zA-Z0-9_]*\.)*([a-zA-Z_][a-zA-Z0-9_]*\b)/g,
        '==', eqOk);

    checkOpArgs(
        /(?:\b[a-zA-Z_][a-zA-Z0-9_]*\.)*([a-zA-Z_][a-zA-Z0-9_]*\b)\s*(?:\s*\))*!==?\s*(?:\(\s*)*(?:\b[a-zA-Z_][a-zA-Z0-9_]*\.)*([a-zA-Z_][a-zA-Z0-9_]*\b)/g,
        '!=', eqOk);
}

function port(file)
{
    console.log('\n' + file + ':');

    let src = fs.readFileSync('src/' + file + '.ts', 'utf8');

    warn(src);


    // Common replacers.

    src = src
        .replace(/ === /g, ' == ')
        .replace(/ !== /g, ' != ')
        .replace(/\bfunction ([a-zA-Z]+)\b/g, (_, id) => 'fn ' + id)
        .replace(/\btype ([a-zA-Z]+) =/g, (_, id) => 'struct ' + id)
        .replace(/\blet ([a-zA-Z]+)/g,    (_, id) => 'mut ' + id)
        .replace(/\bconst ([a-zA-Z]+)/g,  (_, id) => 'let ' + id)
        .replace(/\b([a-zA-Z]+): number/g,  (_, id) => id + ': i32')
        .replace(/\bboolean\b/g,  'bool')
        .replace(/\bexport\b/g, 'pub')

        .replace(/\bTokenKind\b/g, 'string')
        .replace(/\bLexValue\b/g, 'string')
        .replace(/\bNodes\b/g, 'Node[]')

        .replace(/\b([a-zA-Z]+(\[\])?)\|null\b/g, (_, id) => id)

        ;


    // Done, do the rest yourself.

    fs.writeFileSync('src/fu/' + file + '.fu', src);
}

FILES.forEach(port);

console.log('');
