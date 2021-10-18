const cp        = require('child_process');
const path      = require('path');
const fs        = require('fs');

let _dirtyTime  = 0;
let _dirty      = false;
let _rebuild    = null;


function triggerRebuild()
{
    if (_rebuild)
        return;

    // console.log('\n-----------\nRebuild ...\n-----------\n');

    _dirty      = false;
    _rebuild    = cp.spawn('./cycle', {
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
