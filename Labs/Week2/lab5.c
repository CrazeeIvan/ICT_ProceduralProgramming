// Write a program that prompts a user to input 5 numbers. Print them to screen
// in reverse order to the order they were input.

#include <stdio.h>

int main()
{
  int num1, num2, num3, num4, num5;
  int numArray[5];
  int count;
  printf("Please enter five integers:\n");
  for (count = 0; count<=4;count++)
  {
    scanf("%d", &numArray[count]);
  }
  printf("Your numbers in reverse order were: ");
  for (count = 4;count>=0; count--)
  {
    printf("%d ", numArray[count]);
  }
  return 0;
}
