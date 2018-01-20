var fs = require('fs');
var suh = "Suh?";
var sully = "Sully";
var i = 5;
/*Suh?*/(function f() { /*suh bruh?*/ while (i > 0) {fs.writeFile(sully + '_' + --i + '.js', 'var fs = require(\'fs\');\nvar suh = "Suh?";\nvar sully = "Sully";\nvar i = ' + (++i) + ';\n/*' + suh + '*/(' + f.toString() + ')()', function(err) { if (err) throw err;} ); --i;} })()