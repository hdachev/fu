
type Mapping = { [key: string]: any };

export class Context
{
    TYPES: Mapping = {};
}


//

export let CONTEXT: Context = new Context()

export function resetContext()
{
    CONTEXT = new Context();
}
