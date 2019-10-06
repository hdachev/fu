const fs = require('fs');
const FILES = [ 'parse', 'solve', 'cpp_codegen' ];

function port(file)
{
    console.log('\n' + file + ':');

    let src = fs.readFileSync('src/' + file + '.ts', 'utf8');


    // Warn.

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


    //

    function checkOpArgs(regex, op, ok)
    {
        let m;

        const bad = {};

        while ((m = regex.exec(src)))
        {
            const l = m[1];
            const r = m[2];
            if (ok.indexOf(l) < 0) bad[l] = true;
            if (ok.indexOf(r) < 0) bad[r] = true;
        }

        Object.keys(bad).forEach(
            arg => console.error('\tHAS ' + op + ' ' + arg));
    }

    checkOpArgs(
        /(\b[a-zA-Z_][a-zA-Z0-9_]*\b)\s*[!=]==?\s*(\b[a-zA-Z_][a-zA-Z0-9_]*\b)/g, '==',
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
            // These ok ???????????????
            'type',
            't_bool', 't_never',
            't_or', 'sumType',
        ]);


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
