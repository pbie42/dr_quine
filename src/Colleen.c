#include <stdio.h>
/*
	Suh dude?
*/
void function() {}
int main()
{
/*
	Hey dude SUH?
*/
function();
char *s="#include <stdio.h>%c/*%c%cSuh dude?%c*/%cvoid function() {}%cint main()%c{%c/*%c%cHey dude SUH?%c*/%cfunction();%cchar *s=%c%s%c;%cprintf(s,10,10,9,10,10,10,10,10,10,9,10,10,10,34,s,34,10,10,10);%c}%c";
printf(s,10,10,9,10,10,10,10,10,10,9,10,10,10,34,s,34,10,10,10);
}
