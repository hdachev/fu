
export type Err =
{
    err:    { [key: string]: any };
    data?:  false|undefined|null;
};

export type Ok<T> =
{
    err?:   false|undefined|null;
    data:   T;
};

export type Result<T> =
    Err | Ok<T>;

export type Callback<T> =
    (result: Result<T>) => void;


//

export type Unit =
{
    o:      string;
    hash:   string;
    cpp:    string;
};

export type Binary =
{
    path:   string;
};

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');
const child_process = require('child_process');


//

const DIR = path.join(__dirname, '../', 'build.cpp');
try
{
    fs.mkdirSync(DIR);
}
catch (o_O) {};


//

const GCC = 'g++ -std=c++2a';

export function build(src: string, cb: Callback<Unit>)
{
    const hash      = crypto.createHash('md5').update(src).digest('hex');
    const cpp       = path.join(DIR, hash + '.cpp');

    const o         = cpp + '.o';
    const u: Unit   = { o, hash, cpp };

    if (!fs.existsSync(o))
    {
        const tmp = o + '.tmp';
        fs.writeFileSync(cpp, src);
        const cmd = GCC + ' -o "' + tmp + '" "' + cpp + '"';

        child_process.exec(cmd, {}, (err: any, stdout: any, stderr: any) =>
        {
            console.log('BUILD >', err, stdout, stderr);

            const exitCode = err && err.code;
            if (exitCode)
            {
                cb({ err: { cmd, err, stdout, stderr } });
                return;
            }

            // Done.
            fs.renameSync(tmp, o);
            cb({ data: u });
        });
    }

    cb({ data: u });
}

export function link(units: Unit[], cb: Callback<Binary>)
{
    units; cb;
}

export function run(binary: Binary, cb: Callback<number>)
{
    binary; cb;
}
