#include <stdio.h>
#include <stdlib.h>
int main()
{
char *str[80];
char *num[80];
static int i = 1;
while (i > 0)
{
sprintf(num, "%d", --i);
strcpy(str, "Sully_");
strcat(str, num);
strcat(str, ".c");
FILE *a = fopen(str, "ab+");
FILE *fp;
fp = fopen(str, "w");
char *s="#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%cchar *str[80];%cchar *num[80];%cstatic int i = 1;%cwhile (i > 0)%c{%csprintf(num, %c%%d%c, --i);%cstrcpy(str, %cSully_%c);%cstrcat(str, num);%cstrcat(str, %c.c%c);%cFILE *a = fopen(str, %cab+%c);%cFILE *fp;%cfp = fopen(str, %cw%c);%cfunction();%cchar *s=%c%s%c;%cfprintf(fp,s,10,10,10,10,10,34,34,34,34,10,10,34,34,34,34,10,10,10,34,s,34,10,10,10,10);%cfclose(fp);%c}%c";
fprintf(fp,s,10,10,10,10,10,10,10,10,10,34,34,10,34,34,10,10,34,34,10,34,34,10,10,34,34,10,10,34,s,34,10,10,10,10);
fclose(fp);
}
}
