import { fail } from './fail';
import { ScopeIdx, Scope_get } from './scope';
import { SolveResult, SolvedNode, Type } from './solve';
import { LET_INIT, FN_BODY_BACK, FN_RET_BACK, FN_ARGS_BACK, LOOP_INIT, LOOP_COND, LOOP_POST, LOOP_BODY, LOOP_POST_COND, F_POSTFIX, F_HAS_CLOSURE, F_CLOSURE, F_DESTRUCTOR, F_ELISION, F_MUT, F_ARG } from './parse';
import { lookupType, Struct, type_isMap, q_ref, q_mutref, t_never, t_void, q_trivial, q_prvalue } from './types';

type Nodes              = (SolvedNode|null)[]|null;
type CppScope           = { [id: string]: number };
type Dedupes            = { [id: string]: string };

const M_STMT            = 1 << 0;
const M_RETBOOL         = 1 << 1;
const M_CONST           = 1 << 2;
const M_RETVAL          = 1 << 3;


//

export function cpp_codegen({ root, scope }: SolveResult): { src: string }
{
    let _libs: Dedupes      = Object.create(null);
    let _tfwd: Dedupes      = Object.create(null);
    let _ffwd: Dedupes      = Object.create(null);
    let _tdef: string       = '';
    let _fdef: string       = '';

    let _indent: string     = '\n';
    let _ids: CppScope      = Object.create(null);
    let _fnN: number        = 0;
    let _clsrN: number      = 0;
    let _faasN: number      = 0;

    function GET(idx: ScopeIdx)
    {
        return Scope_get(scope, idx);
    }


    //

    function enterScope(): CppScope
    {
        const ret   = _ids;
        _ids        = Object.create(_ids);

        return ret;
    }

    function exitScope(s: CppScope)
    {
        _ids = s;
    }

    function include(lib: string)
    {
        if (!_libs[lib])
            _libs[lib] = '#include ' + lib + '\n';
    }


    //

    function typeAnnot(type: Type, mode: number = 0): string
    {
        const fwd = typeAnnotBase(type);

        if ((mode & M_RETVAL) && type.canon === 'never')
            return '[[noreturn]] ' + fwd;

        if (!(type.quals & q_prvalue))
        {
            if (type.quals & q_mutref)
                return fwd + '&';
            if (type.quals & q_ref)
                return 'const ' + fwd + '&';
        }

        // Const members cannot be moved from -
        //  So let's only do this for trivial types -
        //   Currently this is more of a way to validate the codegen.
        if ((mode & M_CONST) && (type.quals & q_trivial))
            return 'const ' + fwd;

        return fwd;
    }

    function typeAnnotBase(type: Type): string
    {
        const c = type.canon;

        if (c === 'i32')    return 'int';
        if (c === 'bool')   return 'bool';
        if (c === 'void')   return 'void';
        if (c === 'string') return annotateString();
        if (c === 'never')  return annotateNever();

        const tdef = lookupType(type.canon) || fail('TODO', type.canon);
        const k = tdef.kind;

        if (k === 'struct')
        {
            if (!(type.canon in _tfwd))
            {
                _tfwd[type.canon] = '\nstruct ' + type.canon + ';';

                const def = declareStruct(type, tdef);
                _tdef += def;
            }

            return type.canon;
        }

        if (k === 'array')
        {
            const item = typeAnnot(tdef.fields[0].type);

            include('<vector>');
            return 'std::vector<' + item + '>';
        }

        if (k === 'map')
        {
            const k = typeAnnot(tdef.fields[0].type);
            const v = typeAnnot(tdef.fields[1].type);

            include('<unordered_map>');
            return 'std::unordered_map<' + k + ', ' + v + '>';
        }

        return fail('TODO', tdef.kind);
    }

    function declareStruct(t: Type, s: Struct)
    {
        let def = '\nstruct ' + t.canon + '\n{';
        let indent = '\n    ';

        if (s.flags & F_DESTRUCTOR)
        {
            def += '\n    struct Data\n    {';
            indent += '    ';
        }

        const fields = s.fields;
        for (let i = 0; i < fields.length; i++)
        {
            const field = fields[i];
            def += indent + typeAnnot(field.type) + ' ' + ID(field.id) + ';';
        }

        if (s.flags & F_DESTRUCTOR)
        {
            def += '\n    };';
            def += '\n';
            def += '\n    Data data;';
            def += '\n    bool dtor = false;';
            def += '\n';
            def += '\n    ~' + t.canon + '() noexcept;';
            def += '\n    inline ' + t.canon + '(Data data) noexcept : data(data) {};';
            def += '\n    ' + t.canon + '(const ' + t.canon + '&) = delete;';
            def += '\n    ' + t.canon + '& operator=(const ' + t.canon + '&) = delete;';
            def += '\n    ' + t.canon + '(' + t.canon + '&&) noexcept;';
            def += '\n    ' + t.canon + '& operator=(' + t.canon + '&&) noexcept;';
        }

        def += '\n    explicit operator bool() const noexcept';
        def += '\n    {';
        def += '\n        return false';

        for (let i = 0; i < fields.length; i++)
            def += '\n            || '
                + bool(fields[i].type,
                    (s.flags & F_DESTRUCTOR ? 'data.' : '')
                        + ID(fields[i].id));

        def += '\n        ;';
        def += '\n    }';

        return def + '\n};\n';
    }


    //

    function collectDedupes(_d: Dedupes|string)
    {
        let out = '';

        if (typeof _d === 'string')
        {
            out = _d;
        }
        else
        {
            const keys = Object.keys(_d).sort();
            for (let i = 0; i < keys.length; i++)
                out += _d[keys[i]];
        }

        return out;
    }

    function cgRoot(root: SolvedNode)
    {
        const src = cgStatements(root.items);

        let header = collectDedupes(_libs)
                   + collectDedupes(_tfwd)
                   + collectDedupes(_ffwd)
                   + collectDedupes(_tdef)
                   + collectDedupes(_fdef)
                   ;

        return header + src;
    }


    //

    function ID(id: string)
    {
        if (id === 'this')     return '_';
        if (id === 'template') return 'tempalt';

        return id;
    }

    function cgStatements(nodes: Nodes)
    {
        let src = '';

        const lines = cgNodes(nodes, M_STMT);
        for (let i = 0; i < lines.length; i++)
        {
            const line = lines[i];
            if (line)
                src += _indent + line + ';';
        }

        return src;
    }

    function blockWrap(nodes: Nodes)
    {
        const indent0 = _indent;
        _indent += '    ';

        const src = indent0 + '{' + cgStatements(nodes) + indent0 + '}';

        _indent = indent0;
        return src;
    }

    function blockWrapOne(node: SolvedNode)
    {
        return node.kind === 'block'
            ? cgBlock(node)
            : blockWrap([ node ]);
    }

    function blockWrapOne_unlessSilly(node: SolvedNode)
    {
        if (node.kind === 'if')
            return cgNode(node, M_STMT);

        return blockWrapOne(node);
    }

    function cgBlock(block: SolvedNode)
    {
        const s0 = enterScope();
        const src = blockWrap(block.items);
        exitScope(s0);

        return src;
    }

    function cgParens(node: SolvedNode)
    {
        const items = cgNodes(node.items);
        if (!items.length)
            return '(false /*empty parens*/)';

        if (items.length === 1)
            return items[0];

        return '(' + items.join(', ') + ')';
    }


    // This is kinda weird - it's an auto-refactor:
    //  it converts a function that contains closures
    //   into a struct, with its args and leading "lets"
    //    converted into fields, and then leading closures
    //     converted into struct members.

    // The tail of the function remains in an "EVAL" function,
    //  and currently to limit the damage we emit a macro
    //   that remaps the invocation.

    // TODO this can do more -
    //  we could collect most of the top-level stuff on the struct.

    function try_cgFnAsStruct(fn: SolvedNode): string|null
    {
        const body = fn.items[fn.items.length + FN_BODY_BACK];
        if (!body || body.kind !== 'block')
            return null;

        const items = body.items as SolvedNode[];

        // We need at least one closure
        //  in the function "header"
        //   for all of this to make sense.
        let hasClosuresInHeader = false;
        let end = 0;
        for (let i = 0; i < items.length; i++)
        {
            end = i;

            const item = items[i];
            if (item.kind === 'fn')
            {
                if (item.flags & F_CLOSURE)
                    hasClosuresInHeader = true;
            }
            else if (item.kind !== 'let' && item.kind !== 'struct')
            {
                break;
            }
        }

        if (!hasClosuresInHeader)
            return null;

        // Ok - refactor time.
        const evalName = fn.value + '_EVAL';

        const restFn: SolvedNode =
        {
            kind: 'fn', type: t_void,
            flags: fn.flags | F_CLOSURE,
            token: fn.token,
            value: evalName,
            target: 0,

            items:
            [
                fn.items[fn.items.length - 2], // retval
                {
                    kind: 'block', type: t_void,
                    flags: 0,
                    token: fn.token,
                    value: '',
                    target: 0,

                    items: items.slice(
                        end, items.length),
                },
            ],
        };

        const head: SolvedNode[] =
            (fn.items.slice(0, fn.items.length + FN_ARGS_BACK) as SolvedNode[])
                .concat(items.slice(0, end))
                .concat(restFn);

        //////////////////////
        _clsrN === 0 || fail();
        _clsrN--; // -1, so root closures come up at 0.
        //////////////////////

        const structName = 'sf_' + fn.value;
        let src = '\nstruct ' + structName
                + blockWrap(head) + ';'
                + '\n\n#define ' + fn.value + '(...) ((' + structName + ' { __VA_ARGS__ }).' + evalName + '())\n';

        //////////////////////
        _clsrN++;
        //////////////////////

        return src;
    }


    //

    function cgFn(fn: SolvedNode)
    {
        // Template emit.
        if (!fn.items.length)
        {
            let src = '';

            const template = GET(fn.target).template || fail();
            const specs = template.specializations;
            for (const key in specs)
            {
                const s = specs[key];
                const node = s && s.node;
                if (node)
                    src += cgNode(node);
            }

            return src;
        }

        // Use like-struct output for top-level functions with closures -
        //  We'll try to "close over" a root-level struct.
        if (_faasN === 0 && (fn.flags & F_HAS_CLOSURE))
        {
            /////////
            _faasN++;
            /////////

            const src = try_cgFnAsStruct(fn);

            /////////
            _faasN--;
            /////////

            if (src)
            {
                _fdef += src;
                return '';
            }
        }

        ///////////////////////////
        const s0    = enterScope();
        const f0    = _fnN;
        const c0    = _clsrN;
        const indent0 = _indent;

        _fnN++;
        if (fn.flags & F_CLOSURE) _clsrN++;
        ///////////////////////////

        //
        const items = fn.items;
        const body  = items[items.length + FN_BODY_BACK] || fail();
        const ret   = items[items.length + FN_RET_BACK ] || fail();
        const annot = typeAnnot(ret.type || fail(), M_RETVAL);

        //
        const closure = !!_clsrN && (fn.flags & F_CLOSURE)
            && fn.value !== '==';

        // Both closures and try_cgFnAsStruct
        if (!(fn.flags & F_CLOSURE))
            _indent = '\n';

        let src = closure
                ? 'const auto& ' + fn.value + ' = [&]('
                : annot + ' ' + fn.value + '(';

        if (fn.value === '==')
            src = annot + ' operator' + fn.value + '(';

        for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
        {
            if (i)
                src += ', ';

            src += binding(items[i] || fail(), false);
        }

        src += closure
             ? ') -> ' + annot
             : ') noexcept';

        if (!closure && src !== 'int main()' && !(fn.flags & F_CLOSURE) && _fdef.indexOf(fn.value || fail()) >= 0)
            _ffwd[src] = '\n' + src + ';';

        if (body.kind === 'block')
            src += cgBlock(body);
        else
            src += blockWrap([ body ]);

        //////////////
        _fnN    = f0;
        _clsrN  = c0;
        _indent = indent0;
        exitScope(s0);
        //////////////

        if (fn.flags & F_DESTRUCTOR)
        {
            const head = items[0] || fail();
            const name = head.type.canon;

            src += '\n\n' + name + '::~' + name + '() noexcept';
            src += '\n{';
            src += '\n    if (!dtor)';
            src += '\n    {';
            src += '\n        dtor = true;';
            src += '\n        free(*this);';
            src += '\n    }';
            src += '\n}';

            include('<cassert>');
            include('<utility>');

            src += '\n\n' + name + '::' + name + '(' + name + '&& src) noexcept';
            src += '\n    : data(std::move(src.data))';
            src += '\n{';
            src += '\n    assert(!src.dtor);';
            src += '\n    dtor = src.dtor;';
            src += '\n    src.dtor = true;';
            src += '\n}';

            include('<cstring>');

            src += '\n\n' + name + '& ' + name + '::operator=(' + name + '&& src) noexcept';
            src += '\n{';
            src += '\n    if (&src != this)';
            src += '\n    {';
            src += '\n        char temp[sizeof(' + name + ')];';
            src += '\n        std::memcpy(temp, this, sizeof(' + name + '));';
            src += '\n        std::memcpy(this, &src, sizeof(' + name + '));';
            src += '\n        std::memcpy(&src, temp, sizeof(' + name + '));';
            src += '\n    }';
            src += '\n';
            src += '\n    return *this;';
            src += '\n}';
        }

        // This covers both closures & try_cgTryFnAsStruct:
        if (fn.flags & F_CLOSURE)
            return src;

        _fdef += '\n' + src + '\n';
        return '';
    }

    function binding(node: SolvedNode, doInit: boolean)
    {
        const id    = node.value || fail();
        const annot = typeAnnot(node.type, (node.flags & F_MUT) == 0 ? M_CONST : 0) || fail();
        const head  = annot + ' ' + ID(id);
        const init  = node.items[LET_INIT];

        if (!doInit || (node.flags & F_ARG))
            return head;

        if (init)
            return head + ' = ' + cgNode(init);

        return head + ' {}';
    }

    function cgLet(node: SolvedNode)
    {
        let src = binding(node, true);
        if (_fnN || _faasN)
            return src;

        // Nasty tempfix - can't have [&] in global space.
        src = src.replace('([&]', '([]');

        _fdef += src.replace(/^(const )?/, 'inline const ') + ';\n';
        return '';
    }

    function cgReturn(node: SolvedNode)
    {
        if (node.items)
        {
            const head = node.items[0] || fail();
            const src = cgNode(head);
            if (head.type === t_never)
                return src;

            return 'return ' + src;
        }

        return 'return';
    }

    function cgJump(node: SolvedNode)
    {
        if (node.value)
            return 'goto L_' + node.value + '_' + node.kind[0];

        return node.kind;
    }

    function cgStringLiteral(node: SolvedNode)
    {
        include('<string>');
        return 'std::string(' + JSON.stringify(node.value) + ')';
    }

    function cgArrayLiteral(node: SolvedNode)
    {
        const items = cgNodes(node.items);
        const annot = typeAnnot(node.type);

        if (!items.length)
            return annot + '{}';

        return annot + ' { ' + items.join(', ') + ' }';
    }

    function cgDefaultInit(node: SolvedNode)
    {
        return cgArrayLiteral(node);
    }

    function cgCall(node: SolvedNode)
    {
        const target = GET(node.target) || fail();
        const items  = cgNodes(node.items);

        if (target.kind === 'defctor')
        {
            const head = (target.type || fail()).canon;
            const type = lookupType(head) || fail();

            //
            let open = ' { ';
            let close = ' }';
            if (type.flags & F_DESTRUCTOR)
            {
                open = ' { ' + head + '::Data { ';
                close = ' }}';
            }

            return head + open + items.join(', ') + close;
        }

        const id = target.name || fail();

        if (/[^a-zA-Z0-9_]/.test(id))
        {
            const nodes = node.items  || fail();
            const head  = nodes[0]    || fail();

            if (items.length === 1)
            {
                if (id === '!')
                    return '!' + bool(head.type, items[0]);

                return node.flags & F_POSTFIX
                     ? items[0] + id
                     : id + items[0];
            }

            if (items.length === 2)
            {
                if (id === '[]')
                {
                    if (head.type.canon === 'string')
                        return 'std::string(1, ' + items[0] + '.at(' + items[1] + '))';

                    // One does not simply index into a map.
                    if (type_isMap(head.type))
                    {
                        if (!(head.type.quals & q_mutref))
                            return cgMapConstGet(items[0], items[1]);

                        return items[0] + '.at(' + items[1] + ')';
                    }

                    return items[0] + '.at(' + items[1] + ')';
                }

                // This is hellish but should cover our asses for a little while -
                //  this is the `a[b]=c` instead of `a.at(b)=c` pattern.
                if (id === '=')
                {
                    const index = head.kind === 'call' && head.value === '[]'
                               && head.items.length === 2
                                ? head.items : null;

                    if (index && type_isMap((index[0] || fail()).type))
                        return '(' + cgNode(index[0] || fail()) +
                            '[' + cgNode(index[1] || fail()) + '] = ' +
                                items[1] + ')';
                }

                // Conditional lazy assignment,
                //  notice again the special casing for std::maps.
                if (id === '||=')
                {
                    let left  = items[0];
                    let right = items[1];

                    const index = head.kind === 'call' && head.value === '[]'
                               && head.items.length === 2
                                ? head.items : null;

                    if (index && type_isMap((index[0] || fail()).type))
                        left = cgNode(index[0] || fail()) +
                            '[' + cgNode(index[1] || fail()) + ']';

                    const annot = typeAnnot(head.type);

                    return '([&](' + annot + ' _) -> ' + annot + ' { if (!' +
                        bool(head.type, '_') + ') _ = ' +
                            right + '; return _; } (' + left + '))';
                }

                return '(' + items[0] + ' ' + id + ' ' + items[1] + ')';
            }
        }

        if (target.kind === 'var')
            return ID(id);

        if (target.kind === 'field')
        {
            let sep = '.';
            const parent = lookupType(
                (node.items[0] || fail())
                    .type.canon) || fail();

            if (parent.flags & F_DESTRUCTOR)
                sep = '.data.';

            return items[0] + sep + ID(id);
        }

        if (id === 'len' && items.length === 1)
            return 'int(' + items[0] + '.size())';

        if (id === 'push' && items.length === 2)
            return items[0] + '.push_back(' + items[1] + ')';

        if (id === 'pop' && items.length === 1)
            return items[0] + '.pop_back()';

        if (id === 'unshift' && items.length === 2)
            return '([&](auto& _) { _.insert(_.begin(), ' + items[1] + '); } (' + items[0] + '))';

        if (id === 'insert' && items.length === 3)
            return '([&](auto& _) { _.insert(_.begin() + ' + items[1] + ', ' + items[2] + '); } (' + items[0] + '))';

        if (id === 'splice' && items.length === 3)
            return '([&](auto& _) { const auto& _0 = _.begin() + ' + items[1] + '; _.erase(_0, _0 + ' + items[2] + '); } (' + items[0] + '))';

        if (id === 'grow' && items.length === 2)
            return items[0] + '.resize(' + items[1] + ')';

        if (id === 'shrink' && items.length === 2)
            return items[0] + '.resize(' + items[1] + ')';

        if (id === 'resize' && items.length === 2)
            return items[0] + '.resize(' + items[1] + ')';

        if (id === 'clear' && items.length === 1)
            return items[0] + '.clear()';

        if (id === 'find' && items.length === 2)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return 'int(' + items[0] + '.find(' + items[1] + '))';

            include('<algorithm>');
            return '([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, ' + items[1] + '); return _1 != _N ? int(_1 - _0) : -1; } (' + items[0] + '))';
        }

        if (id === 'starts' && items.length === 2)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return '(' + items[0] + '.rfind(' + items[1] + ', 0) == 0)';
        }

        if (id === 'has' && items.length === 2)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return '(int(' + items[0] + '.find(' + items[1] + ')) >= 0)';

            include('<algorithm>');
            return '([&](const auto& _) { const auto& _0 = _.begin(); const auto& _N = _.end(); const auto& _1 = std::find(_0, _N, ' + items[1] + '); return _1 != _N; } (' + items[0] + '))';
        }

        if (id === 'slice' && items.length === 3)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return '([&]() { size_t _0 = ' + items[1] + '; return ' + items[0] + '.substr(_0, ' + items[2] + ' - _0); } ())';

            return '([&](const auto& _) { const auto& _0 = _.begin() + ' + items[1] +'; const auto& _1 = _.begin() + ' + items[2] + '; return ' + typeAnnot(node.type) + '(_0, _1); } (' + items[0] + '))';
        }

        if (id === 'slice' && items.length === 2)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return items[0] + '.substr(' + items[1] + ')';

            return '([&](const auto& _) { return ' + typeAnnot(node.type) + '(_.begin() + ' + items[1] + ', _.end()); } (' + items[0] + '))';
        }

        if (id === 'sort' && items.length === 1)
        {
            include('<algorithm>');
            return '([&](auto& _) { std::sort(_.begin(), _.end()); } (' + items[0] + '))';
        }

        if (id === 'substr' && items.length === 3)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return items[0] + '.substr(' + items[1] + ', ' + items[2] + ')';
        }

        if (id === 'char' && items.length === 2)
        {
            const head = node.items[0] || fail();
            if (head.type.canon === 'string')
                return 'int(' + items[0] + '[' + items[1] + '])';
        }

        if ((id === 'true' || id === 'false') && !items.length)
            return id;

        if (id === 'throw' && items.length === 1)
            return cgThrow(id, items[0]);

        if (id === 'assert' && items.length === 0)
            return cgThrow(id, '"Assertion failed."');

        if (id === 'move' && items.length === 3)
            return '([&]() { auto* _ = ' + items[0] + '.data(); ' + cgSlide('_ + ' + items[2], '_ + ' + items[1], 'sizeof(*_)') + '; } ())';

        if (id === 'concat' && items.length === 2)
            return cgConcat(items);

        if (id === 'split' && items.length === 2)
            return cgSplit(items);

        if (id === 'join' && items.length === 2)
            return cgJoin(items);

        if (id === 'join' && items.length === 2)
            return cgJoin(items);

        if (id === 'keys' && items.length === 1)
            return cgKeys(items);

        return ID(id) + '(' + items.join(', ') + ')';
    }

    function cgSlide(destExpr: string, srcExpr: string, numBytesExpr: string)
    {
        const SLIDE = '::slide';
        if (!_tfwd[SLIDE])
        {
            include('<cstring>');

            _tfwd[SLIDE] =
////////////////////////////////////
`
template <size_t N>
inline void fu_MEMSLIDE(void* dest, void* source)
{
    char swap_buffer[N];

    std::memcpy(
        swap_buffer, source, N);

    if (source < dest)
        std::memmove(
            source, (char*)source + N,
            (char*)dest - (char*)source);
    else
        std::memmove(
            (char*)dest + N, dest,
            (char*)source - (char*)dest);

    std::memcpy(
        dest, swap_buffer, N);
}
`
////////////////////////////////////
            ;
        }

        return 'fu_MEMSLIDE<' + numBytesExpr + '>(' + destExpr + ', ' + srcExpr + ')';
    }

    function annotateString(): string
    {
        const STRING = '::string';
        if (!_ffwd[STRING])
        {
            include('<string>');

            _ffwd[STRING] =
////////////////////////////////////
`
inline std::string operator+(const std::string& a, long long b)
{
    return a + std::to_string(b);
}
`
////////////////////////////////////
            ;
        }

        return 'std::string';
    }

    function annotateNever(): string
    {
        const NEVER = '::NEVER';
        if (!_tfwd[NEVER])
        {
            include('<stdexcept>');

            _tfwd[NEVER] =
////////////////////////////////////
`
struct fu_NEVER
{
    fu_NEVER(const fu_NEVER&) = delete;
    void operator=(const fu_NEVER&) = delete;

    template<typename T>
    [[noreturn]] operator T() const
    {
        throw std::runtime_error("fu_NEVER cast");
    }
};
`
////////////////////////////////////
            ;
        }

        return 'fu_NEVER';
    }

    function cgThrow(kind: string, item: string): string
    {
        const THROW = '::THROW';
        if (!_ffwd[THROW])
        {
            annotateNever();
            include('<stdexcept>');

            _ffwd[THROW] =
////////////////////////////////////
`
template <typename T>
[[noreturn]] fu_NEVER fu_THROW(const T& what)
{
    throw std::runtime_error(what);
}
`
////////////////////////////////////
            ;
        }

        kind;

        return 'fu_THROW(' + item + ')';
    }

    function cgConcat(items: string[]): string
    {
        const CONCAT = '::CONCAT';
        if (!_ffwd[CONCAT])
        {
            include('<vector>');

            _ffwd[CONCAT] =
////////////////////////////////////
`
template <typename T>
std::vector<T> fu_CONCAT(
    const std::vector<T>& a,
    const std::vector<T>& b)
{
    std::vector<T> result;
    result.reserve(a.size() + b.size());

    for (auto& i : a) result.push_back(i);
    for (auto& i : b) result.push_back(i);

    return result;
}
`
////////////////////////////////////
            ;
        }

        return 'fu_CONCAT(' + items.join(', ') + ')';
    }

    function cgJoin(items: string[]): string
    {
        const JOIN = '::JOIN';
        if (!_ffwd[JOIN])
        {
            include('<string>');
            include('<vector>');

            _ffwd[JOIN] =
////////////////////////////////////
`
inline std::string fu_JOIN(
    const std::vector<std::string>& vec,
    const std::string& sep)
{
    size_t len = 0;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (i)
            len += sep.size();

        len += vec[i].size();
    }

    std::string result;
    result.reserve(len);
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (i)
            result += sep;

        result += vec[i];
    }

    return result;
}
`
////////////////////////////////////
            ;
        }

        return 'fu_JOIN(' + items.join(', ') + ')';
    }

    function cgSplit(items: string[]): string
    {
        const SPLIT = '::SPLIT';
        if (!_ffwd[SPLIT])
        {
            include('<string>');
            include('<vector>');

            _ffwd[SPLIT] =
////////////////////////////////////
`
inline std::vector<std::string> fu_SPLIT(
    std::string s,
    const std::string& sep)
{
    std::vector<std::string> result;

    size_t next;
    while (int(next = s.find(sep)) >= 0)
    {
        result.push_back(s.substr(0, next));
        s = s.substr(next + sep.size());
    }

    result.push_back(s);
    return result;
}
`
////////////////////////////////////
            ;
        }

        return 'fu_SPLIT(' + items.join(', ') + ')';
    }

    function cgKeys(items: string[]): string
    {
        const KEYS = '::KEYS';
        if (!_ffwd[KEYS])
        {
            include('<unordered_map>');
            include('<vector>');

            _ffwd[KEYS] =
////////////////////////////////////
`
template <typename K, typename V>
std::vector<K> fu_KEYS(
    const std::unordered_map<K, V>& map)
{
    std::vector<K> keys;
    keys.reserve(map.size());

    for (auto& kv : map)
        keys.push_back(kv.first);

    return keys;
}
`
////////////////////////////////////
            ;
        }

        return 'fu_KEYS(' + items.join(', ') + ')';
    }

    function cgMapConstGet(map: string, key: string)
    {
        const MAP_CONST_GET = '::MAP_CONST_GET';
        if (!_ffwd[MAP_CONST_GET])
        {
            include('<unordered_map>');

            _ffwd[MAP_CONST_GET] =
////////////////////////////////////
`
template <typename K, typename V>
const V& fu_MAP_CONST_GET(
    const std::unordered_map<K, V>& map,
    const K& key)
{
    const auto& it = map.find(key);
    if (it == map.end() )
    {
        static const V def {};
        return def;
    }

    return it->second;
}
`
////////////////////////////////////
            ;
        }

        return 'fu_MAP_CONST_GET(' + map + ', ' + key + ')';
    }

    function cgLiteral(node: SolvedNode)
    {
        return node.value || fail();
    }

    function cgEmpty()
    {
        return '';
    }


    //

    function cgIf(node: SolvedNode, mode: number)
    {
        const [n0, n1, n2] = node.items;

        const stmt = !!(mode & M_STMT);

        const cond = n0 && bool(n0.type, cgNode(n0, M_RETBOOL));
        const cons = n1 && (stmt ? blockWrapOne(n1) : cgNode(n1));
        const alt  = n2 && (stmt ? blockWrapOne_unlessSilly(n2) : cgNode(n2));

        if (stmt)
            return 'if (' + cond + ') ' + cons + (alt ? _indent + 'else ' + alt : '');

        if (cons && alt)
            return '(' + cond + ' ? ' + cons + ' : ' + alt + ')';

        if (cons)
            return '(' + cond + ' && ' + cons + ')';

        if (alt)
            return '(' + cond + ' || ' + alt + ')';

        return fail('TODO');
    }

    function bool(type: Type, src: string): string
    {
        if (/^(Array|Map)\(/.test(type.canon) || type.canon === 'string')
            return src + '.size()';

        return src;
    }


    //

    function isRefLogical(type: Type)
    {
        return (type.quals & (q_ref | q_prvalue)) == q_ref;
    }

    function cgAnd(node: SolvedNode)
    {
        const type = node.type;
        if (isRefLogical(type))
        {
            const annot = typeAnnot(type);

            let src = '([&]() -> ' + annot + ' {';

            const items = node.items;
            for (let i = 0; i < items.length - 1; i++)
            {
                const item = items[i] || fail();
                src += ' { ' + annot + ' _ = ' + cgNode(item) + '; if (!' + bool(item.type, '_') + ') return _; }';
            }

            const tail = items[items.length - 1] || fail();
            if (tail.type !== t_never)
                src += ' return';

            src += ' ' + cgNode(tail) + '; }())';
            return src;
        }

        let src = '(';
        const items = cgNodes(node.items);
        for (let i = 0; i < items.length; i++)
        {
            const item = items[i];
            const type = (node.items[i] || fail())  .type;

            if (i)
                src += ' && ';

            src += bool(type, item);
        }

        return src + ')';
    }

    function cgOr(node: SolvedNode)
    {
        const type = node.type;
        if (isRefLogical(type))
        {
            const annot = typeAnnot(type);

            let src = '([&]() -> ' + annot + ' {';

            const items = node.items;
            for (let i = 0; i < items.length - 1; i++)
            {
                const item = items[i] || fail();
                let tail = item;

                // Here's the `a && b || c` pattern,
                //  actually works quite well.
                if (item.kind === 'and')
                {
                    const items = item.items;
                    tail = items[items.length - 1] || fail();

                    src += ' if (';
                    for (let i = 0; i < items.length - 1; i++)
                    {
                        if (i)
                            src += ' && ';

                        const item = items[i] || fail();
                        src += bool(item.type, cgNode(item, M_RETBOOL));
                    }

                    src += ')';
                }

                src += ' { ' + annot + ' _ = ' + cgNode(tail) + '; if (' + bool(tail.type, '_') + ') return _; }';
            }

            const tail = items[items.length - 1] || fail();
            if (tail.type !== t_never)
                src += ' return';

            src += ' ' + cgNode(tail) + '; }())';
            return src;
        }

        let src = '(';
        const items = cgNodes(node.items);
        for (let i = 0; i < items.length; i++)
        {
            const item = items[i];
            const type = (node.items[i] || fail())  .type;

            if (i)
                src += ' || ';

            src += bool(type, item);
        }

        return src + ')';
    }


    //

    function postfixBlock(src: string, postfix: string): string
    {
        src[src.length - 1] === '}' || fail();
        return src.slice(0, src.length - 1) + postfix + '}';
    }

    function cgLoop(node: SolvedNode)
    {
        const items = node.items;

        const n_init = items[LOOP_INIT];
        const n_cond = items[LOOP_COND];
        const n_post = items[LOOP_POST];
        const n_body = items[LOOP_BODY];
        const n_pcnd = items[LOOP_POST_COND];

        const init = n_init && cgNode(n_init);
        const cond = n_cond && bool(n_cond.type, cgNode(n_cond, M_RETBOOL));
        const post = n_post && cgNode(n_post);
        let   body = n_body && blockWrapOne(n_body);
        const pcnd = n_pcnd && bool(n_pcnd.type, cgNode(n_pcnd, M_RETBOOL));
        let   breakLabel = '';

        if (body && node.value)
        {
            const brk = 'L_' + node.value + '_b';
            const cnt = 'L_' + node.value + '_c';

            if (body.indexOf(cnt) >= 0)
                body = '{' + postfixBlock(body, _indent +     '    }' + cnt + ':;');
            if (body.indexOf(brk) >= 0)
                breakLabel = _indent + '    ' + brk + ':;';
        }

        if (pcnd)
        {
            if (init || post || cond)
                fail('TODO extended loop.');

            return 'do' + body + _indent + 'while (' + pcnd + ')' + breakLabel;
        }

        if (init || post || !cond)
            return 'for (' + init + '; ' + cond + '; ' + post + ')' + body + breakLabel;

        return 'while (' + cond + ')' + body + breakLabel;
    }


    //

    function cgNode(node: SolvedNode, mode: number = 0): string
    {
        const k = node.kind;

        if (k === 'root')       return cgRoot(node);
        if (k === 'block')      return cgBlock(node);
        if (k === 'fn')         return cgFn(node);
        if (k === 'return')     return cgReturn(node);
        if (k === 'break')      return cgJump(node);
        if (k === 'continue')   return cgJump(node);
        if (k === 'call')       return cgCall(node);
        if (k === 'let')        return cgLet(node);
        if (k === 'if')         return cgIf(node, mode);
        if (k === 'or')         return cgOr(node);
        if (k === 'and')        return cgAnd(node);
        if (k === 'loop')       return cgLoop(node);
        if (k === 'int')        return cgLiteral(node);
        if (k === 'str')        return cgStringLiteral(node);
        if (k === 'arrlit')     return cgArrayLiteral(node);
        if (k === 'definit')    return cgDefaultInit(node);
        if (k === 'empty')      return cgEmpty();

        if (k === 'comma')      return cgParens(node);
        if (k === 'parens')     return cgParens(node);
        if (k === 'label')      return cgParens(node);
        if (k === 'struct')     return cgEmpty();

        if (k === 'copy')       return cgCopyMove(node);
        if (k === 'move')       return cgCopyMove(node);

        return fail('TODO: ' + k);
    }

    function cgCopyMove(node: SolvedNode)
    {
        const a = cgNode(node.items[0] || fail());

        if (node.kind === 'move' && !(node.flags & F_ELISION))
        {
            include('<utility>');
            return 'std::move(' + a + ')';
        }

        return a;
    }

    function cgNodes(nodes: Nodes, mode: number = 0)
    {
        const result: string[] = [];

        if (nodes)
            for (let i = 0; i < nodes.length; i++)
            {
                const node  = nodes[i];
                const src   = node ? cgNode(node, mode) : '';
                result[i]   = src;
            }

        return result;
    }


    //

    root.kind === 'root' || fail();

    const src = cgNode(root);
    return { src };
}
