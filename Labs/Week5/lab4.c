/* C program to calculate the power of an integer*/
#include <stdio.h>
int main()
{
  int base, exp;
  long long int value=1;
  printf("Enter base number and exponent respectively: ");
  scanf("%d%d", &base, &exp);
  while (exp!=0)
  {
      value*=base;  /* value = value*base; */
      --exp;
  }
  printf("Answer = %d", value);
}
