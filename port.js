const fs = require('fs');

const FN = 'parse';

let src = fs.readFileSync('src/' + FN + '.ts', 'utf8');


// Warn.

if (/\.(map|filter|sort)\(/.test(src))
    console.error('HAS higher order fns');

if (/undefined/.test(src))
    console.error('HAS undefined');

if (/\|null/.test(src))
    console.error('HAS |null');

if (/\?:/.test(src))
    console.error('HAS ?:');


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

    .replace(/\bTokenKind\b/, 'string')
    .replace(/\bLexValue\b/, 'string')
    .replace(/\bNodes\b/, 'Node[]')

    ;


// Done, do the rest yourself.

fs.writeFileSync('src/fu/' + FN + '.fu', src);
