// Create an integer array of 10 elements and populate each element with a
// random integer. Prompt the user to pick a number between 1 and 10 and output
// the contents of the relevant element. If the user inputs 7, for example,
// they should see the seventh element of the array.

#include <stdio.h>

int main()
{
  int num1;

  int numArray[10] = {12, 234, 369, 4, 99, 55378008, 1337, 901, 10000000, 56};

  printf("Please enter an integer (between 0-9) to get your lucky number for today!\n");
  scanf("%d", &num1);
  printf("Your lucky number is %d", numArray[num1]);

  return 0;
}
