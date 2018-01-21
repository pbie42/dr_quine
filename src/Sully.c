#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
char *exec_name;
char *file_name;
char *cmd_1;
char *cmd_2;
FILE *a;
FILE *fp;
int i = 5;
(void) ac;
if (strchr(av[0], 95) != NULL)
{
--i;
}
asprintf(&exec_name, "%s_%d", "Sully", i);
asprintf(&file_name, "%s.c", exec_name);
asprintf(&cmd_1, "clang -Wall -Wextra -Werror -o %s %s", exec_name, file_name);
asprintf(&cmd_2, "./%s", exec_name);
a = fopen(file_name, "ab+");
fp = fopen(file_name, "w");
char *s="#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%cint main(int ac, char **av)%c{%cchar *exec_name;%cchar *file_name;%cchar *cmd_1;%cchar *cmd_2;%cFILE *a;%cFILE *fp;%cint i = %d;%c(void) ac;%cif (strchr(av[0], 95) != NULL)%c{%c--i;%c}%casprintf(&exec_name, %c%%s_%%d%c, %cSully%c, i);%casprintf(&file_name, %c%%s.c%c, exec_name);%casprintf(&cmd_1, %cclang -Wall -Wextra -Werror -o %%s %%s%c, exec_name, file_name);%casprintf(&cmd_2, %c./%%s%c, exec_name);%ca = fopen(file_name, %cab+%c);%cfp = fopen(file_name, %cw%c);%cchar *s=%c%s%c;%cfprintf(fp,s,10,10,10,10,10,10,10,10,10,10,10,i,10,10,10,10,10,10,34,34,34,34,10,34,34,10,34,34,10,34,34,10,34,34,10,34,34,10,34,s,34,10,10,10,10,10,10,10,10,10);%cfclose(fp);%csystem(cmd_1);%cif (i > 0)%c{%csystem(cmd_2);%c}%c}%c";
fprintf(fp,s,10,10,10,10,10,10,10,10,10,10,10,i,10,10,10,10,10,10,34,34,34,34,10,34,34,10,34,34,10,34,34,10,34,34,10,34,34,10,34,s,34,10,10,10,10,10,10,10,10,10);
fclose(fp);
system(cmd_1);
if (i > 0)
{
system(cmd_2);
}
}
