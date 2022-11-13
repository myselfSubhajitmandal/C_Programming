#include <stdio.h>
#include <string.h>
int main()
{
    char a [100] = "Welcome to my github";
    char *p;
    p = strchr(a, 't');
    printf("%s", p);

     return 0;
}