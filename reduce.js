/*jshint node: true, esversion: 6 */
"use strict";

const cp        = require('child_process');
const path      = require('path');
const fs        = require('fs');


//

const FILE      = "./src/solver.fu";
const REDUCT    = FILE + ".reduct";

let _current    = fs.readFileSync(
    fs.existsSync(REDUCT) ? REDUCT : FILE)
        .toString();


// Strip comments.
_current = _current.replace(/\/\/[^\n]*/g, '');

// Strip multiline comments.
_current = _current.replace(/\/\*[^*]+\*\//g, '');

function collapseMultilineWhitespace()
{
    // Whitespace.
    _current = _current.replace(/ *\n( *\n)+/g, '\n\n');
    _current = _current.replace(/\{\s+\n/g, '{\n');

    // Cleanup empty blocks.
    _current = _current.replace(/;\s*\{\s*\}/g, ';');
    _current = _current.replace(/\{\s*\{\s*\}/g, '{');
    _current = _current.replace(/\}\s*\{\s*\}/g, '}');
}

collapseMultilineWhitespace();

// Multiline declarations & calls.
_current = _current.replace(/\(\n\s*/g, '(');
_current = _current.replace(/,\n\s*/g, ', ');

// Egyptian, easier to deal with.
_current = _current.replace(/\)\s*(:\s*[a-zA-Z0-9\[\]&*|]+)?\s*\{/g, ')$1 {');


//

function isCompilerBugRepro(output)
{
    return /\n\tCOMPILER BUG:\n/.test(output);
}


//

function execCompiler()
{
    try {
        return cp.execSync(
            './bin/fu.works --bin bin/fu -c src/cli.fu', { timeout: 10000 })
                .toString();
    }
    catch (e) {
        return e.stdout.toString() + e.stderr.toString();
    }
}

let _dontRetry = {};

function tryReproduceWithMutation(next)
{
    // Don't waste time doing the same thing over and over.
    if (_dontRetry[next])
        return false;

    _dontRetry[next] = true;

    // Write to disk,
    //  compile,
    //   check if result is still a COMPILER BUG.
    //
    fs.writeFileSync(FILE, next);

    const result = execCompiler();
    if (!isCompilerBugRepro(result))
        return false;

    // We made progress!
    //  Persist,
    //   throw out the _dontRetry cache,
    //    and go on iterating.
    //
    _current = next;
    collapseMultilineWhitespace();

    // Collect some garb.
    for (const key in _dontRetry)
        if (key.length > _current.length)
            delete _dontRetry[key];

    fs.writeFileSync(REDUCT, _current);
    return true;
}


//

function randExec(src, re)
{
    const rand = Math.random() * src.length |0;

    re.lastIndex = rand;
    return re.exec(src);
}


//

const re_FN_DECLARATION =
    /(\n *)(fn|struct|enum|flags)[^\n]*(\n *\{)?/g;

const re_CONTROL_FLOW =
    /(\n *)(if|else|for|while|do|defer)[^\n]*(\n *\{)?/g;

const re_LET_DECLS =
    /(\n *)(let|shadow|mut|implicit)[^\n]*(\n *\{)?/g;

const re_UNKNOWN =
    /(\n *)([a-zA-Z_])[^\n]*(\n *\{)?/g;

function _tryRemoveSnippet(re_SNIPPET, src)
{
    const match = randExec(src, re_SNIPPET);
    if (!match)
        return false;

    const indent = match[1];

    let startIdx = match.index;
    let endIdx   = startIdx + match[0].length;
    startIdx    += indent.length;

    for (;;)
    {
        endIdx = src.indexOf(indent, endIdx);
        if (endIdx < 0)
            return false;

        endIdx += indent.length;

        let c = src[endIdx];
        if (!c)
            return false;

        if (!/[\s]/.test(c))
        {
            // Skip over a closing bracket.
            if (c === '}')
            {
                endIdx++;

                // Skip over a redundant semi.
                c = src[endIdx];
                if (c === ';')
                    endIdx++;
            }

            break;
        }
    }

    console.log("\nCUT SNIPPET\n|" + indent + "|<<<" + src.slice(startIdx, endIdx) + ">>>");

    return src.slice(0, startIdx) + src.slice(endIdx);
}

const tryRemoveFn   = src => _tryRemoveSnippet(re_FN_DECLARATION, src);
const tryRemoveFlow = src => _tryRemoveSnippet(re_CONTROL_FLOW, src);
const tryRemoveLet  = src => _tryRemoveSnippet(re_LET_DECLS, src);
const tryRemoveMisc = src => _tryRemoveSnippet(re_UNKNOWN, src);


//

const re_POP_ELSE = /else\s*/g;

function tryPopElse(src)
{
    const match = randExec(src, re_POP_ELSE);
    if (!match)
        return false;

    let startIdx = match.index;
    let endIdx   = startIdx + match[0].length;

    console.log("\nPOP ELSE\n<<<" + src.slice(startIdx, endIdx) + ">>>");

    return src.slice(0, startIdx) + src.slice(endIdx, src.length);
}


//

const re_CUT_LINES = /\n[^\n]+/g;

function tryCutLines(src)
{
    const match = randExec(src, re_CUT_LINES);
    if (!match)
        return false;

    let startIdx = match.index;
    let endIdx   = startIdx + match[0].length;

    console.log("\nCUT LINE\n<<<" + src.slice(startIdx, endIdx) + ">>>");

    return src.slice(0, startIdx) + src.slice(endIdx, src.length);
}


//

const _strategies =
[
    tryRemoveFn,
    tryRemoveFlow,
    tryRemoveLet,
    tryRemoveMisc,

    tryPopElse,
    tryCutLines,
];

function main()
{
    for (let attempts = 0; attempts < 100; attempts++)
    {
        for (let i = 0; i < _strategies.length; i++)
        {
            const strategy = _strategies[i];

            const next = strategy(_current);
            if (!next || _dontRetry[next])
                continue;

            if (!tryReproduceWithMutation(next))
                continue;

            // Prioritize whichever strategy manages to make progress.
            _strategies.splice(i, 1);
            _strategies.unshift(strategy);

            attempts = 0;
            break;
        }
    }
}


//

main();


// Finally, when we're done.

fs.writeFileSync(FILE, _current);
