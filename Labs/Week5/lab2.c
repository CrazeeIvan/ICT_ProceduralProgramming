// Write a program that adds the odd integers between 1 and 49 inclusive using
// a for loop.

#include <stdio.h>

int main()
{

  int total=0, i;

  for (i = 1; i<=49; i++)
  {
    total+= (i%2!=0) ? i:0;
  }
  printf("The total is: %d.\n", total);
  return 0;
}
