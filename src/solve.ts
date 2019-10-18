import { Node, Nodes, LET_TYPE, LET_INIT, FN_RET_BACK, FN_BODY_BACK, FN_ARGS_BACK, F_NAMED_ARGS, F_ID, F_FIELD, F_USING, F_FULLY_TYPED, F_HAS_CLOSURE, F_CLOSURE, F_IMPLICIT, F_MUT, F_TEMPLATE, F_ELISION } from './parse';
import * as Fail from './fail';

import { Type, t_template, t_void, t_i32, t_bool, t_string, t_never, isAssignable, add_ref, add_prvalue_ref, add_mutref, add_refs_from, registerStruct, StructField, serializeType, tryClear_ref, tryClear_mutref, clear_refs, type_has/*, q_non_zero, qadd*/, type_tryInter, q_copy, q_move, q_ref, q_prvalue, createArray, tryClear_array, createMap, tryClear_map } from './types';

import { lex, Source, Filename, Token } from './lex';
import { parse } from './parse';
import { prelude_src } from './prelude';

import { Scope, Scope_lookup, Scope_keys, Scope_push, Scope_pop, Scope_add, Scope_get, ScopeIdx } from './scope';


//

export type SolvedNodes = (SolvedNode|null)[];

export type Type = Type;

export type SolvedNode = Node &
{
    type:       Type;
    items:      SolvedNodes|null;
    target:     ScopeIdx;
};

export type SolveResult =
{
    root:       SolvedNode;
    scope:      Scope;
};

export type Template =
{
    readonly node: Node;
    specializations: { [mangle: string]: Specialization };
};

type Specialization =
{
    readonly node:  SolvedNode|null;
    readonly index: ScopeIdx;
};

type TypeParams = { [id: string]: Type };

export type OverloadKind = 'template'|'fn'|'var'|'field'|'type'|'defctor'|'p-unshift'|'p-wrap';

export type Overload =
{
    readonly kind: OverloadKind;
    readonly name: string;
    readonly type: Type;

    // Arity.
    min: number;
    max: number;
    args: Type[]|null;
    names: string[]|null;
    defaults: SolvedNodes|null;

    readonly partial: [ScopeIdx, ScopeIdx]|null;

    // Usage.
    template: Template|null;
};

function Scope_Typedef(scope: Scope, id: string, type: Type)
{
    return Scope_add(scope, 'type', id, type);
}


//

