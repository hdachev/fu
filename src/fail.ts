
function brief(obj: unknown, index: number): string
{
    if (typeof obj === 'object' && obj !== null)
    {
        try
        {
            const json = JSON.stringify(obj);
            if (json.length > 160)
                return '`' + json.slice(0, 80) + '...`';

            return '`' + json + '`';
        }
        catch (o_O) {}
    }

    if (typeof obj === 'number')
        return String(obj);

    if (typeof obj === 'string' && (/\s/.test(obj) || !index))
        return obj;

    return '`' + obj + '`';
}

function whitespace(item: string, index: number, all: string[]): string
{
    if (!index)
        return item;

    const prev = index ? all[index - 1] : '';

    // Don't prefix spaces before punctuation.
    if (/^[\s.,!?:;]/.test(item) || /\s$/.test(prev))
        return item;

    return ' ' + item;
}

export function composeErrorMessage(prefix: string, args: unknown[])
{
    const reason = args
        ? Array.from(args).map(brief).map(whitespace).join('')
        : '';

    return reason
        ? prefix + ': ' + reason
        : prefix + '.';
}

export function fail(...args: unknown[]): never
{
    const message = composeErrorMessage(
        'Assertion failed', args);

    throw new Error(message);
};
