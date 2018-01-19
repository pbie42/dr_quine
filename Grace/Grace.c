#include <stdio.h>
/* Suh dude? */
#define MAIN() int main() { FILE *a = fopen("Grace_kid.c", "ab+"); FILE *fp; fp = fopen("Grace_kid.c", "w"); /* Hey dude SUH? */ char *s="#include <stdio.h>%c/* Suh dude? */%c#define MAIN() int main() { FILE *a = fopen(%cGrace_kid.c%c, %cab+%c); FILE *fp; fp = fopen(%cGrace_kid.c%c, %cw%c); /* Hey dude SUH? */ char *s=%c%s%c; fprintf(fp,s,10,10,34,34,34,34,34,34,34,34,34,s,34,10,10); fclose(fp); }%cMAIN()%c"; fprintf(fp,s,10,10,34,34,34,34,34,34,34,34,34,s,34,10,10); fclose(fp); }
MAIN()
