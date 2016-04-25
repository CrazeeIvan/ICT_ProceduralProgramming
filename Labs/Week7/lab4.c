// Write a program that takes input of a single character and returns its ASCII
// value to screen and say whether it is an alpha or a numeric character.

#include <stdio.h>
#include <string.h>
char findAsciiValue();
int main ()
{


  char myChar;

  printf("\nPlease enter a single character: ");
  scanf("%c", &myChar);
  printf("Your character %c's ASCII value is %d and it is an %c character.", myChar, myChar, findAsciiValue(myChar));
  return 0;
}

char findAsciiValue(int c)
{
  char alpha[] = "alpha", numeric[] = "numeric";
  if (c >= 48 && c <= 57)
    return alpha[5];
  else if (c >= 65 && c <= 90)
    return numeric[7];
}
