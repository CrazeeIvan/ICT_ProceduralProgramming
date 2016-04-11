// Write a program to take input of two integers and output the result of
// division of the second by the first.
// Modify the program to show the remainder.
// Combine the two to show the full result, including the remainder.
// Modify to show the result accurate to three decimal places.
// Write a program to take input of two integers and tell the user which is
// the greater.
#include <stdio.h>

int main()
{
  int num1;
  int num2;

  printf("Please input your first number: ");
  scanf("%d", &num1);
  printf("Please input your second number: ");
  scanf("%d", &num2);
  printf("%d divided by %d is %.3f with a remainder of %.3f.\n", num2, num1, (float)num2/num1, (float)(num2%num1));
  printf("%d is the greater number.\n", (num1>num2) ? num1:num2);

  return 0;
}
