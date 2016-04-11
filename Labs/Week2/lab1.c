// Create a program that prompts the user to input his/her name.
// Respond with a greeting that uses the name and ask where they are from.
// Echo back their response e.g. “Dublin? That’s nice” Extend as much as you want.

#include <stdio.h>

int main()
{
  char name[30];
  char location[15];

  printf("Hi, what is your name?\n");
  scanf("%29s", &name);
  printf("\nHello %s! Where are you from?\n", name);
  scanf("%29s", &location);
  printf("\nCool! I hear %s is nice this time of year!", location);
  return 0;
}