function runSolver(parse: Node, globals: Scope): SolveResult
{
    const _scope:           Scope               = globals;

    let _here:              Token|null          = null;
    let _current_fn:        SolvedNode|null     = null;
    let _current_strt:      Type|null           = null;
    let _typeParams:        TypeParams|null     = null;

    let TEST_expectImplicits: boolean = false;


    //

    function GET(idx: ScopeIdx): Overload
    {
        return Scope_get(_scope, idx);
    }


    //

    function fail(reason: string = '', nodes: SolvedNodes|null = null)
    {
        if (!_here)
            return Fail.fail(reason);

        if (!reason)
            reason = 'Unexpected `' + _here.value + '`.';

        if (nodes)
            for (let i = 0; i < nodes.length; i++)
            {
                const node = nodes[i];
                if (node)
                    reason += ' <' + serializeType(node.type) + ' ' + node.kind + ':' + node.value + '>';
                else
                    reason += ' <null>';
            }

        const fname = _here.fname;
        const l0    = _here.line;
        const c0    = _here.col;

        const addr = '@' + l0 + ':' + c0;

        return Fail.fail(fname + ' ' + addr + ':\n\t' + reason);
    }


    //

    function Template(node: Node): Template
    {
        return { node, specializations: Object.create(null) };
    }

    function Binding(id: string, type: Type)
    {
        return Scope_add(_scope, 'var', id, type);
    }

    function Field(id: string, structType: Type, fieldType: Type)
    {
        return Scope_add(
            _scope,
            'field', id, fieldType,
            1, 1, [ 'this' ], [ structType ]);
    }

    function TemplateDecl(node: Node)
    {
        const id = node.value;

        const min = node.kind === 'fn'
            ? node.items.length + FN_ARGS_BACK
            : fail('TODO');

        const max = node.kind === 'fn'
            ? 0xffffff // implicit args etc, dunno whats happening, allow it all
            : min;

        const template = Template(node);

        let arg_n: string[]|null = null;
        if (node.kind === 'fn')
        {
            arg_n = [];

            const items = node.items;
            for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
            {
                const arg = items[i] || fail();
                arg.kind === 'let' || fail();
                const name = arg.value || fail();
                arg_n[i] = name;
            }
        }

        return Scope_add(
            _scope,
            'template', id, t_template,
            min, max, arg_n, null, null,
            template);
    }

    function FnDecl(id: string, node: SolvedNode)
    {
        const items: SolvedNodes = node.items;
        const rnode = items[items.length + FN_RET_BACK];
        const ret   = rnode && rnode.type || fail();

        const max   = items.length + FN_RET_BACK;
        const args  = items.slice(0, max);

        const arg_t: Type[]      = [];
        const arg_n: string[]    = [];
        const arg_d: SolvedNodes = [];

        let min = 0;
        for (let i = 0; i < max; i++)
        {
            const arg = args[i]  || fail();
            arg.kind === 'let'   || fail();
            arg_t[i] = arg.type  || fail();
            arg_n[i] = arg.value || fail();

            //
            const implicit = !!(arg.flags & F_IMPLICIT);

            // Non-implicit, non-defaulted argument?
            if (!implicit)
            {
                arg_d.length >= i || fail();

                const def = arg.items[LET_INIT] || null;
                arg_d[i] = def;
                if (!def)
                    min++;
            }
        }

        const overload = Scope_add(
            _scope,
            'fn', id, ret,
            min, max, arg_n, arg_t, arg_d);

        node.target = overload;

        return overload;
    }

    function DefaultCtor(id: string, type: Type, members: SolvedNode[])
    {
        const arg_t:   Type[] = [];
        const arg_n: string[] = [];

        for (let i = 0; i < members.length; i++)
        {
            const member = members[i];

            arg_t[i] = member && member.type  || fail();
            arg_n[i] = member && member.value || fail();
        }

        //
        const max   = members.length;
        let   min   = 0;
        let   arg_d: SolvedNode[]|null = null;

        {
            const defaults: SolvedNode[] = [];
            arg_d = defaults;
            for (let i = 0; i < members.length; i++)
            {
                const member = members[i];
                const init   = member.items[LET_INIT] || tryDefaultInit(member.type);

                // Disable defaulting if any member is non-defaulted.
                if (!init)
                {
                    arg_d = null;
                    min   = max;
                    break;
                }

                defaults[i] = init;
            }
        }

        return Scope_add(
            _scope,
            'defctor', id, type,
            min, max, arg_n, arg_t, arg_d);
    }

    function tryDefaultInit(type: Type): SolvedNode|null
    {
        // Reference? No init, else default.
        if (type.quals.indexOf(q_ref) >= 0)
            return null;

        return createDefaultInit(type);
    }

    function createDefaultInit(type: Type): SolvedNode
    {
        return {
            kind:   'definit',
            flags:  0,
            value:  '',

            items:  [],
            token:  (_here || fail()),
            type,
            target: 0,
        };
    }

    function solveDefinit(type: Type|null): SolvedNode
    {
        if (!type)
            return fail(
                'Cannot solve definit, no inferred type.');

        return tryDefaultInit(type)
            || fail('Cannot definit: ' + serializeType(type));
    }


    //

    function Partial(id: string, viaIdx: ScopeIdx, overloadIdx: ScopeIdx)
    {
        const via      = GET(viaIdx);
        const overload = GET(overloadIdx);

        let kind: 'p-unshift'|'p-wrap' = 'p-unshift';
        let min = overload.min - 1;
        let max = overload.max - 1;
        min >= 0 && max >= min || fail();

        const o_args     = overload.args || fail();
        const o_names    = overload.names;
        const o_defaults = overload.defaults;

        // Fixed.
        let arg_t = o_args     && o_args    .length > 1 ? o_args    .slice(1) : null;
        let arg_n = o_names    && o_names   .length > 1 ? o_names   .slice(1) : null;
        let arg_d = o_defaults && o_defaults.length > 1 ? o_defaults.slice(1) : null;

        // Everything that's not a local/namespace/static/constant
        //  needs a value through which to activate.
        if (via.kind !== 'var')
        {
            kind = 'p-wrap';
            min++;
            max++;

            const via_t = via.args && via.args[0] || fail();

            //
            if (!arg_t)
                arg_t = [];

            arg_t.unshift(via_t);
            if (arg_n)
                arg_n.unshift('using');
            if (arg_d)
                arg_d.unshift(null);
        }

        return Scope_add(
            _scope,
            kind, id, overload.type,
            min, max, arg_n, arg_t, arg_d,
            null, [ viaIdx, overloadIdx ]);
    }


    //

    function scope_using(viaIdx: ScopeIdx)
    {
        const via = GET(viaIdx);
        const actual = via.type || fail();

        for (const id of Scope_keys(_scope))
        {
            // Skip over operators.
            if (!/[a-zA-Z_]/.test(id))
                continue;

            const overloads = Scope_lookup(_scope, id);
            if (!overloads)
                continue;

            let arity0 = false;
            for (let i = 0, MUT_n0 = overloads.length; i < MUT_n0; i++)
            {
                const overloadIdx = overloads[i];
                const overload = GET(overloadIdx);

                if (overload.min < 1)
                {
                    arity0 = true;
                    continue;
                }

                // TODO using + templates, the fuck do we do?
                if (overload.template)
                    continue;

                const expect = (overload.args || fail())[0] || fail();
                if (!isAssignable(expect, actual))
                    continue;

                if (overload.min < 2 && arity0)
                    fail('`using` arity-0 conflict: `' + id + '`.');

                // MUT DURING ITER!
                Partial(id, viaIdx, overloadIdx);
            }
        }
    }

    function arr_move<T>(arr: T[], from: number, to: number)
    {
        // memcpy, memmove, mempcy.
        const pivot = arr[from];

        if (from < to)
            for (let i = from; i < to; i++)
                arr[i] = arr[i + 1];

        if (from > to)
            for (let i = from; i > to; i--)
                arr[i] = arr[i - 1];

        arr[to] = pivot;
    }

    function scope_tryMatch__mutargs(
        id: string, args: SolvedNodes,
        retType: Type|null, flags: number): ScopeIdx
    {
        const overloads = Scope_lookup(_scope, id);
        if (!overloads)
            return 0;

        //
        let matchIdx: ScopeIdx = 0;

        // Arity 0 - blind head match.
        // Allows simple shadowing of variables and such, latest wins.
        if (!args.length)
        {
            const headIdx = overloads[0];
            if (GET(headIdx).min === 0)
                matchIdx = headIdx;
        }

        if (!matchIdx)
        {
            const arity = args.length;

            // Prep labelled args for remap.
            let names: (string|null)[]|null = null;
            if (flags & F_NAMED_ARGS)
            {
                names = [];
                let some = false;

                for (let i = 0; i < arity; i++)
                {
                    const arg = args[i];
                    names[i] =
                        arg && arg.kind === 'label'
                            ? (some = true, arg.value) || fail()
                            : null;
                }

                some || fail();
            }

            //
            NEXT: for (let i = 0; i < overloads.length; i++)
            {
                let overloadIdx = overloads[i];
                let overload = GET(overloadIdx);

                TEST_AGAIN: for (;;)
                {
                    if (overload.min > arity || overload.max < arity)
                        continue NEXT;

                    // Match by return.
                    if (retType && !isAssignable(retType, overload.type || fail()))
                        continue NEXT;

                    // Remap named arguments.
                    if (names)
                    {
                        const overloadNames = overload.names;
                        if (!overloadNames)
                            continue NEXT;

                        // Move named arguments around.
                        for (let i = 0; i < names.length; i++)
                        {
                            const id = names[i];
                            if (!id)
                                continue;

                            const idx = overloadNames.indexOf(id);
                            if (idx < 0)
                                continue NEXT;

                            arr_move(args, i, idx);
                            arr_move(names, i, idx);
                        }
                    }

                    // Specialize.
                    if (overload.template)
                    {
                        const specIdx = trySpecialize(overload.template, args);
                        if (!specIdx)
                            continue NEXT;

                        overloadIdx = specIdx;
                        overload = GET(specIdx);

                        // Repeat arity checks and such.
                        continue TEST_AGAIN;
                    }

                    // Done here.
                    break TEST_AGAIN;
                }

                // Type check args.
                const arg_t = overload.args || fail();
                const arg_d = overload.defaults;
                for (let i = 0; i < args.length; i++)
                {
                    const arg = args[i];
                    if (!arg)
                    {
                        arg_d && arg_d[i] || fail();
                        continue;
                    }

                    if (!isAssignable(arg_t[i], (args[i] || fail()).type))
                        continue NEXT;
                }

                // Forbid ambiguity.
                if (matchIdx)
                    fail('Ambiguous callsite, matches multiple functions in scope: `' + id + '`.');

                // Done!
                matchIdx = overloadIdx;
            }
        }

        if (matchIdx)
        {
            const matched = GET(matchIdx);

            // Mutate call args last thing.
            const arg_d = matched && matched.defaults;
            if (arg_d)
                for (let i = 0; i < arg_d.length; i++)
                    args[i] = args[i] || arg_d && arg_d[i] || fail();

            // Implicit argument injection.
            const arg_t = matched.args;

            if (arg_t && args.length < arg_t.length)
            {
                const arg_n = matched.names || fail();
                for (let i = args.length; i < arg_t.length; i++)
                {
                    const id   = arg_n[i];
                    const type = arg_t[i];

                    // Propagate implicit.
                    bindImplicitArg(args, i, id, type);
                }
            }
        }

        return matchIdx;
    }

    function repeat<T>(value: T, len: number): T[]
    {
        const result = [];
        for (let i = 0; i < len; i++)
            result[i] = value;

        return result;
    }

    function scope_match__mutargs(id: string, args: SolvedNodes, flags: number): ScopeIdx
    {
        return scope_tryMatch__mutargs(id, args, null, flags)
            || Scope_lookup(_scope, id) && fail('No overload of `' + id + '` matches call signature.', args)
            || fail('`' + id + '` is not defined.');
    }

    function solveNode(node: Node, type: Type|null = null): SolvedNode
    {
        const k = node.kind;

        if (k === 'root')       return solveRoot(node);
        if (k === 'block')      return solveBlock(node);
        if (k === 'label')      return solveComma(node);
        if (k === 'comma')      return solveComma(node);

        if (k === 'let')        return solveLet(node);
        if (k === 'call')       return solveCall(node);
        if (k === 'arrlit')     return solveArrayLiteral(node, type);
        if (k === 'if')         return solveIf(node);
        if (k === 'or')         return solveOr(node);
        if (k === 'and')        return solveAnd(node);
        if (k === 'loop')       return solveBlock(node);

        if (k === 'return')     return solveReturn(node);
        if (k === 'break')      return solveJump(node);
        if (k === 'continue')   return solveJump(node);

        if (k === 'int')        return solveInt(node);
        if (k === 'str')        return solveStr(node);
        if (k === 'empty')      return solveEmpty(node);

        if (k === 'definit')    return solveDefinit(type);

        return fail('TODO: ' + k);
    }

    function isUnordered(kind: string)
    {
        return kind === 'fn'
            || kind === 'struct';
    }

    function unorderedPrep(node: Node): SolvedNode|null
    {
        const k = node.kind;

        if (k === 'fn')         return uPrepFn(node);
        if (k === 'struct')     return uPrepStruct(node);

        return fail('TODO: ' + k);
    }

    function unorderedSolve(node: Node, prep: SolvedNode|null)
    {
        const k = node.kind;

        if (k === 'fn')         return uSolveFn(node, prep);
        if (k === 'struct')     return uSolveStruct(node, prep);

        return fail('TODO: ' + k);
    }


    //

    function solveRoot(node: Node): SolvedNode
    {
        TEST_expectImplicits = !!(node.flags & F_IMPLICIT);

        return SolvedNode(node, solveNodes(node.items), t_void);
    }

    function solveBlock(node: Node): SolvedNode
    {
        const scope0 = Scope_push(_scope);
        const out = SolvedNode(node, solveNodes(node.items), t_void);
        Scope_pop(_scope, scope0);
        return out;
    }

    function solveComma(node: Node): SolvedNode
    {
        const items = solveNodes(node.items);
        const last = items[items.length - 1] || fail();

        return SolvedNode(node, items, last.type || fail());
    }


    //

    const i32_min = 0xffffffff|0;
    const i32_max = 0x7fffffff|0;

    function solveInt(node: Node): SolvedNode
    {
        const v = Number(node.value);
        if (v >= i32_min && v <= i32_max)
        {
            let type = t_i32;
            // if (v !== 0)
            //     type = qadd(type, q_non_zero);

            return SolvedNode(node, null, type);
        }

        return fail(
            'Out of range for an i32 literal.');
    }

    function solveStr(node: Node): SolvedNode
    {
        const v = node.value;
        typeof v === 'string' || fail();

        return SolvedNode(node, null, t_string);
    }

    function solveEmpty(node: Node): SolvedNode
    {
        return SolvedNode(node, null, t_void);
    }


    //

    function uPrepFn(node: Node): SolvedNode|null
    {
        return __solveFn(false, false, node, null, -1);
    }

    function uSolveFn(node: Node, prep: SolvedNode|null): SolvedNode
    {
        return __solveFn(true, false, node, prep, -1) || fail();
    }

    function __solveFn(solve: boolean, spec: boolean, n_fn: Node, prep: SolvedNode|null, caseIdx: number): SolvedNode|null
    {
        const id = n_fn.value || fail('TODO anonymous fns');

        // Template early exit.
        if (spec)
        {
            solve || fail();
        }
        else if (n_fn.flags & F_TEMPLATE)
        {
            if (solve)
                return prep || fail();

            const tDecl = TemplateDecl(n_fn);
            const out   = SolvedNode(n_fn, null, t_void);
            out.target  = tDecl;
            return out;
        }

        // Prep reject.
        if (!solve && !(n_fn.flags & F_FULLY_TYPED))
            return null;

        const inItems   = n_fn.items;
        inItems.length >= FN_RET_BACK || fail();

        const out       = prep || SolvedNode(n_fn, null, t_void);

        const outItems: SolvedNodes = repeat(null, inItems.length);
        out.items       = outItems;

        //
        if (_current_fn && id !== 'free')
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
        }

        //////////////////////////
        {
            const current_fn0   = _current_fn;
            const scope0        = Scope_push(_scope);

            _current_fn         = out;

            // Arg decls.
            for (let i = 0; i < inItems.length + FN_ARGS_BACK; i++)
            {
                const n_arg = inItems[i] || fail();
                n_arg.kind === 'let' || fail();
                outItems[i] = solveLet(n_arg);
            }

            /////////////////////////////////////////////////////
            let n_ret   = inItems[inItems.length + FN_RET_BACK];
            let n_body  = inItems[inItems.length + FN_BODY_BACK] || fail();

            // Pattern descent.
            if (caseIdx >= 0)
            {
                n_body.kind === 'pattern' || fail();
                const branch = n_body.items[caseIdx] || fail();
                const items = branch.items;

                n_ret   = items[items.length + FN_RET_BACK]  || n_ret || null;
                n_body  = items[items.length + FN_BODY_BACK] || fail();
            }

            // Return type annot.
            {
                const s_ret = n_ret && evalTypeAnnot(n_ret) || null;

                // MUT DURING SOLVE,
                //  implicit args splice in
                outItems[outItems.length + FN_RET_BACK] = s_ret;
            }

            // Only if actually solving the fn, the fn body.
            if (solve)
            {
                const s_body = solveNode(n_body) || fail();

                // MUT DURING SOLVE,
                //  implicit args splice in
                outItems[outItems.length + FN_BODY_BACK] = s_body;
            }

            //
            /////////////////////////////////////////////////////

            _current_fn         = current_fn0;
            Scope_pop(_scope, scope0);
        }
        //////////////////////////

        if (!prep)
            FnDecl(id, out);

        !solve || out.items[out.items.length + FN_BODY_BACK] || fail();

        return out;
    }


    //

    function TODO_memoize_mangler(args: SolvedNodes): string
    {
        let mangle = '';
        for (let i = 0; i < args.length; i++)
            mangle += '\v' + serializeType((args[i] || fail()).type);

        return mangle;
    }


    //

    function trySpecialize(
        template: Template, args: SolvedNodes)
            : ScopeIdx
    {
        const mangle = TODO_memoize_mangler(args);

        //
        let spec = template.specializations[mangle];
        if (!spec)
        {
            const node = doTrySpecialize(template, args) || null;

            spec = template.specializations[mangle] =
            {
                node:   node,
                index:  node ? node.target || fail() : 0,
            };
        }

        return spec.index;
    }

    function doTrySpecialize(
        template: Template, args: SolvedNodes)
            : SolvedNode|null
    {
        const typeParams: TypeParams = {};

        const node = template.node;

        const result = node.kind === 'fn'
            ? trySpecializeFn(node, args, typeParams)
            : fail('TODO');

        return result;
    }


    //

    function trySpecializeFn(
        node: Node, args: SolvedNodes, typeParams: TypeParams)
            : SolvedNode|null
    {
        const items = node.items;

        // First off, solve type params.
        for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
        {
            const argNode = items[i] || fail();
            argNode.kind === 'let'   || fail();

            const argValue = args && args[i];
            const inType = argValue && argValue.type;

            if (inType)
            {
                const argName = argNode.value || fail();
                if (!typeParams[argName])
                    typeParams[argName] = inType;
            }

            if (argNode.flags & F_TEMPLATE)
            {
                const annot = argNode.items[LET_TYPE];
                if (annot)
                {
                    const ok = inType && trySolveTypeParams(
                        annot, inType, typeParams);

                    if (!ok)
                        return null;
                }
            }
        }

        // Match pattern arm here.
        let caseIdx = -1;

        const pattern = items[items.length + FN_BODY_BACK] || fail();
        if (pattern.kind === 'pattern')
        {
            const branches = pattern.items;
            for (let i = 0; i < branches.length; i++)
            {
                const branch = branches[i];
                const items = (branch || fail()).items;
                const cond = items[0] || fail();

                if (evalTypePattern(cond, typeParams))
                {
                    caseIdx = i;
                    break;
                }
            }

            // All branches mismatch?
            if (caseIdx < 0)
                return null;
        }

        ////////////////////////////////
        _typeParams = typeParams;
        const typeParams0 = _typeParams;
        const scope0 = Scope_push(_scope);
        ////////////////////////////////

        const specialized = __solveFn(true, true, node, null, caseIdx) || fail();

        ////////////////////////////////
        _typeParams = typeParams0;
        Scope_pop(_scope, scope0);
        ////////////////////////////////

        return specialized;
    }


    //

    function uPrepStruct(node: Node): SolvedNode
    {
        return __solveStruct(false, node, null);
    }

    function uSolveStruct(node: Node, prep: SolvedNode|null): SolvedNode
    {
        return __solveStruct(true, node, prep);
    }

    function __solveStruct(solve: boolean, node: Node, prep: SolvedNode|null): SolvedNode
    {
        const out           = prep || SolvedNode(node, null, t_void);

        const fields: StructField[] = [];

        const id            = node.value || fail('TODO anonymous structs');
        const type          = registerStruct(id, fields, node.flags);

        // Add the arity-0 type entry.
        if (!prep)
            out.target = Scope_Typedef(_scope, id, type);

        if (!solve)
            return out;

        //////////////////////////
        {
            const current_strt0 = _current_strt;
            _current_strt       = type;

            solveNodes(
                node.items,
                out.items = repeat(null, node.items.length));

            _current_strt       = current_strt0;
        }
        //////////////////////////

        // Add a default constructor.
        {
            const members: SolvedNode[] = [];
            const items = out.items;
            for (let i = 0; i < items.length; i++)
            {
                const item = items[i];
                if (item && item.kind === 'let' && (item.flags & F_FIELD))
                {
                    members.push(item);
                    fields.push({
                        id:   item.value || fail(),
                        type: item.type  || fail(),
                    });
                }
            }

            DefaultCtor(id, type, members);
        }

        return out;
    }


    //

    function solveReturn(node: Node): SolvedNode
    {
        const out = SolvedNode(node, solveNodes(node.items), t_void);

        // Either use the return expression,
        //  or the void-returning return statement itself,
        //   so we always have a node to rely on.

        const nextExpr  = out.items[0] || out;
        const nextType  = nextExpr.type || fail();

        const fn        = _current_fn || fail();
        const items     = fn.items;
        const retIdx    = items.length + FN_RET_BACK;
        const prevExpr  = items[retIdx];
        const prevType  = prevExpr ? prevExpr.type || fail() : null;

        if (prevType)
            isAssignable(prevType, nextType)
                || fail('Non-assignable return types: ' + serializeType(prevType) + ' <- ' + serializeType(nextType));
        else
            items[retIdx] = nextExpr || fail();

        return out;
    }

    function solveJump(node: Node): SolvedNode
    {
        return SolvedNode(node, null, t_void);
    }


    //

    function solveLet(node: Node): SolvedNode
    {
        const annot     = node.items[LET_TYPE];
        const init      = node.items[LET_INIT];

        const s_annot   = annot && evalTypeAnnot(annot);
        const t_annot   = s_annot && s_annot.type;

        let   s_init    = init && solveNode(init, t_annot);
        const t_init    = s_init && s_init.type;

        const t_let     = t_annot || clear_refs(t_init || fail(
            'Variable declarations without explicit type annotations must be initialized.'));

        if (t_annot && t_init)
            isAssignable(t_annot, t_init) || fail(
                'Type annotation does not match init expression.');

        s_init = s_init && maybeCopyOrMove(
            maybePRValue(s_init), t_let);

        //
        const out       = SolvedNode(node, [s_annot || s_init, s_init], t_let);
        const id        = node.value || fail();

        if (node.flags & F_MUT)
            _current_fn || fail(
                'Mutable statics are not currently allowed.');

        //
        const overload  = out.flags & F_FIELD
            ? Field  (id, _current_strt || fail(), t_let)
            : Binding(id, node.flags & F_MUT
                ? add_mutref(t_let)
                : add_ref(t_let));

        if (out.flags & F_USING)
            scope_using(overload);

        return out;
    }


    //

    function evalTypeAnnot(node: Node): SolvedNode
    {
        if (node.kind === 'call')
        {
            const items = node.items;
            if (items.length)
            {
                if (items.length === 1)
                {
                    const T = evalTypeAnnot(items[0] || fail()) || fail();
                    const t = T.type || fail();

                    if (node.value === '&')
                        return SolvedNode(node, null, add_ref(t));

                    if (node.value === '&mut')
                        return SolvedNode(node, null, add_mutref(t));

                    if (node.value === '[]')
                        return SolvedNode(node, null, createArray(t));
                }
                else if (items.length === 2)
                {
                    const a = evalTypeAnnot(items[0] || fail()).type || fail();
                    const b = evalTypeAnnot(items[1] || fail()).type || fail();

                    if (node.value === 'Map')
                        return SolvedNode(node, null, createMap(a, b));
                }
            }
            else
            {
                const id        = node.value || fail();
                const overloads = Scope_lookup(_scope, id);

                if (overloads)
                    for (let i = 0; i < overloads.length; i++)
                    {
                        const maybe = GET(overloads[i]);
                        if (maybe.kind === 'type')
                            return SolvedNode(node, null, maybe.type || fail());
                    }

                fail('No type `' + id + '` in scope.');
            }
        }
        else if (node.kind === 'typeparam')
        {
            const id = node.value || fail();
            _typeParams || fail(
                'Unexpected type param: `$' + id + '`.');

            const type = _typeParams && _typeParams[id] || fail(
                'No type param `$' + id + '` in scope.');

            return SolvedNode(node, null, type);
        }

        return fail('TODO');
    }

    function trySolveTypeParams(
        node: Node, type: Type, typeParams: TypeParams): boolean
    {
        if (node.kind === 'call')
        {
            const items = node.items;
            if (items.length)
            {
                if (items.length === 1)
                {
                    const t = node.value === '&'    ? tryClear_ref(type)
                            : node.value === '&mut' ? tryClear_mutref(type)
                            : node.value === '[]'   ? tryClear_array(type)
                            : fail('TODO');

                    if (!t)
                        return false;

                    return trySolveTypeParams(
                        items[0] || fail(), t, typeParams);
                }
                else if (items.length === 2)
                {
                    if (node.value === 'Map')
                    {
                        const kv = tryClear_map(type);
                        if (!kv)
                            return false;

                        return trySolveTypeParams(items[0] || fail(), kv[0], typeParams)
                            && trySolveTypeParams(items[1] || fail(), kv[1], typeParams);
                    }
                }
            }
            else
            {
                const id        = node.value || fail();
                const overloads = Scope_lookup(_scope, id);

                if (overloads)
                    for (let i = 0; i < overloads.length; i++)
                    {
                        const maybe = GET(overloads[i]);
                        if (maybe.kind === 'type')
                            return isAssignable(maybe.type || fail(), type);
                    }

                fail('No type `' + id + '` in scope.');
            }
        }
        else if (node.kind === 'typeparam')
        {
            const id = node.value || fail();
            const prev = typeParams[id];
            if (prev)
            {
                const inter = type_tryInter(prev, type);
                if (!inter)
                    return false;

                type = inter;
            }

            // TODO not here:
            //  we want to clear everything non-canonical from
            //   type params AFTER we solve & match the args,
            //    during the matching it shouldn't be necessary.
            //
            // After the match we need this to e.g. lift `non_zero`
            //  from integral results, etc.
            //
            typeParams[id] = clear_refs(type);

            return true;
        }

        return fail('TODO');
    }

    function evalTypePattern(node: Node, typeParams: TypeParams): boolean
    {
        const items = node.items;
        if (node.kind === 'call' && items.length === 2)
        {
            const left  = items[0] || fail();
            const right = items[1] || fail();

            if (node.value === '->')
            {
                if (left.kind  === 'typeparam' &&
                    right.kind === 'typetag')
                {
                    const tag   = right.value || fail();
                    const type  = left.value && typeParams[left.value] || fail(
                        'No type param `$' + left.value + '` in scope.');

                    return type_has(type, tag);
                }
                else
                {
                    ////////////////////////////////
                    const typeParams0 = _typeParams;
                    _typeParams       = typeParams;
                    ////////////////////////////////

                    //               is                //
                    // (actual) left -> right (expect) //
                    const expect = evalTypeAnnot(right).type;
                    const actual = evalTypeAnnot(left ).type;

                    ////////////////////////////////
                    _typeParams = typeParams0;
                    ////////////////////////////////

                    return isAssignable(expect, actual);
                }
            }
            else if (node.value === '&&')
            {
                return evalTypePattern(left,  typeParams)
                    && evalTypePattern(right, typeParams);
            }
            else if (node.value === '||')
            {
                return evalTypePattern(left,  typeParams)
                    && evalTypePattern(right, typeParams);
            }
        }

        return fail('TODO');
    }


    //

    function createRead(id: string): Node
    {
        return {
            kind:   'call',
            flags:  F_ID,
            value:  id,
            items:  [],
            token:  (_here || fail()),
        };
    }

    function solveCall(node: Node): SolvedNode
    {
        const id        = node.value || fail();
        let args        = solveNodes(node.items) || [];

        // Implicit temporaries, all args are referable.
        for (let i = 0; i < args.length; i++)
            args[i] = maybePRValue(args[i] || fail());

        //
        let callTargIdx = scope_match__mutargs(id, args, node.flags);
        let callTarg    = GET(callTargIdx);

        // `using` codegen.
        while (callTarg.partial)
        {
            const unshift   = callTarg.kind === 'p-unshift';

            const partial   = callTarg.partial  || fail();
            const viaIdx    = partial[0]        || fail();
            callTargIdx     = partial[1]        || fail();

            const via       = GET(viaIdx);
            callTarg        = GET(callTargIdx);

            // There's two things we can do here -
            //  -   either we're injecting an implicitly used local,
            //          e.g. the this pointer, or another `using` variable,
            //  -   or we're wrapping the head argument
            //          with another derefence or method call or whatever.

            // And that's all there is to `using`.
            const argNode   = CallerNode(
                createRead('__partial' as any),
                unshift ? [] : [ args[0] || fail() ],
                via.type || fail(),
                viaIdx);

            //
            if (!args)
                args = [];

            if (unshift)
                args.unshift(argNode);
            else
                args[0] = argNode;
        }

        //
        return CallerNode(
            node,
            args,
            callTarg.type || fail(),
            callTargIdx);
    }

    function maybePRValue(node: SolvedNode)
    {
        if (node.type.quals.indexOf(q_ref) < 0)
            node.type = add_prvalue_ref(node.type);

        return node;
    }


    // I feel this should be a fncall instead of this here.
    //  It's varargs - so is it a template or what?

    function solveArrayLiteral(node: Node, type: Type|null)
    {
        const items = solveNodes(node.items) || fail();

        let itemType = type && tryClear_array(type) || null;
        let startAt = 0;
        if (!itemType && items.length)
        {
            const head = items[startAt++] || fail();
            itemType = clear_refs(head.type);
        }

        if (!itemType)
            return fail('Cannot infer empty arraylit.');

        for (let i = startAt; i < items.length; i++)
            itemType = type_tryInter(itemType, (items[i] || fail()).type) || fail(
                '[array literal] No common supertype:', items);

        return SolvedNode(node, items,
            createArray(itemType) || fail());
    }


    // This is a weird one,
    //  in case this is the current fn we're solving,
    //   we wont have overload yet, but we do have the node,
    //    otherwise we have the overload and get the node from there.

    function createLet(id: string, type: Type, flags: number = 0): SolvedNode
    {
        return {
            kind:   'let',
            flags:  flags|0,
            value:  id,

            items:  [],
            token:  (_here || fail()),
            type:   type,
            target: 0,
        };
    }

    function injectImplicitArg__mutfn(
        node: SolvedNode,
        id: string, type: Type): ScopeIdx
    {
        const mut_argNodes = node.items;
        const newArgIdx = mut_argNodes.length + FN_RET_BACK;

        // The new argnode.
        const newArgNode = createLet(id, type, F_IMPLICIT);

        mut_argNodes.splice(newArgIdx, 0, newArgNode);

        // If we dont have the overload yet,
        //  there's nothing else to do here.

        // TODO argname check should come first -
        //  the one below is too late,
        //   wont catch an argname dupe here.
        if (node.target)
        {
            const fn = GET(node.target);

            // We'll be mutating the overload.
            fn.kind === 'fn' || fail();
            const mut_args = fn.args || [];
            const mut_names = fn.names || [];

            mut_names.length === mut_args.length || fail();
            mut_names.indexOf(id) < 0 || fail(
                'Implicit argument name collision.');

            mut_args .push(type);
            mut_names.push(id);

            fn.args  = mut_args;
            fn.names = mut_names;
        }

        // TODO put in the original scope!
        const scope0   =    Scope_push(_scope);
        const overload =    Binding(id, type);
                            Scope_pop(_scope, scope0);
        return overload;
    }

    function bindImplicitArg(
        args: SolvedNodes, argIdx: number,
        id: string, type: Type)
    {
        TEST_expectImplicits || fail(
            'Attempting to propagate implicit arguments.');

        args.length >= argIdx || fail();

        args[argIdx] = CallerNode(
            createRead(id), [], type,
            getImplicit(id, type));
    }

    function getImplicit(id: string, type: Type): ScopeIdx
    {
        let matched = scope_tryMatch__mutargs(id, [], type, 0);
        if (!matched)
        {
            if (!_current_fn)
                return fail('No implicit `' + id + '` in scope.');

            matched = injectImplicitArg__mutfn(
                _current_fn, id, type) || fail();
        }

        return matched;
    }


    //

    function solveIf(node: Node): SolvedNode
    {
        const items   = solveNodes(node.items);
        const [, cons, alt] = items;

        const priExpr = cons || alt || fail();
        const secExpr = cons && alt ? alt : cons;

        const priType = priExpr.type || fail();
        const secType = secExpr && (secExpr.type || fail());

        const outType: Type = !secType ? priType
            : type_tryInter(priType, secType) || fail(
                'No common supertype:', [ priExpr, secExpr ]);

        return SolvedNode(node, items, outType || fail());
    }

    function sumType_logic(items: SolvedNodes): Type
    {
        // All args refs?
        if (items.length)
        {
            let sumType: Type|null = (items[0] || fail()).type;
            for (let i = 1; i < items.length; i++)
            {
                const type = (items[i] || fail()).type;
                if (type === t_never)
                {
                    i === items.length - 1 || fail(
                        'Dead code following never [A].');

                    continue;
                }

                sumType = type_tryInter(sumType, type);
                if (!sumType)
                {
                    sumType = null;
                    break;
                }
            }

            sumType !== t_never || fail(
                'Dead code following never [B].');

            if (sumType && sumType.quals.indexOf(q_ref))
                return sumType;
        }

        return t_bool;
    }

    function solveAnd(node: Node): SolvedNode
    {
        const items = solveNodes(node.items);

        return SolvedNode(
            node, items,
            sumType_logic(items));
    }

    function solveOr(node: Node): SolvedNode
    {
        const items = solveNodes(node.items);

        let t_or = sumType_logic(items);
        if (t_or === t_bool)
        {
            let change = false;

            // Look for the `(a && b) || c` pattern -
            //  With correct codegen, only `b` and `c` need to intersect,
            //   `a` is simply another condition for using `b`.
            const alts = items.slice();
            for (let i = 0; i < alts.length - 1; i++)
            {
                const alt = alts[i] || fail();
                if (alt.kind === 'and')
                {
                    alts[i] = alt.items[alt.items.length - 1];
                    change = true;
                }
            }

            if (change)
                t_or = sumType_logic(alts);
        }

        return SolvedNode(
            node, items, t_or);
    }


    //

    function SolvedNode(
        node: Node, items: SolvedNodes|null, type: Type)
            : SolvedNode
    {
        return {
            kind:  node.kind ,
            flags: node.flags,
            value: node.value,

            items: items || [],
            token: node.token,
            type,
            target: 0,
        };
    }

    function wrap(kind: string, node: SolvedNode, flags: number): SolvedNode
    {
        return {
            kind,
            flags:  flags,
            value:  '',

            items:  [ node ],
            token:  node.token,
            type:   node.type,
            target: 0,
        };
    }

    function CallerNode(
        node: Node, items: SolvedNodes, type: Type, target: ScopeIdx)
            : SolvedNode
    {
        const overload = GET(target);

        // HACK -
        // TBD how we make this stuff work in real life.
        if (overload.kind === 'field')
        {
            const head = items.length === 1 && items[0] || fail();
            const headType = head.type || fail();

            type = add_refs_from(headType, type);
        }

        // Tag copies and moves.
        else if (items.length)
        {
            const args = overload.args || fail();
            for (let i = 0; i < items.length; i++)
                items[i] = maybeCopyOrMove(
                    items[i] || fail(), args[i]);
        }

        //
        const out = SolvedNode(node, items, type);
        out.target = target;
        return out;
    }

    function maybeCopyOrMove(
        node: SolvedNode, slot: Type): SolvedNode
    {
        const q = slot.quals;
        if (q.indexOf(q_ref) >= 0)
            return node;

        let op: 'move'|'copy' = 'copy';

        if (q.indexOf(q_copy) < 0)
        {
            if (q.indexOf(q_move) < 0)
                fail('Non-copy/non-move?');

            op = 'move';
        }

        return wrap(op, node,
            node.type.quals.indexOf(q_prvalue) >= 0
                ? F_ELISION
                : 0);
    }


    //

    function solveNodes(nodes: Nodes, result: SolvedNodes = []): SolvedNodes
    {
        const here0 = _here;

        let offset = 0;

        for (let i = 0; i < nodes.length; i++)
        {
            const node = nodes[i];
            if (!node)
            {
                result[i] = node;
                continue;
            }

            // Regular solve.
            if (!isUnordered(node.kind))
            {
                _here       = node.token || _here;
                result[i]   = solveNode(node);
                continue;
            }

            // Unordered solve -
            //  batches multiple potentially recursive declarations,
            //   so we can expose them all in scope prior to solving types.

            // This allows us to have groups of mutually recursive types & functions,
            //  without risking stuff depending on constants & variables
            //   introduced halfway through.
            const i0 = i;
            let   i1 = nodes.length;

            // First pass, expose stuff in scope
            //  without doing type checking when possible.
            for (let i = i0; i < nodes.length; i++)
            {
                const node = nodes[i];
                if (!node)
                {
                    result[i] = node;
                    continue;
                }

                if (!isUnordered(node.kind))
                {
                    i1 = i;
                    break;
                }

                _here       = node.token || _here;
                result[i]   = unorderedPrep(node);
            }

            // Second pass, do the remaining work.
            for (let i = i0; i < i1; i++)
            {
                const node = nodes[i];
                if (node)
                {
                    _here       = node.token || _here;
                    result[i]   = unorderedSolve(node, result[i]);
                }
            }

            // Continue from group end.
            i1 > i0 || fail();
            i = i1 - 1; // <- loop++
        }

        result.length === nodes.length + offset || fail();

        _here = here0;
        return result;
    }


    // So lets go.

    return {
        root: solveNode(parse),
        scope: _scope || fail(),
    };
}


// Solve & cache the prelude.

function listGlobals(): Scope
{
    const scope = Scope(null);

    Scope_Typedef(scope, 'i32',    t_i32   );
    Scope_Typedef(scope, 'bool',   t_bool  );
    Scope_Typedef(scope, 'void',   t_void  );
    Scope_Typedef(scope, 'string', t_string);
    Scope_Typedef(scope, 'never',  t_never );

    return scope;
}

const PRELUDE: Scope = runSolver(
    parse(lex(prelude_src as Source, '__prelude' as Filename)),
        listGlobals())
            .scope;

export function solve(parse: Node)
{
    return runSolver(
        parse, Scope(PRELUDE));
}
