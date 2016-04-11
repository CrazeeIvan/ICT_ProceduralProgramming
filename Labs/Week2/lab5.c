// Write a program that prompts a user to input 5 numbers. Print them to screen
// in reverse order to the order they were input.

#include <stdio.h>

int main()
{
  int num1, num2, num3, num4, num5;

  printf("Please enter five integers:");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
  printf("Your numbers in reverse order were:\n %d %d %d %d %d", num5, num4, num3, num2, num1);


  return 0;
}
