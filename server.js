"use strict";

const express       = require('express');
const browserify    = require('browserify');

const app = express();

app.server = require('http')
    .createServer(app);

app.use(
    express.static('static'));

app.get(
    /^.*\.js$/,
    (req, res) =>
    {
        const url = req.url;
        // console.log('SERVING', url);
        const b = browserify('./build' + url, { debug: true });

        b.bundle().pipe(res);
    });

app.listen(
    8080,
    err =>
    {
        console.assert(!err, err);
        console.log('Dev server online.');
    });
