var fs = require('fs');
var grace = "Grace";
/*Suh?*/
const notMain = (function f() { /*suh bruh?*/ fs.writeFile(grace + '_kid.js', 'var fs = require(\'fs\');\nvar grace = "Grace";\n/*Suh?*/\nconst notMain = (' + f.toString() + ')()\nnotMain', function(err) { if (err) throw err;} ) })()
notMain