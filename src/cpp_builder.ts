
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
    exe:    string;
};

const fs            = require('fs');
const path          = require('path');
const crypto        = require('crypto');
const child_process = require('child_process');

function exec(cmd: string, awaitPath: string|null, cb: Callback<true>)
{
    child_process.exec(cmd, {}, (err: any, stdout: any, stderr: any) =>
    {
        if (err !== null)
        {
            const code = err.code;

            console.log('\nCMD:\n\t' + cmd + '\n\nEXIT CODE:\n\t' + code + '\n\nSTDERR:\n' + stderr + '\n\nSTDOUT:\n' + stdout + '\n');

            cb({ err: { cmd, err, code, stdout, stderr } });
            cb = null as any;

            return;
        }

        {
            const INIT = 50;
            let delay = INIT;
            function check()
            {
                if (!awaitPath || fs.existsSync(awaitPath))
                {
                    cb({ data: true });
                    cb = null as any;

                    if (awaitPath && delay > INIT)
                        console.log(awaitPath + ' DELAY ' + delay);

                    return;
                }

                delay *= 2;
                if (delay > 1000)
                {
                    cb({ err: { timeout: awaitPath } });
                    cb = null as any;

                    return;
                }

                setTimeout(check, delay);
            }

            check();
        }
    });
}


//

const DIR = path.join(__dirname, '../', 'build.cpp');

export const available = !!fs.mkdirSync;

try
{
    fs.mkdirSync(DIR);
}
catch (o_O) {};


//

const GCC       = 'g++ -std=c++1z -pedantic-errors -Wall -Wextra -Werror';
const GCC_BUILD = GCC + ' -c -o';
const GCC_LINK  = GCC + ' -o';

export function build(src: string, cb: Callback<Unit>)
{
    const hash      = crypto.createHash('md5')
        .update(GCC_BUILD)
        .update(src)
        .digest('hex');

    const cpp       = path.join(DIR, hash + '.cpp');
    const o         = cpp + '.o';
    const ok: Unit  = { o, hash, cpp };

    if (fs.existsSync(o))
    {
        cb({ data: ok });
        return;
    }

    const tmp = o + '.tmp';
    fs.writeFileSync(cpp, src);
    const cmd = GCC_BUILD + ' "' + tmp + '" "' + cpp + '"';

    exec(cmd, tmp, result =>
    {
        if (result.err)
        {
            cb(result);
            return;
        }

        fs.renameSync(tmp, o);
        cb({ data: ok });
    });
}

const NOT_WIN = !/^win\d+$/.test(process.platform);

export function link(units: Unit[], cb: Callback<Binary>)
{
    const hash = crypto.createHash('md5')
        .update(GCC_LINK);

    const files = units.map(u =>
    {
        hash.update(u.hash + '-' + u.o + '-' + u.cpp);
        return '"' + u.o + '"';
    });

    const exe = path.join(DIR, hash.digest('hex') + '.exe');
    const ok: Binary = { exe };

    if (fs.existsSync(exe))
    {
        cb({ data: ok });
        return;
    }

    const tmp = exe + '.tmp';
    const cmd = GCC_LINK + ' "' + tmp + '" ' + files;

    exec(cmd, tmp, result =>
    {
        if (result.err)
        {
            cb(result);
            return;
        }

        if (NOT_WIN)
            fs.chmodSync(tmp, 0o755);

        fs.renameSync(tmp, exe);

        cb({ data: ok });
    });
}

export function run(binary: Binary, cb: Callback<number>)
{
    exec(binary.exe, null, result =>
    {
        const code = result.err
            ? result.err.code || 10099001
            : 0;

        cb({ data: code });
    });
}
