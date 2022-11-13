#include <stdio.h>
void myfunction() {
  // This is a local variable
  int num = 99;
  printf("Local variable num value: %d", num);
}
int main()
{
  myfunction();
}