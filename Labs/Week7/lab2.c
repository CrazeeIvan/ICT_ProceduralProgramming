// Write a program that accepts a single word as input and outputs each letter
// on a new line and indented with two tabs.

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[49];
  int i;

  printf("\nEnter up to 50 characters with spaces\n");
  scanf("%s",str);
  for (i = 0; i <= strlen(str); i++)
	{
		printf("\n\t\t%c", str[i]);
	}
	printf("\n");

  return 0;
}
