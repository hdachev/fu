const fs = require('fs');
const FILES = [ 'parse', 'solve', 'cpp_codegen' ];

function port(file)
{
    console.log('\n' + file + ':');

    let src = fs.readFileSync('src/' + file + '.ts', 'utf8');


    // Warn.

    if (/\.(map|filter|sort)\(/.test(src))
        console.error('\tHAS higher order fns');

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
