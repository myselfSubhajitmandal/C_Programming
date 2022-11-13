#include <stdio.h>
#include <string.h>
int main()
{
     char inputstr[70] = "String Function in C";
     printf ("Output string is: %s", strstr(inputstr, 'C'));
     return 0;
}