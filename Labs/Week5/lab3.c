// Write a program that adds the odd integers between 1 and 49 inclusive using
// a for loop.

// Write another version that used a while loop.

#include <stdio.h>

int main()
{

  int total=0, i=0;

  while (i <= 49)
  {
    total += (i%2!=0) ? i:0;
    i++;
  }

  printf("The total is: %d.\n", total);
  return 0;
}
