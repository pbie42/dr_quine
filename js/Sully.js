var { exec } = require("child_process");
var path = require("path");
var fs = require('fs');
var i = 5;
if (path.basename(module.filename).split("_")[1]) i--;
(function f() { /*suh bruh?*/ fs.writeFile('Sully_' + i + '.js', 'var { exec } = require("child_process");\nvar path = require("path");\nvar fs = require(\'fs\');\nvar i = ' + (i) + ';\nif (path.basename(module.filename).split("_")[1]) i--;\n(' + f.toString() + ')()\nif (i > 0) exec(`node Sully_${i}.js`);', function(err) { if (err) throw err;} ); })()
if (i > 0) exec(`node Sully_${i}.js`);