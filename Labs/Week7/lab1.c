// Write a program that accepts a single word as input, stores it in a character
// array and prints it to the screen in reverse order (e.g. if the word input is
// "screen", the output will be "neercs").

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[49];
  int i;

  printf("\nEnter up to 50 characters with spaces\n");
  scanf("%s",str);
  for (i = strlen(str); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");

  return 0;
}
