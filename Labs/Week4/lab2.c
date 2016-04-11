// Write a program that takes integer input from a user and prints a message to
// say whether the number is odd or even.


#include <stdio.h>

int main()
{
  int input;

  printf("Please input your number: ");
  scanf("%d", &input);
  printf("Your number %d is %s", input, (input % 2 == 0) ? "even.": "odd.");

  return 0;
}
