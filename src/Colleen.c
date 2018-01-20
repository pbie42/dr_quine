#include <stdio.h>
/* Suh dude? */
void function() {}
int main()
{
/* Hey dude SUH? */
function();
char *s="#include <stdio.h>%c/* Suh dude? */%cvoid function() {}%cint main()%c{%c/* Hey dude SUH? */%cfunction();%cchar *s=%c%s%c;%cprintf(s,10,10,10,10,10,10,10,34,s,34,10,10,10);%c}%c";
printf(s,10,10,10,10,10,10,10,34,s,34,10,10,10);
}
