/*jshint node: true, unused: true, esversion: 6 */
"use strict";

const cp        = require('child_process');
const fs        = require('fs');


//

const FILE      = "./src/solver.fu";
const COMPILE   = FILE;
const REDUCT    = FILE + ".reduct";

let _current    = fs.readFileSync(
    fs.existsSync(REDUCT) ? REDUCT : FILE)
        .toString();


// Strip comments.
_current = _current.replace(/\/\/[^\n]*/g, '');

// Strip multiline comments.
_current = _current.replace(/\/\*[^*]+\*\//g, '');

// All lets now lax.
_current = _current.replace(/  ((?:(?:let|implicit|mut|ref) )+[a-zA-Z0-9_]+)/g, (binding) => '  lax ' + binding.slice(2));

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
    // Segfaults & co exit without any output.
    if (!output)
        return true;

    return /\n\tCOMPILER BUG:\n/.test(output);
}


//

function execCompiler()
{
    try {
        return cp.execSync(
            './bin/fu.works ' + COMPILE, { timeout: 10000 })
                .toString();
    }
    catch (e) {
        let output = e.stdout.toString() + e.stderr.toString();

        // For some reason, output gets piped on exit=0,
        //  but not on exit=1, TODO figure this out but this does it.
        if (output)
            console.log(output);
        else
            console.log("e.status: " + e.status + " e.signal:" + e.signal);

        return output;
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

const re_RETURN_DEFINIT = /return\s*[^[;\s][^;{}]+;/g;

function tryReturnDefinit(src)
{
    const match = randExec(src, re_RETURN_DEFINIT);
    if (!match)
        return false;

    console.log("\nDEFAULT RETURN\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
        'return [];' +
        src.slice(match.index + match[0].length));
}


// Pop leading &&s and ||s.

/*
    (
        \(
    )
    (
        [^()&|]*
        (?:\([^()]*\)[^()&|]*)*
        [&|]{2}
    )
*/

const re_POP_LEADING_ANDOR = /(\()([^()&|]*(?:\([^()]*\)[^()&|]*)*[&|]{2})\s*/g;

function tryPopLeadingAndOr(src)
{
    const match = randExec(src, re_POP_LEADING_ANDOR);
    if (!match)
        return false;

    console.log("\nLEADING AND/OR\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
        match[1] +
        src.slice(match.index + match[0].length));
}


// Pop tailing &&s and ||s.

/*
    (
        [&|]{2}
        [^()&|]*
        (?:\([^()]*\)[^()&|]*)*
    )
    (
        \)
    )
*/

const re_POP_TAILING_ANDOR = /\s*([&|]{2}[^()&|;]*(?:\([^()]*\)[^()&|;]*)*)([);])/g;

function tryPopTailingAndOr(src)
{
    const match = randExec(src, re_POP_TAILING_ANDOR);
    if (!match)
        return false;

    console.log("\nTAILING AND/OR\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
        match[2] +
        src.slice(match.index + match[0].length));
}


// Pop argument type annot.

/*
    (
        [(,]\s*
        [a-zA-Z0-9_]+\s*

        (?:![a-zA-Z0-9_]*\s*)?
        (?:.[a-zA-Z0-9_]*\s*)?
        (?:\[\]\s*)?
    )
    (
        :[^():]+
    )
    (
        [,)]
    )
*/

const re_POP_ARG_TYPE_ANNOT = /([(,]\s*[a-zA-Z0-9_]+\s*(?:![a-zA-Z0-9_]*\s*)?(?:.[a-zA-Z0-9_]*\s*)?(?:\[\])?\s*)(:[^():]+)([,)])/g;

function tryPopArgumentTypeAnnot(src)
{
    const match = randExec(src, re_POP_ARG_TYPE_ANNOT);
    if (!match)
        return false;

    console.log("\nARG TYPE ANNOT\n<<<" + match[1] + "    " + match[2] + "    " + match[3] + ">>>");

    return (
        src.slice(0, match.index) +
        match[1] +
        match[3] +
        src.slice(match.index + match[0].length));
}


// Pop argument-like.

const re_POP_ARGLIKE = /([(,])([^(),]+)([,)])/g;

function tryPopArgumentLike(src)
{
    const match = randExec(src, re_POP_ARGLIKE);
    if (!match)
        return false;

    console.log("\nARGLIKE\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
      ( match[1] == '(' ? match[1] : '' ) +
        match[3] +
        src.slice(match.index + match[0].length));
}


// Single statement if & co cutter.

const re_POP_SINGLE_STMT_CONTROL = /(if|else|do|while|for)[^{};]+;/g;

function tryPopSingleStmtControl(src)
{
    const match = randExec(src, re_POP_SINGLE_STMT_CONTROL);
    if (!match)
        return false;

    console.log("\nSINGLE_STMT_CONTROL\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
        src.slice(match.index + match[0].length));
}


// merge `"hello" ~ whatever ~ "yo"` into `"hello"` into `""`

const re_TRY_MERGE_STRING_LITERALS = /("{1,2})[^"\n]+("{1,2})|(`{1,2})[^`]+(`{1,2})/g;

function tryMergeStringLiterals(src)
{
    const match = randExec(src, re_TRY_MERGE_STRING_LITERALS);
    if (!match)
        return false;

    let open      = match[1] || match[3];
    let close     = match[2] || match[4];

    let quotes    = open + close;
    if (quotes.length & 1)
        quotes = quotes[0];
    else if (quotes.length > 2)
        quotes = quotes.slice(0, 2);

    console.log("\nMERGE_STRING_LITERALS\n<<<" + match[0] + " -> " + quotes + ">>>");

    return (
        src.slice(0, match.index) +
        quotes +
        src.slice(match.index + match[0].length));
}


// if/while cut keeping body.
//
// This assumes ifs condition is parenthesized,
//  will have to be updated if we want it to work for always-curly no-parens ifs.

const re_POP_IF_WHILE_COND = /(if|while)\s*!?\([^)]*(?:\([^)]*\))*\)\s*/g;

function tryPopIfWhileCond(src)
{
    const match = randExec(src, re_POP_IF_WHILE_COND);
    if (!match)
        return false;

    console.log("\nPOP_IF_WHILE_COND\n<<<" + match[0] + ">>>");

    const close = match[2] == '{' ? '{' : '';

    return (
        src.slice(0, match.index) +
        close +
        src.slice(match.index + match[0].length));
}


//

const re_SHORT_CIRCUIT_FN = /  (fn [a-zA-Z0-9_]+\()([^)]+)(\)\s*\{)(\s+)/g;

function tryShortCircuitFn(src)
{
    const match = randExec(src, re_SHORT_CIRCUIT_FN);
    if (!match)
        return false;

    let head = match[1];
    let args = match[2];
    let tail = match[3];
    let indent = match[4];

    head = "  lax " + head;
    args = args.split(/,\s*/).map(i => i.startsWith("lax ") ? i : "lax " + i);
    tail = tail + indent + "return [];" + indent;

    let replacement = head + args + tail;

    console.log("\nSHORT_CIRCUIT_FN\n<<<" + match[0] + ">>>\n<<<" + replacement + ">>>");

    return (
        src.slice(0, match.index) +
        head + args + tail +
        src.slice(match.index + match[0].length));
}


//

const re_EMPTY_BLOCK = /\{[^{}]+(\{[^{}]+\}[^{}]*)*\}/g;

function tryEmptyBlock(src)
{
    const match = randExec(src, re_EMPTY_BLOCK);
    if (!match)
        return false;

    console.log("\nEMPTY_BLOCK\n<<<" + match[0] + ">>>");

    return (
        src.slice(0, match.index) +
        '{}' +
        src.slice(match.index + match[0].length));
}


//

const _strategies =
[
    tryShortCircuitFn,

    tryRemoveFn,
    tryRemoveFlow,
    tryRemoveLet,
    tryRemoveMisc,

    tryCutLines,
    tryCutLineGroup,

    tryPopElse,
    tryReturnDefinit,
    tryUnwrapSingleStmtBlock,
    tryPopSingleStmtControl,
    tryPopIfWhileCond,
    tryEmptyBlock,

    tryPopArgumentTypeAnnot,
    tryPopArgumentLike,

    tryPopLeadingAndOr,
    tryPopTailingAndOr,
    tryMergeStringLiterals,
];

function main()
{
    console.log("\nChecking if initial state is broken ...");

    if (!tryReproduceWithMutation(_current))
    {
        console.log("\nNOT BROKEN: nothing to reduce.");
        return;
    }

    console.log("\nBROKEN: starting reduction loop.");

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
