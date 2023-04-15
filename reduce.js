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

function collapseMultilineWhitespace(src)
{
    // Whitespace.
    src = src.replace(/ *\n( *\n)+/g, '\n\n');
    src = src.replace(/\{\s+\n/g, '{\n');

    // Cleanup empty blocks.
    src = src.replace(/;\s*\{\s*\}/g, ';');
    src = src.replace(/\{\s*\{\s*\}/g, '{');
    src = src.replace(/\}\s*\{\s*\}/g, '}');

    // Cleanup trailing lines before bracket.
    src = src.replace(/\s*(\n *\})/g, '$1');

    return src;
}

_current = collapseMultilineWhitespace(_current);

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

let _successes = 0;

function tryReproduceWithMutation(next)
{
    next = collapseMultilineWhitespace(next);

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

    // Collect some garb.
    for (const key in _dontRetry)
        if (key.length > _current.length)
            delete _dontRetry[key];

    fs.writeFileSync(REDUCT, _current);

    //
    if (_successes++ > 100)
    {
        _successes = 0;
        cp.execSync('git reset && git add -Av src/*.reduct && git commit -m auto-reduct-wip');
    }

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

function tryCutLineGroup(src)
{
    const lines = src.split('\n');

    const rand = Math.random() * lines.length |0;

    function indentOf(line) {
        const  indent = /^\s*/.exec(line);
        return indent && indent[0];
    }

    const expect = indentOf(lines[rand]);
    if (!expect)
        return false;

    let start = rand;
    if (Math.random() > 0.5)
    {
        const gteq = Math.random() > 0.5;

        for (let i = start; i --> 0; )
        {
            const line = lines[i];
            if (!line && Math.random() > 0.5)
                continue;

            const actual = indentOf(line);
            if (gteq ? actual >= expect : actual === expect)
                start = i;
            else
                break;
        }
    }

    let end = rand;
    if (Math.random() > 0.5)
    {
        const gteq = Math.random() > 0.5;

        for (let i = end; i < lines.length; i++)
        {
            const line = lines[i];
            if (!line && Math.random() > 0.5)
                continue;

            const actual = indentOf(line);
            if (gteq ? actual >= expect : actual === expect)
                end = i;
            else
                break;
        }
    }

    end++;

    const cut = lines.splice(start, end - start);

    console.log("\nCUT LINE GROUP\n<<<" + cut.join('\n') + ">>>");

    return lines.join('\n');
}


//

const re_UNWRAP_BLOCK = /(\s+)\{\s*([^;{}]+);\s*\}/g;

function tryUnwrapSingleStmtBlock(src)
{
    const match = randExec(src, re_UNWRAP_BLOCK);
    if (!match)
        return false;

    console.log("\nUNWRAP SINGLE STMT BLOCK\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
        match[1] + match[2] + ';' +
        src.slice(match.index + match[0].length));
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
    tryCutLineGroup,

    tryUnwrapSingleStmtBlock,
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
