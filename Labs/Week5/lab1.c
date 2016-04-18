// Write a program to determine if someone is eligible for senior discount. Prompt
// user to input their age. If aged 65 or over, they should see a message telling
// them they are eligible; if under 65, they should see a message telling them
// they are ineligible.

#include <stdio.h>

int main()
{
  int count;
  int age;
  printf("Please enter your age.\n");
  scanf("%d", &age);
  printf("You are %s for a senior discount!\n", (age > 65) ? "eligible":"not eligible");
  return 0;
}
