#include <stdio.h>
int main()
{
  int num = 100;
  char ch = 'P';
  double bigNum = 10000.29;
  printf("Character value: %c and char size: %lu byte.\n",
  ch, sizeof(char));

  printf("Integer value: %d and int size: %lu byte.\n",
  num, sizeof(int));

  printf("Double value: %lf and double size: %lu byte.\n",
  bigNum, sizeof(double));

  return 0;
}