#include <stdio.h>
/* Suh dude? */
void function() {}
int main()
{
FILE *a = fopen("Grace_kid.c", "ab+");
FILE *fp;
fp = fopen("Grace_kid.c", "w");
/* Hey dude SUH? */
function();
char *s="#include <stdio.h>%c/* Suh dude? */%cvoid function() {}%cint main()%c{%cFILE *a = fopen(%cGrace_kid.c%c, %cab+%c);%cFILE *fp;%cfp = fopen(%cGrace_kid.c%c, %cw%c);%c/* Hey dude SUH? */%cfunction();%cchar *s=%c%s%c;%cfprintf(fp,s,10,10,10,10,10,34,34,34,34,10,10,34,34,34,34,10,10,10,34,s,34,10,10,10,10);%cfclose(fp);%c}%c";
fprintf(fp,s,10,10,10,10,10,34,34,34,34,10,10,34,34,34,34,10,10,10,34,s,34,10,10,10,10);
fclose(fp);
}
