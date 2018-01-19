#include <stdio.h>
/* Suh dude? */
#define OPEN_A fopen("Grace_kid.c", "ab+")
#define OPEN_B fopen("Grace_kid.c", "w")
#define MAIN() int main() { FILE *a = OPEN_A; FILE *fp; fp = OPEN_B; /* Hey dude SUH? */ char *s="#include <stdio.h>%c/* Suh dude? */%c#define OPEN_A fopen(%cGrace_kid.c%c, %cab+%c)%c#define OPEN_B fopen(%cGrace_kid.c%c, %cw%c)%c#define MAIN() int main() { FILE *a = OPEN_F; FILE *fp; fp = OPEN_A; /* Hey dude SUH? */ char *s=%c%s%c; fprintf(fp,s,10,10,34,34,34,34,34,34,34,34,34,s,34,10,10); fclose(fp); }%cMAIN()%c"; fprintf(fp,s,10,10,34,34,34,34,10,34,34,34,34,10,34,s,34,10,10); fclose(fp); }
MAIN()
