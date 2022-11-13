#include <stdio.h>
//This is a global variable
int num = 99;
void myfunction()
{
  printf("%d\n" , num);
}
void myfunction2()
{
  printf("%d\n" , num);
}
int main() {
  myfunction();
  myfunction2();
  return 0;
}