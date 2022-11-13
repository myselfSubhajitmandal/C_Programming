#include <stdio.h>
void myfunction(){
  //This is a local variable
  int num = 20;

  //This is a static variable
  static int num2 = 20;
  num = num + 100;
  num2 = num2 + 100;
  printf("\n Value of num: %d, value of num2: %d",num,num2);
}
int main() {
  //Calling myfunction() repeatedly to print num and num2
  //values for each repeating function calls.
  myfunction();
  myfunction();
  myfunction();
  myfunction();
  return 0;
}