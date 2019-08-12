
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

function exec(cmd: string, cb: Callback<true>)
{
    child_process.exec(cmd, {}, (err: any, stdout: any, stderr: any) =>
    {
        const exitCode = err && err.code;
        if (exitCode)
        {
            console.log('\nCMD:\n\t' + cmd + '\n\nEXIT:\n\t' + exitCode + '\n\nSTDERR:\n' + stderr + '\n\nSTDOUT:\n' + stdout + '\n');

            cb({ err: { cmd, err, stdout, stderr } });
            return;
        }

        cb({ data: true });
    });
}


//

const DIR = path.join(__dirname, '../', 'build.cpp');
try
{
    fs.mkdirSync(DIR);
}
catch (o_O) {};


//

const GCC       = 'g++ -std=c++2a';
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

    exec(cmd, result =>
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

    exec(cmd, result =>
    {
        if (result.err)
        {
            cb(result);
            return;
        }

        fs.renameSync(tmp, exe);
        cb({ data: ok });
    });
}

export function run(binary: Binary, cb: Callback<number>)
{
    binary; cb;
}
