#include<stdio.h>
int main(){

  int num1,num2,sum;

  printf("Enter first number: ");
  //Reading the first input number
  scanf("%d",&num1);
  printf("Enter second number: ");
  //Reading the second input number
  scanf("%d",&num2);

  //calculating sum of two entered numbers
  sum=num1+num2;

  //Printing the sum of input numbers using printf()
  printf("Sum of %d and %d is: %d ",num1, num2, sum);

  return 0;
}