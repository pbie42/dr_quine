function nada() { }
/*Suh?*/(function f() { nada(); /*suh bruh?*/ console.log('function nada() { }\n/*Suh?*/(' + f.toString() + ')()') })()
