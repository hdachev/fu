const cp        = require('child_process');
const path      = require('path');
const fs        = require('fs');

let _dirtyTime  = 0;
let _spawnTime  = 0;

let _dirty      = false;
let _rebuild    = null;
let _didRecycle = false;
let _didBoot    = false;

// TODO FIX we don't seem to be shutting down child processes on SIGTERM
let KILL_EARLY  = false;

function triggerRebuild()
{
    const now   = Date.now();

    if (_rebuild)
    {
        if (_didBoot && Math.abs(_spawnTime - now) > 1000 && KILL_EARLY)
            _rebuild.kill();

        return;
    }

    const cmd   = _didRecycle ? './cycle' : (_didRecycle = true, './recycle');

    // console.log('\n-----------\nRebuild', cmd, '...\n-----------\n');

    _dirty      = false;
    _spawnTime  = now;
    _rebuild    = cp.spawn(cmd, {
        stdio: [process.stdin, process.stdout, process.stderr] });

    _rebuild.on('exit', (code, ...args) =>
    {
        // console.log('\n-----------\nRebuild EXIT:', code, ...args, '\n-----------\n');

        _rebuild = null;
        if (_dirty)
            triggerRebuild();

        if (code !== 0)
        {
            // console.log('\n-----------\nBuild failed.\n-----------\n');
            return;
        }
        else
        {
            _didBoot = true;
        }
    });
}

function watchRecursive(dir, watcher)
{
    const ls = fs.readdirSync(dir);

    for (let i = 0; i < ls.length; i++)
    {
        // `.vscode`, `.git`, `myfile.myext`, etc.
        let f = ls[i];
        if (f.indexOf('.') >= 0)
            continue;

        let p = path.join(dir, f);
        if (fs.statSync(p).isDirectory())
            watchRecursive(p, watcher);
    }

    fs.watch(dir, watcher);
}

function onWatchEvent(event, file)
{
    if (!/\.fu$/.test(file))
        return;

    const now = Date.now();
    if (Math.abs(now - _dirtyTime) < 125)
        return;

    _dirty = true;
    _dirtyTime = now;

    // console.log('\n-----------\nWATCH:', event, file, '\n-----------\n');

    triggerRebuild();
}

watchRecursive('./src', onWatchEvent);
watchRecursive('./lib', onWatchEvent);

setTimeout(triggerRebuild);
