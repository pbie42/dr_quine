var { exec } = require("child_process");
var path = require("path");
var fs = require('fs');
var i = 5;
var fPath = path.basename(module.filename).split("_")[1];
if (i <= 0) return;
if (fPath && fPath[0] > 0) i--;
(function f() { /*suh bruh?*/ fs.writeFile('Sully_' + i + '.js', 'var { exec } = require("child_process");\nvar path = require("path");\nvar fs = require(\'fs\');\nvar i = ' + (i) + ';\nvar fPath = path.basename(module.filename).split("_")[1];\nif (i <= 0) return;\nif (fPath && fPath[0] > 0) i--;\n(' + f.toString() + ')()\nif (i > 0) exec(`node Sully_${i}.js`);\n', function(err) { if (err) throw err;} ); })()
if (i > 0) exec(`node Sully_${i}.js`);
