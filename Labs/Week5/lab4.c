// Write a program that takes input from the user as two integers, the second of
// which represents the power to which the first integer is to be raised e.g.
// if the second integer is 3, the first integer is to be cubed. Print the result
// to screen with an appropriate message.

#include <stdio.h>
int main()
{
  int base, exponent, i;
  long long int answer=1;
  printf("Please enter your base number: ");
  scanf("%d", &base);
  printf("Please enter your exponent number: ");
  scanf("%d", &exponent);
  i = exponent;
  while (i!=0)
  {
      answer*=base;  /* value = value*base; */
      --i;
  }
  printf("%d^%d is: %d", base, exponent, answer);
}
